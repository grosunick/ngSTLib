#pragma once

#include <common/globals.hpp>
#include <tuple>
#include <cstdint>

struct TimerParams {
    uint16_t prescaler = 0;
    uint16_t period = 0;
};

/**
 * Calculate the prescaler value and the period of the timer for a given time in microseconds.
 * @param us period in microseconds
 * @return
 */
inline TimerParams getParamsByPeriod(uint32_t us) {
    uint32_t fTim = 1000000U / us;
    uint32_t fClkTofTim = SystemCoreClock / fTim;


    if (fClkTofTim < 1000) {
        return TimerParams{0, (uint16_t)(fClkTofTim - 1)};
    }

    return TimerParams{999, (uint16_t)(fClkTofTim / 1000 - 1)};
}

/**
 * Calculate the prescaler value and the period of the timer for a given timer frequency in Hz.
 * @param freq timer frequency in Hz
 * @param width PWM width
 * @return
 */
inline TimerParams getParamsByFrequency(uint32_t freq, uint16_t width = 50) {
    uint32_t fClkToFreq = SystemCoreClock / freq;

    return TimerParams{
        static_cast<uint16_t>((fClkToFreq / (width - 1)) + 1),
        static_cast<uint16_t>(width - 1)
    };
}