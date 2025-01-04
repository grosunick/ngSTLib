#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <timer/PWM.hpp>

using namespace ng;
using namespace ng::timer;

#include "fixture.hpp"
#include "common.hpp"

TEST(TimGeneral, enableCaptureCompare) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch1>::enableCaptureCompare();
    testBitsEqual(TTimReg::CCER::Address, 1 << 0);
    
    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch2>::enableCaptureCompare();
    testBitsEqual(TTimReg::CCER::Address, 1 << 4);
    
    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch3>::enableCaptureCompare();
    testBitsEqual(TTimReg::CCER::Address, 1 << 8);

    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch4>::enableCaptureCompare();
    testBitsEqual(TTimReg::CCER::Address, 1 << 12);
}

TEST(TimGeneral, disableCaptureCompare) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch1>::disableCaptureCompare();
    testBitsEqual(TTimReg::CCER::Address, 1 << 0, false);
    
    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch2>::disableCaptureCompare();
    testBitsEqual(TTimReg::CCER::Address, 1 << 4, false);

    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch3>::disableCaptureCompare();
    testBitsEqual(TTimReg::CCER::Address, 1 << 8, false);

    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch4>::disableCaptureCompare();
    testBitsEqual(TTimReg::CCER::Address, 1 << 12, false);
}

TEST(TimGeneral, setCCR) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch1>::setCCR(2);
    testRegisterEqual(TTimReg::CCR1::Address, 2U);

    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch2>::setCCR(2);
    testRegisterEqual(TTimReg::CCR2::Address, 2U);

    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch3>::setCCR(2);
    testRegisterEqual(TTimReg::CCR3::Address, 2U);

    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch4>::setCCR(2);
    testRegisterEqual(TTimReg::CCR4::Address, 2U);
}

TEST(TimGeneral, setOutputComparePreload) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch1>::setOutputComparePreload<true>();
    TimGeneral<TTimReg, TimChannel::ch1>::setOutputComparePreload<false>();
    testBitsEqual(TTimReg::CCMR1_Output::Address, 1 << 3);
    testBitsEqual(TTimReg::CCMR1_Output::Address, 1 << 3, false);
    
    TimGeneral<TTimReg, TimChannel::ch2>::setOutputComparePreload<true>();
    TimGeneral<TTimReg, TimChannel::ch2>::setOutputComparePreload<false>();
    testBitsEqual(TTimReg::CCMR1_Output::Address, 1 << 11);
    testBitsEqual(TTimReg::CCMR1_Output::Address, 1 << 11, false);
    
    TimGeneral<TTimReg, TimChannel::ch3>::template setOutputComparePreload<true>();
    TimGeneral<TTimReg, TimChannel::ch3>::setOutputComparePreload<false>();
    testBitsEqual(TTimReg::CCMR2_Output::Address, 1 << 3);
    testBitsEqual(TTimReg::CCMR2_Output::Address, 1 << 3, false);
    
    TimGeneral<TTimReg, TimChannel::ch4>::template setOutputComparePreload<true>();
    TimGeneral<TTimReg, TimChannel::ch4>::setOutputComparePreload<false>();
    testBitsEqual(TTimReg::CCMR2_Output::Address, 1 << 11);
    testBitsEqual(TTimReg::CCMR2_Output::Address, 1 << 11, false);
}

TEST(TimGeneral, setOutputCompareMode) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch1>::setOutputCompareMode<OutCaptСmpMode::PWM1>();
    testBitsEqual(TTimReg::CCMR1_Output::Address, 0b110 << 3);
    
    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch2>::setOutputCompareMode<OutCaptСmpMode::PWM1>();
    testBitsEqual(TTimReg::CCMR1_Output::Address, 0b110 << 12);
    
    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch3>::setOutputCompareMode<OutCaptСmpMode::PWM1>();
    testBitsEqual(TTimReg::CCMR2_Output::Address, 0b110 << 3);

    eventLog.clear();
    TimGeneral<TTimReg, TimChannel::ch4>::setOutputCompareMode<OutCaptСmpMode::PWM1>();
    testBitsEqual(TTimReg::CCMR2_Output::Address, 0b110 << 12);
}