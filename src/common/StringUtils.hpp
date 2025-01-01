#pragma once

#include <cstdint>

namespace ng
{
    class StringUtils
    {
    public:
        template<typename T> static inline char* itoaAlgo(T num, char* str, uint8_t len) {
            str += len;

            if (len <= 0)
                return str;

            *--str = 0;
            do {
                *--str = num % 10 + '0';
                num /= 10;
            } while (num != 0 && --len > 0);

            return str;
        }

        template<typename T> static inline void itoa(T num, char* str, uint8_t len) {
            char* strBeginPointer = str;
            bool sign = num < 0;
            num = abs(num);

            str = itoaAlgo(num, str, len);

            if (sign && strBeginPointer <= str) {
                *--str = '-';
            }

            while (strBeginPointer <= str) {
                *--str = ' ';
            }
        }
    };
}


