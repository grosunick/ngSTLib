/*******************************************************************************
* Filename      : Tim11Registers.hpp
*
* Details       : General-purpose timers. This header file is auto-generated for
*                 STM32L152 device.
*
*
*******************************************************************************/

#pragma once

#include "FieldValues/Tim11FieldValues.hpp"
#include <register/Register.hpp>
#include <register/FieldsPack.hpp>
#include <register/Access.hpp>

using namespace ng;

struct ngTIM11 {
    struct TIM11CR1Base {};
    
    struct CR1 : public Register<0x40011000, ReadWrite, 32> {
        using CKD = TIM11_CR1_CKD_Values<ngTIM11::CR1, 8, 2, ReadWrite, TIM11CR1Base>;
        using ARPE = TIM11_CR1_ARPE_Values<ngTIM11::CR1, 7, 1, ReadWrite, TIM11CR1Base>;
        using OPM = TIM11_CR1_OPM_Values<ngTIM11::CR1, 3, 1, ReadWrite, TIM11CR1Base>;
        using URS = TIM11_CR1_URS_Values<ngTIM11::CR1, 2, 1, ReadWrite, TIM11CR1Base>;
        using UDIS = TIM11_CR1_UDIS_Values<ngTIM11::CR1, 1, 1, ReadWrite, TIM11CR1Base>;
        using CEN = TIM11_CR1_CEN_Values<ngTIM11::CR1, 0, 1, ReadWrite, TIM11CR1Base>;
        using FieldValues = TIM11_CR1_OPM_Values<ngTIM11::CR1, 0, 2, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using CR1Pack = FieldsPack<0x40011000, 32, ReadWrite, TIM11CR1Base, T...>;
    
    struct TIM11SMCRBase {};
    
    struct SMCR : public Register<0x40011008, ReadWrite, 32> {
        using ETP = TIM11_SMCR_ETP_Values<ngTIM11::SMCR, 15, 1, ReadWrite, TIM11SMCRBase>;
        using ECE = TIM11_SMCR_ECE_Values<ngTIM11::SMCR, 14, 1, ReadWrite, TIM11SMCRBase>;
        using ETPS = TIM11_SMCR_ETPS_Values<ngTIM11::SMCR, 12, 2, ReadWrite, TIM11SMCRBase>;
        using ETF = TIM11_SMCR_ETF_Values<ngTIM11::SMCR, 8, 4, ReadWrite, TIM11SMCRBase>;
        using FieldValues = TIM11_SMCR_ETP_Values<ngTIM11::SMCR, 0, 4, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using SMCRPack = FieldsPack<0x40011008, 32, ReadWrite, TIM11SMCRBase, T...>;
    
    struct TIM11DIERBase {};
    
    struct DIER : public Register<0x4001100C, ReadWrite, 32> {
        using CC1IE = TIM11_DIER_CC1IE_Values<ngTIM11::DIER, 1, 1, ReadWrite, TIM11DIERBase>;
        using UIE = TIM11_DIER_UIE_Values<ngTIM11::DIER, 0, 1, ReadWrite, TIM11DIERBase>;
        using FieldValues = TIM11_DIER_CC1IE_Values<ngTIM11::DIER, 0, 1, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using DIERPack = FieldsPack<0x4001100C, 32, ReadWrite, TIM11DIERBase, T...>;
    
    struct TIM11SRBase {};
    
    struct SR : public Register<0x40011010, ReadWrite, 32> {
        using CC1OF = TIM11_SR_CC1OF_Values<ngTIM11::SR, 9, 1, ReadWrite, TIM11SRBase>;
        using CC1IF = TIM11_SR_CC1IF_Values<ngTIM11::SR, 1, 1, ReadWrite, TIM11SRBase>;
        using UIF = TIM11_SR_UIF_Values<ngTIM11::SR, 0, 1, ReadWrite, TIM11SRBase>;
        using FieldValues = TIM11_SR_UIF_Values<ngTIM11::SR, 0, 1, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using SRPack = FieldsPack<0x40011010, 32, ReadWrite, TIM11SRBase, T...>;
    
    struct TIM11EGRBase {};
    
    struct EGR : public Register<0x40011014, Write, 32> {
        using CC1G = TIM11_EGR_CC1G_Values<ngTIM11::EGR, 1, 1, Write, TIM11EGRBase>;
        using UG = TIM11_EGR_UG_Values<ngTIM11::EGR, 0, 1, Write, TIM11EGRBase>;
        using FieldValues = TIM11_EGR_UG_Values<ngTIM11::EGR, 0, 1, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using EGRPack = FieldsPack<0x40011014, 32, Write, TIM11EGRBase, T...>;
    
    struct TIM11CCMR1_OutputBase {};
    
