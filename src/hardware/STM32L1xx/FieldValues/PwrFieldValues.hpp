/*******************************************************************************
* Filename      : PwrFieldValues.hpp
*
* Details       : Enumerations related with PWR peripheral. This header file is
*                 auto-generated for STM32L1xx device.
*
*
*******************************************************************************/

#pragma once

#include <register/FieldValue.hpp>

using namespace ng;

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CR_LPRUN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CR_LPRUN_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CR_LPRUN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CR_VOS_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Range1 = FieldValue<PWR_CR_VOS_Values, 1U, BaseType>;
    using Range2 = FieldValue<PWR_CR_VOS_Values, 2U, BaseType>;
    using Range3 = FieldValue<PWR_CR_VOS_Values, 3U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CR_FWU_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CR_FWU_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CR_FWU_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CR_ULP_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CR_ULP_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CR_ULP_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CR_DBP_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CR_DBP_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CR_DBP_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CR_PLS_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CR_PLS_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CR_PLS_Values, 1U, BaseType>;
    using Value2 = FieldValue<PWR_CR_PLS_Values, 2U, BaseType>;
    using Value3 = FieldValue<PWR_CR_PLS_Values, 3U, BaseType>;
    using Value4 = FieldValue<PWR_CR_PLS_Values, 4U, BaseType>;
    using Value5 = FieldValue<PWR_CR_PLS_Values, 5U, BaseType>;
    using Value6 = FieldValue<PWR_CR_PLS_Values, 6U, BaseType>;
    using Value7 = FieldValue<PWR_CR_PLS_Values, 7U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CR_PVDE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CR_PVDE_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CR_PVDE_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CR_CSBF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CR_CSBF_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CR_CSBF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CR_CWUF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CR_CWUF_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CR_CWUF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CR_PDDS_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CR_PDDS_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CR_PDDS_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CR_LPSDSR_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CR_LPSDSR_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CR_LPSDSR_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CSR_EWUP3_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CSR_EWUP3_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CSR_EWUP3_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CSR_EWUP2_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CSR_EWUP2_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CSR_EWUP2_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CSR_EWUP1_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CSR_EWUP1_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CSR_EWUP1_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CSR_REGLPF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CSR_REGLPF_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CSR_REGLPF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CSR_VOSF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using NotReady = FieldValue<PWR_CSR_VOSF_Values, 0U, BaseType>;
    using Ready = FieldValue<PWR_CSR_VOSF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CSR_VREFINTRDYF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CSR_VREFINTRDYF_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CSR_VREFINTRDYF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CSR_PVDO_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CSR_PVDO_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CSR_PVDO_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CSR_SBF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CSR_SBF_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CSR_SBF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct PWR_CSR_WUF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<PWR_CSR_WUF_Values, 0U, BaseType>;
    using Value1 = FieldValue<PWR_CSR_WUF_Values, 1U, BaseType>;
};

