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
    
    template<typename Pin, InputPullUp type = InputPullUp::Up, uint8_t WAIT_PERIOD = 5U, uint16_t HOLD_PERIOD = 2000U>
    class PinButton {
        static uint32_t currentMillis;
        static uint32_t timer2;
        static uint32_t timer1;
        
        static uint8_t isPressDebounceChecking;
        static ButtonState btnState;
    public:
        __force_inline bool isPressedState() {
            auto pressedState = type == InputPullUp::Up? false: true;
            return (Pin::get() == pressedState);
        }
    
        __force_inline void debouncePressProcessing() {
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
    
        __force_inline void buttonPressProcessing() {
            if (btnState.isPressedCheckingMode) {
                if (btnState.pinState && currentMillis - timer1 > WAIT_PERIOD * 5) {
                    timer1 = currentMillis;
                    timer2 = currentMillis;
                    
                    btnState.press();
                }
            }
        }
    
        __force_inline void buttonPressFlapProcessing() {
            if (btnState.isPressedCheckingMode) {
                if (currentMillis - timer2 > 5 * WAIT_PERIOD + 1) {
                    timer2 = currentMillis;
                    btnState.isPressedCheckingMode = false;
                }
            }
        }
    
        __force_inline void buttonReleaseProcessing() {
            if (btnState.wasPressedFlag) {
                if (!btnState.pinState && currentMillis - timer1 > WAIT_PERIOD * 5) {
                    btnState.click();
                }
            }
        }
    
        __force_inline void buttonHoldProcessing() {
            if (btnState.wasPressedFlag) {
                if (currentMillis - timer2 > HOLD_PERIOD && !btnState.wasHoldFlag) {
                    timer2 = currentMillis;
                    btnState.hold();
                }
            }
        }
    
        __force_inline void tick() {
            currentMillis = time::millis();
            btnState.pinState = isPressedState();
            
            debouncePressProcessing();
            buttonPressProcessing();
            buttonPressFlapProcessing();
            buttonReleaseProcessing();
            buttonHoldProcessing();
        }
    
        __force_inline void run() {
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