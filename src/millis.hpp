#pragma once

#include <cstdint>
#include <common/defines.h>

extern uint32_t SystemCoreClock; /*!< System Clock Frequency (Core Clock) */

namespace ng
{
    namespace time
    {
        constexpr uint32_t MILLIS_IN_SECOND = 1000Ul;

        uint32_t milliseconds = 0; // milliseconds from app start
        namespace {
            uint32_t sec = 0; // seconds from app start
        }

        /** for test purposes only */
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

            millis++; milliseconds++;

            // correct the possible overflow when milliseconds > 4294967000
            if (UINT32_MAX - milliseconds <= 296) {
                milliseconds = 0;
            }

            if (millis >= MILLIS_IN_SECOND) {
                millis = 0;
                sec++;
            }
        }
    }

    static inline void delay_micros(uint16_t val) {
#ifndef TEST_MODE
        uint16_t limit =  (val * (SystemCoreClock / 1000000));
#else
        uint16_t limit = val * 4;
#endif
        for (uint16_t i = 0; i < limit; i++) {
            asm volatile("nop \n");
        }
    }

    template <typename TIM> __force_inline void delay_micros(uint32_t us) {
        uint16_t prescaler = 0;
        uint16_t period = 0;

        uint32_t fTim = 1000000U / us;

        // calculate the prescaler value and the period of the timer for a given time in microseconds.
        uint32_t fClkTofTim = SystemCoreClock / fTim;
        if (fClkTofTim < 1000) {
            period = fClkTofTim - 1;
        } else {
            prescaler = 999;
            period = fClkTofTim / (prescaler + 1) - 1;
        }

        TIM::enableReload();
        TIM::setPrescaler(prescaler);
        TIM::setPeriod(period);
        TIM::excecute();
    }
}

extern uint32_t ng::time::milliseconds;