#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <gpio/Port.hpp>
#include <gpio/Pin.hpp>
#include <gpio/VirtualPort.hpp>

using namespace ng;

constexpr uint32_t TPortR1 = 0U;
constexpr uint32_t TPortW1 = 1U;
constexpr uint32_t TPortW2 = 2U;

constexpr uint32_t TPortR2 = 3U;
constexpr uint32_t TPortW3 = 4U;
constexpr uint32_t TPortW4 = 5U;


struct TReg1 {
    struct IDR: public Register<TPortR1, ReadWrite> {};
    struct BSRR: public Register<TPortW1, ReadWrite> {};
    struct ODR: public Register<TPortW2, ReadWrite> {};
};

struct TReg2 {
    struct IDR: public Register<TPortR2, ReadWrite> {};
    struct BSRR: public Register<TPortW3, ReadWrite> {};
    struct ODR: public Register<TPortW4, ReadWrite> {};
};

using PinA0 = Pin<Port<TReg1>, 0>;
using PinA1 = Pin<Port<TReg1>, 1>;
using PinB1 = Pin<Port<TReg2>, 1>;
using PinB3 = Pin<Port<TReg2>, 3>;

using VPort = VirtualPort<PinB3, PinA1, PinB1, PinA0>;

TEST(VirtualPort, set) {
    VPort::set(0b1111);

    EXPECT_EQ(getRegister(TReg1::BSRR::Address).getValue(), 0b11);
    EXPECT_EQ(getRegister(TReg2::BSRR::Address).getValue(), 0b1010);
}

TEST(VirtualPort, reset) {
    VPort::reset(0b1111);

    EXPECT_EQ(getRegister(TReg1::BSRR::Address).getValue(), (0b11 << 16U));
    EXPECT_EQ(getRegister(TReg2::BSRR::Address).getValue(), (0b1010 << 16U));
}

TEST(VirtualPort, togle) {
    getRegister(TReg1::ODR::Address) = 0b10;
    getRegister(TReg2::ODR::Address) = 0b1000;

    VPort::toggle(0b1111);

    EXPECT_EQ(getRegister(TReg1::ODR::Address).getValue(), 0b01);
    EXPECT_EQ(getRegister(TReg2::ODR::Address).getValue(), 0b0010);
}

TEST(VirtualPort, get) {
    getRegister(TReg1::IDR::Address) = 0b10;
    getRegister(TReg2::IDR::Address) = 0b1000;
    EXPECT_EQ(VPort::get(), 0b1100U);

    getRegister(TReg1::IDR::Address) = 0b01;
    getRegister(TReg2::IDR::Address) = 0b0000;
    EXPECT_EQ(VPort::get(), 0b1U);

    getRegister(TReg1::IDR::Address) = 0b01;
    getRegister(TReg2::IDR::Address) = 0b0010;
    EXPECT_EQ(VPort::get(), 0b11U);
}