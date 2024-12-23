/*******************************************************************************
* Filename      : Tim3Registers.hpp
*
* Details       : General-purpose timers. This header file is auto-generated for
*                 STM32L152 device.
*
*
*******************************************************************************/

#pragma once

#include "FieldValues/Tim3FieldValues.hpp"
#include <register/Register.hpp>
#include <register/FieldsPack.hpp>
#include <register/Access.hpp>

using namespace ng;

struct ngTIM3 {
    struct TIM3CR1Base {
    };

    struct CR1 : public Register<0x40000400, ReadWrite, 32> {
        using CKD = TIM3_CR1_CKD_Values<ngTIM3::CR1, 8, 2, ReadWrite, TIM3CR1Base>;
        using ARPE = TIM3_CR1_ARPE_Values<ngTIM3::CR1, 7, 1, ReadWrite, TIM3CR1Base>;
        using CMS = TIM3_CR1_CMS_Values<ngTIM3::CR1, 5, 2, ReadWrite, TIM3CR1Base>;
        using DIR = TIM3_CR1_DIR_Values<ngTIM3::CR1, 4, 1, ReadWrite, TIM3CR1Base>;
        using OPM = TIM3_CR1_OPM_Values<ngTIM3::CR1, 3, 1, ReadWrite, TIM3CR1Base>;
        using URS = TIM3_CR1_URS_Values<ngTIM3::CR1, 2, 1, ReadWrite, TIM3CR1Base>;
        using UDIS = TIM3_CR1_UDIS_Values<ngTIM3::CR1, 1, 1, ReadWrite, TIM3CR1Base>;
        using CEN = TIM3_CR1_CEN_Values<ngTIM3::CR1, 0, 1, ReadWrite, TIM3CR1Base>;
        using FieldValues = TIM3_CR1_CEN_Values<ngTIM3::CR1, 0, 2, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CR1Pack = FieldsPack<0x40000400, 32, ReadWrite, TIM3CR1Base, T...>;

    struct TIM3CR2Base {
    };

    struct CR2 : public Register<0x40000404, ReadWrite, 32> {
        using TI1S = TIM3_CR2_TI1S_Values<ngTIM3::CR2, 7, 1, ReadWrite, TIM3CR2Base>;
        using MMS = TIM3_CR2_MMS_Values<ngTIM3::CR2, 4, 3, ReadWrite, TIM3CR2Base>;
        using CCDS = TIM3_CR2_CCDS_Values<ngTIM3::CR2, 3, 1, ReadWrite, TIM3CR2Base>;
        using FieldValues = TIM3_CR2_CCDS_Values<ngTIM3::CR2, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CR2Pack = FieldsPack<0x40000404, 32, ReadWrite, TIM3CR2Base, T...>;

    struct TIM3SMCRBase {
    };

    struct SMCR : public Register<0x40000408, ReadWrite, 32> {
        using ETP = TIM3_SMCR_ETP_Values<ngTIM3::SMCR, 15, 1, ReadWrite, TIM3SMCRBase>;
        using ECE = TIM3_SMCR_ECE_Values<ngTIM3::SMCR, 14, 1, ReadWrite, TIM3SMCRBase>;
        using ETPS = TIM3_SMCR_ETPS_Values<ngTIM3::SMCR, 12, 2, ReadWrite, TIM3SMCRBase>;
        using ETF = TIM3_SMCR_ETF_Values<ngTIM3::SMCR, 8, 4, ReadWrite, TIM3SMCRBase>;
        using MSM = TIM3_SMCR_MSM_Values<ngTIM3::SMCR, 7, 1, ReadWrite, TIM3SMCRBase>;
        using TS = TIM3_SMCR_TS_Values<ngTIM3::SMCR, 4, 3, ReadWrite, TIM3SMCRBase>;
        using OCCS = TIM3_SMCR_OCCS_Values<ngTIM3::SMCR, 3, 1, ReadWrite, TIM3SMCRBase>;
        using SMS = TIM3_SMCR_SMS_Values<ngTIM3::SMCR, 0, 3, ReadWrite, TIM3SMCRBase>;
        using FieldValues = TIM3_SMCR_SMS_Values<ngTIM3::SMCR, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using SMCRPack = FieldsPack<0x40000408, 32, ReadWrite, TIM3SMCRBase, T...>;

