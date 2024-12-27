#pragma once

#include <common/globals.hpp>
#include <tuple>
#include <cstdint>

namespace ng
{
    namespace timer
    {
        struct TimerParams {
            uint16_t prescaler = 0;
            uint16_t period = 0;
            
            bool isOk() {
                return (prescaler > 0 || period > 0);
            }
        };
        
        /**
         * Calculate the prescaler value and the period of the timer for a given time in microseconds.
         * @param us period in microseconds
         * @return
         */
        inline TimerParams getParamsByPeriod(uint32_t us) {
            constexpr uint32_t fUs = 1000000U;
    
            /**
             * In calculations, we use the formula Frequency = CoreClock / ((PSC + 1) * (ARR + 1)).
             * This means that (PSC + 1) * (ARR + 1) = CoreClock / Frequency.
             *
             * If CoreClock / Frequency > 1000, then assume that PSC = 999,
             * thеn ARR = (CoreClock / Frequency) / (PSC + 1) - 1
             *
             * Else assume that PSC = 0 and (CoreClock / Frequency) - 1
             */
            
            uint32_t fTim = fUs / us;
            uint32_t fClkTofTim = SystemCoreClock / fTim;

            if (fClkTofTim > 0) {
                if (fClkTofTim < 1000) {
                    return TimerParams{0, (uint16_t)(fClkTofTim - 1)};
                }
    
                return TimerParams{999, (uint16_t)(fClkTofTim / 1000 - 1)};
            }
    
            return TimerParams{0, 0};
        }
        
        /**
         * Calculate the prescaler value and the period of the timer for a given timer frequency in Hz.
         * @param freq timer frequency in Hz
         * @param width PWM width
         * @return
         */
        inline TimerParams getParamsByFrequency(uint32_t freq, uint16_t width = 50) {
            uint32_t fClkToFreq = SystemCoreClock / freq;
    
            /**
             * In calculations, we use the formula Frequency = CoreClock / ((PSC + 1) * (ARR + 1)).
             * This means that (PSC + 1) * (ARR + 1) = CoreClock / Frequency.
             *
             * Assume that PWM width = (ARR + 1), then PSC = (CoreClock / Frequency) / ((PWM width)) - 1
             */
            
            if (fClkToFreq > 0 && (fClkToFreq / (width - 1)) > 0) {
                return TimerParams{
                    static_cast<uint16_t>((fClkToFreq / (width)) - 1),
                    static_cast<uint16_t>(width - 1)
                };
            }
    
            return TimerParams {0, 0};
        }
    }
}