#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <register/FieldValue.hpp>
#include <gpio/Pin.hpp>

using namespace ng;

#include "fixture.hpp"

TEST(Pin, get) {
    getRegister(TGpioReg::IDR::Address) = 0b1U;
    EXPECT_EQ((Pin<TGpioReg, 0>::get()), 1U);

    getRegister(TGpioReg::IDR::Address) = 0b10U;
    EXPECT_EQ((Pin<TGpioReg, 0>::get()), 0U);
}

TEST(Pin, set) {
    Pin<TGpioReg, 1>::set();
    EXPECT_EQ(getRegister(TGpioReg::BSRR::Address).getValue(), 0b10U);
}

TEST(Pin, reset) {
    Pin<TGpioReg, 1>::reset();
    EXPECT_EQ(getRegister(TGpioReg::BSRR::Address).getValue(), (0b10U << 16));
}

TEST(Pin, toggle) {
    getRegister(TGpioReg::ODR::Address) = 0b10U;
    Pin<TGpioReg, 1>::toggle();

    EXPECT_EQ(getRegister(TGpioReg::ODR::Address).getValue(), 0U);
}

TEST(Pin, setInput) {
    getRegister(TGpioReg::MODER::Address) = 0b1100;
    Pin<TGpioReg, 1>::template setInput();
    EXPECT_EQ(getRegister(TGpioReg::MODER::Address).getValue(), 0b0000U);
    EXPECT_EQ(getRegister(TGpioReg::PUPDR::Address).getValue(), 0b0000U);

    getRegister(TGpioReg::MODER::Address) = 0b1100;
    Pin<TGpioReg, 1>::template setInput<InputPullUp::Up>();
    EXPECT_EQ(getRegister(TGpioReg::MODER::Address).getValue(), 0b0000U);
    EXPECT_EQ(getRegister(TGpioReg::PUPDR::Address).getValue(), 0b0100U);

    getRegister(TGpioReg::MODER::Address) = 0b1100;
    Pin<TGpioReg, 1>::template setInput<InputPullUp::Down>();
    EXPECT_EQ(getRegister(TGpioReg::MODER::Address).getValue(), 0b0000U);
    EXPECT_EQ(getRegister(TGpioReg::PUPDR::Address).getValue(), 0b1000U);
}

TEST(Pin, setOutput) {
    getRegister(TGpioReg::MODER::Address) = 0b1100;
    Pin<TGpioReg, 1>::template setOutput<OutputType::PushPull, OutputSpeed::Low>();
    EXPECT_EQ(getRegister(TGpioReg::MODER::Address).getValue(), 0b0100U);
    EXPECT_EQ(getRegister(TGpioReg::OTYPER::Address).getValue(), 0b00U);
    EXPECT_EQ(getRegister(TGpioReg::OSPEEDER::Address).getValue(), 0b00U);

    getRegister(TGpioReg::MODER::Address) = 0b1100;
    Pin<TGpioReg, 1>::template setOutput<OutputType::PushPull, OutputSpeed::Medium>();
    EXPECT_EQ(getRegister(TGpioReg::MODER::Address).getValue(), 0b0100U);
    EXPECT_EQ(getRegister(TGpioReg::OTYPER::Address).getValue(), 0b00U);
    EXPECT_EQ(getRegister(TGpioReg::OSPEEDER::Address).getValue(), 0b0100U);

    getRegister(TGpioReg::MODER::Address) = 0b1100;
    Pin<TGpioReg, 1>::template setOutput<OutputType::PushPull, OutputSpeed::High>();
    EXPECT_EQ(getRegister(TGpioReg::MODER::Address).getValue(), 0b0100U);
    EXPECT_EQ(getRegister(TGpioReg::OTYPER::Address).getValue(), 0b00U);
    EXPECT_EQ(getRegister(TGpioReg::OSPEEDER::Address).getValue(), 0b1000U);

    getRegister(TGpioReg::MODER::Address) = 0b1100;
    Pin<TGpioReg, 1>::template setOutput<OutputType::OpenDrain, OutputSpeed::Max>();
    EXPECT_EQ(getRegister(TGpioReg::MODER::Address).getValue(), 0b0100U);
    EXPECT_EQ(getRegister(TGpioReg::OTYPER::Address).getValue(), 0b10U);
    EXPECT_EQ(getRegister(TGpioReg::OSPEEDER::Address).getValue(), 0b1100U);
}

TEST(Pin, setAlternate) {
    getRegister(TGpioReg::MODER::Address) = 0b0;
    Pin<TGpioReg, 1, AlternateFn::AF1>::template setAlternate<
        OutputType::PushPull, InputPullUp::No, OutputSpeed::Max
    >();
    EXPECT_EQ(getRegister(TGpioReg::MODER::Address).getValue(), 0b1000U);
    EXPECT_EQ(getRegister(TGpioReg::AFRL::Address).getValue(), 0b00010000U);
    
    Pin<TGpioReg, 0, AlternateFn::AF2>::template setAlternate<
        OutputType::PushPull, InputPullUp::No, OutputSpeed::Max
    >();
    EXPECT_EQ(getRegister(TGpioReg::AFRL::Address).getValue(), 0b00010010U);
    EXPECT_EQ(getRegister(TGpioReg::PUPDR::Address).getValue(), 0b00U);
    
    Pin<TGpioReg, 0, AlternateFn::AF2>::template setAlternate<
        OutputType::PushPull, InputPullUp::Up, OutputSpeed::Max
    >();
    EXPECT_EQ(getRegister(TGpioReg::AFRL::Address).getValue(), 0b00010010U);
    EXPECT_EQ(getRegister(TGpioReg::PUPDR::Address).getValue(), 0b01U);
    
    Pin<TGpioReg, 8, AlternateFn::AF2>::template setAlternate<
        OutputType::PushPull, InputPullUp::Down,  OutputSpeed::Max
    >();
    EXPECT_EQ(getRegister(TGpioReg::AFRH::Address).getValue(), 0b0010U);
    EXPECT_EQ((getRegister(TGpioReg::PUPDR::Address).getValue() & 0b10U << 8 * 2), 0b10 << 8 * 2);
    
    Pin<TGpioReg, 9, AlternateFn::AF2>::template setAlternate<
        OutputType::PushPull, InputPullUp::No,  OutputSpeed::Max
    >();
    EXPECT_EQ(getRegister(TGpioReg::AFRH::Address).getValue(), 0b00100010U);
    
    Pin<TGpioReg, 9, AlternateFn::AF2>::template setAlternate<
        OutputType::PushPull, InputPullUp::No,  OutputSpeed::Max
    >();
    EXPECT_EQ(getRegister(TGpioReg::AFRH::Address).getValue(), 0b00100010U);
}

TEST(Pin, setAnalog) {
    getRegister(TGpioReg::MODER::Address) = 0b0;
    Pin<TGpioReg, 1>::setAnalog();
    EXPECT_EQ(getRegister(TGpioReg::MODER::Address).getValue(), 0b1100U);
}