    struct TIM3DIERBase {
    };

    struct DIER : public Register<0x4000040C, ReadWrite, 32> {
        using TDE = TIM3_DIER_TDE_Values<ngTIM3::DIER, 14, 1, ReadWrite, TIM3DIERBase>;
        using CC4DE = TIM3_DIER_CC4DE_Values<ngTIM3::DIER, 12, 1, ReadWrite, TIM3DIERBase>;
        using CC3DE = TIM3_DIER_CC3DE_Values<ngTIM3::DIER, 11, 1, ReadWrite, TIM3DIERBase>;
        using CC2DE = TIM3_DIER_CC2DE_Values<ngTIM3::DIER, 10, 1, ReadWrite, TIM3DIERBase>;
        using CC1DE = TIM3_DIER_CC1DE_Values<ngTIM3::DIER, 9, 1, ReadWrite, TIM3DIERBase>;
        using UDE = TIM3_DIER_UDE_Values<ngTIM3::DIER, 8, 1, ReadWrite, TIM3DIERBase>;
        using TIE = TIM3_DIER_TIE_Values<ngTIM3::DIER, 6, 1, ReadWrite, TIM3DIERBase>;
        using CC4IE = TIM3_DIER_CC4IE_Values<ngTIM3::DIER, 4, 1, ReadWrite, TIM3DIERBase>;
        using CC3IE = TIM3_DIER_CC3IE_Values<ngTIM3::DIER, 3, 1, ReadWrite, TIM3DIERBase>;
        using CC2IE = TIM3_DIER_CC2IE_Values<ngTIM3::DIER, 2, 1, ReadWrite, TIM3DIERBase>;
        using CC1IE = TIM3_DIER_CC1IE_Values<ngTIM3::DIER, 1, 1, ReadWrite, TIM3DIERBase>;
        using UIE = TIM3_DIER_UIE_Values<ngTIM3::DIER, 0, 1, ReadWrite, TIM3DIERBase>;
        using FieldValues = TIM3_DIER_UIE_Values<ngTIM3::DIER, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using DIERPack = FieldsPack<0x4000040C, 32, ReadWrite, TIM3DIERBase, T...>;

    struct TIM3SRBase {
    };

    struct SR : public Register<0x40000410, ReadWrite, 32> {
        using CC4OF = TIM3_SR_CC4OF_Values<ngTIM3::SR, 12, 1, ReadWrite, TIM3SRBase>;
        using CC3OF = TIM3_SR_CC3OF_Values<ngTIM3::SR, 11, 1, ReadWrite, TIM3SRBase>;
        using CC2OF = TIM3_SR_CC2OF_Values<ngTIM3::SR, 10, 1, ReadWrite, TIM3SRBase>;
        using CC1OF = TIM3_SR_CC1OF_Values<ngTIM3::SR, 9, 1, ReadWrite, TIM3SRBase>;
        using TIF = TIM3_SR_TIF_Values<ngTIM3::SR, 6, 1, ReadWrite, TIM3SRBase>;
        using CC4IF = TIM3_SR_CC4IF_Values<ngTIM3::SR, 4, 1, ReadWrite, TIM3SRBase>;
        using CC3IF = TIM3_SR_CC3IF_Values<ngTIM3::SR, 3, 1, ReadWrite, TIM3SRBase>;
        using CC2IF = TIM3_SR_CC2IF_Values<ngTIM3::SR, 2, 1, ReadWrite, TIM3SRBase>;
        using CC1IF = TIM3_SR_CC1IF_Values<ngTIM3::SR, 1, 1, ReadWrite, TIM3SRBase>;
        using UIF = TIM3_SR_UIF_Values<ngTIM3::SR, 0, 1, ReadWrite, TIM3SRBase>;
        using FieldValues = TIM3_SR_UIF_Values<ngTIM3::SR, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using SRPack = FieldsPack<0x40000410, 32, ReadWrite, TIM3SRBase, T...>;

