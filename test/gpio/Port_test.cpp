#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <gpio/Port.hpp>

using namespace ng;

constexpr uint32_t TPortR = 0U;
constexpr uint32_t TPortW1 = 1U;
constexpr uint32_t TPortW2 = 2U;

struct TReg {
    struct IDR: public Register<TPortR, Read> {};
    struct BSRR: public Register<TPortW1, ReadWrite> {};
    struct ODR: public Register<TPortW2, ReadWrite> {};
};

using TPort = Port<TReg>;

TEST(Port, set) {
    TPort::set(0b11);
    EXPECT_EQ(getRegister(TReg::BSRR::Address).getValue(), 0b11);
}

TEST(Port, reset) {
    TPort::reset(0b11);
    EXPECT_EQ(getRegister(TReg::BSRR::Address).getValue(), (0b11 << 16U));
}

TEST(Port, toggle) {
    getRegister(TReg::ODR::Address) = 0b101;
    TPort::toggle(0b111);

    EXPECT_EQ(getRegister(TReg::ODR::Address).getValue(), 0b010);
}

TEST(Port, get) {
    getRegister(TPortR) = 0U;
    EXPECT_EQ(TPort::get(), 0U);

    getRegister(TPortR) = 1U;
    EXPECT_EQ(TPort::get(), 1U);
}

TEST(Port, validValue) {
    EXPECT_EQ(TPort::set(1), true);
    EXPECT_EQ(TPort::reset(1), true);
    EXPECT_EQ(TPort::toggle(1), true);
    EXPECT_EQ(TPort::set(1 << 16U), true);

    EXPECT_EQ(TPort::set(1 << 17U), false);
    EXPECT_EQ(TPort::reset(1 << 17U), false);
    EXPECT_EQ(Port<TReg>::toggle(1 << 17U), false);
}