#pragma once

#include <cstdint>
#include <common/defines.h>
#include <common/globals.hpp>

namespace ng::time
{
    constexpr uint32_t MILLIS_IN_SECOND = 1000Ul;
    
    __attribute__((always_inline)) static inline void setMillis(uint32_t mls) {
        milliseconds = mls;
    }
    
    /**
     * Return milliseconds from system start. The max value is 2^32 milliseconds
     * or approximately 50 days.
     */
    static uint32_t millis() {
        return milliseconds;
    }
    
    /**
     * Return seconds from system start
     */
    __attribute__((always_inline)) static inline uint32_t seconds() {
        return sec;
    }
    
    __attribute__((always_inline)) static inline void tick() {
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
    
    __attribute__((always_inline)) static inline void delayUs(uint16_t val) {
#ifdef TEST_MODE
        uint32_t SystemCoreClock = 1000000;
#endif

#ifdef DEBUG
        uint16_t limit =  (val * (SystemCoreClock / 1000000));
#else
        uint16_t limit = (val * 3 * (SystemCoreClock / 1000000));
#endif
        for (uint16_t i = 0; i < limit; i++) {
            asm volatile("nop \n");
        }
    }
    
    __attribute__((always_inline)) static inline void delayMs(uint16_t val) {
        auto tick = millis();
        while (millis() - tick < val);
    }
}