    struct TIM3EGRBase {
    };

    struct EGR : public Register<0x40000414, ReadWrite, 32> {
        using TG = TIM3_EGR_TG_Values<ngTIM3::EGR, 6, 1, ReadWrite, TIM3EGRBase>;
        using CC4G = TIM3_EGR_CC4G_Values<ngTIM3::EGR, 4, 1, ReadWrite, TIM3EGRBase>;
        using CC3G = TIM3_EGR_CC3G_Values<ngTIM3::EGR, 3, 1, ReadWrite, TIM3EGRBase>;
        using CC2G = TIM3_EGR_CC2G_Values<ngTIM3::EGR, 2, 1, ReadWrite, TIM3EGRBase>;
        using CC1G = TIM3_EGR_CC1G_Values<ngTIM3::EGR, 1, 1, ReadWrite, TIM3EGRBase>;
        using UG = TIM3_EGR_UG_Values<ngTIM3::EGR, 0, 1, ReadWrite, TIM3EGRBase>;
        using FieldValues = TIM3_EGR_UG_Values<ngTIM3::EGR, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using EGRPack = FieldsPack<0x40000414, 32, ReadWrite, TIM3EGRBase, T...>;

    struct TIM3CCMR1_OutputBase {
    };

    struct CCMR1_Output : public Register<0x40000418, ReadWrite, 32> {
        using OC2CE = TIM3_CCMR1_Output_OC2CE_Values<ngTIM3::CCMR1_Output, 15, 1, ReadWrite, TIM3CCMR1_OutputBase>;
        using OC2M = TIM3_CCMR1_Output_OC2M_Values<ngTIM3::CCMR1_Output, 12, 3, ReadWrite, TIM3CCMR1_OutputBase>;
        using OC2PE = TIM3_CCMR1_Output_OC2PE_Values<ngTIM3::CCMR1_Output, 11, 1, ReadWrite, TIM3CCMR1_OutputBase>;
        using OC2FE = TIM3_CCMR1_Output_OC2FE_Values<ngTIM3::CCMR1_Output, 10, 1, ReadWrite, TIM3CCMR1_OutputBase>;
        using CC2S = TIM3_CCMR1_Output_CC2S_Values<ngTIM3::CCMR1_Output, 8, 1, ReadWrite, TIM3CCMR1_OutputBase>;
        using OC1CE = TIM3_CCMR1_Output_OC1CE_Values<ngTIM3::CCMR1_Output, 7, 1, ReadWrite, TIM3CCMR1_OutputBase>;
        using OC1M = TIM3_CCMR1_Output_OC1M_Values<ngTIM3::CCMR1_Output, 4, 3, ReadWrite, TIM3CCMR1_OutputBase>;
        using OC1PE = TIM3_CCMR1_Output_OC1PE_Values<ngTIM3::CCMR1_Output, 3, 1, ReadWrite, TIM3CCMR1_OutputBase>;
        using OC1FE = TIM3_CCMR1_Output_OC1FE_Values<ngTIM3::CCMR1_Output, 2, 1, ReadWrite, TIM3CCMR1_OutputBase>;
        using CC1S = TIM3_CCMR1_Output_CC1S_Values<ngTIM3::CCMR1_Output, 0, 2, ReadWrite, TIM3CCMR1_OutputBase>;
        using FieldValues = TIM3_CCMR1_Output_CC1S_Values<ngTIM3::CCMR1_Output, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CCMR1_OutputPack = FieldsPack<0x40000418, 32, ReadWrite, TIM3CCMR1_OutputBase, T...>;

    struct TIM3CCMR1_InputBase {
    };

