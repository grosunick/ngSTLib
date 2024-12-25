#pragma once

#include <cstdint>
#include "TimBase.hpp"


namespace ng
{
    enum class TimChannel {
        ch1 = 1,
        ch2 = 2,
        ch3 = 3,
        ch4 = 4
    };

    enum class OutputСompareMode {
        /**
         * 000: Frozen - The comparison between the output compare register TIMx_CCRx and the
         * counter TIMx_CNT has no effect on the outputs.(this mode is used to generate a timing base).
         */
        Frozen = 0b000,
        /**
         * 001: Set channel 1 to active level on match. OCxREF signal is forced high when the counter
         * TIMx_CNT matches the capture/compare register 1 (TIMx_CCRx).
         */
        ActiveLevelOnMatch = 0b001,
        /**
         * 010: Set channel 1 to inactive level on match. OCxREF signal is forced low when the counter
         * TIMx_CNT matches the capture/compare register 1 (TIMx_CCRx).
         */
        InactiveLevelOnMatch = 0b010,
        /** 011: Toggle - OCxREF toggles when TIMx_CNT=TIMx_CCRx. */
        Toggle = 0b011,
        /** 100: Force inactive level - OCxREF is forced low. */
        ForceInactive = 0b100,
        /** 101: Force active level - OCxREF is forced high. */
        ForceActive = 0b101,
        /**
         * 110: PWM mode 1 - In upcounting, channel 1 is active as long as TIMx_CNT<TIMx_CCRx
         * else inactive. In downcounting, channel 1 is inactive (OCxREF=‘0) as long as
         * TIMx_CNT > TIMx_CCRx else active (OCxREF=1).
         */
        PWM1 = 0b110,
        /**
         * 111: PWM mode 2 - In upcounting, channel 1 is inactive as long as TIMx_CNT<TIMx_CCRx
         * else active. In downcounting, channel 1 is active as long as TIMx_CNT > TIMx_CCRx else inactive
         */
        PWM2 = 0b111
    };

    template <typename TIM> class TimGeneral: public TimBase<TIM>
    {
        template<typename OCxM, OutputСompareMode OCM> __force_inline void setOCxM() {
            if constexpr (OCM == OutputСompareMode::Frozen) {
                OCxM::Frozen::set();
            } else if constexpr (OCM == OutputСompareMode::ActiveLevelOnMatch) {
                OCxM::ActiveLevelOnMatch::set();
            } else if constexpr (OCM == OutputСompareMode::InactiveLevelOnMatch) {
                OCxM::InactiveLevelOnMatch::set();
            } else if constexpr (OCM == OutputСompareMode::Toggle) {
                OCxM::Toggle::set();
            } else if constexpr (OCM == OutputСompareMode::ForceInactive) {
                OCxM::ForceInactive::set();
            } else if constexpr (OCM == OutputСompareMode::ForceActive) {
                OCxM::ForceActive::set();
            } else if constexpr (OCM == OutputСompareMode::PWM1) {
                OCxM::PWM1::set();
            } else if constexpr (OCM == OutputСompareMode::PWM2) {
                OCxM::PWM2::set();
            }
        }

        template<typename OCxPE, bool OCPE> __force_inline void setOCxPE() {
            if constexpr (OCPE == false) {
                OCxPE::Disabled::set();
            } else if (OCPE) {
                OCxPE::Enabled::set();
            }
        }
    public:
        template <OutputСompareMode OCM, TimChannel channel> __force_inline void setOutputCompareMode() {
            if constexpr (channel == TimChannel::ch1) {
                setOCxM<typename TIM::CCMR1_Output::OC1M, OCM>();
            } else if constexpr (channel == TimChannel::ch2) {
                setOCxM<typename TIM::CCMR1_Output:: OC2M, OCM>();
            } else if constexpr (channel == TimChannel::ch3) {
                setOCxM<typename TIM::CCMR2_Output::OC3M, OCM>();
            } else if constexpr (channel == TimChannel::ch4) {
                setOCxM<typename TIM::CCMR2_Output::OC4M, OCM>();
            }
        }

        template <bool OCPE, TimChannel channel> __force_inline void setOutputComparePreload() {
            if constexpr (channel == TimChannel::ch1) {
                setOCxPE<typename TIM::CCMR1_Output::OC1PE, OCPE>();
            } else if constexpr (channel == TimChannel::ch2) {
                setOCxPE<typename TIM::CCMR1_Output::OC2PE, OCPE>();
            } else if constexpr (channel == TimChannel::ch3) {
                setOCxPE<typename TIM::CCMR2_Output::OC3PE, OCPE>();
            } else if constexpr (channel == TimChannel::ch4) {
                setOCxPE<typename TIM::CCMR2_Output::OC4PE, OCPE>();
            }
        }
    
        template <TimChannel channel> __force_inline void setCCR(uint16_t value) {
            if constexpr (channel == TimChannel::ch1) {
                TIM::CCR1::write(value);
            } else if constexpr (channel == TimChannel::ch2) {
                TIM::CCR2::write(value);
            } else if constexpr (channel == TimChannel::ch3) {
                TIM::CCR3::write(value);
            } else if constexpr (channel == TimChannel::ch4) {
                TIM::CCR4::write(value);
            }
        }
    
        template <TimChannel channel> __force_inline void enableOutputCompare() {
            if constexpr (channel == TimChannel::ch1) {
                TIM::CCER::CC1E::Enable::set();
            } else if constexpr (channel == TimChannel::ch2) {
                TIM::CCER::CC2E::Enable::set();
            } else if constexpr (channel == TimChannel::ch3) {
                TIM::CCER::CC3E::Enable::set();
            } else if constexpr (channel == TimChannel::ch4) {
                TIM::CCER::CC4E::Enable::set();
            }
        }
    
        template <TimChannel channel> __force_inline void disableOutputCompare() {
            if constexpr (channel == TimChannel::ch1) {
                TIM::CCER::CC1E::Disable::set();
            } else if constexpr (channel == TimChannel::ch2) {
                TIM::CCER::CC2E::Disable::set();
            } else if constexpr (channel == TimChannel::ch3) {
                TIM::CCER::CC3E::Disable::set();
            } else if constexpr (channel == TimChannel::ch4) {
                TIM::CCER::CC4E::Disable::set();
            }
        }
    };
}