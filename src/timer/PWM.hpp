#pragma once

#include <gpio/Pin.hpp>
#include "TimGeneral.hpp"
#include "Utils.hpp"

namespace ng {
    template <typename T, TimChannel channel, typename Pin> class PWM
    {
    public:
        using TIM = TimGeneral<T>;

        /**
         * Init PWM output mode for {Pin}
         *
         * @param freq PWM frequency
         * @param width number of PWM values per period
         * @param filling PWM filling in percent
         * @return
         */
        template <AlternateFn fn> __force_inline void init(uint32_t freq, uint16_t filling = 50, uint16_t width = 100) {
            auto [prescaler, period] = getParamsByFrequency(freq, width);

            TIM::setPrescaler(prescaler);
            TIM::setPeriod(period);
            TIM::template setCCR<channel>(filling);

            TIM::enableAutoReload();
            TIM::template setOutputCompareMode<OutputСompareMode::PWM1, channel>();
            TIM::template setOutputComparePreload<true, channel>();
            TIM::template enableOutputCompare<channel>();

            // init pin alternate function
            Pin::template setOutputAlternate<fn, OutputType::PushPull, OutputSpeed::High>();

            TIM::reInit();
            TIM::start();
        }
        
        __force_inline void setFilling(uint16_t filling = 50) {
            TIM::template setCCR<channel>(filling);
        }
    };
}