#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <timer/PWM.hpp>

using namespace ng;

#include "fixture.hpp"
#include "common.hpp"

TEST(TimGeneral, enableOutputCompare) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<TTimReg>::template enableOutputCompare<TimChannel::ch1>();
    testBitsEqual(TTimReg::CCER::Address, 1 << 0);
    
    eventLog.clear();
    TimGeneral<TTimReg>::template enableOutputCompare<TimChannel::ch2>();
    testBitsEqual(TTimReg::CCER::Address, 1 << 4);
    
    eventLog.clear();
    TimGeneral<TTimReg>::template enableOutputCompare<TimChannel::ch3>();
    testBitsEqual(TTimReg::CCER::Address, 1 << 8);

    eventLog.clear();
    TimGeneral<TTimReg>::template enableOutputCompare<TimChannel::ch4>();
    testBitsEqual(TTimReg::CCER::Address, 1 << 12);
}

TEST(TimGeneral, disableOutputCompare) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<TTimReg>::template disableOutputCompare<TimChannel::ch1>();
    testBitsEqual(TTimReg::CCER::Address, 1 << 0, false);
    
    eventLog.clear();
    TimGeneral<TTimReg>::template disableOutputCompare<TimChannel::ch2>();
    testBitsEqual(TTimReg::CCER::Address, 1 << 4, false);

    eventLog.clear();
    TimGeneral<TTimReg>::template disableOutputCompare<TimChannel::ch3>();
    testBitsEqual(TTimReg::CCER::Address, 1 << 8, false);

    eventLog.clear();
    TimGeneral<TTimReg>::template disableOutputCompare<TimChannel::ch4>();
    testBitsEqual(TTimReg::CCER::Address, 1 << 12, false);
}

TEST(TimGeneral, setCCR) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<TTimReg>::template setCCR<TimChannel::ch1>(2);
    testRegisterEqual(TTimReg::CCR1::Address, 2U);

    eventLog.clear();
    TimGeneral<TTimReg>::template setCCR<TimChannel::ch2>(2);
    testRegisterEqual(TTimReg::CCR2::Address, 2U);

    eventLog.clear();
    TimGeneral<TTimReg>::template setCCR<TimChannel::ch3>(2);
    testRegisterEqual(TTimReg::CCR3::Address, 2U);

    eventLog.clear();
    TimGeneral<TTimReg>::template setCCR<TimChannel::ch4>(2);
    testRegisterEqual(TTimReg::CCR4::Address, 2U);
}

TEST(TimGeneral, setOutputComparePreload) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<TTimReg>::template setOutputComparePreload<true, TimChannel::ch1>();
    TimGeneral<TTimReg>::template setOutputComparePreload<false, TimChannel::ch1>();
    testBitsEqual(TTimReg::CCMR1_Output::Address, 1 << 3);
    testBitsEqual(TTimReg::CCMR1_Output::Address, 1 << 3, false);
    
    TimGeneral<TTimReg>::template setOutputComparePreload<true, TimChannel::ch2>();
    TimGeneral<TTimReg>::template setOutputComparePreload<false, TimChannel::ch2>();
    testBitsEqual(TTimReg::CCMR1_Output::Address, 1 << 11);
    testBitsEqual(TTimReg::CCMR1_Output::Address, 1 << 11, false);
    
    TimGeneral<TTimReg>::template setOutputComparePreload<true, TimChannel::ch3>();
    TimGeneral<TTimReg>::template setOutputComparePreload<false, TimChannel::ch3>();
    testBitsEqual(TTimReg::CCMR2_Output::Address, 1 << 3);
    testBitsEqual(TTimReg::CCMR2_Output::Address, 1 << 3, false);
    
    TimGeneral<TTimReg>::template setOutputComparePreload<true, TimChannel::ch4>();
    TimGeneral<TTimReg>::template setOutputComparePreload<false, TimChannel::ch4>();
    testBitsEqual(TTimReg::CCMR2_Output::Address, 1 << 11);
    testBitsEqual(TTimReg::CCMR2_Output::Address, 1 << 11, false);
}

TEST(TimGeneral, setOutputCompareMode) {
    initTimReg();
    
    eventLog.clear();
    TimGeneral<TTimReg>::template setOutputCompareMode<OutputСompareMode::PWM1, TimChannel::ch1>();
    testBitsEqual(TTimReg::CCMR1_Output::Address, 0b110 << 3);
    
    eventLog.clear();
    TimGeneral<TTimReg>::template setOutputCompareMode<OutputСompareMode::PWM1, TimChannel::ch2>();
    testBitsEqual(TTimReg::CCMR1_Output::Address, 0b110 << 12);
    
    eventLog.clear();
    TimGeneral<TTimReg>::template setOutputCompareMode<OutputСompareMode::PWM1, TimChannel::ch3>();
    testBitsEqual(TTimReg::CCMR2_Output::Address, 0b110 << 3);

    eventLog.clear();
    TimGeneral<TTimReg>::template setOutputCompareMode<OutputСompareMode::PWM1, TimChannel::ch4>();
    testBitsEqual(TTimReg::CCMR2_Output::Address, 0b110 << 12);
}