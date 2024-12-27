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

void init() {
    TReg::PSC::write(0);
    TReg::ARR::write(0);
    TReg::CNT::write(0);
    TReg::CR1::write(0);
    TReg::DIER::write(0);
    TReg::EGR::write(0);
    TReg::SR::write(0);
}
