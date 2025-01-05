#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <register/FieldValue.hpp>
#include <timer/Timer.hpp>

using namespace ng;

#include "common.hpp"

TEST(Timer, initByPeriod) {
    initTimReg();
    SystemCoreClock = 16000000;
    
    using Tim = Timer<ngTIM3, Func<[]() {}>>;
    eventLog.clear();
    Tim::initByPeriod(10);
    
    testRegisterEqual(ngTIM3::PSC::Address, 0U);
    testRegisterEqual(ngTIM3::ARR::Address, 159U);
    
    testBitsEqual(ngTIM3::CR1::Address, 1 << 7); // enableAutoReload -> CR1::ARPE::Buffered
    testBitsEqual(ngTIM3::CR1::Address, 1 << 2); // setInterruptSource -> CR1::URS::CounterOverflow
    testBitsEqual(ngTIM3::DIER::Address, 1 << 0); // setInterruptSource -> CR1::URS::CounterOverflow
    testBitsEqual(ngTIM3::EGR::Address, 1 << 0); // reInit -> EGR::UG::ReInit
    testBitsEqual(ngTIM3::CR1::Address, 1 << 0); // start -> CR1::CEN::Enable
}

TEST(Timer, wait) {
    initTimReg();
    SystemCoreClock = 16000000;
    
    using Tim = Timer<ngTIM3, Func<[]() {}>>;
    ngTIM3::SR::UIF::Updated::set();
    
    eventLog.clear();
    Tim::wait(10);
    
    testRegisterEqual(ngTIM3::PSC::Address, 0U);
    testRegisterEqual(ngTIM3::ARR::Address, 159U);
    testRegisterEqual(ngTIM3::CNT::Address, 0U);
    
    testBitsEqual(ngTIM3::CR1::Address, 1 << 7); // enableAutoReload -> CR1::ARPE::Buffered
    testBitsEqual(ngTIM3::CR1::Address, 1 << 2); // setInterruptSource -> CR1::URS::CounterOverflow
    testBitsEqual(ngTIM3::EGR::Address, 1 << 0); // reInit -> EGR::UG::ReInit
    testBitsEqual(ngTIM3::CR1::Address, 1 << 0); // start -> CR1::CEN::Enable
    testBitsEqual(ngTIM3::SR::Address, 1 << 0, false); // start -> CR1::SR::Enable
    testBitsEqual(ngTIM3::CR1::Address, 1 << 0, false); // stop -> CR1::CEN::Disable
}