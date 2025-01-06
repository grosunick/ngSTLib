#pragma once

#include <cstdint>

namespace ng::button
{
    #pragma pack(push, 1)
    
    struct ButtonState {
        uint8_t isPressedCheckingMode: 1;
        uint8_t wasPressedFlag: 1;
        uint8_t wasClickedFlag: 1;
        uint8_t wasHoldFlag: 1;
        uint8_t clickCount: 3;
        uint8_t pinState: 1;
        
        ButtonState() {
            isPressedCheckingMode = 0;
            wasPressedFlag = 0;
            wasClickedFlag = 0;
            wasHoldFlag = 0;
            clickCount = 0;
            pinState = 0;
        };
        
        inline void hold() {
            wasHoldFlag = true;
        }
        
        inline void press() {
            wasPressedFlag = true;
            isPressedCheckingMode = false;
        }
        
        inline void click() {
            wasPressedFlag = false;
            wasClickedFlag = true;
            clickCount++;
        }
        
        inline bool isPressed() {
            return wasPressedFlag;
        }
        
        inline bool isClicked() {
            auto tmp = wasClickedFlag;
            if (wasClickedFlag) {
                wasClickedFlag = 0;
            }
            return tmp;
        }
        
        inline bool isDoubleClicked() {
            auto tmp = clickCount >= 2;
            if (tmp) {
                clickCount = 0;
            }
            return tmp;
        }
        
        inline bool isHeld() {
            auto tmp = wasHoldFlag;
            if (wasHoldFlag) {
                wasHoldFlag = 0;
            }
            return tmp;
        }
    };
    
    #pragma pack(pop)
}
