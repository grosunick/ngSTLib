#pragma once

#include <cstdint>
#include <algorithm>
#include "millis.hpp"
#include "Button.hpp"

namespace ng
{
    #pragma pack(push,1)
    struct EncoderState {
        uint8_t prev: 2;
        uint8_t cur: 2;
        uint8_t debounceCheck:1;
        uint8_t isChanged: 1;
        uint8_t full: 4;
        uint8_t forward: 1;
        uint8_t backward: 1;

        EncoderState() {
            prev = 0;
            cur = 0;
            full = 0;
            debounceCheck = 0;
            forward = 0;
            backward = 0;
        };
    };
    #pragma pack(pop)

    template <typename PinA, typename PinB, BtnType type = PULL_UP, uint8_t WAIT_CNT = 3U>
    class Encoder
    {
        static EncoderState encoderState;

#ifdef NG_ENC_DEBOUNCE
        static uint32_t timer;
        static uint32_t curMillis;
#endif
    public:
        static uint8_t readPins() {
            auto onState = type == PULL_UP ? false : true;
            return ((PinB::get() == onState) << 1) | (PinA::get() == onState);
        }

        static void init() {
            encoderState.prev = readPins();
            encoderState.cur = encoderState.prev;
        }

        static void tick() {
            encoderState.cur = readPins();

#ifdef NG_ENC_DEBOUNCE
            curMillis = millis();

            if (encoderState.cur != encoderState.prev && !encoderState.debounceCheck && !encoderState.isChanged) {
                encoderState.debounceCheck = 1;
                timer = curMillis;
            }

            if (encoderState.debounceCheck && !encoderState.isChanged) {
                if (encoderState.cur == encoderState.prev) {
                    timer = curMillis;
                } else if (curMillis - timer >= 1 * WAIT_CNT) {
                    encoderState.isChanged = 1;
                    timer = curMillis;
                }

                // false positive
                if (curMillis - timer > WAIT_CNT * 1 + 1) {
                    encoderState.debounceCheck = 0;
                }
            }
#else
            encoderState.isChanged = 1;
#endif

            if (encoderState.isChanged) {
                encoderState.full = encoderState.cur | (encoderState.prev << 2);
                encoderState.prev = encoderState.cur;

                encoderState.debounceCheck = 0;
                encoderState.isChanged = 0;

                if (encoderState.cur != 0b11) return;  // skip 00, 01, 10

                switch(encoderState.full) {
                    case 0x2: case 0x4: case 0xB: case 0xD: // clockwise
                        encoderState.forward = 1;
                        break;
                    case 0x1: case 0x7: case 0x8: case 0xE: // counterclockwise
                        encoderState.backward = 1;
                        break;
                }
            }
        }

        static bool isForward() {
            bool tmp = encoderState.forward;
            encoderState.forward = 0;

            return tmp;
        }

        static bool isBackward() {
            bool tmp = encoderState.backward;
            encoderState.backward = 0;

            return tmp;
        }
    };

    template <typename PinA, typename PinB, BtnType type, uint8_t WAIT_CNT>
    EncoderState Encoder<PinA, PinB, type, WAIT_CNT>::encoderState = EncoderState();

#ifdef NG_ENC_DEBOUNCE
    template <typename PinA, typename PinB, BtnType type, uint8_t WAIT_CNT>
    uint32_t Encoder<PinA, PinB, type, WAIT_CNT>::timer = 0;

    template <typename PinA, typename PinB, BtnType type, uint8_t WAIT_CNT>
    uint32_t Encoder<PinA, PinB, type, WAIT_CNT>::curMillis = 0;
#endif
}
