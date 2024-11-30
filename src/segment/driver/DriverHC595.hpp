#pragma once

#include <cstdint>
#include <millis.hpp>
#include <segment/SegmentUtils.hpp>

namespace ng
{
    template <typename ShiftReg, uint8_t size = 4, uint8_t delay = 15>
    class DriverHC595
    {
        using SR = ShiftReg;

    public:
        static constexpr uint8_t width = size;

        /**
         * Show symbol {val} into position {pos}
         *
         * @param val - symbol value
         * @param pos - symbol position: from 0 to {size} - 1
         */
        static inline bool write(char val, uint8_t pos) {
            uint8_t packet[2] = {
                /** invert the bits due to the indicator with a common anode */
                (uint8_t)(~SegmentUtils::getCharCode(val)),

                /**
                 * segment position is a bit number in the second byte
                 *
                 * position 0 -> 0b0001
                 * position 1 -> 0b0010
                 * position 2 -> 0b0100
                 * position 3 -> 0b1000
                 */
                (uint8_t)(1U << pos)
            };

            SR::sendCS(packet, 2);

            if (delay) delay_micros(delay);

            return true;
        }

        /**
         * Write {size} symbols to indicator
         * @param str - char array
         */
        static inline void write(const char (&str)[size + 1]) {
            for (uint8_t i = 0; i < size; i++) {
                // reverse digits
                write(str[size - i - 1], i);
            }
        }
    };
}