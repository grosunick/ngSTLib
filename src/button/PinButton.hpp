#pragma once

#include <cstdint>
#include <millis.hpp>
#include <gpio/Pin.hpp>
#include <button/Common.hpp>
#include <button/State.hpp>

namespace ng::button
{
#define TPinButtonParams \
            template <typename Pin, InputPullUp type, uint8_t DEBOUNCE_TIME, uint16_t HOLD_PERIOD>

#define TPinButton Pin, type, DEBOUNCE_TIME, HOLD_PERIOD
    
    template<
        typename Pin, InputPullUp type = InputPullUp::Up,
        uint8_t WAIT_PERIOD = 5U, uint16_t HOLD_PERIOD = 2000U
    >
    class PinButton {
        static uint32_t currentMillis;
        static uint32_t timer2;
        static uint32_t timer1;
        
        static uint8_t isPressDebounceChecking;
        static ButtonState btnState;
    public:
        static bool isPressedState() {
            auto pressedState = type == InputPullUp::Up? false: true;
            return (Pin::get() == pressedState);
        }
        
        static void debouncePressProcessing() {
            if (btnState.pinState && !btnState.isPressedCheckingMode && !btnState.wasPressedFlag) {
                if (!isPressDebounceChecking) {
                    isPressDebounceChecking = true;
                    timer1 = currentMillis;
                }
                
                if (isPressDebounceChecking && currentMillis - timer1 > WAIT_PERIOD) {
                    btnState.isPressedCheckingMode = true;
                    isPressDebounceChecking = false;
                    timer2 = currentMillis;
                    timer1 = currentMillis;
                }
            }
        }
        
        static void buttonPressProcessing() {
            if (btnState.isPressedCheckingMode) {
                if (btnState.pinState && currentMillis - timer1 > WAIT_PERIOD * 5) {
                    timer1 = currentMillis;
                    timer2 = currentMillis;
                    
                    btnState.press();
                }
            }
        }
        
        static void buttonPressFlapProcessing() {
            if (btnState.isPressedCheckingMode) {
                if (currentMillis - timer2 > 5 * WAIT_PERIOD + 1) {
                    timer2 = currentMillis;
                    btnState.isPressedCheckingMode = false;
                }
            }
        }
        
        static void buttonReleaseProcessing() {
            if (btnState.wasPressedFlag) {
                if (!btnState.pinState && currentMillis - timer1 > WAIT_PERIOD * 5) {
                    btnState.click();
                }
            }
        }
        
        static void buttonHoldProcessing() {
            if (btnState.wasPressedFlag) {
                if (currentMillis - timer2 > HOLD_PERIOD && !btnState.wasHoldFlag) {
                    timer2 = currentMillis;
                    btnState.hold();
                }
            }
        }
        
        static void tick() {
            currentMillis = time::millis();
            btnState.pinState = isPressedState();
            
            debouncePressProcessing();
            buttonPressProcessing();
            buttonPressFlapProcessing();
            buttonReleaseProcessing();
            buttonHoldProcessing();
        }
        
        static void run() {
            tick();
        }
        
        __force_inline bool isPressed() {
            return btnState.isPressed();
        }
        
        __force_inline bool isClicked() {
            return btnState.isClicked();
        }
        
        __force_inline bool isDoubleClicked() {
            return btnState.isDoubleClicked();
        }
        
        __force_inline bool isHeld() {
            return btnState.isHeld();
        }
    };
    
    TPinButtonParams ButtonState PinButton<TPinButton>::btnState = ButtonState();
    TPinButtonParams uint8_t PinButton<TPinButton>::isPressDebounceChecking = 0;
    
    TPinButtonParams uint32_t PinButton<TPinButton>::timer1 = 0;
    TPinButtonParams uint32_t PinButton<TPinButton>::timer2 = 0;
    TPinButtonParams uint32_t PinButton<TPinButton>::currentMillis = 0;
}