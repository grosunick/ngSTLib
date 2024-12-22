#pragma once

#include <common/globals.hpp>
#include <tuple>
#include <cstdint>

struct TimerParams {
    uint16_t prescaler = 0;
    uint16_t period = 0;
};

TimerParams getParamsByPeriod(uint32_t us) {
    // calculate the prescaler value and the period of the timer for a given time in microseconds.
    uint32_t fTim = 1000000U / us;
    uint32_t fClkTofTim = SystemCoreClock / fTim;


    if (fClkTofTim < 1000) {
        return TimerParams{0, (uint16_t)(fClkTofTim - 1)};
    }

    return TimerParams{999, (uint16_t)(fClkTofTim / 1000 - 1)};
}