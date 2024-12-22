#pragma once

#include <cstdint>
#include <common/globals.hpp>
#include <common/Observer.hpp>
#include "TimerBase.hpp"
#include "Utils.hpp"

namespace ng
{
    template <typename Notifier, typename TIM>
    class UpdateTimer {
    public:
        __force_inline void wait(uint32_t us) {
            auto [prescaler, period] = getParamsByPeriod(us);

            TIM::setPrescaler(prescaler);
            TIM::setPeriod(period);
            TIM::setCounter(0);

            TIM::enableAutoReload();
            TIM::template setInterruptSource<IRQSource::CounterOverflow>();

            TIM::start();
            TIM::wait();
            TIM::clearUpdateFlag();
            TIM::stop();

            Notifier::notify();
        }
        __force_inline void initByPeriod(uint32_t us) {
            auto [prescaler, period] = getParamsByPeriod(us);

            TIM::setPrescaler(prescaler);
            TIM::setPeriod(period);

            TIM::enableAutoReload();
            TIM::template setInterruptSource<IRQSource::CounterOverflow>();
            TIM::interruptEnable();
            TIM::reInit();

            TIM::start();
        }

        __force_inline void callback() {
            TIM::clearUpdateFlag();
            Notifier::notify();
        }
    };
}