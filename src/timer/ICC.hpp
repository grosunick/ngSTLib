#pragma once

#include <gpio/Pin.hpp>
#include <timer/TimGeneral.hpp>
#include <timer/Utils.hpp>

namespace ng
{
    namespace timer
    {
        /**
         * Input capture compare
         *
         * @tparam T timer class
         * @tparam channel
         * @tparam Pin
         */
        template <typename T, TimChannel channel,  typename Pin> class ICC
        {
        public:
            using TIM = TimGeneral<T, channel>;
    
            /**
             * Initialize the timer to work in interrupt mode
             *
             * @param us the number of microseconds after which the interrupt should be triggered
             */
             template <InputPullUp pullUp = InputPullUp::No> __force_inline void init(uint32_t us) {
                auto params = getParamsByPeriod(us);
            
                if (!params.isOk()) {
                    return;
                }
            
                TIM::setPrescaler(params.prescaler);
                TIM::setPeriod(params.period);
            
                TIM::enableAutoReload();
                TIM::template setInputCompareMode<InpCaptCmpSelection::InputTI1>();
                TIM::template setInputCompareFilter<InpCaptCmpFilter::CKintDiv32N8>();
                
                if (pullUp == InputPullUp::Up || pullUp == InputPullUp::No) {
                    TIM::template setInputPolarity<InpCaptCmpPolarity::Falling>();
                } else {
                    TIM::template setInputPolarity<InpCaptCmpPolarity::Rising>();
                }
    
                TIM::enableCaptureCompare();
                
                // init pin alternate function
                Pin::template setAlternate<OutputType::PushPull, pullUp>();
    
                TIM::captCmpInterruptEnable();
                TIM::reInit();
                TIM::start();
            }
    
            __force_inline uint16_t getCCR() {
                return TIM::getCCR();
            }
            
            bool __force_inline isEventTriggered() {
                return TIM::isCaptureEventTriggered();
            }
            
            void __force_inline clearEventFlag() {
                TIM::clearEventFlag();
            }
        };
    }
}