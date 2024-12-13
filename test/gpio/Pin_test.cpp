#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <gpio/Pin.hpp>

using namespace ng;

constexpr uint32_t TPortW = 1U;
constexpr uint32_t TPortR = 0U;

struct TReg {
    struct BSRR: public Register<TPortW, ReadWrite> {};
    struct IDR: public Register<TPortR, Read> {};
};

TEST(Pin, get) {
    getRegister(TPortR) = 0b1U;
    EXPECT_EQ((Pin<Port<TReg>, 0>::get()), 1U);

    getRegister(TPortR) = 0b10U;
    EXPECT_EQ((Pin<Port<TReg>, 0>::get()), 0U);
}

TEST(Pin, set) {
    Pin<Port<TReg>, 1>::set();
    EXPECT_EQ(getRegister(TPortW).getValue(), 0b10U);
}

TEST(Pin, reset) {
    Pin<Port<TReg>, 1>::reset();
    EXPECT_EQ(getRegister(TPortW).getValue(), (0b10U << 16));
}

TEST(Pin, toggle) {
    getRegister(TPortW) = 0b10U;
    Pin<Port<TReg>, 1>::toggle();

    EXPECT_EQ(getRegister(TPortW).getValue(), 0U);
}
