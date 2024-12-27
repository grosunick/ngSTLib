#pragma once

#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <register/FieldValue.hpp>
#include <timer/Timer.hpp>

using namespace ng;

struct TStructBase {};

constexpr uint32_t TPortR = 0U;
constexpr uint32_t TPortW1 = 1U;
constexpr uint32_t TPortW2 = 2U;
constexpr uint32_t TPortW3 = 3U;
constexpr uint32_t TPortW4 = 4U;
constexpr uint32_t TPortW5 = 5U;
constexpr uint32_t TPortW6 = 6U;
constexpr uint32_t TPortW7 = 7U;

struct TGpioReg {
    struct IDR: public Register<TPortR, ReadWrite> {};
    struct ODR: public Register<TPortR, ReadWrite> {};
    struct BSRR: public Register<TPortW1, ReadWrite> {};
    struct MODER: public Register<TPortW2, ReadWrite> {
        struct FieldValues: public RegisterField<MODER, 0, 2, TStructBase> {
            using Input = FieldValue<FieldValues, 0U, TStructBase>;
            using Output = FieldValue<FieldValues, 1U, TStructBase>;
            using Alternate = FieldValue<FieldValues, 2U, TStructBase>;
            using Analog = FieldValue<FieldValues, 3U, TStructBase>;
        };
    };
    struct PUPDR: public Register<TPortW3, ReadWrite> {
        struct FieldValues: public RegisterField<PUPDR, 0, 2, TStructBase> {
            using NoPullUpPullDown = FieldValue<FieldValues, 0U, TStructBase>;
            using PullUp = FieldValue<FieldValues, 1U, TStructBase>;
            using PullDown = FieldValue<FieldValues, 2U, TStructBase>;
        };
    };
    struct OTYPER: public Register<TPortW4, ReadWrite> {
        struct FieldValues: public RegisterField<OTYPER, 0, 1, TStructBase> {
            using PushPull = FieldValue<FieldValues, 0U, TStructBase>;
            using OpenDrain = FieldValue<FieldValues, 1U, TStructBase>;
        };
    };
    struct OSPEEDER: public Register<TPortW5, ReadWrite> {
        struct FieldValues: public RegisterField<OSPEEDER, 0, 2, TStructBase> {
            using Low = FieldValue<FieldValues, 0U, TStructBase>;
            using Medium = FieldValue<FieldValues, 1U, TStructBase>;
            using High = FieldValue<FieldValues, 2U, TStructBase>;
            using Max = FieldValue<FieldValues, 3U, TStructBase>;
        };
    };
    struct AFRL: public Register<TPortW6, ReadWrite> {
        struct FieldValues: public RegisterField<AFRL, 0, 4, TStructBase> {
            using AF0 = FieldValue<FieldValues, 0U, TStructBase>;
            using AF1 = FieldValue<FieldValues, 1U, TStructBase>;
            using AF2 = FieldValue<FieldValues, 2U, TStructBase>;
            using AF3 = FieldValue<FieldValues, 3U, TStructBase>;
            using AF4 = FieldValue<FieldValues, 4U, TStructBase>;
            using AF5 = FieldValue<FieldValues, 5U, TStructBase>;
            using AF6 = FieldValue<FieldValues, 6U, TStructBase>;
            using AF7 = FieldValue<FieldValues, 7U, TStructBase>;
            using AF8 = FieldValue<FieldValues, 8U, TStructBase>;
            using AF9 = FieldValue<FieldValues, 9U, TStructBase>;
            using AF10 = FieldValue<FieldValues, 10U, TStructBase>;
            using AF11 = FieldValue<FieldValues, 11U, TStructBase>;
            using AF12 = FieldValue<FieldValues, 12U, TStructBase>;
            using AF13 = FieldValue<FieldValues, 13U, TStructBase>;
            using AF14 = FieldValue<FieldValues, 14U, TStructBase>;
            using AF15 = FieldValue<FieldValues, 15U, TStructBase>;
        };
    };
    struct AFRH: public Register<TPortW7, ReadWrite> {
        struct FieldValues: public RegisterField<AFRH, 0, 4, TStructBase> {
            using AF0 = FieldValue<FieldValues, 0U, TStructBase>;
            using AF1 = FieldValue<FieldValues, 1U, TStructBase>;
            using AF2 = FieldValue<FieldValues, 2U, TStructBase>;
            using AF3 = FieldValue<FieldValues, 3U, TStructBase>;
            using AF4 = FieldValue<FieldValues, 4U, TStructBase>;
            using AF5 = FieldValue<FieldValues, 5U, TStructBase>;
            using AF6 = FieldValue<FieldValues, 6U, TStructBase>;
            using AF7 = FieldValue<FieldValues, 7U, TStructBase>;
            using AF8 = FieldValue<FieldValues, 8U, TStructBase>;
            using AF9 = FieldValue<FieldValues, 9U, TStructBase>;
            using AF10 = FieldValue<FieldValues, 10U, TStructBase>;
            using AF11 = FieldValue<FieldValues, 11U, TStructBase>;
            using AF12 = FieldValue<FieldValues, 12U, TStructBase>;
            using AF13 = FieldValue<FieldValues, 13U, TStructBase>;
            using AF14 = FieldValue<FieldValues, 14U, TStructBase>;
            using AF15 = FieldValue<FieldValues, 15U, TStructBase>;
        };
    };
};