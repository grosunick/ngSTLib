#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <gpio/Pin.hpp>
#include <timer/PWM.hpp>

using namespace ng;
using namespace ng::timer;

#include "../gpio/fixture.hpp"
#include "fixture.hpp"
#include "common.hpp"

TEST(PWM, init) {
    SystemCoreClock = 4000000;
    initTimReg();

    using Pwm = PWM<TTimReg, TimChannel::ch1, Pin<TGpioReg, 1, AlternateFn::AF2>>;
    eventLog.clear();
    Pwm::init(10000);
    
    testRegisterEqual(TTimReg::PSC::Address, 3U);
    testRegisterEqual(TTimReg::ARR::Address, 99U);
    testRegisterEqual(TTimReg::CCR1::Address, 50U);
    
    testBitsEqual(TTimReg::CR1::Address, 1 << 7); // enableAutoReload -> CR1::ARPE::Buffered
    testBitsEqual(TTimReg::CCMR1_Output::Address, 0b100 << 3); // setOCxM -> TIM::CCMR1_Output::OC1M

    // setOutputComparePreload -> TIM::CCMR1_Output::OC1PE
    testBitsEqual(TTimReg::CCMR1_Output::Address, 1 << 3);
    testBitsEqual(TTimReg::CCER::Address, 1 << 0); // enableOutputCompare -> TIM::CCER::CC1E::Enable

    eventLog.erase(eventLog.cbegin(), eventLog.cbegin() + 5);
    testBitsEqual(TTimReg::EGR::Address, 1 << 0); // reInit -> EGR::UG::ReInit
    testBitsEqual(TTimReg::CR1::Address, 1 << 0); // start -> CR1::CEN::Enable
}