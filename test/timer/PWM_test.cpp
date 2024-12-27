#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <register/FieldValue.hpp>
#include <timer/Timer.hpp>

using namespace ng;

#include "fixture.hpp"
#include "common.hpp"

//TEST(Timer, initByPeriod) {
//    init();
//
//    using Tim = Timer<TReg, Func<[]() {}>>;
//    eventLog.clear();
//    Tim::initByPeriod(10);
//
//    testRegisterEqual(TReg::PSC::Address, 0U);
//    testRegisterEqual(TReg::ARR::Address, 159U);
//
//    testBitsEqual(TReg::CR1::Address, 1 << 7); // enableAutoReload -> CR1::ARPE::Buffered
//    testBitsEqual(TReg::CR1::Address, 1 << 2); // setInterruptSource -> CR1::URS::CounterOverflow
//    testBitsEqual(TReg::DIER::Address, 1 << 0); // setInterruptSource -> CR1::URS::CounterOverflow
//    testBitsEqual(TReg::EGR::Address, 1 << 0); // reInit -> EGR::UG::ReInit
//    testBitsEqual(TReg::CR1::Address, 1 << 0); // start -> CR1::CEN::Enable
//}
//
//TEST(Timer, wait) {
//    init();
//
//    using Tim = Timer<TReg, Func<[]() {}>>;
//    TReg::SR::UIF::Updated::set();
//
//    eventLog.clear();
//    Tim::wait(10);
//
//    testRegisterEqual(TReg::PSC::Address, 0U);
//    testRegisterEqual(TReg::ARR::Address, 159U);
//    testRegisterEqual(TReg::CNT::Address, 0U);
//
//    testBitsEqual(TReg::CR1::Address, 1 << 7); // enableAutoReload -> CR1::ARPE::Buffered
//    testBitsEqual(TReg::CR1::Address, 1 << 2); // setInterruptSource -> CR1::URS::CounterOverflow
//    testBitsEqual(TReg::EGR::Address, 1 << 0); // reInit -> EGR::UG::ReInit
//    testBitsEqual(TReg::CR1::Address, 1 << 0); // start -> CR1::CEN::Enable
//    testBitsEqual(TReg::SR::Address, 1 << 0, false); // start -> CR1::SR::Enable
//    testBitsEqual(TReg::CR1::Address, 1 << 0, false); // stop -> CR1::CEN::Disable
//}