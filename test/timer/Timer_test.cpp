#include <gtest/gtest.h>
#include <hardware/STM32L1xx/Tim3Registers.hpp>
#include <timer/Timer.hpp>

using namespace ng;
using namespace ng::timer;

#include <utils.hpp>

TEST(Timer, initByPeriod) {
    initTimReg();
    SystemCoreClock = 16000000;
    
    using Tim = Timer<ngTIM3, Func<[]() {}>>;
    Tim::initByPeriod(10);
    
    ASSERT_EQ(ngTIM3::PSC::get(), 0U);
    ASSERT_EQ(ngTIM3::ARR::get(), 159U);
    
    ASSERT_TRUE(ngTIM3::CR1::ARPE::Buffered::isSet()); // enableAutoReload
    ASSERT_TRUE(ngTIM3::CR1::URS::CounterOverflow::isSet()); // setInterruptSource
    ASSERT_TRUE(ngTIM3::DIER::UIE::Enable::isSet());    // enableInterrupt
    ASSERT_TRUE(ngTIM3::EGR::UG::ReInit::isSet());      // reInit
    ASSERT_TRUE(ngTIM3::CR1::CEN::Enable::isSet());     // start
}

TEST(Timer, wait) {
    initTimReg();
    SystemCoreClock = 16000000;
    
    using Tim = Timer<ngTIM3, Func<[]() {}>>;
    ngTIM3::SR::UIF::Updated::set();
    
    eventLog.clear();
    Tim::wait(10);
    
    ASSERT_EQ(ngTIM3::PSC::get(), 0U);
    ASSERT_EQ(ngTIM3::ARR::get(), 159U);
    ASSERT_EQ(ngTIM3::CNT::get(), 0U);
    
    ASSERT_TRUE(ngTIM3::CR1::ARPE::Buffered::isSet());          // enableAutoReload
    ASSERT_TRUE(ngTIM3::CR1::URS::CounterOverflow::isSet());    // setInterruptSource
    ASSERT_TRUE(ngTIM3::EGR::UG::ReInit::isSet());              // reInit
    
    eventLog.erase(eventLog.cbegin(), eventLog.cbegin() + 6);
    testBitsEqual<ngTIM3::CR1::CEN::Enable>(ngTIM3::CR1::Address);  // start
    testBitsEqual<ngTIM3::SR::UIF::Cleared>(ngTIM3::SR::Address);   // clearUpdateFlag
    testBitsEqual<ngTIM3::CR1::CEN::Disable>(ngTIM3::CR1::Address); // stop
}