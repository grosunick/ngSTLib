/*******************************************************************************
* Filename      : Tim6Registers.hpp
*
* Details       : Basic timers. This header file is auto-generated for STM32L1xx
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "FieldValues/Tim6FieldValues.hpp"
#include <register/Register.hpp>
#include <register/FieldsPack.hpp>
#include <register/Access.hpp>

using namespace ng;

struct ngTIM6 {
    struct TIM6CR1Base {
    };

    struct CR1 : public Register<0x40001000, ReadWrite, 32> {
        using ARPE = TIM6_CR1_ARPE_Values<ngTIM6::CR1, 7, 1, ReadWrite, TIM6CR1Base>;
        using OPM = TIM6_CR1_OPM_Values<ngTIM6::CR1, 3, 1, ReadWrite, TIM6CR1Base>;
        using URS = TIM6_CR1_URS_Values<ngTIM6::CR1, 2, 1, ReadWrite, TIM6CR1Base>;
        using UDIS = TIM6_CR1_UDIS_Values<ngTIM6::CR1, 1, 1, ReadWrite, TIM6CR1Base>;
        using CEN = TIM6_CR1_CEN_Values<ngTIM6::CR1, 0, 1, ReadWrite, TIM6CR1Base>;
        using FieldValues = TIM6_CR1_CEN_Values<ngTIM6::CR1, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CR1Pack = FieldsPack<0x40001000, 32, ReadWrite, TIM6CR1Base, T...>;

    struct TIM6CR2Base {
    };

    struct CR2 : public Register<0x40001004, ReadWrite, 32> {
        using MMS = TIM6_CR2_MMS_Values<ngTIM6::CR2, 4, 3, ReadWrite, TIM6CR2Base>;
        using FieldValues = TIM6_CR2_MMS_Values<ngTIM6::CR2, 0, 3, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CR2Pack = FieldsPack<0x40001004, 32, ReadWrite, TIM6CR2Base, T...>;

    struct TIM6DIERBase {
    };

    struct DIER : public Register<0x4000100C, ReadWrite, 32> {
        using UDE = TIM6_DIER_UDE_Values<ngTIM6::DIER, 8, 1, ReadWrite, TIM6DIERBase>;
        using UIE = TIM6_DIER_UIE_Values<ngTIM6::DIER, 0, 1, ReadWrite, TIM6DIERBase>;
        using FieldValues = TIM6_DIER_UIE_Values<ngTIM6::DIER, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using DIERPack = FieldsPack<0x4000100C, 32, ReadWrite, TIM6DIERBase, T...>;

    struct TIM6SRBase {
    };

    struct SR : public Register<0x40001010, ReadWrite, 32> {
        using UIF = TIM6_SR_UIF_Values<ngTIM6::SR, 0, 1, ReadWrite, TIM6SRBase>;
        using FieldValues = TIM6_SR_UIF_Values<ngTIM6::SR, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using SRPack = FieldsPack<0x40001010, 32, ReadWrite, TIM6SRBase, T...>;

    struct TIM6EGRBase {
    };

    struct EGR : public Register<0x40001014, Write, 32> {
        using UG = TIM6_EGR_UG_Values<ngTIM6::EGR, 0, 1, Write, TIM6EGRBase>;
        using FieldValues = TIM6_EGR_UG_Values<ngTIM6::EGR, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using EGRPack = FieldsPack<0x40001014, 32, Write, TIM6EGRBase, T...>;

    struct TIM6CNTBase {
    };

    struct CNT : public Register<0x40001024, ReadWrite, 32> {
        using CNTField = TIM6_CNT_CNT_Values<ngTIM6::CNT, 0, 16, ReadWrite, TIM6CNTBase>;
        using FieldValues = TIM6_CNT_CNT_Values<ngTIM6::CNT, 0, 16, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CNTPack = FieldsPack<0x40001024, 32, ReadWrite, TIM6CNTBase, T...>;

    struct TIM6PSCBase {
    };

    struct PSC : public Register<0x40001028, ReadWrite, 32> {
        using PSCField = TIM6_PSC_PSC_Values<ngTIM6::PSC, 0, 16, ReadWrite, TIM6PSCBase>;
        using FieldValues = TIM6_PSC_PSC_Values<ngTIM6::PSC, 0, 16, NoAccess, NoAccess>;
    };

    template<typename... T>
    using PSCPack = FieldsPack<0x40001028, 32, ReadWrite, TIM6PSCBase, T...>;

    struct TIM6ARRBase {
    };

    struct ARR : public Register<0x4000102C, ReadWrite, 32> {
        using ARRField = TIM6_ARR_ARR_Values<ngTIM6::ARR, 0, 16, ReadWrite, TIM6ARRBase>;
        using FieldValues = TIM6_ARR_ARR_Values<ngTIM6::ARR, 0, 16, NoAccess, NoAccess>;
    };

    template<typename... T>
    using ARRPack = FieldsPack<0x4000102C, 32, ReadWrite, TIM6ARRBase, T...>;

};

