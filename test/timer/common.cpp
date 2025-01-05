#include <gtest/gtest.h>
#include <register/getPort.h>
#include <stdint.h>
#include "common.hpp"

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
        auto v = get<1>(el);
        ASSERT_TRUE((v & val) == val);
    } else {
        ASSERT_FALSE(get<1>(el) & val);
    }
    
    eventLog.erase(eventLog.cbegin());
}

void initTimReg() {
    ngTIM3::PSC::write(0);
    ngTIM3::ARR::write(0);
    ngTIM3::CNT::write(0);
    ngTIM3::CR1::write(0);
    ngTIM3::DIER::write(0);
    ngTIM3::EGR::write(0);
    ngTIM3::SR::write(0);
    ngTIM3::CCMR1_Output::write(0);
    ngTIM3::CCMR2_Output::write(0);
}
