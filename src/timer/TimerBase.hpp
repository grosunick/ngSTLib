#pragma once

#include <cstdint>
#include <common/defines.h>

namespace ng
{
    enum class IRQSource {
        /**
         * – Counter overflow/underflow
         * – Setting the UG bit
         * – Update generation through the slave mode controller
         */
        AllEvents = 0,

        /** Only counter overflow/underflow generates an update interrupt or DMA request if enabled */
        CounterOverflow = 1,

    };

    template <typename TIM> class TimerBase
    {
    public:
        template<IRQSource source> __force_inline void setInterruptSource() {
            if constexpr (source == IRQSource::AllEvents) {
                TIM::CR1::URS::AllEvents::set();
            } else if constexpr (source == IRQSource::CounterOverflow) {
                TIM::CR1::URS::CounterOverflow::set();
            }
        }

        __force_inline void setPrescaler(uint16_t val) {
            TIM::PSC::PSCField::set(val);
        }

        __force_inline void setPeriod(uint16_t val) {
            TIM::ARR::ARRField::set(val);
        }

        __force_inline void setCounter(uint16_t val) {
            TIM::CNT::CNTField::set(val);
        }

        __force_inline void interruptEnable() {
            TIM::DIER::UIE::Enabled::set();
        }

        __force_inline void interruptDisable() {
            TIM::DIER::UIE::Disabled::set();
        }

        __force_inline void reInit() {
            TIM::EGR::UG::ReInit::set();
        }

        __force_inline void clearUpdateFlag() {
            TIM::SR::UIF::Cleared::set();
        }

        __force_inline void enableAutoReload() {
            TIM::CR1::ARPE::Buffered::set();
        }

        __force_inline void start() {
            TIM::CR1::CEN::Enable::set();
        }

        __force_inline void stop() {
            TIM::CR1::CEN::Disable::set();
        }

        __force_inline bool isOverflow() {
            return TIM::SR::UIF::Updated::isSet();
        }

        __force_inline void wait() {
            while (!isOverflow());
        }
    };
}