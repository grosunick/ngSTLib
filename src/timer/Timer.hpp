#pragma once

#include <cstdint>
#include <common/globals.hpp>
#include <common/Observer.hpp>
#include "TimBase.hpp"
#include "Utils.hpp"

using namespace ng::timer;

namespace ng
{
    template <typename Tim, typename Notifier> class Timer
    {
    public:
        __force_inline void wait(uint32_t us) {
            using TIM = TimBase<Tim>;
            
            auto params = getParamsByPeriod(us);
            if (!params.isOk()) {
                return;
            }
            
            TIM::setPrescaler(params.prescaler);
            TIM::setPeriod(params.period);
            TIM::setCounter(0);

            TIM::enableAutoReload();
            TIM::template setInterruptSource<IRQSource::CounterOverflow>();

            TIM::reInit();
            TIM::start();
            TIM::wait();
            TIM::clearUpdateFlag();
            TIM::stop();

            Notifier::notify();
        }
        
        __force_inline void initByPeriod(uint32_t us) {
            using TIM = TimBase<Tim>;

            auto params = getParamsByPeriod(us);
            if (!params.isOk()) {
                return;
            }
            
            TIM::setPrescaler(params.prescaler);
            TIM::setPeriod(params.period);

            TIM::enableAutoReload();
            TIM::template setInterruptSource<IRQSource::CounterOverflow>();
            TIM::enableInterrupt();
            TIM::reInit();

            TIM::start();
        }

        __force_inline void callback() {
            using TIM = TimBase<Tim>;

            TIM::clearUpdateFlag();
            Notifier::notify();
        }
    };





}