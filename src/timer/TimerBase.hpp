#pragma once

#include <cstdint>
#include <common/defines.h>

template <typename TIM, uint16_t period = 0, uint16_t prescaler = 0>
class TimerBase
{
public:
    __force_inline void setPrescaler(uint16_t val) {
        TIM::PSC::PSCField::set(val);
    }

    __force_inline void setPeriod(uint16_t val) {
        TIM::ARR::ARRField::set(val);
    }

    __force_inline void setCounter(uint16_t val) {
        TIM::CNT::CNTField::set(val);
    }

    __force_inline void clearUpdateFlag() {
        TIM::SR::UIF::IsCleared::set();
    }

    __force_inline void enableReload() {
        TIM::CR1::ARPE::Enabled::set();
    }

    __force_inline void start() {
        TIM::CR1::CEN::Enable::set();
    }

    __force_inline void stop() {
        clearUpdateFlag();
        TIM::CR1::CEN::Disable::set();
    }

    __force_inline bool isOverflow() {
        return TIM::SR::UIF::Updated::isSet();
    }

    __force_inline void wait() {
        while (!isOverflow());
    }

    __force_inline void excecute() {
        setCounter(0);
        start();
        wait();
        stop();
    }

};
