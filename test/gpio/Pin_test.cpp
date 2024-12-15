#include <gtest/gtest.h>
#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <register/FieldValue.hpp>
#include <gpio/Pin.hpp>

using namespace ng;

struct StructBase {};

constexpr uint32_t TPortR = 0U;
constexpr uint32_t TPortW1 = 1U;
constexpr uint32_t TPortW2 = 2U;
constexpr uint32_t TPortW3 = 3U;
constexpr uint32_t TPortW4 = 4U;
constexpr uint32_t TPortW5 = 5U;

struct TReg {
    struct IDR: public Register<TPortR, ReadWrite> {};
    struct ODR: public Register<TPortR, ReadWrite> {};
    struct BSRR: public Register<TPortW1, ReadWrite> {};
    struct MODER: public Register<TPortW2, ReadWrite> {
        struct FieldValues: public RegisterField<MODER, 0, 2, StructBase> {
            using Input = FieldValue<FieldValues, 0U, StructBase>;
            using Output = FieldValue<FieldValues, 1U, StructBase>;
            using Alternate = FieldValue<FieldValues, 2U, StructBase>;
            using Analog = FieldValue<FieldValues, 3U, StructBase>;
        };
    };
    struct PUPDR: public Register<TPortW3, ReadWrite> {
        struct FieldValues: public RegisterField<PUPDR, 0, 2, StructBase> {
            using NoPullUpPullDown = FieldValue<FieldValues, 0U, StructBase>;
            using PullUp = FieldValue<FieldValues, 1U, StructBase>;
            using PullDown = FieldValue<FieldValues, 2U, StructBase>;
        };
    };
    struct OTYPER: public Register<TPortW4, ReadWrite> {
        struct FieldValues: public RegisterField<OTYPER, 0, 1, StructBase> {
            using PushPull = FieldValue<FieldValues, 0U, StructBase>;
            using OpenDrain = FieldValue<FieldValues, 1U, StructBase>;
        };
    };
    struct OSPEEDER: public Register<TPortW5, ReadWrite> {
        struct FieldValues: public RegisterField<OTYPER, 0, 2, StructBase> {
            using Low = FieldValue<FieldValues, 0U, StructBase>;
            using Medium = FieldValue<FieldValues, 1U, StructBase>;
            using High = FieldValue<FieldValues, 2U, StructBase>;
            using Max = FieldValue<FieldValues, 3U, StructBase>;
        };
    };
};

TEST(Pin, get) {
    getRegister(TReg::IDR::Address) = 0b1U;
    EXPECT_EQ((Pin<Port<TReg>, 0>::get()), 1U);

    getRegister(TReg::IDR::Address) = 0b10U;
    EXPECT_EQ((Pin<Port<TReg>, 0>::get()), 0U);
}

TEST(Pin, set) {
    Pin<Port<TReg>, 1>::set();
    EXPECT_EQ(getRegister(TReg::BSRR::Address).getValue(), 0b10U);
}

TEST(Pin, reset) {
    Pin<Port<TReg>, 1>::reset();
    EXPECT_EQ(getRegister(TReg::BSRR::Address).getValue(), (0b10U << 16));
}

TEST(Pin, toggle) {
    getRegister(TReg::ODR::Address) = 0b10U;
    Pin<Port<TReg>, 1>::toggle();

    EXPECT_EQ(getRegister(TReg::ODR::Address).getValue(), 0U);
}

TEST(Pin, setInput) {
    getRegister(TReg::MODER::Address) = 0b1100;
    Pin<Port<TReg>, 1>::setInput();
    EXPECT_EQ(getRegister(TReg::MODER::Address).getValue(), 0b0000U);
    EXPECT_EQ(getRegister(TReg::PUPDR::Address).getValue(), 0b0000U);

    getRegister(TReg::MODER::Address) = 0b1100;
    Pin<Port<TReg>, 1>::setInput(InputPullUp::Up);
    EXPECT_EQ(getRegister(TReg::MODER::Address).getValue(), 0b0000U);
    EXPECT_EQ(getRegister(TReg::PUPDR::Address).getValue(), 0b0100U);

    getRegister(TReg::MODER::Address) = 0b1100;
    Pin<Port<TReg>, 1>::setInput(InputPullUp::Down);
    EXPECT_EQ(getRegister(TReg::MODER::Address).getValue(), 0b0000U);
    EXPECT_EQ(getRegister(TReg::PUPDR::Address).getValue(), 0b1000U);
}

TEST(Pin, setOutput) {
    getRegister(TReg::MODER::Address) = 0b1100;
    Pin<Port<TReg>, 1>::setOutput(OutputType::PushPull, OutputSpeed::Low);
    EXPECT_EQ(getRegister(TReg::MODER::Address).getValue(), 0b0100U);
    EXPECT_EQ(getRegister(TReg::OTYPER::Address).getValue(), 0b00U);
    EXPECT_EQ(getRegister(TReg::OSPEEDER::Address).getValue(), 0b00U);

    getRegister(TReg::MODER::Address) = 0b1100;
    Pin<Port<TReg>, 1>::setOutput(OutputType::PushPull, OutputSpeed::Medium);
    EXPECT_EQ(getRegister(TReg::MODER::Address).getValue(), 0b0100U);
    EXPECT_EQ(getRegister(TReg::OTYPER::Address).getValue(), 0b00U);
    EXPECT_EQ(getRegister(TReg::OSPEEDER::Address).getValue(), 0b0100U);

    getRegister(TReg::MODER::Address) = 0b1100;
    Pin<Port<TReg>, 1>::setOutput(OutputType::PushPull, OutputSpeed::High);
    EXPECT_EQ(getRegister(TReg::MODER::Address).getValue(), 0b0100U);
    EXPECT_EQ(getRegister(TReg::OTYPER::Address).getValue(), 0b00U);
    EXPECT_EQ(getRegister(TReg::OSPEEDER::Address).getValue(), 0b1000U);

    getRegister(TReg::MODER::Address) = 0b1100;
    Pin<Port<TReg>, 1>::setOutput(OutputType::OpenDrain, OutputSpeed::Max);
    EXPECT_EQ(getRegister(TReg::MODER::Address).getValue(), 0b0100U);
    EXPECT_EQ(getRegister(TReg::OTYPER::Address).getValue(), 0b10U);
    EXPECT_EQ(getRegister(TReg::OSPEEDER::Address).getValue(), 0b1100U);
}

TEST(Pin, setAnalog) {
    getRegister(TReg::MODER::Address) = 0b0;
    Pin<Port<TReg>, 1>::setAnalog();
    EXPECT_EQ(getRegister(TReg::MODER::Address).getValue(), 0b1100U);
}