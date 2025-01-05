#pragma once

#include <cstdint>
#include <common/globals.hpp>
#include <common/Observer.hpp>

#include <timer/TimGeneral.hpp>
#include <timer/PWM.hpp>
#include <timer/ICC.hpp>

namespace ng::timer
{
    template<typename Tim, typename Notifier> class Timer {
    public:
        __force_inline void wait(uint32_t us) {
            using namespace ng::timer;
            
            using TIM = timer::TimBase<Tim>;
            
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
        
        /**
         * Initialize the timer to work in interrupt mode
         *
         * @param us the number of microseconds after which the interrupt should be triggered
         */
        __force_inline void initByPeriod(uint32_t us) {
            using namespace ng::timer;
            
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
            using TIM = timer::TimBase<Tim>;
            
            TIM::clearUpdateFlag();
            Notifier::notify();
        }
    };
}