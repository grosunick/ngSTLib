#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <gpio/Pin.hpp>

using namespace ng;

#include <hardware/STM32L1xx/GpioaRegisters.hpp>

TEST(Pin, get) {
    getRegister(ngGPIOA::IDR::Address) = 0b1U;
    EXPECT_EQ((Pin<ngGPIOA, 0>::get()), 1U);

    getRegister(ngGPIOA::IDR::Address) = 0b10U;
    EXPECT_EQ((Pin<ngGPIOA, 0>::get()), 0U);
}

TEST(Pin, set) {
    Pin<ngGPIOA, 1>::set();
    EXPECT_EQ(getRegister(ngGPIOA::BSRR::Address).getValue(), 0b10U);
}

TEST(Pin, reset) {
    Pin<ngGPIOA, 1>::reset();
    EXPECT_EQ(getRegister(ngGPIOA::BSRR::Address).getValue(), (0b10U << 16));
}

TEST(Pin, toggle) {
    getRegister(ngGPIOA::ODR::Address) = 0b10U;
    Pin<ngGPIOA, 1>::toggle();

    EXPECT_EQ(getRegister(ngGPIOA::ODR::Address).getValue(), 0U);
}

TEST(Pin, setInput) {
    getRegister(ngGPIOA::MODER::Address) = 0b1100;
    Pin<ngGPIOA, 1>::template setInput();
    EXPECT_EQ(getRegister(ngGPIOA::MODER::Address).getValue(), 0b0000U);
    EXPECT_EQ(getRegister(ngGPIOA::PUPDR::Address).getValue(), 0b0000U);

    getRegister(ngGPIOA::MODER::Address) = 0b1100;
    Pin<ngGPIOA, 1>::template setInput<InputPullUp::Up>();
    EXPECT_EQ(getRegister(ngGPIOA::MODER::Address).getValue(), 0b0000U);
    EXPECT_EQ(getRegister(ngGPIOA::PUPDR::Address).getValue(), 0b0100U);

    getRegister(ngGPIOA::MODER::Address) = 0b1100;
    Pin<ngGPIOA, 1>::template setInput<InputPullUp::Down>();
    EXPECT_EQ(getRegister(ngGPIOA::MODER::Address).getValue(), 0b0000U);
    EXPECT_EQ(getRegister(ngGPIOA::PUPDR::Address).getValue(), 0b1000U);
}

TEST(Pin, setOutput) {
    getRegister(ngGPIOA::MODER::Address) = 0b1100;
    Pin<ngGPIOA, 1>::template setOutput<OutputType::PushPull, OutputSpeed::Low>();
    EXPECT_EQ(getRegister(ngGPIOA::MODER::Address).getValue(), 0b0100U);
    EXPECT_EQ(getRegister(ngGPIOA::OTYPER::Address).getValue(), 0b00U);
    EXPECT_EQ(getRegister(ngGPIOA::OSPEEDER::Address).getValue(), 0b00U);

    getRegister(ngGPIOA::MODER::Address) = 0b1100;
    Pin<ngGPIOA, 1>::template setOutput<OutputType::PushPull, OutputSpeed::Medium>();
    EXPECT_EQ(getRegister(ngGPIOA::MODER::Address).getValue(), 0b0100U);
    EXPECT_EQ(getRegister(ngGPIOA::OTYPER::Address).getValue(), 0b00U);
    EXPECT_EQ(getRegister(ngGPIOA::OSPEEDER::Address).getValue(), 0b0100U);

    getRegister(ngGPIOA::MODER::Address) = 0b1100;
    Pin<ngGPIOA, 1>::template setOutput<OutputType::PushPull, OutputSpeed::High>();
    EXPECT_EQ(getRegister(ngGPIOA::MODER::Address).getValue(), 0b0100U);
    EXPECT_EQ(getRegister(ngGPIOA::OTYPER::Address).getValue(), 0b00U);
    EXPECT_EQ(getRegister(ngGPIOA::OSPEEDER::Address).getValue(), 0b1000U);

    getRegister(ngGPIOA::MODER::Address) = 0b1100;
    Pin<ngGPIOA, 1>::template setOutput<OutputType::OpenDrain, OutputSpeed::Max>();
    EXPECT_EQ(getRegister(ngGPIOA::MODER::Address).getValue(), 0b0100U);
    EXPECT_EQ(getRegister(ngGPIOA::OTYPER::Address).getValue(), 0b10U);
    EXPECT_EQ(getRegister(ngGPIOA::OSPEEDER::Address).getValue(), 0b1100U);
}

TEST(Pin, setAlternate) {
    getRegister(ngGPIOA::MODER::Address) = 0b0;
    Pin<ngGPIOA, 1, AlternateFn::AF1>::template setAlternate<
        OutputType::PushPull, InputPullUp::No, OutputSpeed::Max
    >();
    EXPECT_EQ(getRegister(ngGPIOA::MODER::Address).getValue(), 0b1000U);
    EXPECT_EQ(getRegister(ngGPIOA::AFRL::Address).getValue(), 0b00010000U);
    
    Pin<ngGPIOA, 0, AlternateFn::AF2>::template setAlternate<
        OutputType::PushPull, InputPullUp::No, OutputSpeed::Max
    >();
    EXPECT_EQ(getRegister(ngGPIOA::AFRL::Address).getValue(), 0b00010010U);
    EXPECT_EQ(getRegister(ngGPIOA::PUPDR::Address).getValue(), 0b00U);
    
    Pin<ngGPIOA, 0, AlternateFn::AF2>::template setAlternate<
        OutputType::PushPull, InputPullUp::Up, OutputSpeed::Max
    >();
    EXPECT_EQ(getRegister(ngGPIOA::AFRL::Address).getValue(), 0b00010010U);
    EXPECT_EQ(getRegister(ngGPIOA::PUPDR::Address).getValue(), 0b01U);
    
    Pin<ngGPIOA, 8, AlternateFn::AF2>::template setAlternate<
        OutputType::PushPull, InputPullUp::Down,  OutputSpeed::Max
    >();
    EXPECT_EQ(getRegister(ngGPIOA::AFRH::Address).getValue(), 0b0010U);
    EXPECT_EQ((getRegister(ngGPIOA::PUPDR::Address).getValue() & 0b10U << 8 * 2), 0b10 << 8 * 2);
    
    Pin<ngGPIOA, 9, AlternateFn::AF2>::template setAlternate<
        OutputType::PushPull, InputPullUp::No,  OutputSpeed::Max
    >();
    EXPECT_EQ(getRegister(ngGPIOA::AFRH::Address).getValue(), 0b00100010U);
    
    Pin<ngGPIOA, 9, AlternateFn::AF2>::template setAlternate<
        OutputType::PushPull, InputPullUp::No,  OutputSpeed::Max
    >();
    EXPECT_EQ(getRegister(ngGPIOA::AFRH::Address).getValue(), 0b00100010U);
}

TEST(Pin, setAnalog) {
    getRegister(ngGPIOA::MODER::Address) = 0b0;
    Pin<ngGPIOA, 1>::setAnalog();
    EXPECT_EQ(getRegister(ngGPIOA::MODER::Address).getValue(), 0b1100U);
}