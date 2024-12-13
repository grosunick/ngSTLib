#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <gpio/Port.hpp>
#include <gpio/Pin.hpp>
#include <gpio/VirtualPort.hpp>

using namespace ng;

constexpr uint32_t TPort1W = 1U;
constexpr uint32_t TPort1R = 2U;
constexpr uint32_t TPort2W = 3U;
constexpr uint32_t TPort2R = 4U;

struct TReg1 {
    struct BSRR: public Register<TPort1W, ReadWrite> {};
    struct IDR: public Register<TPort1R, Read> {};
};

struct TReg2 {
    struct BSRR: public Register<TPort2W, ReadWrite> {};
    struct IDR: public Register<TPort2R, Read> {};
};

using PinA0 = Pin<Port<TReg1>, 0>;
using PinA1 = Pin<Port<TReg1>, 1>;
using PinB1 = Pin<Port<TReg2>, 1>;
using PinB3 = Pin<Port<TReg2>, 3>;

TEST(VirtualPort, set) {
    VirtualPort<PinB3, PinA1, PinB1, PinA0>::set(0b1111);

    EXPECT_EQ(getRegister(TPort1W).getValue(), 0b11);
    EXPECT_EQ(getRegister(TPort2W).getValue(), 0b1010);
}

TEST(VirtualPort, reset) {
    VirtualPort<PinB3, PinA1, PinB1, PinA0>::reset(0b1111);

    EXPECT_EQ(getRegister(TPort1W).getValue(), (0b11 << 16U));
    EXPECT_EQ(getRegister(TPort2W).getValue(), (0b1010 << 16U));
}

TEST(VirtualPort, togle) {
    getRegister(TPort1W) = 0b10;
    getRegister(TPort2W) = 0b1000;

    VirtualPort<PinB3, PinA1, PinB1, PinA0>::toggle(0b1111);

    EXPECT_EQ(getRegister(TPort1W).getValue(), 0b01);
    EXPECT_EQ(getRegister(TPort2W).getValue(), 0b0010);
}

TEST(VirtualPort, get) {
    getRegister(TPort1R) = 0b10;
    getRegister(TPort2R) = 0b1000;
    auto val = VirtualPort<PinB3, PinA1, PinB1, PinA0>::get();
    EXPECT_EQ(val, 0b1100U);

    getRegister(TPort1R) = 0b01;
    getRegister(TPort2R) = 0b0000;
    val = VirtualPort<PinB3, PinA1, PinB1, PinA0>::get();
    EXPECT_EQ(val, 0b1U);

    getRegister(TPort1R) = 0b01;
    getRegister(TPort2R) = 0b0010;
    val = VirtualPort<PinB3, PinA1, PinB1, PinA0>::get();
    EXPECT_EQ(val, 0b11U);
}