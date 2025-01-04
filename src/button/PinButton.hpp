#pragma once

#include <cstdint>
#include <millis.hpp>
#include <gpio/Pin.hpp>
#include <button/Common.hpp>
#include <button/State.hpp>

namespace ng
{
    namespace button
    {
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
                        
                        btnState.wasPressedFlag = true;
                        btnState.isPressedCheckingMode = false;
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
                        btnState.wasPressedFlag = false;
                        btnState.wasClickedFlag = true;
                        btnState.clickCount++;
                    }
                }
            }
            
            static void buttonHoldProcessing() {
                if (btnState.wasPressedFlag) {
                    if (currentMillis - timer2 > HOLD_PERIOD && !btnState.wasHoldFlag) {
                        timer2 = currentMillis;
                        btnState.wasHoldFlag = true;
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
        
            __force_inline bool press() {
                return btnState.isPressed();
            }
        
            __force_inline bool click() {
                return btnState.click();
            }
        
            __force_inline bool doubleClick() {
                return btnState.doubleClick();
            }
        
            __force_inline bool hold() {
                return btnState.hold();
            }
        };

        #define BUTTON_TEMPLATE_PARAMS \
        template <typename Pin, InputPullUp type, uint8_t DEBOUNCE_TIME, uint16_t HOLD_PERIOD>
        
        #define BUTTON_PARAMS Pin, type, DEBOUNCE_TIME, HOLD_PERIOD
    
        BUTTON_TEMPLATE_PARAMS ButtonState PinButton<BUTTON_PARAMS>::btnState = ButtonState();
        BUTTON_TEMPLATE_PARAMS uint8_t PinButton<BUTTON_PARAMS>::isPressDebounceChecking = 0;


        BUTTON_TEMPLATE_PARAMS uint32_t PinButton<BUTTON_PARAMS>::timer1 = 0;
        BUTTON_TEMPLATE_PARAMS uint32_t PinButton<BUTTON_PARAMS>::timer2 = 0;
        BUTTON_TEMPLATE_PARAMS uint32_t PinButton<BUTTON_PARAMS>::currentMillis = 0;
    }
}