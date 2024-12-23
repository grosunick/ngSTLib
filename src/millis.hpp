#pragma once

#include <cstdint>
#include <common/defines.h>
#include <common/globals.hpp>

namespace ng
{
    namespace time
    {
        constexpr uint32_t MILLIS_IN_SECOND = 1000Ul;

        static inline void setMillis(uint32_t mls) {
            milliseconds = mls;
        }

        /**
         * Return milliseconds from system start. The max value is 2^32 milliseconds
         * or approximately 50 days.
         */
        static inline uint32_t millis() {
            return milliseconds;
        }

        /**
         * Return seconds from system start
         */
        static inline uint32_t seconds() {
            return sec;
        }

        static inline void tick() {
            static uint16_t millis = 0;

            millis++;
            milliseconds = milliseconds + 1;

            // correct the possible overflow when milliseconds > 4294967000
            if (UINT32_MAX - milliseconds <= 296) {
                milliseconds = 0;
            }

            if (millis >= MILLIS_IN_SECOND) {
                millis = 0;
                sec = sec + 1;
            }
        }
    }

    static inline void delay_micros(uint16_t val) {
#ifdef TEST_MODE
        uint32_t SystemCoreClock = 1000000;
#endif

        uint16_t limit =  (val * (SystemCoreClock / 1000000));

        for (uint16_t i = 0; i < limit; i++) {
            asm volatile("nop \n");
        }
    }
}