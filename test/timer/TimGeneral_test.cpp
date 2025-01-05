#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <timer/PWM.hpp>

using namespace ng;
using namespace ng::timer;

#include "common.hpp"

TEST(TimGeneral, enableCaptureCompare) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::enableCaptureCompare();
    testBitsEqual(ngTIM3::CCER::Address, 1 << 0);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch2>::enableCaptureCompare();
    testBitsEqual(ngTIM3::CCER::Address, 1 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch3>::enableCaptureCompare();
    testBitsEqual(ngTIM3::CCER::Address, 1 << 8);

    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch4>::enableCaptureCompare();
    testBitsEqual(ngTIM3::CCER::Address, 1 << 12);
}

TEST(TimGeneral, disableCaptureCompare) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::disableCaptureCompare();
    testBitsEqual(ngTIM3::CCER::Address, 1 << 0, false);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch2>::disableCaptureCompare();
    testBitsEqual(ngTIM3::CCER::Address, 1 << 4, false);

    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch3>::disableCaptureCompare();
    testBitsEqual(ngTIM3::CCER::Address, 1 << 8, false);

    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch4>::disableCaptureCompare();
    testBitsEqual(ngTIM3::CCER::Address, 1 << 12, false);
}

TEST(TimGeneral, setCCR) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setCCR(2);
    testRegisterEqual(ngTIM3::CCR1::Address, 2U);

    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch2>::setCCR(2);
    testRegisterEqual(ngTIM3::CCR2::Address, 2U);

    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch3>::setCCR(2);
    testRegisterEqual(ngTIM3::CCR3::Address, 2U);

    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch4>::setCCR(2);
    testRegisterEqual(ngTIM3::CCR4::Address, 2U);
}

TEST(TimGeneral, getCCR) {
    initTimReg();
    
    getRegister(ngTIM3::CCR1::Address) = 1U;
    ASSERT_EQ((TimGeneral<ngTIM3, TimChannel::ch1>::getCCR()), 1);
    
    getRegister(ngTIM3::CCR2::Address) = 1U;
    ASSERT_EQ((TimGeneral<ngTIM3, TimChannel::ch2>::getCCR()), 1);
    
    getRegister(ngTIM3::CCR3::Address) = 1U;
    ASSERT_EQ((TimGeneral<ngTIM3, TimChannel::ch3>::getCCR()), 1);
    
    getRegister(ngTIM3::CCR4::Address) = 1U;
    ASSERT_EQ((TimGeneral<ngTIM3, TimChannel::ch4>::getCCR()), 1);
}

TEST(TimGeneral, setOutputComparePreload) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputComparePreload<true>();
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputComparePreload<false>();
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 1 << 3);
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 1 << 3, false);
    
    TimGeneral<ngTIM3, TimChannel::ch2>::setOutputComparePreload<true>();
    TimGeneral<ngTIM3, TimChannel::ch2>::setOutputComparePreload<false>();
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 1 << 11);
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 1 << 11, false);
    
    TimGeneral<ngTIM3, TimChannel::ch3>::template setOutputComparePreload<true>();
    TimGeneral<ngTIM3, TimChannel::ch3>::setOutputComparePreload<false>();
    testBitsEqual(ngTIM3::CCMR2_Output::Address, 1 << 3);
    testBitsEqual(ngTIM3::CCMR2_Output::Address, 1 << 3, false);
    
    TimGeneral<ngTIM3, TimChannel::ch4>::template setOutputComparePreload<true>();
    TimGeneral<ngTIM3, TimChannel::ch4>::setOutputComparePreload<false>();
    testBitsEqual(ngTIM3::CCMR2_Output::Address, 1 << 11);
    testBitsEqual(ngTIM3::CCMR2_Output::Address, 1 << 11, false);
}

