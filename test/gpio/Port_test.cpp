#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <gpio/Port.hpp>

using namespace ng;

#include <hardware/STM32L1xx/GpioaRegisters.hpp>

using TPort = Port<ngGPIOA>;

TEST(Port, set) {
    TPort::set(0b11);
    EXPECT_EQ(getRegister(ngGPIOA::BSRR::Address).getValue(), 0b11);

    TPort::template set<0b10>();
    EXPECT_EQ(getRegister(ngGPIOA::BSRR::Address).getValue(), 0b10);
}

TEST(Port, reset) {
    TPort::reset(0b11);
    EXPECT_EQ(getRegister(ngGPIOA::BSRR::Address).getValue(), (0b11 << 16U));

    TPort::template reset<0b10>();
    EXPECT_EQ(getRegister(ngGPIOA::BSRR::Address).getValue(), (0b10 << 16U));
}

TEST(Port, toggle) {
    getRegister(ngGPIOA::ODR::Address) = 0b101;

    TPort::toggle(0b111);
    EXPECT_EQ(getRegister(ngGPIOA::ODR::Address).getValue(), 0b010);

    TPort::template toggle<0b111>();
    EXPECT_EQ(getRegister(ngGPIOA::ODR::Address).getValue(), 0b101);
}

TEST(Port, get) {
    getRegister(ngGPIOA::IDR::Address) = 0U;
    EXPECT_EQ(TPort::get(), 0U);

    getRegister(ngGPIOA::IDR::Address) = 1U;
    EXPECT_EQ(TPort::get(), 1U);
}

TEST(Port, validValue) {
    EXPECT_EQ(TPort::set(1), true);
    EXPECT_EQ(TPort::reset(1), true);
    EXPECT_EQ(TPort::toggle(1), true);
    EXPECT_EQ(TPort::set(1 << 16U), true);

    EXPECT_EQ(TPort::set(1 << 17U), false);
    EXPECT_EQ(TPort::reset(1 << 17U), false);
    EXPECT_EQ(TPort::toggle(1 << 17U), false);
}