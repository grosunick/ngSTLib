#include <gtest/gtest.h>
#include <timer/PWM.hpp>
#include <utils.hpp>

using namespace ng;
using namespace ng::timer;

TEST(TimGeneral, enableCaptureCompare) {
    TimGeneral<ngTIM3, TimChannel::ch1>::enableCaptureCompare();
    ASSERT_TRUE(ngTIM3::CCER::CC1E::Enable::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch2>::enableCaptureCompare();
    ASSERT_TRUE(ngTIM3::CCER::CC2E::Enable::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch3>::enableCaptureCompare();
    ASSERT_TRUE(ngTIM3::CCER::CC3E::Enable::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch4>::enableCaptureCompare();
    ASSERT_TRUE(ngTIM3::CCER::CC4E::Enable::isSet());
}

TEST(TimGeneral, disableCaptureCompare) {
    TimGeneral<ngTIM3, TimChannel::ch1>::disableCaptureCompare();
    ASSERT_TRUE(ngTIM3::CCER::CC1E::Disable::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch2>::disableCaptureCompare();
    ASSERT_TRUE(ngTIM3::CCER::CC2E::Disable::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch3>::disableCaptureCompare();
    ASSERT_TRUE(ngTIM3::CCER::CC3E::Disable::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch4>::disableCaptureCompare();
    ASSERT_TRUE(ngTIM3::CCER::CC4E::Disable::isSet());
}

TEST(TimGeneral, setCCR) {
    TimGeneral<ngTIM3, TimChannel::ch1>::setCCR(2);
    ASSERT_EQ(ngTIM3::CCR1::get(), 2);
    
    TimGeneral<ngTIM3, TimChannel::ch2>::setCCR(2);
    ASSERT_EQ(ngTIM3::CCR2::get(), 2);
    
    TimGeneral<ngTIM3, TimChannel::ch3>::setCCR(2);
    ASSERT_EQ(ngTIM3::CCR3::get(), 2);
    
    TimGeneral<ngTIM3, TimChannel::ch4>::setCCR(2);
    ASSERT_EQ(ngTIM3::CCR4::get(), 2);
}

TEST(TimGeneral, getCCR) {
    TimGeneral<ngTIM3, TimChannel::ch1>::setCCR(1);
    ASSERT_EQ((TimGeneral<ngTIM3, TimChannel::ch1>::getCCR()), 1);
    
    TimGeneral<ngTIM3, TimChannel::ch2>::setCCR(1);
    ASSERT_EQ((TimGeneral<ngTIM3, TimChannel::ch2>::getCCR()), 1);
    
    TimGeneral<ngTIM3, TimChannel::ch3>::setCCR(1);
    ASSERT_EQ((TimGeneral<ngTIM3, TimChannel::ch3>::getCCR()), 1);
    
    TimGeneral<ngTIM3, TimChannel::ch4>::setCCR(1);
    ASSERT_EQ((TimGeneral<ngTIM3, TimChannel::ch4>::getCCR()), 1);
}

TEST(TimGeneral, setOutputComparePreload) {
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputComparePreload<true>();
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC1PE::Enable::isSet());
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputComparePreload<false>();
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC1PE::Disable::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch2>::setOutputComparePreload<true>();
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC2PE::Enable::isSet());
    TimGeneral<ngTIM3, TimChannel::ch2>::setOutputComparePreload<false>();
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC2PE::Disable::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch3>::template setOutputComparePreload<true>();
    ASSERT_TRUE(ngTIM3::CCMR2_Output::OC3PE::Enable::isSet());
    TimGeneral<ngTIM3, TimChannel::ch3>::setOutputComparePreload<false>();
    ASSERT_TRUE(ngTIM3::CCMR2_Output::OC3PE::Disable::isSet());

    TimGeneral<ngTIM3, TimChannel::ch4>::template setOutputComparePreload<true>();
    ASSERT_TRUE(ngTIM3::CCMR2_Output::OC4PE::Enable::isSet());
    TimGeneral<ngTIM3, TimChannel::ch4>::setOutputComparePreload<false>();
    ASSERT_TRUE(ngTIM3::CCMR2_Output::OC4PE::Disable::isSet());
}

TEST(TimGeneral, setOutputCompareMode) {
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputCompareMode<OutCaptCmpMode::ActiveLevelOnMatch>();
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC1M::ActiveLevelOnMatch::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputCompareMode<OutCaptCmpMode::InactiveLevelOnMatch>();
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC1M::InactiveLevelOnMatch::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputCompareMode<OutCaptCmpMode::ForceInactive>();
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC1M::ForceInactive::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputCompareMode<OutCaptCmpMode::ForceActive>();
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC1M::ForceActive::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputCompareMode<OutCaptCmpMode::PWM1>();
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC1M::PWM1::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputCompareMode<OutCaptCmpMode::PWM2>();
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC1M::PWM2::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch2>::setOutputCompareMode<OutCaptCmpMode::PWM1>();
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC2M::PWM1::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch3>::setOutputCompareMode<OutCaptCmpMode::PWM1>();
    ASSERT_TRUE(ngTIM3::CCMR2_Output::OC3M::PWM1::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch4>::setOutputCompareMode<OutCaptCmpMode::PWM1>();
    ASSERT_TRUE(ngTIM3::CCMR2_Output::OC4M::PWM1::isSet());
}

TEST(TimGeneral, setInputCompareMode) {
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareMode<InpCaptCmpSelection::Output>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::CC1S::Output::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareMode<InpCaptCmpSelection::InputTI1>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::CC1S::InputTI1::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareMode<InpCaptCmpSelection::InputTI2>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::CC1S::InputTI2::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareMode<InpCaptCmpSelection::InputTRC>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::CC1S::InputTRC::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch2>::setInputCompareMode<InpCaptCmpSelection::InputTI1>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::CC2S::InputTI1::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch3>::setInputCompareMode<InpCaptCmpSelection::InputTI1>();
    ASSERT_TRUE(ngTIM3::CCMR2_Input::CC3S::InputTI1::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch4>::setInputCompareMode<InpCaptCmpSelection::InputTI1>();
    ASSERT_TRUE(ngTIM3::CCMR2_Input::CC4S::InputTI1::isSet());
}

TEST(TimGeneral, setInputCompareFilter) {
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::No>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::No::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv0N2>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv0N2::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv0N4>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv0N4::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv0N8>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv0N8::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv2N6>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv2N6::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv2N8>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv2N8::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv4N6>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv4N6::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv4N8>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv4N8::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv8N6>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv8N6::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv8N8>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv8N8::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv16N5>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv16N5::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv16N6>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv16N6::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv16N8>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv16N8::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv32N5>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv32N5::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv32N6>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv32N6::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv32N8>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC1F::CKintDiv32N8::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch2>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv0N2>();
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC2F::CKintDiv0N2::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch3>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv0N2>();
    ASSERT_TRUE(ngTIM3::CCMR2_Input::IC3F::CKintDiv0N2::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch4>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv0N2>();
    ASSERT_TRUE(ngTIM3::CCMR2_Input::IC4F::CKintDiv0N2::isSet());
}

TEST(TimGeneral, setInputPolarity) {
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputPolarity<InpCaptCmpPolarity::Rising>();
    ASSERT_TRUE(ngTIM3::CCER::CC1NP::Low::isSet());
    ASSERT_TRUE(ngTIM3::CCER::CC1P::Low::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputPolarity<InpCaptCmpPolarity::Falling>();
    ASSERT_TRUE(ngTIM3::CCER::CC1NP::Low::isSet());
    ASSERT_TRUE(ngTIM3::CCER::CC1P::High::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputPolarity<InpCaptCmpPolarity::Both>();
    ASSERT_TRUE(ngTIM3::CCER::CC1NP::High::isSet());
    ASSERT_TRUE(ngTIM3::CCER::CC1P::High::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch2>::setInputPolarity<InpCaptCmpPolarity::Both>();
    ASSERT_TRUE(ngTIM3::CCER::CC2NP::High::isSet());
    ASSERT_TRUE(ngTIM3::CCER::CC2P::High::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch3>::setInputPolarity<InpCaptCmpPolarity::Both>();
    ASSERT_TRUE(ngTIM3::CCER::CC3NP::High::isSet());
    ASSERT_TRUE(ngTIM3::CCER::CC3P::High::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch4>::setInputPolarity<InpCaptCmpPolarity::Both>();
    ASSERT_TRUE(ngTIM3::CCER::CC4NP::High::isSet());
    ASSERT_TRUE(ngTIM3::CCER::CC4P::High::isSet());
}

TEST(TimGeneral, captCmpInterruptEnable) {
    TimGeneral<ngTIM3, TimChannel::ch1>::captCmpInterruptEnable();
    ASSERT_TRUE(ngTIM3::DIER::CC1IE::Enable ::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch2>::captCmpInterruptEnable();
    ASSERT_TRUE(ngTIM3::DIER::CC2IE::Enable ::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch3>::captCmpInterruptEnable();
    ASSERT_TRUE(ngTIM3::DIER::CC3IE::Enable ::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch4>::captCmpInterruptEnable();
    ASSERT_TRUE(ngTIM3::DIER::CC4IE::Enable ::isSet());
}

TEST(TimGeneral, captCmpInterruptDisable) {
    TimGeneral<ngTIM3, TimChannel::ch1>::captCmpInterruptDisable();
    ASSERT_TRUE(ngTIM3::DIER::CC1IE::Disable::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch2>::captCmpInterruptDisable();
    ASSERT_TRUE(ngTIM3::DIER::CC2IE::Disable::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch3>::captCmpInterruptDisable();
    ASSERT_TRUE(ngTIM3::DIER::CC3IE::Disable::isSet());
    
    TimGeneral<ngTIM3, TimChannel::ch4>::captCmpInterruptDisable();
    ASSERT_TRUE(ngTIM3::DIER::CC4IE::Disable::isSet());
}

TEST(TimGeneral, isCaptureEventTriggered) {
    ngTIM3::SR::CC1IF::Updated::set();
    ASSERT_TRUE((TimGeneral<ngTIM3, TimChannel::ch1>::isCaptureEventTriggered()));
    
    ngTIM3::SR::CC2IF::Updated::set();
    ASSERT_TRUE((TimGeneral<ngTIM3, TimChannel::ch2>::isCaptureEventTriggered()));
    
    ngTIM3::SR::CC3IF::Updated::set();
    ASSERT_TRUE((TimGeneral<ngTIM3, TimChannel::ch3>::isCaptureEventTriggered()));
    
    ngTIM3::SR::CC4IF::Updated::set();
    ASSERT_TRUE((TimGeneral<ngTIM3, TimChannel::ch4>::isCaptureEventTriggered()));
}

TEST(TimGeneral, clearEventFlag) {
    TimGeneral<ngTIM3, TimChannel::ch1>::clearEventFlag();
    ASSERT_FALSE((TimGeneral<ngTIM3, TimChannel::ch1>::isCaptureEventTriggered()));
    
    TimGeneral<ngTIM3, TimChannel::ch2>::clearEventFlag();
    ASSERT_FALSE((TimGeneral<ngTIM3, TimChannel::ch2>::isCaptureEventTriggered()));
    
    TimGeneral<ngTIM3, TimChannel::ch3>::clearEventFlag();
    ASSERT_FALSE((TimGeneral<ngTIM3, TimChannel::ch3>::isCaptureEventTriggered()));
    
    TimGeneral<ngTIM3, TimChannel::ch4>::clearEventFlag();
    ASSERT_FALSE((TimGeneral<ngTIM3, TimChannel::ch4>::isCaptureEventTriggered()));
}