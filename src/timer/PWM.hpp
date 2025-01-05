#pragma once

#include <gpio/Pin.hpp>
#include "TimGeneral.hpp"
#include "Utils.hpp"

namespace ng::timer
{
    template<typename T, TimChannel channel, typename Pin> class PWM {
    public:
        using TIM = TimGeneral<T, channel>;
        
        /**
         * Init PWM output mode for {Pin}
         *
         * @param freq PWM frequency
         * @param width number of PWM values per period
         * @param filling PWM filling in percent
         * @return
         */
        __force_inline void init(uint32_t freq, uint16_t filling = 50, uint16_t width = 100) {
            auto params = getParamsByFrequency(freq, width);
            
            if (!params.isOk()) {
                return;
            }
            
            TIM::setPrescaler(params.prescaler);
            TIM::setPeriod(params.period);
            TIM::setCCR(filling);
            
            TIM::enableAutoReload();
            TIM::template setOutputCompareMode<OutCaptCmpMode::PWM1>();
            TIM::template setOutputComparePreload<true>();
            TIM::enableCaptureCompare();
            
            // init pin alternate function
            Pin::template setAlternate<OutputType::PushPull, InputPullUp::No, OutputSpeed::High>();
            
            TIM::reInit();
            TIM::start();
        }
        
        __force_inline void setFilling(uint16_t filling = 50) {
            TIM::setCCR(filling);
        }
    };
}