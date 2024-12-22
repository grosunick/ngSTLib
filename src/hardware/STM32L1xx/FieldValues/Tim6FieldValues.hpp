/*******************************************************************************
* Filename      : Tim6FieldValues.hpp
*
* Details       : Enumerations related with TIM6 peripheral. This header file is
*                 auto-generated for STM32L1xx device.
*
*
*******************************************************************************/

#pragma once

#include <register/FieldValue.hpp>

using namespace ng;

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_CR1_ARPE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using NotBuffered = FieldValue<TIM6_CR1_ARPE_Values, 0U, BaseType>;
    using Buffered = FieldValue<TIM6_CR1_ARPE_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_CR1_OPM_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<TIM6_CR1_OPM_Values, 0U, BaseType>;
    using Value1 = FieldValue<TIM6_CR1_OPM_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_CR1_URS_Values : public RegisterField<Reg, offset, size, AccessMode> {
    /**
     * This bit is set and cleared by software to select the UEV event sources.
     * 0: Any of the following events generates an update interrupt or DMA request if enabled.
     * These events can be:
     *   – Counter overflow/underflow
     *   – Setting the UG bit
     *   – Update generation through the slave mode controller
     */
    using AllEvents = FieldValue<TIM6_CR1_URS_Values, 0U, BaseType>;
    /** 1: Only counter overflow/underflow generates an update interrupt or DMA request if enabled. */
    using CounterOverflow = FieldValue<TIM6_CR1_URS_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_CR1_UDIS_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Enable = FieldValue<TIM6_CR1_UDIS_Values, 0U, BaseType>;
    using Disable = FieldValue<TIM6_CR1_UDIS_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_CR1_CEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<TIM6_CR1_CEN_Values, 0U, BaseType>;
    using Enable = FieldValue<TIM6_CR1_CEN_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_CR2_MMS_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Value0 = FieldValue<TIM6_CR2_MMS_Values, 0U, BaseType>;
    using Value1 = FieldValue<TIM6_CR2_MMS_Values, 1U, BaseType>;
    using Value2 = FieldValue<TIM6_CR2_MMS_Values, 2U, BaseType>;
    using Value3 = FieldValue<TIM6_CR2_MMS_Values, 3U, BaseType>;
    using Value4 = FieldValue<TIM6_CR2_MMS_Values, 4U, BaseType>;
    using Value5 = FieldValue<TIM6_CR2_MMS_Values, 5U, BaseType>;
    using Value6 = FieldValue<TIM6_CR2_MMS_Values, 6U, BaseType>;
    using Value7 = FieldValue<TIM6_CR2_MMS_Values, 7U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_DIER_UDE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disabled = FieldValue<TIM6_DIER_UDE_Values, 0U, BaseType>;
    using Enabled = FieldValue<TIM6_DIER_UDE_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_DIER_UIE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disabled = FieldValue<TIM6_DIER_UIE_Values, 0U, BaseType>;
    using Enabled = FieldValue<TIM6_DIER_UIE_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_SR_UIF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Cleared = FieldValue<TIM6_SR_UIF_Values, 0U, BaseType>;
    using Updated = FieldValue<TIM6_SR_UIF_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_EGR_UG_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using NoAction = FieldValue<TIM6_EGR_UG_Values, 0U, BaseType>;
    using ReInit = FieldValue<TIM6_EGR_UG_Values, 1U, BaseType>;
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_CNT_CNT_Values : public RegisterField<Reg, offset, size, AccessMode> {
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_PSC_PSC_Values : public RegisterField<Reg, offset, size, AccessMode> {
};

template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_ARR_ARR_Values : public RegisterField<Reg, offset, size, AccessMode> {
};