    struct CCMR1_Input : public Register<0x40000418, ReadWrite, 32> {
        using IC2F = TIM3_CCMR1_Input_IC2F_Values<ngTIM3::CCMR1_Input, 12, 4, ReadWrite, TIM3CCMR1_InputBase>;
        using IC2PCS = TIM3_CCMR1_Input_IC2PCS_Values<ngTIM3::CCMR1_Input, 10, 2, ReadWrite, TIM3CCMR1_InputBase>;
        using CC2S = TIM3_CCMR1_Input_CC2S_Values<ngTIM3::CCMR1_Input, 8, 2, ReadWrite, TIM3CCMR1_InputBase>;
        using IC1F = TIM3_CCMR1_Input_IC1F_Values<ngTIM3::CCMR1_Input, 4, 4, ReadWrite, TIM3CCMR1_InputBase>;
        using ICPCS = TIM3_CCMR1_Input_ICPCS_Values<ngTIM3::CCMR1_Input, 2, 2, ReadWrite, TIM3CCMR1_InputBase>;
        using CC1S = TIM3_CCMR1_Input_CC1S_Values<ngTIM3::CCMR1_Input, 0, 2, ReadWrite, TIM3CCMR1_InputBase>;
        using FieldValues = TIM3_CCMR1_Input_CC1S_Values<ngTIM3::CCMR1_Input, 0, 4, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CCMR1_InputPack = FieldsPack<0x40000418, 32, ReadWrite, TIM3CCMR1_InputBase, T...>;

    struct TIM3CCMR2_OutputBase {
    };

    struct CCMR2_Output : public Register<0x4000041C, ReadWrite, 32> {
        using OC4CE = TIM3_CCMR2_Output_OC4CE_Values<ngTIM3::CCMR2_Output, 15, 1, ReadWrite, TIM3CCMR2_OutputBase>;
        using OC4M = TIM3_CCMR2_Output_OC4M_Values<ngTIM3::CCMR2_Output, 12, 3, ReadWrite, TIM3CCMR2_OutputBase>;
        using OC4PE = TIM3_CCMR2_Output_OC4PE_Values<ngTIM3::CCMR2_Output, 11, 1, ReadWrite, TIM3CCMR2_OutputBase>;
        using OC4FE = TIM3_CCMR2_Output_OC4FE_Values<ngTIM3::CCMR2_Output, 10, 1, ReadWrite, TIM3CCMR2_OutputBase>;
        using CC4S = TIM3_CCMR2_Output_CC4S_Values<ngTIM3::CCMR2_Output, 8, 1, ReadWrite, TIM3CCMR2_OutputBase>;
        using OC3CE = TIM3_CCMR2_Output_OC3CE_Values<ngTIM3::CCMR2_Output, 7, 1, ReadWrite, TIM3CCMR2_OutputBase>;
        using OC3M = TIM3_CCMR2_Output_OC3M_Values<ngTIM3::CCMR2_Output, 4, 3, ReadWrite, TIM3CCMR2_OutputBase>;
        using OC3PE = TIM3_CCMR2_Output_OC3PE_Values<ngTIM3::CCMR2_Output, 3, 1, ReadWrite, TIM3CCMR2_OutputBase>;
        using OC3FE = TIM3_CCMR2_Output_OC3FE_Values<ngTIM3::CCMR2_Output, 2, 1, ReadWrite, TIM3CCMR2_OutputBase>;
        using CC3S = TIM3_CCMR2_Output_CC3S_Values<ngTIM3::CCMR2_Output, 0, 2, ReadWrite, TIM3CCMR2_OutputBase>;
        using FieldValues = TIM3_CCMR2_Output_CC3S_Values<ngTIM3::CCMR2_Output, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CCMR2_OutputPack = FieldsPack<0x4000041C, 32, ReadWrite, TIM3CCMR2_OutputBase, T...>;

    struct TIM3CCMR2_InputBase {
    };

