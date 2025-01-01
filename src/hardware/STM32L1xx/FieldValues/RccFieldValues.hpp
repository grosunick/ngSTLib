/*******************************************************************************
* Filename      : RccFieldValues.hpp
*
* Details       : Enumerations related with RCC peripheral. This header file is
*                 auto-generated for STM32L1xx device.
*
*
*******************************************************************************/

#pragma once

#include <register/FieldValue.hpp>

using namespace ng;

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CR_RTCPRE1_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CR_RTCPRE1_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CR_RTCPRE1_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CR_RTCPRE0_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CR_RTCPRE0_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CR_RTCPRE0_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CR_CSSON_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CR_CSSON_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CR_CSSON_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CR_PLLRDY_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CR_PLLRDY_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CR_PLLRDY_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CR_PLLON_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CR_PLLON_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CR_PLLON_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CR_HSEBYP_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CR_HSEBYP_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CR_HSEBYP_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CR_HSERDY_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CR_HSERDY_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CR_HSERDY_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CR_HSEON_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CR_HSEON_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CR_HSEON_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CR_MSIRDY_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using NotReady = FieldValue<RCC_CR_MSIRDY_Values, 0U, BaseType>;
    using Ready = FieldValue<RCC_CR_MSIRDY_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CR_MSION_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Off = FieldValue<RCC_CR_MSION_Values, 0U, BaseType>;
    using On = FieldValue<RCC_CR_MSION_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CR_HSIRDY_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CR_HSIRDY_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CR_HSIRDY_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CR_HSION_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CR_HSION_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CR_HSION_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_ICSCR_MSITRIM_Values : public RegisterField<Reg, offset, size, AccessMode> {
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_ICSCR_MSICAL_Values : public RegisterField<Reg, offset, size, AccessMode> {
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_ICSCR_MSIRANGE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Range0 = FieldValue<RCC_ICSCR_MSIRANGE_Values, 0U, BaseType>; // 65.536 kHz
    using Range1 = FieldValue<RCC_ICSCR_MSIRANGE_Values, 1U, BaseType>; // 131.072 kHz
    using Range2 = FieldValue<RCC_ICSCR_MSIRANGE_Values, 2U, BaseType>; // 262.144 kHz
    using Range3 = FieldValue<RCC_ICSCR_MSIRANGE_Values, 3U, BaseType>; // 524.288 kHz
    using Range4 = FieldValue<RCC_ICSCR_MSIRANGE_Values, 4U, BaseType>; // 1.048 MHz
    using Range5 = FieldValue<RCC_ICSCR_MSIRANGE_Values, 5U, BaseType>; // 2.097 MHz (reset value)
    using Range6 = FieldValue<RCC_ICSCR_MSIRANGE_Values, 6U, BaseType>; // 4.194 MHz
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_ICSCR_HSITRIM_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_ICSCR_HSITRIM_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_ICSCR_HSITRIM_Values, 1U, BaseType>;
    using Value2 = FieldValue<RCC_ICSCR_HSITRIM_Values, 2U, BaseType>;
    using Value3 = FieldValue<RCC_ICSCR_HSITRIM_Values, 3U, BaseType>;
    using Value4 = FieldValue<RCC_ICSCR_HSITRIM_Values, 4U, BaseType>;
    using Value5 = FieldValue<RCC_ICSCR_HSITRIM_Values, 5U, BaseType>;
    using Value6 = FieldValue<RCC_ICSCR_HSITRIM_Values, 6U, BaseType>;
    using Value7 = FieldValue<RCC_ICSCR_HSITRIM_Values, 7U, BaseType>;
    using Value8 = FieldValue<RCC_ICSCR_HSITRIM_Values, 8U, BaseType>;
    using Value9 = FieldValue<RCC_ICSCR_HSITRIM_Values, 9U, BaseType>;
    using Value10 = FieldValue<RCC_ICSCR_HSITRIM_Values, 10U, BaseType>;
    using Value11 = FieldValue<RCC_ICSCR_HSITRIM_Values, 11U, BaseType>;
    using Value12 = FieldValue<RCC_ICSCR_HSITRIM_Values, 12U, BaseType>;
    using Value13 = FieldValue<RCC_ICSCR_HSITRIM_Values, 13U, BaseType>;
    using Value14 = FieldValue<RCC_ICSCR_HSITRIM_Values, 14U, BaseType>;
    using Value15 = FieldValue<RCC_ICSCR_HSITRIM_Values, 15U, BaseType>;
    using Value16 = FieldValue<RCC_ICSCR_HSITRIM_Values, 16U, BaseType>;
    using Value17 = FieldValue<RCC_ICSCR_HSITRIM_Values, 17U, BaseType>;
    using Value18 = FieldValue<RCC_ICSCR_HSITRIM_Values, 18U, BaseType>;
    using Value19 = FieldValue<RCC_ICSCR_HSITRIM_Values, 19U, BaseType>;
    using Value20 = FieldValue<RCC_ICSCR_HSITRIM_Values, 20U, BaseType>;
    using Value21 = FieldValue<RCC_ICSCR_HSITRIM_Values, 21U, BaseType>;
    using Value22 = FieldValue<RCC_ICSCR_HSITRIM_Values, 22U, BaseType>;
    using Value23 = FieldValue<RCC_ICSCR_HSITRIM_Values, 23U, BaseType>;
    using Value24 = FieldValue<RCC_ICSCR_HSITRIM_Values, 24U, BaseType>;
    using Value25 = FieldValue<RCC_ICSCR_HSITRIM_Values, 25U, BaseType>;
    using Value26 = FieldValue<RCC_ICSCR_HSITRIM_Values, 26U, BaseType>;
    using Value27 = FieldValue<RCC_ICSCR_HSITRIM_Values, 27U, BaseType>;
    using Value28 = FieldValue<RCC_ICSCR_HSITRIM_Values, 28U, BaseType>;
    using Value29 = FieldValue<RCC_ICSCR_HSITRIM_Values, 29U, BaseType>;
    using Value30 = FieldValue<RCC_ICSCR_HSITRIM_Values, 30U, BaseType>;
    using Value31 = FieldValue<RCC_ICSCR_HSITRIM_Values, 31U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_ICSCR_HSICAL_Values : public RegisterField<Reg, offset, size, AccessMode> {
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CFGR_MCOPRE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CFGR_MCOPRE_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CFGR_MCOPRE_Values, 1U, BaseType>;
    using Value2 = FieldValue<RCC_CFGR_MCOPRE_Values, 2U, BaseType>;
    using Value3 = FieldValue<RCC_CFGR_MCOPRE_Values, 3U, BaseType>;
    using Value4 = FieldValue<RCC_CFGR_MCOPRE_Values, 4U, BaseType>;
    using Value5 = FieldValue<RCC_CFGR_MCOPRE_Values, 5U, BaseType>;
    using Value6 = FieldValue<RCC_CFGR_MCOPRE_Values, 6U, BaseType>;
    using Value7 = FieldValue<RCC_CFGR_MCOPRE_Values, 7U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CFGR_MCOSEL_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CFGR_MCOSEL_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CFGR_MCOSEL_Values, 1U, BaseType>;
    using Value2 = FieldValue<RCC_CFGR_MCOSEL_Values, 2U, BaseType>;
    using Value3 = FieldValue<RCC_CFGR_MCOSEL_Values, 3U, BaseType>;
    using Value4 = FieldValue<RCC_CFGR_MCOSEL_Values, 4U, BaseType>;
    using Value5 = FieldValue<RCC_CFGR_MCOSEL_Values, 5U, BaseType>;
    using Value6 = FieldValue<RCC_CFGR_MCOSEL_Values, 6U, BaseType>;
    using Value7 = FieldValue<RCC_CFGR_MCOSEL_Values, 7U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CFGR_PLLDIV_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CFGR_PLLDIV_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CFGR_PLLDIV_Values, 1U, BaseType>;
    using Value2 = FieldValue<RCC_CFGR_PLLDIV_Values, 2U, BaseType>;
    using Value3 = FieldValue<RCC_CFGR_PLLDIV_Values, 3U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CFGR_PLLMUL_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CFGR_PLLMUL_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CFGR_PLLMUL_Values, 1U, BaseType>;
    using Value2 = FieldValue<RCC_CFGR_PLLMUL_Values, 2U, BaseType>;
    using Value3 = FieldValue<RCC_CFGR_PLLMUL_Values, 3U, BaseType>;
    using Value4 = FieldValue<RCC_CFGR_PLLMUL_Values, 4U, BaseType>;
    using Value5 = FieldValue<RCC_CFGR_PLLMUL_Values, 5U, BaseType>;
    using Value6 = FieldValue<RCC_CFGR_PLLMUL_Values, 6U, BaseType>;
    using Value7 = FieldValue<RCC_CFGR_PLLMUL_Values, 7U, BaseType>;
    using Value8 = FieldValue<RCC_CFGR_PLLMUL_Values, 8U, BaseType>;
    using Value9 = FieldValue<RCC_CFGR_PLLMUL_Values, 9U, BaseType>;
    using Value10 = FieldValue<RCC_CFGR_PLLMUL_Values, 10U, BaseType>;
    using Value11 = FieldValue<RCC_CFGR_PLLMUL_Values, 11U, BaseType>;
    using Value12 = FieldValue<RCC_CFGR_PLLMUL_Values, 12U, BaseType>;
    using Value13 = FieldValue<RCC_CFGR_PLLMUL_Values, 13U, BaseType>;
    using Value14 = FieldValue<RCC_CFGR_PLLMUL_Values, 14U, BaseType>;
    using Value15 = FieldValue<RCC_CFGR_PLLMUL_Values, 15U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CFGR_PLLSRC_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CFGR_PLLSRC_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CFGR_PLLSRC_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CFGR_PPRE2_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CFGR_PPRE2_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CFGR_PPRE2_Values, 1U, BaseType>;
    using Value2 = FieldValue<RCC_CFGR_PPRE2_Values, 2U, BaseType>;
    using Value3 = FieldValue<RCC_CFGR_PPRE2_Values, 3U, BaseType>;
    using Value4 = FieldValue<RCC_CFGR_PPRE2_Values, 4U, BaseType>;
    using Value5 = FieldValue<RCC_CFGR_PPRE2_Values, 5U, BaseType>;
    using Value6 = FieldValue<RCC_CFGR_PPRE2_Values, 6U, BaseType>;
    using Value7 = FieldValue<RCC_CFGR_PPRE2_Values, 7U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CFGR_PPRE1_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CFGR_PPRE1_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CFGR_PPRE1_Values, 1U, BaseType>;
    using Value2 = FieldValue<RCC_CFGR_PPRE1_Values, 2U, BaseType>;
    using Value3 = FieldValue<RCC_CFGR_PPRE1_Values, 3U, BaseType>;
    using Value4 = FieldValue<RCC_CFGR_PPRE1_Values, 4U, BaseType>;
    using Value5 = FieldValue<RCC_CFGR_PPRE1_Values, 5U, BaseType>;
    using Value6 = FieldValue<RCC_CFGR_PPRE1_Values, 6U, BaseType>;
    using Value7 = FieldValue<RCC_CFGR_PPRE1_Values, 7U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CFGR_HPRE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CFGR_HPRE_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CFGR_HPRE_Values, 1U, BaseType>;
    using Value2 = FieldValue<RCC_CFGR_HPRE_Values, 2U, BaseType>;
    using Value3 = FieldValue<RCC_CFGR_HPRE_Values, 3U, BaseType>;
    using Value4 = FieldValue<RCC_CFGR_HPRE_Values, 4U, BaseType>;
    using Value5 = FieldValue<RCC_CFGR_HPRE_Values, 5U, BaseType>;
    using Value6 = FieldValue<RCC_CFGR_HPRE_Values, 6U, BaseType>;
    using Value7 = FieldValue<RCC_CFGR_HPRE_Values, 7U, BaseType>;
    using Value8 = FieldValue<RCC_CFGR_HPRE_Values, 8U, BaseType>;
    using Value9 = FieldValue<RCC_CFGR_HPRE_Values, 9U, BaseType>;
    using Value10 = FieldValue<RCC_CFGR_HPRE_Values, 10U, BaseType>;
    using Value11 = FieldValue<RCC_CFGR_HPRE_Values, 11U, BaseType>;
    using Value12 = FieldValue<RCC_CFGR_HPRE_Values, 12U, BaseType>;
    using Value13 = FieldValue<RCC_CFGR_HPRE_Values, 13U, BaseType>;
    using Value14 = FieldValue<RCC_CFGR_HPRE_Values, 14U, BaseType>;
    using Value15 = FieldValue<RCC_CFGR_HPRE_Values, 15U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CFGR_SWS_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using MSI = FieldValue<RCC_CFGR_SWS_Values, 0U, BaseType>;
    using HSI = FieldValue<RCC_CFGR_SWS_Values, 1U, BaseType>;
    using HSE = FieldValue<RCC_CFGR_SWS_Values, 2U, BaseType>;
    using PLL = FieldValue<RCC_CFGR_SWS_Values, 3U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CFGR_SW_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using MSI = FieldValue<RCC_CFGR_SW_Values, 0U, BaseType>;
    using HSI = FieldValue<RCC_CFGR_SW_Values, 1U, BaseType>;
    using HSE = FieldValue<RCC_CFGR_SW_Values, 2U, BaseType>;
    using PLL = FieldValue<RCC_CFGR_SW_Values, 3U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_CSSC_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_CSSC_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_CSSC_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_MSIRDYC_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_MSIRDYC_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_MSIRDYC_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_PLLRDYC_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_PLLRDYC_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_PLLRDYC_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_HSERDYC_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_HSERDYC_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_HSERDYC_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_HSIRDYC_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_HSIRDYC_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_HSIRDYC_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_LSERDYC_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_LSERDYC_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_LSERDYC_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_LSIRDYC_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_LSIRDYC_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_LSIRDYC_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_MSIRDYIE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_MSIRDYIE_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_MSIRDYIE_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_PLLRDYIE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_PLLRDYIE_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_PLLRDYIE_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_HSERDYIE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_HSERDYIE_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_HSERDYIE_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_HSIRDYIE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_HSIRDYIE_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_HSIRDYIE_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_LSERDYIE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_LSERDYIE_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_LSERDYIE_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_LSIRDYIE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_LSIRDYIE_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_LSIRDYIE_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_CSSF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_CSSF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_CSSF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_MSIRDYF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_MSIRDYF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_MSIRDYF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_PLLRDYF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_PLLRDYF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_PLLRDYF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_HSERDYF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_HSERDYF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_HSERDYF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_HSIRDYF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_HSIRDYF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_HSIRDYF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_LSERDYF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_LSERDYF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_LSERDYF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CIR_LSIRDYF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CIR_LSIRDYF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CIR_LSIRDYF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_FSMCRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_FSMCRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_FSMCRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_DMA2RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_DMA2RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_DMA2RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_DMA1RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_DMA1RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_DMA1RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_FLITFRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_FLITFRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_FLITFRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_CRCRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_CRCRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_CRCRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_GPIOGRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_GPIOGRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_GPIOGRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_GPIOFRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_GPIOFRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_GPIOFRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_GPIOHRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_GPIOHRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_GPIOHRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_GPIOERST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_GPIOERST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_GPIOERST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_GPIODRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_GPIODRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_GPIODRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_GPIOCRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_GPIOCRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_GPIOCRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_GPIOBRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_GPIOBRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_GPIOBRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBRSTR_GPIOARST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBRSTR_GPIOARST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBRSTR_GPIOARST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2RSTR_USART1RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2RSTR_USART1RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2RSTR_USART1RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2RSTR_SPI1RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2RSTR_SPI1RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2RSTR_SPI1RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2RSTR_SDIORST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2RSTR_SDIORST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2RSTR_SDIORST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2RSTR_ADC1RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2RSTR_ADC1RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2RSTR_ADC1RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2RSTR_TM11RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2RSTR_TM11RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2RSTR_TM11RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2RSTR_TM10RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2RSTR_TM10RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2RSTR_TM10RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2RSTR_TIM9RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2RSTR_TIM9RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2RSTR_TIM9RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2RSTR_SYSCFGRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2RSTR_SYSCFGRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2RSTR_SYSCFGRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_COMPRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_COMPRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_COMPRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_DACRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_DACRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_DACRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_PWRRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_PWRRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_PWRRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_USBRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_USBRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_USBRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_I2C2RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_I2C2RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_I2C2RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_I2C1RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_I2C1RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_I2C1RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_UART5RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_UART5RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_UART5RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_UART4RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_UART4RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_UART4RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_USART3RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_USART3RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_USART3RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_USART2RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_USART2RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_USART2RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_SPI3RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_SPI3RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_SPI3RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_SPI2RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_SPI2RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_SPI2RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_WWDRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_WWDRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_WWDRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_LCDRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_LCDRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_LCDRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_TIM7RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_TIM7RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_TIM7RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_TIM6RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_TIM6RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_TIM6RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_TIM5RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_TIM5RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_TIM5RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_TIM4RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_TIM4RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_TIM4RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_TIM3RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_TIM3RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_TIM3RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1RSTR_TIM2RST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1RSTR_TIM2RST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1RSTR_TIM2RST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_FSMCEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBENR_FSMCEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBENR_FSMCEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_DMA2EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBENR_DMA2EN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBENR_DMA2EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_DMA1EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBENR_DMA1EN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBENR_DMA1EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_FLITFEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBENR_FLITFEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBENR_FLITFEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_CRCEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBENR_CRCEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBENR_CRCEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_GPIOPGEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_AHBENR_GPIOPGEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_AHBENR_GPIOPGEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_GPIOPFEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_AHBENR_GPIOPFEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_AHBENR_GPIOPFEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_GPIOPHEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_AHBENR_GPIOPHEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_AHBENR_GPIOPHEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_GPIOPEEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_AHBENR_GPIOPEEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_AHBENR_GPIOPEEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_GPIOPDEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_AHBENR_GPIOPDEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_AHBENR_GPIOPDEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_GPIOPCEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_AHBENR_GPIOPCEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_AHBENR_GPIOPCEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_GPIOPBEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_AHBENR_GPIOPBEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_AHBENR_GPIOPBEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBENR_GPIOPAEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_AHBENR_GPIOPAEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_AHBENR_GPIOPAEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2ENR_USART1EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB2ENR_USART1EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB2ENR_USART1EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2ENR_SPI1EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB2ENR_SPI1EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB2ENR_SPI1EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2ENR_SDIOEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB2ENR_SDIOEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB2ENR_SDIOEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2ENR_ADC1EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB2ENR_ADC1EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB2ENR_ADC1EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2ENR_TIM11EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB2ENR_TIM11EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB2ENR_TIM11EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2ENR_TIM10EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB2ENR_TIM10EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB2ENR_TIM10EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2ENR_TIM9EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB2ENR_TIM9EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB2ENR_TIM9EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2ENR_SYSCFGEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB2ENR_SYSCFGEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB2ENR_SYSCFGEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_COMPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_COMPEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_COMPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_DACEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_DACEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_DACEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_PWREN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_PWREN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_PWREN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_USBEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_USBEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_USBEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_I2C2EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_I2C2EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_I2C2EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_I2C1EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_I2C1EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_I2C1EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_USART5EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_USART5EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_USART5EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_USART4EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_USART4EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_USART4EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_USART3EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_USART3EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_USART3EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_USART2EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_USART2EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_USART2EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_SPI3EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_SPI3EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_SPI3EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_SPI2EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_SPI2EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_SPI2EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_WWDGEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_WWDGEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_WWDGEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_LCDEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_LCDEN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_LCDEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_TIM7EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_TIM7EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_TIM7EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_TIM6EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_TIM6EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_TIM6EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_TIM5EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_TIM5EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_TIM5EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_TIM4EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_TIM4EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_TIM4EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_TIM3EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_TIM3EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_TIM3EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1ENR_TIM2EN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<RCC_APB1ENR_TIM2EN_Values, 0U, BaseType>;
    using Enable = FieldValue<RCC_APB1ENR_TIM2EN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_DMA2LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_DMA2LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_DMA2LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_DMA1LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_DMA1LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_DMA1LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_SRAMLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_SRAMLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_SRAMLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_FLITFLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_FLITFLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_FLITFLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_CRCLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_CRCLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_CRCLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_GPIOGLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_GPIOGLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_GPIOGLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_GPIOFLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_GPIOFLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_GPIOFLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_GPIOHLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_GPIOHLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_GPIOHLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_GPIOELPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_GPIOELPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_GPIOELPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_GPIODLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_GPIODLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_GPIODLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_GPIOCLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_GPIOCLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_GPIOCLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_GPIOBLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_GPIOBLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_GPIOBLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_AHBLPENR_GPIOALPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_AHBLPENR_GPIOALPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_AHBLPENR_GPIOALPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2LPENR_USART1LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2LPENR_USART1LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2LPENR_USART1LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2LPENR_SPI1LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2LPENR_SPI1LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2LPENR_SPI1LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2LPENR_SDIOLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2LPENR_SDIOLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2LPENR_SDIOLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2LPENR_ADC1LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2LPENR_ADC1LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2LPENR_ADC1LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2LPENR_TIM11LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2LPENR_TIM11LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2LPENR_TIM11LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2LPENR_TIM10LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2LPENR_TIM10LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2LPENR_TIM10LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2LPENR_TIM9LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2LPENR_TIM9LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2LPENR_TIM9LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB2LPENR_SYSCFGLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB2LPENR_SYSCFGLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB2LPENR_SYSCFGLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_COMPLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_COMPLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_COMPLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_DACLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_DACLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_DACLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_PWRLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_PWRLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_PWRLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_USBLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_USBLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_USBLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_I2C2LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_I2C2LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_I2C2LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_I2C1LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_I2C1LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_I2C1LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_USART3LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_USART3LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_USART3LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_USART2LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_USART2LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_USART2LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_SPI2LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_SPI2LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_SPI2LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_WWDGLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_WWDGLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_WWDGLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_LCDLPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_LCDLPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_LCDLPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_TIM7LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_TIM7LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_TIM7LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_TIM6LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_TIM6LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_TIM6LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_TIM4LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_TIM4LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_TIM4LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_TIM3LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_TIM3LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_TIM3LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_APB1LPENR_TIM2LPEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_APB1LPENR_TIM2LPEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_APB1LPENR_TIM2LPEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_LPWRSTF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_LPWRSTF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_LPWRSTF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_WWDGRSTF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_WWDGRSTF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_WWDGRSTF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_IWDGRSTF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_IWDGRSTF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_IWDGRSTF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_SFTRSTF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_SFTRSTF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_SFTRSTF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_PORRSTF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_PORRSTF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_PORRSTF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_PINRSTF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_PINRSTF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_PINRSTF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_RMVF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_RMVF_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_RMVF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_RTCRST_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_RTCRST_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_RTCRST_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_RTCEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_RTCEN_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_RTCEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_RTCSEL_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_RTCSEL_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_RTCSEL_Values, 1U, BaseType>;
    using Value2 = FieldValue<RCC_CSR_RTCSEL_Values, 2U, BaseType>;
    using Value3 = FieldValue<RCC_CSR_RTCSEL_Values, 3U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_LSEBYP_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_LSEBYP_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_LSEBYP_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_LSERDY_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_LSERDY_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_LSERDY_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_LSEON_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_LSEON_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_LSEON_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_LSIRDY_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_LSIRDY_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_LSIRDY_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct RCC_CSR_LSION_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<RCC_CSR_LSION_Values, 0U, BaseType>;
    using Value1 = FieldValue<RCC_CSR_LSION_Values, 1U, BaseType>;
};

