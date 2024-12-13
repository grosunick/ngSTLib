#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <gpio/Port.hpp>

using namespace ng;

constexpr uint32_t TPortW = 1U;
constexpr uint32_t TPortR = 0U;

struct TReg {
    struct BSRR: public Register<TPortW, ReadWrite> {};
    struct IDR: public Register<TPortR, Read> {};
};

TEST(Port, set) {
    Port<TReg>::set(0b11);
    EXPECT_EQ(getRegister(TPortW).getValue(), 0b11);
}

TEST(Port, reset) {
    Port<TReg>::reset(0b11);
    EXPECT_EQ(getRegister(TPortW).getValue(), (0b11 << 16U));
}

TEST(Port, toggle) {
    getRegister(TPortW) = 0b101;
    Port<TReg>::toggle(0b111);

    EXPECT_EQ(getRegister(TPortW).getValue(), 0b010);
}

TEST(Port, get) {
    getRegister(TPortR) = 0U;
    EXPECT_EQ(Port<TReg>::get(), 0U);

    getRegister(TPortR) = 1U;
    EXPECT_EQ(Port<TReg>::get(), 1U);
}

TEST(Port, validValue) {
    EXPECT_EQ(Port<TReg>::set(1), true);
    EXPECT_EQ(Port<TReg>::reset(1), true);
    EXPECT_EQ(Port<TReg>::toggle(1), true);
    EXPECT_EQ(Port<TReg>::set(1 << 16U), true);

    EXPECT_EQ(Port<TReg>::set(1 << 17U), false);
    EXPECT_EQ(Port<TReg>::reset(1 << 17U), false);
    EXPECT_EQ(Port<TReg>::toggle(1 << 17U), false);
}