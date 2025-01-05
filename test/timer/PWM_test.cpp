#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <gpio/Pin.hpp>
#include <timer/PWM.hpp>

using namespace ng;
using namespace ng::timer;

#include <hardware/STM32L1xx/GpioaRegisters.hpp>
#include "common.hpp"

TEST(PWM, init) {
    SystemCoreClock = 4000000;
    initTimReg();

    using Pwm = PWM<ngTIM3, TimChannel::ch1, Pin<ngGPIOA, 1, AlternateFn::AF2>>;
    eventLog.clear();
    Pwm::init(10000);
    
    testRegisterEqual(ngTIM3::PSC::Address, 3U);
    testRegisterEqual(ngTIM3::ARR::Address, 99U);
    testRegisterEqual(ngTIM3::CCR1::Address, 50U);
    
    testBitsEqual(ngTIM3::CR1::Address, 1 << 7); // enableAutoReload -> CR1::ARPE::Buffered
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 0b100 << 3); // setOCxM -> TIM::CCMR1_Output::OC1M

    // setOutputComparePreload -> TIM::CCMR1_Output::OC1PE
    testBitsEqual(ngTIM3::CCMR1_Output::Address, 1 << 3);
    testBitsEqual(ngTIM3::CCER::Address, 1 << 0); // enableOutputCompare -> TIM::CCER::CC1E::Enable

    eventLog.erase(eventLog.cbegin(), eventLog.cbegin() + 5);
    testBitsEqual(ngTIM3::EGR::Address, 1 << 0); // reInit -> EGR::UG::ReInit
    testBitsEqual(ngTIM3::CR1::Address, 1 << 0); // start -> CR1::CEN::Enable
}