#pragma once

#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <register/FieldValue.hpp>
#include <timer/Timer.hpp>

using namespace ng;

struct StructBase {};

constexpr uint32_t TPortW1 = 1U;
constexpr uint32_t TPortW2 = 2U;
constexpr uint32_t TPortW3 = 3U;
constexpr uint32_t TPortW4 = 4U;
constexpr uint32_t TPortW5 = 5U;
constexpr uint32_t TPortW6 = 6U;
constexpr uint32_t TPortW7 = 7U;

struct TReg {
    struct PSC: public Register<TPortW1, ReadWrite> {
        struct PSCField: public RegisterField<PSC, 0, 16, ReadWrite> {};
    };
    struct ARR: public Register<TPortW2, ReadWrite> {
        struct ARRField: public RegisterField<ARR, 0, 16, ReadWrite> {};
    };
    struct CNT: public Register<TPortW3, ReadWrite> {
        struct CNTField: public RegisterField<CNT, 0, 16, ReadWrite> {};
    };
    struct CR1: public Register<TPortW4, ReadWrite> {
        struct ARPE: public RegisterField<CR1, 7, 1, ReadWrite> {
            using NotBuffered = FieldValue<ARPE, 0U, StructBase>;
            using Buffered = FieldValue<ARPE, 1U, StructBase>;
        };
        struct URS: public RegisterField<CR1, 2, 1, ReadWrite> {
            using AllEvents = FieldValue<URS, 0U, StructBase>;
            using CounterOverflow = FieldValue<URS, 1U, StructBase>;
        };
        struct CEN: public RegisterField<CR1, 0, 1, ReadWrite> {
            using Disable = FieldValue<CEN, 0U, StructBase>;
            using Enable = FieldValue<CEN, 1U, StructBase>;
        };
    };
    struct DIER: public Register<TPortW5, ReadWrite> {
        struct UIE: public RegisterField<DIER, 0, 1, ReadWrite> {
            using Disabled = FieldValue<UIE, 0U, StructBase>;
            using Enabled = FieldValue<UIE, 1U, StructBase>;
        };
    };
    struct EGR: public Register<TPortW6, ReadWrite> {
        struct UG: public RegisterField<EGR, 0, 1, ReadWrite> {
            using ReInit = FieldValue<UG, 1U, StructBase>;
        };
    };
    struct SR: public Register<TPortW7, ReadWrite> {
        struct UIF: public RegisterField<SR, 0, 1, ReadWrite> {
            using Cleared = FieldValue<UIF, 0U, StructBase>;
            using Updated = FieldValue<UIF, 1U, StructBase>;
        };
    };
};