    struct CCMR1_Output : public Register<0x40011018, ReadWrite, 32> {
        using OC1CE = TIM11_CCMR1_Output_OC1CE_Values<ngTIM11::CCMR1_Output, 7, 1, ReadWrite, TIM11CCMR1_OutputBase>;
        using OC1M = TIM11_CCMR1_Output_OC1M_Values<ngTIM11::CCMR1_Output, 4, 3, ReadWrite, TIM11CCMR1_OutputBase>;
        using OC1PE = TIM11_CCMR1_Output_OC1PE_Values<ngTIM11::CCMR1_Output, 3, 1, ReadWrite, TIM11CCMR1_OutputBase>;
        using OC1FE = TIM11_CCMR1_Output_OC1FE_Values<ngTIM11::CCMR1_Output, 2, 1, ReadWrite, TIM11CCMR1_OutputBase>;
        using CC1S = TIM11_CCMR1_Output_CC1S_Values<ngTIM11::CCMR1_Output, 0, 2, ReadWrite, TIM11CCMR1_OutputBase>;
        using FieldValues = TIM11_CCMR1_Output_OC1CE_Values<ngTIM11::CCMR1_Output, 0, 2, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using CCMR1_OutputPack = FieldsPack<0x40011018, 32, ReadWrite, TIM11CCMR1_OutputBase, T...>;
    
    struct TIM11CCMR1_InputBase {};
    
    struct CCMR1_Input : public Register<0x40011018, ReadWrite, 32> {
        using IC1F = TIM11_CCMR1_Input_IC1F_Values<ngTIM11::CCMR1_Input, 4, 4, ReadWrite, TIM11CCMR1_InputBase>;
        using IC1PSC = TIM11_CCMR1_Input_IC1PSC_Values<ngTIM11::CCMR1_Input, 2, 2, ReadWrite, TIM11CCMR1_InputBase>;
        using CC1S = TIM11_CCMR1_Input_CC1S_Values<ngTIM11::CCMR1_Input, 0, 2, ReadWrite, TIM11CCMR1_InputBase>;
        using FieldValues = TIM11_CCMR1_Input_CC1S_Values<ngTIM11::CCMR1_Input, 0, 4, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using CCMR1_InputPack = FieldsPack<0x40011018, 32, ReadWrite, TIM11CCMR1_InputBase, T...>;
    
    struct TIM11CCERBase {};
    
    struct CCER : public Register<0x40011020, ReadWrite, 32> {
        using CC1NP = TIM11_CCER_CC1NP_Values<ngTIM11::CCER, 3, 1, ReadWrite, TIM11CCERBase>;
        using CC1P = TIM11_CCER_CC1P_Values<ngTIM11::CCER, 1, 1, ReadWrite, TIM11CCERBase>;
        using CC1E = TIM11_CCER_CC1E_Values<ngTIM11::CCER, 0, 1, ReadWrite, TIM11CCERBase>;
        using FieldValues = TIM11_CCER_CC1E_Values<ngTIM11::CCER, 0, 1, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using CCERPack = FieldsPack<0x40011020, 32, ReadWrite, TIM11CCERBase, T...>;
    
    struct TIM11CNTBase {};
    
    struct CNT : public Register<0x40011024, ReadWrite, 32> {
        using CNTField = TIM11_CNT_CNT_Values<ngTIM11::CNT, 0, 16, ReadWrite, TIM11CNTBase>;
        using FieldValues = TIM11_CNT_CNT_Values<ngTIM11::CNT, 0, 16, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using CNTPack = FieldsPack<0x40011024, 32, ReadWrite, TIM11CNTBase, T...>;
    
    struct TIM11PSCBase {};
    
    struct PSC : public Register<0x40011028, ReadWrite, 32> {
        using PSCField = TIM11_PSC_PSC_Values<ngTIM11::PSC, 0, 16, ReadWrite, TIM11PSCBase>;
        using FieldValues = TIM11_PSC_PSC_Values<ngTIM11::PSC, 0, 16, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using PSCPack = FieldsPack<0x40011028, 32, ReadWrite, TIM11PSCBase, T...>;
    
    struct TIM11ARRBase {};
    
    struct ARR : public Register<0x4001102C, ReadWrite, 32> {
        using ARRField = TIM11_ARR_ARR_Values<ngTIM11::ARR, 0, 16, ReadWrite, TIM11ARRBase>;
        using FieldValues = TIM11_ARR_ARR_Values<ngTIM11::ARR, 0, 16, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using ARRPack = FieldsPack<0x4001102C, 32, ReadWrite, TIM11ARRBase, T...>;
    
    struct TIM11CCR1Base {};
    
    struct CCR1 : public Register<0x40011034, ReadWrite, 32> {
        using CCR1Field = TIM11_CCR1_CCR1_Values<ngTIM11::CCR1, 0, 16, ReadWrite, TIM11CCR1Base>;
        using FieldValues = TIM11_CCR1_CCR1_Values<ngTIM11::CCR1, 0, 16, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using CCR1Pack = FieldsPack<0x40011034, 32, ReadWrite, TIM11CCR1Base, T...>;
    
    struct TIM11ORBase {};
    
    struct OR : public Register<0x40011050, ReadWrite, 32> {
        using TI1_RMP_RI = TIM11_OR_TI1_RMP_RI_Values<ngTIM11::OR, 3, 1, ReadWrite, TIM11ORBase>;
        using ETR_RMP = TIM11_OR_ETR_RMP_Values<ngTIM11::OR, 2, 1, ReadWrite, TIM11ORBase>;
        using TI1_RMP = TIM11_OR_TI1_RMP_Values<ngTIM11::OR, 0, 2, ReadWrite, TIM11ORBase>;
        
        using FieldValues = TIM11_OR_TI1_RMP_RI_Values<ngTIM11::OR, 0, 2, NoAccess, NoAccess>;
    };
    
    template<typename... T>
    using ORPack = FieldsPack<0x40011050, 32, ReadWrite, TIM11ORBase, T...>;
};