TEST(TimGeneral, setOutputCompareMode) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputCompareMode<OutCaptCmpMode::ActiveLevelOnMatch>();
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 0b001 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputCompareMode<OutCaptCmpMode::InactiveLevelOnMatch>();
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 0b010 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputCompareMode<OutCaptCmpMode::ForceInactive>();
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 0b100 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputCompareMode<OutCaptCmpMode::ForceActive>();
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 0b101 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputCompareMode<OutCaptCmpMode::PWM1>();
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 0b110 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setOutputCompareMode<OutCaptCmpMode::PWM2>();
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 0b111 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch2>::setOutputCompareMode<OutCaptCmpMode::PWM1>();
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 0b110 << 12);

    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch3>::setOutputCompareMode<OutCaptCmpMode::PWM1>();
    testBitsEqual(ngTIM3::CCMR2_Output::Address, 0b110 << 4);

    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch4>::setOutputCompareMode<OutCaptCmpMode::PWM1>();
    testBitsEqual(ngTIM3::CCMR2_Output::Address, 0b110 << 12);
}

TEST(TimGeneral, setInputCompareMode) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareMode<InpCaptCmpSelection::Output>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b00U << 0);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareMode<InpCaptCmpSelection::InputTI1>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b01 << 0);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareMode<InpCaptCmpSelection::InputTI2>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b10 << 0);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareMode<InpCaptCmpSelection::InputTRC>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b11 << 0);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch2>::setInputCompareMode<InpCaptCmpSelection::InputTI1>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b01 << 8);
    
    TimGeneral<ngTIM3, TimChannel::ch3>::setInputCompareMode<InpCaptCmpSelection::InputTI1>();
    testBitsEqual(ngTIM3::CCMR2_Input::Address, 0b01 << 0);
    
    TimGeneral<ngTIM3, TimChannel::ch4>::setInputCompareMode<InpCaptCmpSelection::InputTI1>();
    testBitsEqual(ngTIM3::CCMR2_Input::Address, 0b01 << 8);
}

TEST(TimGeneral, setInputCompareFilter) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::No>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b0000 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv0N2>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b0001 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv0N4>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b0010 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv0N8>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b0011 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv2N6>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b0100 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv2N8>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b0101 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv4N6>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b0110 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv4N8>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b0111 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv8N6>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b1000 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv8N8>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b1001 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv16N5>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b1010 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv16N6>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b1011 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv16N8>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b1100 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv32N5>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b1101 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv32N6>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b1110 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv32N8>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b1111 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch2>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv0N2>();
    testBitsEqual(ngTIM3::CCMR1_Input::Address, 0b0001 << 12);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch3>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv0N2>();
    testBitsEqual(ngTIM3::CCMR2_Input::Address, 0b0001 << 4);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch4>::setInputCompareFilter<InpCaptCmpFilter::CKintDiv0N2>();
    testBitsEqual(ngTIM3::CCMR2_Input::Address, 0b0001 << 12);
}

TEST(TimGeneral, setInputPolarity) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputPolarity<InpCaptCmpPolarity::Rising>();
    testBitsEqual(ngTIM3::CCER::Address, 0b0U << 3);
    testBitsEqual(ngTIM3::CCER::Address, 0b0U << 1);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputPolarity<InpCaptCmpPolarity::Falling>();
    testBitsEqual(ngTIM3::CCER::Address, 0b0U << 3);
    testBitsEqual(ngTIM3::CCER::Address, 0b1U << 1);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch1>::setInputPolarity<InpCaptCmpPolarity::Both>();
    testBitsEqual(ngTIM3::CCER::Address, 0b1U << 3);
    testBitsEqual(ngTIM3::CCER::Address, 0b1U << 1);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch2>::setInputPolarity<InpCaptCmpPolarity::Both>();
    testBitsEqual(ngTIM3::CCER::Address, 0b1U << 7);
    testBitsEqual(ngTIM3::CCER::Address, 0b1U << 5);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch3>::setInputPolarity<InpCaptCmpPolarity::Both>();
    testBitsEqual(ngTIM3::CCER::Address, 0b1U << 11);
    testBitsEqual(ngTIM3::CCER::Address, 0b1U << 9);
    
    eventLog.clear();
    TimGeneral<ngTIM3, TimChannel::ch4>::setInputPolarity<InpCaptCmpPolarity::Both>();
    testBitsEqual(ngTIM3::CCER::Address, 0b1U << 15);
    testBitsEqual(ngTIM3::CCER::Address, 0b1U << 13);
}