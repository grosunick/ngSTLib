#pragma once

#include <register/Register.hpp>
#include <register/RegisterField.hpp>
#include <register/FieldValue.hpp>
#include <timer/Timer.hpp>

using namespace ng;

struct TTimerStructBase {};

constexpr uint32_t TPSC = 11U;
constexpr uint32_t TARR = 12U;
constexpr uint32_t TCNT = 13U;
constexpr uint32_t TCR1 = 14U;
constexpr uint32_t TDIER = 15U;
constexpr uint32_t TEGR = 16U;
constexpr uint32_t TSR = 17U;
constexpr uint32_t TCCR1 = 18U;
constexpr uint32_t TCCMR1_Output = 18U;
constexpr uint32_t TCCER = 19U;
constexpr uint32_t TCCR2 = 20U;
constexpr uint32_t TCCR3 = 21U;
constexpr uint32_t TCCR4 = 22U;
constexpr uint32_t TCCMR2_Output = 23U;


struct TTimReg {
    struct PSC: public Register<TPSC, ReadWrite> {
        struct PSCField: public RegisterField<PSC, 0, 16, ReadWrite> {};
    };
    struct ARR: public Register<TARR, ReadWrite> {
        struct ARRField: public RegisterField<ARR, 0, 16, ReadWrite> {};
    };
    struct CNT: public Register<TCNT, ReadWrite> {
        struct CNTField: public RegisterField<CNT, 0, 16, ReadWrite> {};
    };
    struct CR1: public Register<TCR1, ReadWrite> {
        struct ARPE: public RegisterField<CR1, 7, 1, ReadWrite> {
            using NotBuffered = FieldValue<ARPE, 0U, TTimerStructBase>;
            using Buffered = FieldValue<ARPE, 1U, TTimerStructBase>;
        };
        struct URS: public RegisterField<CR1, 2, 1, ReadWrite> {
            using AllEvents = FieldValue<URS, 0U, TTimerStructBase>;
            using CounterOverflow = FieldValue<URS, 1U, TTimerStructBase>;
        };
        struct CEN: public RegisterField<CR1, 0, 1, ReadWrite> {
            using Disable = FieldValue<CEN, 0U, TTimerStructBase>;
            using Enable = FieldValue<CEN, 1U, TTimerStructBase>;
        };
    };
    struct DIER: public Register<TDIER, ReadWrite> {
        struct UIE: public RegisterField<DIER, 0, 1, ReadWrite> {
            using Disabled = FieldValue<UIE, 0U, TTimerStructBase>;
            using Enabled = FieldValue<UIE, 1U, TTimerStructBase>;
        };
    };
    struct EGR: public Register<TEGR, ReadWrite> {
        struct UG: public RegisterField<EGR, 0, 1, ReadWrite> {
            using ReInit = FieldValue<UG, 1U, TTimerStructBase>;
        };
    };
    struct SR: public Register<TSR, ReadWrite> {
        struct UIF: public RegisterField<SR, 0, 1, ReadWrite> {
            using Cleared = FieldValue<UIF, 0U, TTimerStructBase>;
            using Updated = FieldValue<UIF, 1U, TTimerStructBase>;
        };
    };
    struct CCR1: public Register<TCCR1, ReadWrite> {
        struct CCR1Field: public RegisterField<CCR1, 0, 16, ReadWrite> {};
    };
    struct CCR2: public Register<TCCR1, ReadWrite> {
        struct CCR2Field: public RegisterField<CCR2, 0, 16, ReadWrite> {};
    };
    struct CCR3: public Register<TCCR1, ReadWrite> {
        struct CCR3Field: public RegisterField<CCR2, 0, 16, ReadWrite> {};
    };
    struct CCR4: public Register<TCCR1, ReadWrite> {
        struct CCR4Field: public RegisterField<CCR2, 0, 16, ReadWrite> {};
    };

    
    struct CCMR1_Output: public Register<TCCMR1_Output, ReadWrite> {
        struct OC1M: public RegisterField<CCMR1_Output, 4, 3, ReadWrite> {
            using PWM1 = FieldValue<OC1M, 6U, TTimerStructBase>;
        };
        struct OC2M: public RegisterField<CCMR1_Output, 12, 3, ReadWrite> {
            using PWM1 = FieldValue<OC2M, 6U, TTimerStructBase>;
        };
        struct OC1PE: public RegisterField<CCMR1_Output, 3, 1, ReadWrite> {
            using Disabled = FieldValue<OC1PE, 0U, TTimerStructBase>;
            using Enabled = FieldValue<OC1PE, 1U, TTimerStructBase>;
        };
        struct OC2PE: public RegisterField<CCMR1_Output, 11, 1, ReadWrite> {
            using Disabled = FieldValue<OC2PE, 0U, TTimerStructBase>;
            using Enabled = FieldValue<OC2PE, 1U, TTimerStructBase>;
        };
    };
    struct CCMR2_Output: public Register<TCCMR2_Output, ReadWrite> {
        struct OC3M: public RegisterField<CCMR2_Output, 4, 3, ReadWrite> {
            using PWM1 = FieldValue<OC3M, 6U, TTimerStructBase>;
        };
        struct OC4M: public RegisterField<CCMR2_Output, 12, 3, ReadWrite> {
            using PWM1 = FieldValue<OC4M, 6U, TTimerStructBase>;
        };
        struct OC3PE: public RegisterField<CCMR2_Output, 3, 1, ReadWrite> {
            using Disabled = FieldValue<OC3PE, 0U, TTimerStructBase>;
            using Enabled = FieldValue<OC3PE, 1U, TTimerStructBase>;
        };
        struct OC4PE: public RegisterField<CCMR2_Output, 11, 1, ReadWrite> {
            using Disabled = FieldValue<OC4PE, 0U, TTimerStructBase>;
            using Enabled = FieldValue<OC4PE, 1U, TTimerStructBase>;
        };
    };
    struct CCER: public Register<TCCER, ReadWrite> {
        struct CC1E: public RegisterField<CCER, 0, 1, ReadWrite> {
            using Disable = FieldValue<CC1E, 0U, TTimerStructBase>;
            using Enable = FieldValue<CC1E, 1U, TTimerStructBase>;
        };
        struct CC2E: public RegisterField<CCER, 4, 1, ReadWrite> {
            using Disable = FieldValue<CC2E, 0U, TTimerStructBase>;
            using Enable = FieldValue<CC2E, 1U, TTimerStructBase>;
        };
        struct CC3E: public RegisterField<CCER, 8, 1, ReadWrite> {
            using Disable = FieldValue<CC3E, 0U, TTimerStructBase>;
            using Enable = FieldValue<CC3E, 1U, TTimerStructBase>;
        };
        struct CC4E: public RegisterField<CCER, 12, 1, ReadWrite> {
            using Disable = FieldValue<CC4E, 0U, TTimerStructBase>;
            using Enable = FieldValue<CC4E, 1U, TTimerStructBase>;
        };
    };
};