#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <gpio/Pin.hpp>
#include <timer/PWM.hpp>

using namespace ng;
using namespace ng::timer;

#include <hardware/STM32L1xx/GpioaRegisters.hpp>
#include <utils.hpp>

TEST(PWM, init) {
    SystemCoreClock = 4000000;
    initTimReg();

    using Pwm = PWM<ngTIM3, TimChannel::ch1, Pin<ngGPIOA, 1, AlternateFn::AF2>>;
    Pwm::init(10000);
    
    ASSERT_EQ(ngTIM3::PSC::get(), 3U);
    ASSERT_EQ(ngTIM3::ARR::get(), 99U);
    ASSERT_EQ(ngTIM3::CCR1::get(), 50U);
    
    ASSERT_TRUE(ngTIM3::CR1::ARPE::Buffered::isSet());          // enableAutoReload
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC1M::PWM1::isSet());     // setOutputCompareMode
    ASSERT_TRUE(ngTIM3::CCMR1_Output::OC1PE::Enable::isSet());  // setOutputComparePreload
    ASSERT_TRUE(ngTIM3::CCER::CC1E::Enable::isSet());           // enableOutputCompare
    
    ASSERT_TRUE(ngTIM3::EGR::UG::ReInit::isSet());              // reInit
    ASSERT_TRUE(ngTIM3::CR1::CEN::Enable::isSet());             // start
}