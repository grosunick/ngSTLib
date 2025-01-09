#include <gtest/gtest.h>
#include <gpio/Pin.hpp>
#include <timer/ICC.hpp>
#include <utils.hpp>

using namespace ng;
using namespace ng::timer;

TEST(ICC, init) {
    SystemCoreClock = 32000;

    using icc = ICC<ngTIM3, TimChannel::ch2, Pin<ngGPIOA, 7, AlternateFn::AF2>>;
    icc::init(1000);
    
    ASSERT_EQ(ngTIM3::PSC::get(), 0U);
    ASSERT_EQ(ngTIM3::ARR::get(), 31U);
    ASSERT_EQ(ngTIM3::CNT::get(), 0U);
    
    ASSERT_TRUE(ngTIM3::CR1::ARPE ::Buffered::isSet()); // enableAutoReload
    ASSERT_TRUE(ngTIM3::CCMR1_Input::CC2S::InputTI1::isSet()); // setInputCompareMode
    ASSERT_TRUE(ngTIM3::CCMR1_Input::IC2F::CKintDiv32N8::isSet()); // setInputCompareFilter
    
    ASSERT_TRUE(ngTIM3::CCER::CC2NP::Low::isSet());     // 1. setInputPolarity -> CCER::CC2NP::Low
    ASSERT_TRUE(ngTIM3::CCER::CC2P::High::isSet());     // 2. setInputPolarity -> CCER::CC2P::High
    
    ASSERT_TRUE(ngTIM3::CCER::CC2E::Enable::isSet());   // enableOutputCompare
    ASSERT_TRUE(ngTIM3::SR::CC2IF::Cleared::isSet());   // clearEventFlag
    ASSERT_TRUE(ngTIM3::DIER::UIE::Enable::isSet());    // enableInterrupt
    ASSERT_TRUE(ngTIM3::DIER::CC2IE::Enable::isSet());  // captCmpInterruptEnable
    ASSERT_TRUE(ngTIM3::EGR::UG::ReInit::isSet());      // reInit
    ASSERT_TRUE(ngTIM3::CR1::CEN::Enable::isSet());     // start
}