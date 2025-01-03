#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <register/FieldValue.hpp>
#include <timer/Timer.hpp>

using namespace ng;

#include "fixture.hpp"
#include "common.hpp"

TEST(Timer, initByPeriod) {
    initTimReg();
    SystemCoreClock = 16000000;
    
    using Tim = Timer<TTimReg, Func<[]() {}>>;
    eventLog.clear();
    Tim::initByPeriod(10);
    
    testRegisterEqual(TTimReg::PSC::Address, 0U);
    testRegisterEqual(TTimReg::ARR::Address, 159U);
    
    testBitsEqual(TTimReg::CR1::Address, 1 << 7); // enableAutoReload -> CR1::ARPE::Buffered
    testBitsEqual(TTimReg::CR1::Address, 1 << 2); // setInterruptSource -> CR1::URS::CounterOverflow
    testBitsEqual(TTimReg::DIER::Address, 1 << 0); // setInterruptSource -> CR1::URS::CounterOverflow
    testBitsEqual(TTimReg::EGR::Address, 1 << 0); // reInit -> EGR::UG::ReInit
    testBitsEqual(TTimReg::CR1::Address, 1 << 0); // start -> CR1::CEN::Enable
}

TEST(Timer, wait) {
    initTimReg();
    SystemCoreClock = 16000000;
    
    using Tim = Timer<TTimReg, Func<[]() {}>>;
    TTimReg::SR::UIF::Updated::set();
    
    eventLog.clear();
    Tim::wait(10);
    
    testRegisterEqual(TTimReg::PSC::Address, 0U);
    testRegisterEqual(TTimReg::ARR::Address, 159U);
    testRegisterEqual(TTimReg::CNT::Address, 0U);
    
    testBitsEqual(TTimReg::CR1::Address, 1 << 7); // enableAutoReload -> CR1::ARPE::Buffered
    testBitsEqual(TTimReg::CR1::Address, 1 << 2); // setInterruptSource -> CR1::URS::CounterOverflow
    testBitsEqual(TTimReg::EGR::Address, 1 << 0); // reInit -> EGR::UG::ReInit
    testBitsEqual(TTimReg::CR1::Address, 1 << 0); // start -> CR1::CEN::Enable
    testBitsEqual(TTimReg::SR::Address, 1 << 0, false); // start -> CR1::SR::Enable
    testBitsEqual(TTimReg::CR1::Address, 1 << 0, false); // stop -> CR1::CEN::Disable
}