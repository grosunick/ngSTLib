#pragma once

#include <cstdint>
#include <array>

namespace ng
{
    class D5611
    {
        /**
         * templates for digits, bits to segments map
         *
         * 0 - a
         * 1 - b
         * 2 - c
         * 3 - d
         * 4 - e
         * 5 - f
         * 6 - g
         * 7 - h
         */
        constexpr static const uint8_t templates[] = {
            // digits
            0b00111111, // 0
            0b00000110, // 1
            0b01011011, // 2
            0b01001111, // 3
            0b01100110, // 4
            0b01101101, // 5
            0b01111101, // 6
            0b00000111, // 7
            0b01111111, // 8
            0b01101111, // 9
        };

        static char val;

    public:

        /**
         * set digit to indicator
         *
         * @param digit
         * @return
         */
        static int setDigit(const uint32_t digit) {
            if (digit > 9)
                return -1;

            val = static_cast<char>('0') + digit;

            return 0;
        }

        static uint8_t getDigitMask() {
            return templates[static_cast<uint8_t>(val) - static_cast<uint8_t>('0')];;
        }

        static uint32_t getPortVal() {
            uint32_t mask = getDigitMask();
            return mask;
        }
    };

    char D5611::val = '0';
}