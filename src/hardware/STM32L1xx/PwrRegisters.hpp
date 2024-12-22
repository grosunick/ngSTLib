/*******************************************************************************
* Filename      : PwrRegisters.hpp
*
* Details       : Power control. This header file is auto-generated for
*                 STM32L1xx device.
*
*
*******************************************************************************/

#pragma once

#include "FieldValues/PwrFieldValues.hpp"
#include <register/Register.hpp>
#include <register/FieldsPack.hpp>
#include <register/Access.hpp>

using namespace ng;

struct ngPWR {
    struct PWRCRBase {
    };

    struct CR : public Register<0x40007000, ReadWrite, 32> {
        using LPRUN = PWR_CR_LPRUN_Values<ngPWR::CR, 14, 1, ReadWrite, PWRCRBase>;
        using VOS = PWR_CR_VOS_Values<ngPWR::CR, 11, 2, ReadWrite, PWRCRBase>;
        using FWU = PWR_CR_FWU_Values<ngPWR::CR, 10, 1, ReadWrite, PWRCRBase>;
        using ULP = PWR_CR_ULP_Values<ngPWR::CR, 9, 1, ReadWrite, PWRCRBase>;
        using DBP = PWR_CR_DBP_Values<ngPWR::CR, 8, 1, ReadWrite, PWRCRBase>;
        using PLS = PWR_CR_PLS_Values<ngPWR::CR, 5, 3, ReadWrite, PWRCRBase>;
        using PVDE = PWR_CR_PVDE_Values<ngPWR::CR, 4, 1, ReadWrite, PWRCRBase>;
        using CSBF = PWR_CR_CSBF_Values<ngPWR::CR, 3, 1, ReadWrite, PWRCRBase>;
        using CWUF = PWR_CR_CWUF_Values<ngPWR::CR, 2, 1, ReadWrite, PWRCRBase>;
        using PDDS = PWR_CR_PDDS_Values<ngPWR::CR, 1, 1, ReadWrite, PWRCRBase>;
        using LPSDSR = PWR_CR_LPSDSR_Values<ngPWR::CR, 0, 1, ReadWrite, PWRCRBase>;
        using FieldValues = PWR_CR_LPSDSR_Values<ngPWR::CR, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CRPack = FieldsPack<0x40007000, 32, ReadWrite, PWRCRBase, T...>;

    struct PWRCSRBase {
    };

    struct CSR : public Register<0x40007004, ReadWrite, 32> {
        using EWUP3 = PWR_CSR_EWUP3_Values<ngPWR::CSR, 10, 1, ReadWrite, PWRCSRBase>;
        using EWUP2 = PWR_CSR_EWUP2_Values<ngPWR::CSR, 9, 1, ReadWrite, PWRCSRBase>;
        using EWUP1 = PWR_CSR_EWUP1_Values<ngPWR::CSR, 8, 1, ReadWrite, PWRCSRBase>;
        using REGLPF = PWR_CSR_REGLPF_Values<ngPWR::CSR, 5, 1, Read, PWRCSRBase>;
        using VOSF = PWR_CSR_VOSF_Values<ngPWR::CSR, 4, 1, Read, PWRCSRBase>;
        using VREFINTRDYF = PWR_CSR_VREFINTRDYF_Values<ngPWR::CSR, 3, 1, Read, PWRCSRBase>;
        using PVDO = PWR_CSR_PVDO_Values<ngPWR::CSR, 2, 1, Read, PWRCSRBase>;
        using SBF = PWR_CSR_SBF_Values<ngPWR::CSR, 1, 1, Read, PWRCSRBase>;
        using WUF = PWR_CSR_WUF_Values<ngPWR::CSR, 0, 1, Read, PWRCSRBase>;
        using FieldValues = PWR_CSR_WUF_Values<ngPWR::CSR, 0, 1, NoAccess, NoAccess>;
    };

    template<typename... T>
    using CSRPack = FieldsPack<0x40007004, 32, ReadWrite, PWRCSRBase, T...>;

};