    struct CCMR2_Input : public Register<0x4000041C, ReadWrite, 32> {
        using IC4F = TIM3_CCMR2_Input_IC4F_Values<ngTIM3::CCMR2_Input, 12, 4, ReadWrite, TIM3CCMR2_InputBase>;
        using IC4PSC = TIM3_CCMR2_Input_IC4PSC_Values<ngTIM3::CCMR2_Input, 10, 2, ReadWrite, TIM3CCMR2_InputBase>;
        using CC4S = TIM3_CCMR2_Input_CC4S_Values<ngTIM3::CCMR2_Input, 8, 2, ReadWrite, TIM3CCMR2_InputBase>;
        using IC3F = TIM3_CCMR2_Input_IC3F_Values<ngTIM3::CCMR2_Input, 4, 4, ReadWrite, TIM3CCMR2_InputBase>;
        using IC3PSC = TIM3_CCMR2_Input_IC3PSC_Values<ngTIM3::CCMR2_Input, 2, 2, ReadWrite, TIM3CCMR2_InputBase>;
        using CC3S = TIM3_CCMR2_Input_CC3S_Values<ngTIM3::CCMR2_Input, 0, 2, ReadWrite, TIM3CCMR2_InputBase>;
        using FieldValues = TIM3_CCMR2_Input_CC3S_Values<ngTIM3::CCMR2_Input, 0, 4, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CCMR2_InputPack = FieldsPack<0x4000041C, 32, ReadWrite, TIM3CCMR2_InputBase, T...>;

    struct TIM3CCERBase {
    };

    struct CCER : public Register<0x40000420, ReadWrite, 32> {
        using CC4NP = TIM3_CCER_CC4NP_Values<ngTIM3::CCER, 15, 1, ReadWrite, TIM3CCERBase>;
        using CC4P = TIM3_CCER_CC4P_Values<ngTIM3::CCER, 13, 1, ReadWrite, TIM3CCERBase>;
        using CC4E = TIM3_CCER_CC4E_Values<ngTIM3::CCER, 12, 1, ReadWrite, TIM3CCERBase>;
        using CC3NP = TIM3_CCER_CC3NP_Values<ngTIM3::CCER, 11, 1, ReadWrite, TIM3CCERBase>;
        using CC3P = TIM3_CCER_CC3P_Values<ngTIM3::CCER, 9, 1, ReadWrite, TIM3CCERBase>;
        using CC3E = TIM3_CCER_CC3E_Values<ngTIM3::CCER, 8, 1, ReadWrite, TIM3CCERBase>;
        using CC2NP = TIM3_CCER_CC2NP_Values<ngTIM3::CCER, 7, 1, ReadWrite, TIM3CCERBase>;
        using CC2P = TIM3_CCER_CC2P_Values<ngTIM3::CCER, 5, 1, ReadWrite, TIM3CCERBase>;
        using CC2E = TIM3_CCER_CC2E_Values<ngTIM3::CCER, 4, 1, ReadWrite, TIM3CCERBase>;
        using CC1NP = TIM3_CCER_CC1NP_Values<ngTIM3::CCER, 3, 1, ReadWrite, TIM3CCERBase>;
        using CC1P = TIM3_CCER_CC1P_Values<ngTIM3::CCER, 1, 1, ReadWrite, TIM3CCERBase>;
        using CC1E = TIM3_CCER_CC1E_Values<ngTIM3::CCER, 0, 1, ReadWrite, TIM3CCERBase>;
        using FieldValues = TIM3_CCER_CC1E_Values<ngTIM3::CCER, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CCERPack = FieldsPack<0x40000420, 32, ReadWrite, TIM3CCERBase, T...>;

    struct TIM3CNTBase {
    };

    struct CNT : public Register<0x40000424, ReadWrite, 32> {
        using CNTField = TIM3_CNT_CNT_Values<ngTIM3::CNT, 0, 16, ReadWrite, TIM3CNTBase>;
        using FieldValues = TIM3_CNT_CNT_Values<ngTIM3::CNT, 0, 16, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CNTPack = FieldsPack<0x40000424, 32, ReadWrite, TIM3CNTBase, T...>;

    struct TIM3PSCBase {
    };

    struct PSC : public Register<0x40000428, ReadWrite, 32> {
        using PSCField = TIM3_PSC_PSC_Values<ngTIM3::PSC, 0, 16, ReadWrite, TIM3PSCBase>;
        using FieldValues = TIM3_PSC_PSC_Values<ngTIM3::PSC, 0, 16, NoAccess, NoAccess>;
    };

