#pragma once

#include <cstdint>

namespace ng
{
    namespace time
    {
        const uint32_t MILLIS_IN_SECOND = 1000Ul;

        namespace {
            uint32_t milliseconds = 0; // milliseconds from app start
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
        uint16_t limit =  (val * (SystemCoreClock / 1000000)) / 16;
#else
        uint16_t limit = val * 4;
#endif
        for (uint16_t i = 0; i < limit; i++) {
            asm volatile("nop \n");
        }
    }

#ifndef TEST_MODE
    template <uint32_t TIM>
    static inline void delay_micros(uint16_t val) {
        auto timer = reinterpret_cast<TIM_TypeDef*>(TIM);

        timer->SMCR = timer->SMCR & ~TIM_SMCR_SMS; // setup internal clock source
        timer->CR1 = timer->CR1 & ~TIM_CR1_DIR; // counter mode: UP
        timer->CR1 = timer->CR1 & ~TIM_CR1_UDIS; // enable reloading

        timer->PSC = SystemCoreClock / 1000000 - 1; // 1 microsecond per timer tick
        timer->CNT = 0; // init counter;

        timer->CR1 = timer->CR1 | TIM_CR1_CEN; // enable counter
        while (timer->CNT < val); // wait
        timer->CR1 = timer->CR1 & ~TIM_CR1_CEN; // enable counter
    }
#endif
}