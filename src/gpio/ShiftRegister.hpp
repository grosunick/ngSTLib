#pragma once

#include <cstdint>
#include <array>
#include <millis.hpp>
#include <gpio/Pin.hpp>

namespace ng
{
    const uint8_t MSBFIRST = 0b01;
    const uint8_t LSBFIRST = 0b10;

    template <
            uint32_t PORT1, uint8_t CS, uint32_t PORT2, uint8_t Clk, uint32_t PORT3, uint8_t Data,
            uint8_t order = MSBFIRST, uint8_t delay = 15
    >
    class ShiftRegister
    {
        using CsPin = Pin<PORT1, CS, Write>;
        using ClkPin = Pin<PORT2, Clk, Write>;
        using DataPin = Pin<PORT3, Data, Write>;

    public:
        static inline void clk() {
            ClkPin::set();
            if (delay) delay_micros(delay);
            ClkPin::reset();
        }

        static inline void shiftLSB(uint8_t val) {
            for (uint8_t i = 0; i < 8; i++) {
                DataPin::write(val & 1);
                val >>= 1;

                clk();
            }
        }

        static inline void shiftMSB(uint8_t val) {
            for (uint8_t i = 0; i < 8; i++) {
                DataPin::write(val & (1 << 7));
                val <<= 1;

                clk();
            }
        }

        static void sendByte(uint8_t val) {
            if (order == MSBFIRST) {
                shiftMSB(val);
            } else {
                shiftLSB(val);
            }
        }

        static void send(const uint8_t* data, uint8_t len) {
            for(uint8_t i = 0; i < len; i++) {
                sendByte(data[i]);
                DataPin::reset();
            }
        }

        static void sendCS(const uint8_t* data, uint8_t len) {
            CsPin::set();
            send(data, len);
            CsPin::reset();
        }
    };
}
