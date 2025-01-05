#pragma once

#include <cstdint>
#include <timer/TimBase.hpp>

namespace ng
{
    namespace timer
    {
        enum class TimChannel {
            ch1 = 1,
            ch2 = 2,
            ch3 = 3,
            ch4 = 4
        };
    
        enum class OutCaptСmpMode {
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
        
        enum class InpCaptCmpSelection {
            // 00: CCx channel is configured as output
            Output = 0b00,
            // 01: CCx channel is configured as input, ICx is mapped on TI1
            InputTI1 = 0b01,
            // 10: CCx channel is configured as input, ICx is mapped on TI2
            InputTI2 = 0b10,
            /**
             * 11: CCx channel is configured as input, ICx is mapped on TRC. This mode is working only if
             * an internal trigger input is selected through TS bit (TIMx_SMCR register)
             */
            InputTRC = 0b11
        };
        
        enum class InpCaptCmpFilter {
            No = 0b000,             // 0000: No filter, sampling is done at fDTS
            CKintDiv0N2 = 0b0001,   // 0001: fSAMPLING=fCK_INT, N=2
            CKintDiv0N4 = 0b0010,   // 0010: fSAMPLING=fCK_INT, N=4
            CKintDiv0N8 = 0b0011,   // 0011: fSAMPLING=fCK_INT, N=8
            CKintDiv2N6 = 0b0100,   // 0100: fSAMPLING=fDTS/2, N=6
            CKintDiv2N8 = 0b0101,   // 0101: fSAMPLING=fDTS/2, N=8
            CKintDiv4N6 = 0b0110,   // 0110: fSAMPLING=fDTS/4, N=6
            CKintDiv4N8 = 0b0111,   // 0111: fSAMPLING=fDTS/4, N=8
            CKintDiv8N6 = 0b1000,   // 1000: fSAMPLING=fDTS/8, N=6
            CKintDiv8N8 = 0b1001,   // 1001: fSAMPLING=fDTS/8, N=8
            CKintDiv16N5 = 0b1010,  // 1010: fSAMPLING=fDTS/16, N=5
            CKintDiv16N6 = 0b1011,  // 1011: fSAMPLING=fDTS/16, N=6
            CKintDiv16N8 = 0b1100,  // 1100: fSAMPLING=fDTS/16, N=8
            CKintDiv32N5 = 0b1101,  // 1101: fSAMPLING=fDTS/32, N=5
            CKintDiv32N6 = 0b1110,  // 1110: fSAMPLING=fDTS/32, N=6
            CKintDiv32N8 = 0b1111,  // 1111: fSAMPLING=fDTS/32, N=8
        };
        
        enum class InpCaptCmpPolarity {
            Rising = 0b00,
            Falling = 0b01,
            Both = 0b11,
        };
    
