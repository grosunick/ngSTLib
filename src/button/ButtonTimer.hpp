#pragma once

#include <timer/Timer.hpp>

namespace ng::button
{
    template<typename Tim, typename Notifier> class ButtonTimer {
    public:
        using TIM = timer::Timer<Tim, Notifier>;

        /**
         * Initialize the timer to work in interrupt mode
         *
         * @param us the number of microseconds after which the interrupt should be triggered
         */
        __force_inline void initByPeriod(uint32_t us) {
            TIM::initByPeriod(us);
        }
    
        __force_inline void callback() {
            Notifier::callback();
            TIM::callback();
        }
    };
}