    template<typename... T>
    using PSCPack = FieldsPack<0x40000428, 32, ReadWrite, TIM3PSCBase, T...>;

    struct TIM3ARRBase {
    };

    struct ARR : public Register<0x4000042C, ReadWrite, 32> {
        using ARRField = TIM3_ARR_ARR_Values<ngTIM3::ARR, 0, 16, ReadWrite, TIM3ARRBase>;
        using FieldValues = TIM3_ARR_ARR_Values<ngTIM3::ARR, 0, 16, NoAccess, NoAccess>;
    };

    template<typename... T>
    using ARRPack = FieldsPack<0x4000042C, 32, ReadWrite, TIM3ARRBase, T...>;

    struct TIM3CCR1Base {
    };

    struct CCR1 : public Register<0x40000434, ReadWrite, 32> {
        using CCR1Field = TIM3_CCR1_CCR1_Values<ngTIM3::CCR1, 0, 16, ReadWrite, TIM3CCR1Base>;
        using FieldValues = TIM3_CCR1_CCR1_Values<ngTIM3::CCR1, 0, 16, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CCR1Pack = FieldsPack<0x40000434, 32, ReadWrite, TIM3CCR1Base, T...>;

    struct TIM3CCR2Base {
    };

    struct CCR2 : public Register<0x40000438, ReadWrite, 32> {
        using CCR2Field = TIM3_CCR2_CCR2_Values<ngTIM3::CCR2, 0, 16, ReadWrite, TIM3CCR2Base>;
        using FieldValues = TIM3_CCR2_CCR2_Values<ngTIM3::CCR2, 0, 16, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CCR2Pack = FieldsPack<0x40000438, 32, ReadWrite, TIM3CCR2Base, T...>;

    struct TIM3CCR3Base {
    };

    struct CCR3 : public Register<0x4000043C, ReadWrite, 32> {
        using CCR1 = TIM3_CCR3_CCR1_Values<ngTIM3::CCR3, 0, 16, ReadWrite, TIM3CCR3Base>;
        using FieldValues = TIM3_CCR3_CCR1_Values<ngTIM3::CCR3, 0, 16, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CCR3Pack = FieldsPack<0x4000043C, 32, ReadWrite, TIM3CCR3Base, T...>;

    struct TIM3CCR4Base {
    };

    struct CCR4 : public Register<0x40000440, ReadWrite, 32> {
        using CCR4Field = TIM3_CCR4_CCR4_Values<ngTIM3::CCR4, 0, 16, ReadWrite, TIM3CCR4Base>;
        using FieldValues = TIM3_CCR4_CCR4_Values<ngTIM3::CCR4, 0, 16, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CCR4Pack = FieldsPack<0x40000440, 32, ReadWrite, TIM3CCR4Base, T...>;

    struct TIM3DCRBase {
    };

    struct DCR : public Register<0x40000448, ReadWrite, 32> {
        using DBL = TIM3_DCR_DBL_Values<ngTIM3::DCR, 8, 5, ReadWrite, TIM3DCRBase>;
        using DBA = TIM3_DCR_DBA_Values<ngTIM3::DCR, 0, 5, ReadWrite, TIM3DCRBase>;
        using FieldValues = TIM3_DCR_DBA_Values<ngTIM3::DCR, 0, 5, NoAccess, NoAccess>;
    };

    template<typename... T>
    using DCRPack = FieldsPack<0x40000448, 32, ReadWrite, TIM3DCRBase, T...>;

    struct TIM3DMARBase {
    };

    struct DMAR : public Register<0x4000044C, ReadWrite, 32> {
        using DMAB = TIM3_DMAR_DMAB_Values<ngTIM3::DMAR, 0, 16, ReadWrite, TIM3DMARBase>;
        using FieldValues = TIM3_DMAR_DMAB_Values<ngTIM3::DMAR, 0, 16, NoAccess, NoAccess>;
    };

    template<typename... T>
    using DMARPack = FieldsPack<0x4000044C, 32, ReadWrite, TIM3DMARBase, T...>;

};

