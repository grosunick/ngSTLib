#include <gtest/gtest.h>
#include <gpio/Pin.hpp>
#include <gpio/VirtualPort.hpp>

using namespace ng;

constexpr uint32_t TPORT1 = 0x1U;
constexpr uint32_t TPORT2 = 0x2U;

using PinA0 = Pin<TPORT1, 0>;
using PinA1 = Pin<TPORT1, 1>;
using PinB1 = Pin<TPORT2, 1>;
using PinB3 = Pin<TPORT2, 3>;

TEST(VirtualPort, set) {
    VirtualPort<PinB3, PinA1, PinB1, PinA0>::set(0b1111);

    EXPECT_EQ(ng::testPort1.BSRR.getValue(), 0b11);
    EXPECT_EQ(ng::testPort2.BSRR.getValue(), 0b1010);
}

TEST(VirtualPort, reset) {
    VirtualPort<PinB3, PinA1, PinB1, PinA0>::reset(0b1111);

    EXPECT_EQ(ng::testPort1.BSRR.getValue(), (0b11 << 16U));
    EXPECT_EQ(ng::testPort2.BSRR.getValue(), (0b1010 << 16U));
}

TEST(VirtualPort, togle) {
    ng::testPort1.ODR = 0b10;
    ng::testPort2.ODR = 0b1000;

    VirtualPort<PinB3, PinA1, PinB1, PinA0>::toggle(0b1111);

    EXPECT_EQ(ng::testPort1.ODR.getValue(), 0b01);
    EXPECT_EQ(ng::testPort2.ODR.getValue(), 0b0010);
}

TEST(VirtualPort, get) {
    ng::testPort1.IDR = 0b10;
    ng::testPort2.IDR = 0b1000;
    auto val = VirtualPort<PinB3, PinA1, PinB1, PinA0>::get();
    EXPECT_EQ(val, 0b1100U);

    ng::testPort1.IDR = 0b01;
    ng::testPort2.IDR = 0b0000;
    val = VirtualPort<PinB3, PinA1, PinB1, PinA0>::get();
    EXPECT_EQ(val, 0b1U);

    ng::testPort1.IDR = 0b01;
    ng::testPort2.IDR = 0b0010;
    val = VirtualPort<PinB3, PinA1, PinB1, PinA0>::get();
    EXPECT_EQ(val, 0b11U);
}