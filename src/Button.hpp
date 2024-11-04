#pragma once

#include <cstdint>
#include "millis.hpp"
#include "gpio/Pin.hpp"

using namespace ng::time;

namespace ng
{
    enum BtnType {
        PULL_UP,
        PULL_DOWN
    };

    #pragma pack(push,1)
    struct btnState {
        uint8_t isPressState: 1;
        uint8_t isPressedCheckingMode: 1;
        uint8_t isPressDebounceChecking: 1;
        uint8_t isPressed: 1;
        uint8_t wasClickedFlag: 1;
        uint8_t wasHoldFlag: 1;
        uint8_t clickCount: 2;

        btnState() {
            isPressedCheckingMode = 0;
            isPressDebounceChecking = 0;
            isPressed = 0;
            wasClickedFlag = 0;
            wasHoldFlag = 0;
            clickCount = 0;
            isPressState = 0;
        };
    };
    #pragma pack(pop)

    template <
        uint32_t PORT, uint8_t pinNum, BtnType type = PULL_UP,
        uint8_t WAIT_PERIOD = 5U,
        uint16_t HOLD_PERIOD = 2000U
    >
    class Button
    {
        using ButtonPin = Pin<PORT, pinNum, Read>;

#ifdef NG_BUTTON_DEBOUNCE
        static uint32_t timer1;
#endif
        static uint32_t timer2;
        static uint32_t currentMillis;

        static btnState state;
    public:
        static bool isPressedState() {
            auto pressedState = type == PULL_UP ? false : true;
            return (ButtonPin::get() == pressedState);
        }

        // button press debounce processing
        static void debouncePressProcessing() {
            if (state.isPressState && !state.isPressedCheckingMode && !state.isPressed) {
#ifdef NG_BUTTON_DEBOUNCE
                if (!state.isPressDebounceChecking) {
                    state.isPressDebounceChecking = true;
                    timer1 = currentMillis;
                }

                if (state.isPressDebounceChecking && currentMillis - timer1 > WAIT_PERIOD) {
                    state.isPressedCheckingMode = true;
                    state.isPressDebounceChecking = false;
                    timer2 = currentMillis;
                    timer1 = currentMillis;
                }
#else
                state.isPressedCheckingMode = true;
                state.isPressDebounceChecking = false;
                timer2 = currentMillis;
#endif
            }
        }

        // button press flap processing
        static void buttonPressFlapProcessing() {
#ifdef NG_BUTTON_DEBOUNCE
            if(state.isPressedCheckingMode) {
                if (currentMillis - timer2 > 5 * WAIT_PERIOD + 1) {
                    timer2 = currentMillis;
                    state.isPressedCheckingMode = false;
                }
            }
#endif
        }

        // button press processing
        static void buttonPressProcessing() {
            if(state.isPressedCheckingMode) {
#ifdef NG_BUTTON_DEBOUNCE
                if (!state.isPressState) {
                    timer1 = currentMillis;
                } else if (currentMillis - timer1 > WAIT_PERIOD * 5) {
                    timer1 = currentMillis;
                    timer2 = currentMillis;

                    state.isPressed = true;
                    state.isPressedCheckingMode = false;
                }
#else
                if (state.isPressState) {
                    state.isPressed = true;
                    state.isPressedCheckingMode = false;
                }
#endif
            }
        }

        static void buttonReleaseProcessing() {
            if (state.isPressed) {
#ifdef NG_BUTTON_DEBOUNCE
                if (state.isPressState) {
                    timer1 = currentMillis;
                } else if (currentMillis - timer1 > WAIT_PERIOD * 5) {
                    timer1 = currentMillis;

                    state.isPressed = false;
                    state.wasClickedFlag = true;
                    state.clickCount++;
                }
#else
                if (!state.isPressState) {
                    state.isPressed = false;
                    state.wasClickedFlag = true;
                    state.clickCount++;
                }
#endif
            }
        }

        // button hold processing
        static void buttonHoldProcessing() {
            if (state.isPressed) {
                if (currentMillis - timer2 > HOLD_PERIOD && !state.wasHoldFlag) {
                    timer2 = currentMillis;
                    state.wasHoldFlag = true;
                }
            }
        }

        static void tick() {
            currentMillis = millis();
            state.isPressState = isPressedState();

            debouncePressProcessing();
            buttonPressProcessing();
            buttonPressFlapProcessing();
            buttonReleaseProcessing();
            buttonHoldProcessing();
        }

        static void run() {
            tick();
        }

        static bool press() {
            return state.isPressed;
        }

        static bool click() {
            auto tmp = state.wasClickedFlag;
            if (state.wasClickedFlag) {
                state.wasClickedFlag = 0;
            }

            return tmp;
        }

        static bool doubleClick() {
            auto tmp = state.clickCount >= 2;
            if (tmp) {
                state.clickCount = 0;
            }

            return tmp;
        }

        static bool hold() {
            auto tmp = state.wasHoldFlag;
            if (state.wasHoldFlag) {
                state.wasHoldFlag = 0;
            }

            return tmp;
        }
    };

    #define BUTTON_TEMPLATE_PARAMS template \
        <uint32_t PORT, uint8_t pinNum, BtnType type, uint8_t DEBOUNCE_TIME, uint16_t HOLD_PERIOD>
    #define BUTTON_PARAMS PORT, pinNum, type, DEBOUNCE_TIME, HOLD_PERIOD

    BUTTON_TEMPLATE_PARAMS
    btnState Button<BUTTON_PARAMS>::state = btnState();

#ifdef NG_BUTTON_DEBOUNCE
    BUTTON_TEMPLATE_PARAMS
    uint32_t Button<BUTTON_PARAMS>::timer1 = 0;
#endif

    BUTTON_TEMPLATE_PARAMS
    uint32_t Button<BUTTON_PARAMS>::timer2 = 0;

    BUTTON_TEMPLATE_PARAMS
    uint32_t Button<BUTTON_PARAMS>::currentMillis = 0;
}