        template <typename TIM, TimChannel channel = TimChannel::ch1> class TimGeneral: public TimBase<TIM>
        {
            template<typename OCxM, OutCaptСmpMode OCM> __force_inline void setOCxM() {
                if constexpr (OCM == OutCaptСmpMode::ActiveLevelOnMatch) {
                    OCxM::ActiveLevelOnMatch::set();
                } else if constexpr (OCM == OutCaptСmpMode::InactiveLevelOnMatch) {
                    OCxM::InactiveLevelOnMatch::set();
                } else if constexpr (OCM == OutCaptСmpMode::Toggle) {
                    OCxM::Toggle::set();
                } else if constexpr (OCM == OutCaptСmpMode::ForceInactive) {
                    OCxM::ForceInactive::set();
                } else if constexpr (OCM == OutCaptСmpMode::ForceActive) {
                    OCxM::ForceActive::set();
                } else if constexpr (OCM == OutCaptСmpMode::PWM1) {
                    OCxM::PWM1::set();
                } else if constexpr (OCM == OutCaptСmpMode::PWM2) {
                    OCxM::PWM2::set();
                }
            }
        
            template<typename OCxPE, bool OCPE> __force_inline void setOCxPE() {
                if constexpr (OCPE == false) {
                    OCxPE::Disable::set();
                } else if constexpr (OCPE) {
                    OCxPE::Enable::set();
                }
            }
    
            template<typename CCxS, InpCaptCmpSelection selection> __force_inline void setCCxS() {
                if constexpr (selection == InpCaptCmpSelection::Output) {
                    CCxS::Output::set();
                } else if constexpr (selection == InpCaptCmpSelection::InputTI1) {
                    CCxS::InputTI1::set();
                } else if constexpr (selection == InpCaptCmpSelection::InputTI2) {
                    CCxS::InputTI2::set();
                } else if constexpr (selection == InpCaptCmpSelection::InputTRC) {
                    CCxS::InputTRC::set();
                }
            }
    
            template<typename ICxF, InpCaptCmpFilter filter> __force_inline void setICxF() {
                if constexpr (filter == InpCaptCmpFilter::No) {
                    ICxF::No::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv0N2) {
                    ICxF::CKintDiv0N2::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv0N4) {
                    ICxF::CKintDiv0N4::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv0N8) {
                    ICxF::CKintDiv0N8::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv2N6) {
                    ICxF::CKintDiv2N6::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv2N8) {
                    ICxF::CKintDiv2N8::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv4N6) {
                    ICxF::CKintDiv4N6::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv4N8) {
                    ICxF::CKintDiv4N8::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv8N6) {
                    ICxF::CKintDiv8N6::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv8N8) {
                    ICxF::CKintDiv8N8::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv16N5) {
                    ICxF::CKintDiv16N5::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv16N6) {
                    ICxF::CKintDiv16N6::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv16N8) {
                    ICxF::CKintDiv16N8::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv32N5) {
                    ICxF::CKintDiv32N5::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv32N6) {
                    ICxF::CKintDiv32N6::set();
                } else if constexpr (filter == InpCaptCmpFilter::CKintDiv32N8) {
                    ICxF::CKintDiv32N8::set();
                }
            }
    
            template<typename CCxNP, typename CCxP, InpCaptCmpPolarity polarity> __force_inline void setCCxP() {
                if constexpr (polarity == InpCaptCmpPolarity::Rising) {
                    CCxNP::Low::set();
                    CCxP::Low::set();
                } else if constexpr (polarity == InpCaptCmpPolarity::Falling) {
                    CCxNP::Low::set();
                    CCxP::High::set();
                } else if constexpr (polarity == InpCaptCmpPolarity::Both) {
                    CCxNP::High::set();
                    CCxP::High::set();
                }
            }
        public:
            template <OutCaptСmpMode OCM> __force_inline void setOutputCompareMode() {
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
        
            template <bool OCPE> __force_inline void setOutputComparePreload() {
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
        
            __force_inline void setCCR(uint16_t value) {
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
    
            __force_inline uint16_t getCCR() {
                if constexpr (channel == TimChannel::ch1) {
                    return TIM::CCR1::get();
                } else if constexpr (channel == TimChannel::ch2) {
                    return TIM::CCR2::get();
                } else if constexpr (channel == TimChannel::ch3) {
                    return TIM::CCR3::get();
                } else if constexpr (channel == TimChannel::ch4) {
                    return TIM::CCR4::get();
                }
            }
        
            __force_inline void enableCaptureCompare() {
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
        
            __force_inline void disableCaptureCompare() {
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
            
            template <InpCaptCmpSelection selection> __force_inline void setInputCompareMode() {
                if constexpr (channel == TimChannel::ch1) {
                    setCCxS<typename TIM::CCMR1_Input::CC1S, selection>();
                } else if constexpr (channel == TimChannel::ch2) {
                    setCCxS<typename TIM::CCMR1_Input::CC2S, selection>();
                } else if constexpr (channel == TimChannel::ch3) {
                    setCCxS<typename TIM::CCMR2_Input::CC3S, selection>();
                } else if constexpr (channel == TimChannel::ch4) {
                    setCCxS<typename TIM::CCMR2_Input::CC4S, selection>();
                }
            }
    
            template <InpCaptCmpFilter filter> __force_inline void setInputCompareFilter() {
                if constexpr (channel == TimChannel::ch1) {
                    setICxF<typename TIM::CCMR1_Input::IC1F, filter>();
                } else if constexpr (channel == TimChannel::ch2) {
                    setICxF<typename TIM::CCMR1_Input::IC2F, filter>();
                } else if constexpr (channel == TimChannel::ch3) {
                    setICxF<typename TIM::CCMR2_Input::IC3F, filter>();
                } else if constexpr (channel == TimChannel::ch4) {
                    setICxF<typename TIM::CCMR2_Input::IC4F, filter>();
                }
            }
    
            template <InpCaptCmpPolarity polarity> __force_inline void setInputPolarity() {
                if constexpr (channel == TimChannel::ch1) {
                    setCCxP<typename TIM::CCER::CC1NP, typename TIM::CCER::CC1P, polarity>();
                } else if constexpr (channel == TimChannel::ch2) {
                    setCCxP<typename TIM::CCER::CC2NP, typename TIM::CCER::CC2P, polarity>();
                } else if constexpr (channel == TimChannel::ch3) {
                    setCCxP<typename TIM::CCER::CC3NP, typename TIM::CCER::CC3P, polarity>();
                } else if constexpr (channel == TimChannel::ch4) {
                    setCCxP<typename TIM::CCER::CC4NP, typename TIM::CCER::CC4P, polarity>();
                }
            }
    
            __force_inline void captCmpInterruptEnable() {
                if constexpr (channel == TimChannel::ch1) {
                    TIM::DIER::CC1IE::Enable::set();
                } else if constexpr (channel == TimChannel::ch2) {
                    TIM::DIER::CC2IE::Enable::set();
                } else if constexpr (channel == TimChannel::ch3) {
                    TIM::DIER::CC3IE::Enable::set();
                } else if constexpr (channel == TimChannel::ch4) {
                    TIM::DIER::CC4IE::Enable::set();
                }
            }
    
            __force_inline void captCmpInterruptDisable() {
                if constexpr (channel == TimChannel::ch1) {
                    TIM::DIER::CC1IE::Disable::set();
                } else if constexpr (channel == TimChannel::ch2) {
                    TIM::DIER::CC2IE::Disable::set();
                } else if constexpr (channel == TimChannel::ch3) {
                    TIM::DIER::CC3IE::Disable::set();
                } else if constexpr (channel == TimChannel::ch4) {
                    TIM::DIER::CC4IE::Disable::set();
                }
            }
    
            __force_inline bool isCaptureEventTriggered() {
                if constexpr (channel == TimChannel::ch1) {
                    return TIM::SR::CC1IF::Updated::isSet();
                } else if constexpr (channel == TimChannel::ch2) {
                    return TIM::SR::CC2IF::Updated::isSet();
                } else if constexpr (channel == TimChannel::ch3) {
                    return TIM::SR::CC3IF::Updated::isSet();
                } else if constexpr (channel == TimChannel::ch4) {
                    return TIM::SR::CC4IF::Updated::isSet();
                }
            }
    
            __force_inline void clearEventFlag() {
                if constexpr (channel == TimChannel::ch1) {
                    TIM::SR::CC1IF::Cleared::set();
                } else if constexpr (channel == TimChannel::ch2) {
                    TIM::SR::CC2IF::Cleared::set();
                } else if constexpr (channel == TimChannel::ch3) {
                    TIM::SR::CC3IF::Cleared::set();
                } else if constexpr (channel == TimChannel::ch4) {
                    TIM::SR::CC4IF::Cleared::set();
                }
            }
        };
    }
}