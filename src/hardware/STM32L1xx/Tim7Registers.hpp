/*******************************************************************************
* Filename      : Tim7Registers.hpp
*
* Details       : Basic timers. This header file is auto-generated for STM32L1xx
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "FieldValues/Tim7FieldValues.hpp"
#include <register/Register.hpp>
#include <register/FieldsPack.hpp>
#include <register/Access.hpp>

using namespace ng;

struct ngTIM7
{
  struct TIM7CR1Base {};

  struct CR1 : public Register<0x40001400, ReadWrite, 32>
  {
    using ARPE = TIM7_CR1_ARPE_Values<ngTIM7::CR1, 7, 1, ReadWrite, TIM7CR1Base>;
    using OPM = TIM7_CR1_OPM_Values<ngTIM7::CR1, 3, 1, ReadWrite, TIM7CR1Base>;
    using URS = TIM7_CR1_URS_Values<ngTIM7::CR1, 2, 1, ReadWrite, TIM7CR1Base>;
    using UDIS = TIM7_CR1_UDIS_Values<ngTIM7::CR1, 1, 1, ReadWrite, TIM7CR1Base>;
    using CEN = TIM7_CR1_CEN_Values<ngTIM7::CR1, 0, 1, ReadWrite, TIM7CR1Base>;
    using FieldValues = TIM7_CR1_CEN_Values<ngTIM7::CR1, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using CR1Pack  = FieldsPack<0x40001400, 32, ReadWrite, TIM7CR1Base, T...>;

  struct TIM7CR2Base {};

  struct CR2 : public Register<0x40001404, ReadWrite, 32>
  {
    using MMS = TIM7_CR2_MMS_Values<ngTIM7::CR2, 4, 3, ReadWrite, TIM7CR2Base>;
    using FieldValues = TIM7_CR2_MMS_Values<ngTIM7::CR2, 0, 3, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using CR2Pack  = FieldsPack<0x40001404, 32, ReadWrite, TIM7CR2Base, T...>;

  struct TIM7DIERBase {};

  struct DIER : public Register<0x4000140C, ReadWrite, 32>
  {
    using UDE = TIM7_DIER_UDE_Values<ngTIM7::DIER, 8, 1, ReadWrite, TIM7DIERBase>;
    using UIE = TIM7_DIER_UIE_Values<ngTIM7::DIER, 0, 1, ReadWrite, TIM7DIERBase>;
    using FieldValues = TIM7_DIER_UIE_Values<ngTIM7::DIER, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using DIERPack  = FieldsPack<0x4000140C, 32, ReadWrite, TIM7DIERBase, T...>;

  struct TIM7SRBase {};

  struct SR : public Register<0x40001410, ReadWrite, 32>
  {
    using UIF = TIM7_SR_UIF_Values<ngTIM7::SR, 0, 1, ReadWrite, TIM7SRBase>;
    using FieldValues = TIM7_SR_UIF_Values<ngTIM7::SR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using SRPack  = FieldsPack<0x40001410, 32, ReadWrite, TIM7SRBase, T...>;

  struct TIM7EGRBase {};

  struct EGR : public Register<0x40001414, Write, 32>
  {
    using UG = TIM7_EGR_UG_Values<ngTIM7::EGR, 0, 1, Write, TIM7EGRBase>;
    using FieldValues = TIM7_EGR_UG_Values<ngTIM7::EGR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using EGRPack  = FieldsPack<0x40001414, 32, Write, TIM7EGRBase, T...>;

  struct TIM7CNTBase {};

  struct CNT : public Register<0x40001424, ReadWrite, 32>
  {
    using CNTField = TIM7_CNT_CNT_Values<ngTIM7::CNT, 0, 16, ReadWrite, TIM7CNTBase>;
    using FieldValues = TIM7_CNT_CNT_Values<ngTIM7::CNT, 0, 16, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using CNTPack  = FieldsPack<0x40001424, 32, ReadWrite, TIM7CNTBase, T...>;

  struct TIM7PSCBase {};

  struct PSC : public Register<0x40001428, ReadWrite, 32>
  {
    using PSCField = TIM7_PSC_PSC_Values<ngTIM7::PSC, 0, 16, ReadWrite, TIM7PSCBase>;
    using FieldValues = TIM7_PSC_PSC_Values<ngTIM7::PSC, 0, 16, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using PSCPack  = FieldsPack<0x40001428, 32, ReadWrite, TIM7PSCBase, T...>;

  struct TIM7ARRBase {};

  struct ARR : public Register<0x4000142C, ReadWrite, 32>
  {
    using ARRField = TIM7_ARR_ARR_Values<ngTIM7::ARR, 0, 16, ReadWrite, TIM7ARRBase>;
    using FieldValues = TIM7_ARR_ARR_Values<ngTIM7::ARR, 0, 16, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using ARRPack  = FieldsPack<0x4000142C, 32, ReadWrite, TIM7ARRBase, T...>;

};

