#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <gpio/Port.hpp>
#include <gpio/Pin.hpp>
#include <gpio/VirtualPort.hpp>

using namespace ng;

#include <hardware/STM32L1xx/GpioaRegisters.hpp>
#include <hardware/STM32L1xx/GpiobRegisters.hpp>

using PinA0 = Pin<ngGPIOA, 0>;
using PinA1 = Pin<ngGPIOA, 1>;
using PinB1 = Pin<ngGPIOB, 1>;
using PinB3 = Pin<ngGPIOB, 3>;

using VPort = VirtualPort<PinB3, PinA1, PinB1, PinA0>;

TEST(VirtualPort, set) {
    VPort::set(0b1111);

    EXPECT_EQ(getRegister(ngGPIOA::BSRR::Address).getValue(), 0b11);
    EXPECT_EQ(getRegister(ngGPIOB::BSRR::Address).getValue(), 0b1010);
}

TEST(VirtualPort, reset) {
    VPort::reset(0b1111);

    EXPECT_EQ(getRegister(ngGPIOA::BSRR::Address).getValue(), (0b11 << 16U));
    EXPECT_EQ(getRegister(ngGPIOB::BSRR::Address).getValue(), (0b1010 << 16U));
}

TEST(VirtualPort, togle) {
    getRegister(ngGPIOA::ODR::Address) = 0b10;
    getRegister(ngGPIOB::ODR::Address) = 0b1000;

    VPort::toggle(0b1111);

    EXPECT_EQ(getRegister(ngGPIOA::ODR::Address).getValue(), 0b01);
    EXPECT_EQ(getRegister(ngGPIOB::ODR::Address).getValue(), 0b0010);
}

TEST(VirtualPort, get) {
    getRegister(ngGPIOA::IDR::Address) = 0b10;
    getRegister(ngGPIOB::IDR::Address) = 0b1000;
    EXPECT_EQ(VPort::get(), 0b1100U);

    getRegister(ngGPIOA::IDR::Address) = 0b01;
    getRegister(ngGPIOB::IDR::Address) = 0b0000;
    EXPECT_EQ(VPort::get(), 0b1U);

    getRegister(ngGPIOA::IDR::Address) = 0b01;
    getRegister(ngGPIOB::IDR::Address) = 0b0010;
    EXPECT_EQ(VPort::get(), 0b11U);
}