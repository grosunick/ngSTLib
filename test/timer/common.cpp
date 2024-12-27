#include <gtest/gtest.h>
#include <register/getPort.h>
#include <stdint.h>
#include "common.hpp"
#include "fixture.hpp"

using namespace ng;

void testRegisterEqual(const uint32_t address, uint32_t val) {
    auto el = eventLog[0];
    
    ASSERT_EQ(get<0>(el), address);
    ASSERT_EQ(get<1>(el), val);
    
    eventLog.erase(eventLog.cbegin());
}

void testBitsEqual(const uint32_t address, uint32_t val, bool equal) {
    auto el = eventLog[0];
    
    ASSERT_EQ(get<0>(el), address);
    if (equal) {
        ASSERT_TRUE(get<1>(el) & val);
    } else {
        ASSERT_FALSE(get<1>(el) & val);
    }
    
    eventLog.erase(eventLog.cbegin());
}

void initTimReg() {
    TTimReg::PSC::write(0);
    TTimReg::ARR::write(0);
    TTimReg::CNT::write(0);
    TTimReg::CR1::write(0);
    TTimReg::DIER::write(0);
    TTimReg::EGR::write(0);
    TTimReg::SR::write(0);
    TTimReg::CCMR1_Output::write(0);
    TTimReg::CCMR2_Output::write(0);
}
