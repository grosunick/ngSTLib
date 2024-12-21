/*******************************************************************************
* Filename      : Tim7FieldValues.hpp
*
* Details       : Enumerations related with TIM7 peripheral. This header file is
*                 auto-generated for STM32L1xx device.
*
*
*******************************************************************************/

#pragma once

#include <register/FieldValue.hpp>

using namespace ng;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CR1_ARPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_CR1_ARPE_Values, 0U, BaseType>;
  using Value1 = FieldValue<TIM7_CR1_ARPE_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CR1_OPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_CR1_OPM_Values, 0U, BaseType>;
  using Value1 = FieldValue<TIM7_CR1_OPM_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CR1_URS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_CR1_URS_Values, 0U, BaseType>;
  using Value1 = FieldValue<TIM7_CR1_URS_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CR1_UDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_CR1_UDIS_Values, 0U, BaseType>;
  using Value1 = FieldValue<TIM7_CR1_UDIS_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CR1_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_CR1_CEN_Values, 0U, BaseType>;
  using Value1 = FieldValue<TIM7_CR1_CEN_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CR2_MMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_CR2_MMS_Values, 0U, BaseType>;
  using Value1 = FieldValue<TIM7_CR2_MMS_Values, 1U, BaseType>;
  using Value2 = FieldValue<TIM7_CR2_MMS_Values, 2U, BaseType>;
  using Value3 = FieldValue<TIM7_CR2_MMS_Values, 3U, BaseType>;
  using Value4 = FieldValue<TIM7_CR2_MMS_Values, 4U, BaseType>;
  using Value5 = FieldValue<TIM7_CR2_MMS_Values, 5U, BaseType>;
  using Value6 = FieldValue<TIM7_CR2_MMS_Values, 6U, BaseType>;
  using Value7 = FieldValue<TIM7_CR2_MMS_Values, 7U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_DIER_UDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_DIER_UDE_Values, 0U, BaseType>;
  using Value1 = FieldValue<TIM7_DIER_UDE_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_DIER_UIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_DIER_UIE_Values, 0U, BaseType>;
  using Value1 = FieldValue<TIM7_DIER_UIE_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_SR_UIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_SR_UIF_Values, 0U, BaseType>;
  using Value1 = FieldValue<TIM7_SR_UIF_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_EGR_UG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM7_EGR_UG_Values, 0U, BaseType>;
  using Value1 = FieldValue<TIM7_EGR_UG_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM7_ARR_ARR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
};

