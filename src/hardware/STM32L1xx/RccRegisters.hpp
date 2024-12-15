/*******************************************************************************
* Filename      : RccRegisters.hpp
*
* Details       : Reset and clock control. This header file is auto-generated
*                 for STM32L1xx device.
*
*
*******************************************************************************/

#pragma once

#include "FieldValues/RccFieldValues.hpp"
#include <register/Register.hpp>
#include <register/FieldsPack.hpp>
#include <register/Access.hpp>

using namespace ng;

struct ngRCC
{
  struct RCCCRBase {};

  struct CR : public Register<0x40023800, ReadWrite, 32>
  {
    using RTCPRE1 = RCC_CR_RTCPRE1_Values<ngRCC::CR, 30, 1, ReadWrite, RCCCRBase>;
    using RTCPRE0 = RCC_CR_RTCPRE0_Values<ngRCC::CR, 29, 1, ReadWrite, RCCCRBase>;
    using CSSON = RCC_CR_CSSON_Values<ngRCC::CR, 28, 1, ReadWrite, RCCCRBase>;
    using PLLRDY = RCC_CR_PLLRDY_Values<ngRCC::CR, 25, 1, Read, RCCCRBase>;
    using PLLON = RCC_CR_PLLON_Values<ngRCC::CR, 24, 1, ReadWrite, RCCCRBase>;
    using HSEBYP = RCC_CR_HSEBYP_Values<ngRCC::CR, 18, 1, ReadWrite, RCCCRBase>;
    using HSERDY = RCC_CR_HSERDY_Values<ngRCC::CR, 17, 1, Read, RCCCRBase>;
    using HSEON = RCC_CR_HSEON_Values<ngRCC::CR, 16, 1, ReadWrite, RCCCRBase>;
    using MSIRDY = RCC_CR_MSIRDY_Values<ngRCC::CR, 9, 1, Read, RCCCRBase>;
    using MSION = RCC_CR_MSION_Values<ngRCC::CR, 8, 1, ReadWrite, RCCCRBase>;
    using HSIRDY = RCC_CR_HSIRDY_Values<ngRCC::CR, 1, 1, Read, RCCCRBase>;
    using HSION = RCC_CR_HSION_Values<ngRCC::CR, 0, 1, ReadWrite, RCCCRBase>;
    using FieldValues = RCC_CR_HSION_Values<ngRCC::CR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using CRPack  = FieldsPack<0x40023800, 32, ReadWrite, RCCCRBase, T...>;

  struct RCCICSCRBase {};

  struct ICSCR : public Register<0x40023804, ReadWrite, 32>
  {
    using MSITRIM = RCC_ICSCR_MSITRIM_Values<ngRCC::ICSCR, 24, 8, ReadWrite, RCCICSCRBase>;
    using MSICAL = RCC_ICSCR_MSICAL_Values<ngRCC::ICSCR, 16, 8, Read, RCCICSCRBase>;
    using MSIRANGE = RCC_ICSCR_MSIRANGE_Values<ngRCC::ICSCR, 13, 3, ReadWrite, RCCICSCRBase>;
    using HSITRIM = RCC_ICSCR_HSITRIM_Values<ngRCC::ICSCR, 8, 5, ReadWrite, RCCICSCRBase>;
    using HSICAL = RCC_ICSCR_HSICAL_Values<ngRCC::ICSCR, 0, 8, Read, RCCICSCRBase>;
    using FieldValues = RCC_ICSCR_HSICAL_Values<ngRCC::ICSCR, 0, 8, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using ICSCRPack  = FieldsPack<0x40023804, 32, ReadWrite, RCCICSCRBase, T...>;

  struct RCCCFGRBase {};

  struct CFGR : public Register<0x40023808, ReadWrite, 32>
  {
    using MCOPRE = RCC_CFGR_MCOPRE_Values<ngRCC::CFGR, 28, 3, ReadWrite, RCCCFGRBase>;
    using MCOSEL = RCC_CFGR_MCOSEL_Values<ngRCC::CFGR, 24, 3, ReadWrite, RCCCFGRBase>;
    using PLLDIV = RCC_CFGR_PLLDIV_Values<ngRCC::CFGR, 22, 2, ReadWrite, RCCCFGRBase>;
    using PLLMUL = RCC_CFGR_PLLMUL_Values<ngRCC::CFGR, 18, 4, ReadWrite, RCCCFGRBase>;
    using PLLSRC = RCC_CFGR_PLLSRC_Values<ngRCC::CFGR, 16, 1, ReadWrite, RCCCFGRBase>;
    using PPRE2 = RCC_CFGR_PPRE2_Values<ngRCC::CFGR, 11, 3, ReadWrite, RCCCFGRBase>;
    using PPRE1 = RCC_CFGR_PPRE1_Values<ngRCC::CFGR, 8, 3, ReadWrite, RCCCFGRBase>;
    using HPRE = RCC_CFGR_HPRE_Values<ngRCC::CFGR, 4, 4, ReadWrite, RCCCFGRBase>;
    using SWS = RCC_CFGR_SWS_Values<ngRCC::CFGR, 2, 2, Read, RCCCFGRBase>;
    using SW = RCC_CFGR_SW_Values<ngRCC::CFGR, 0, 2, ReadWrite, RCCCFGRBase>;
    using FieldValues = RCC_CFGR_SW_Values<ngRCC::CFGR, 0, 3, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using CFGRPack  = FieldsPack<0x40023808, 32, ReadWrite, RCCCFGRBase, T...>;

  struct RCCCIRBase {};

  struct CIR : public Register<0x4002380C, ReadWrite, 32>
  {
    using CSSC = RCC_CIR_CSSC_Values<ngRCC::CIR, 23, 1, Write, RCCCIRBase>;
    using MSIRDYC = RCC_CIR_MSIRDYC_Values<ngRCC::CIR, 21, 1, Write, RCCCIRBase>;
    using PLLRDYC = RCC_CIR_PLLRDYC_Values<ngRCC::CIR, 20, 1, Write, RCCCIRBase>;
    using HSERDYC = RCC_CIR_HSERDYC_Values<ngRCC::CIR, 19, 1, Write, RCCCIRBase>;
    using HSIRDYC = RCC_CIR_HSIRDYC_Values<ngRCC::CIR, 18, 1, Write, RCCCIRBase>;
    using LSERDYC = RCC_CIR_LSERDYC_Values<ngRCC::CIR, 17, 1, Write, RCCCIRBase>;
    using LSIRDYC = RCC_CIR_LSIRDYC_Values<ngRCC::CIR, 16, 1, Write, RCCCIRBase>;
    using MSIRDYIE = RCC_CIR_MSIRDYIE_Values<ngRCC::CIR, 13, 1, ReadWrite, RCCCIRBase>;
    using PLLRDYIE = RCC_CIR_PLLRDYIE_Values<ngRCC::CIR, 12, 1, ReadWrite, RCCCIRBase>;
    using HSERDYIE = RCC_CIR_HSERDYIE_Values<ngRCC::CIR, 11, 1, ReadWrite, RCCCIRBase>;
    using HSIRDYIE = RCC_CIR_HSIRDYIE_Values<ngRCC::CIR, 10, 1, ReadWrite, RCCCIRBase>;
    using LSERDYIE = RCC_CIR_LSERDYIE_Values<ngRCC::CIR, 9, 1, ReadWrite, RCCCIRBase>;
    using LSIRDYIE = RCC_CIR_LSIRDYIE_Values<ngRCC::CIR, 8, 1, ReadWrite, RCCCIRBase>;
    using CSSF = RCC_CIR_CSSF_Values<ngRCC::CIR, 7, 1, Read, RCCCIRBase>;
    using MSIRDYF = RCC_CIR_MSIRDYF_Values<ngRCC::CIR, 5, 1, Read, RCCCIRBase>;
    using PLLRDYF = RCC_CIR_PLLRDYF_Values<ngRCC::CIR, 4, 1, Read, RCCCIRBase>;
    using HSERDYF = RCC_CIR_HSERDYF_Values<ngRCC::CIR, 3, 1, Read, RCCCIRBase>;
    using HSIRDYF = RCC_CIR_HSIRDYF_Values<ngRCC::CIR, 2, 1, Read, RCCCIRBase>;
    using LSERDYF = RCC_CIR_LSERDYF_Values<ngRCC::CIR, 1, 1, Read, RCCCIRBase>;
    using LSIRDYF = RCC_CIR_LSIRDYF_Values<ngRCC::CIR, 0, 1, Read, RCCCIRBase>;
    using FieldValues = RCC_CIR_LSIRDYF_Values<ngRCC::CIR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using CIRPack  = FieldsPack<0x4002380C, 32, ReadWrite, RCCCIRBase, T...>;

  struct RCCAHBRSTRBase {};

  struct AHBRSTR : public Register<0x40023810, ReadWrite, 32>
  {
    using FSMCRST = RCC_AHBRSTR_FSMCRST_Values<ngRCC::AHBRSTR, 30, 1, ReadWrite, RCCAHBRSTRBase>;
    using DMA2RST = RCC_AHBRSTR_DMA2RST_Values<ngRCC::AHBRSTR, 25, 1, ReadWrite, RCCAHBRSTRBase>;
    using DMA1RST = RCC_AHBRSTR_DMA1RST_Values<ngRCC::AHBRSTR, 24, 1, ReadWrite, RCCAHBRSTRBase>;
    using FLITFRST = RCC_AHBRSTR_FLITFRST_Values<ngRCC::AHBRSTR, 15, 1, ReadWrite, RCCAHBRSTRBase>;
    using CRCRST = RCC_AHBRSTR_CRCRST_Values<ngRCC::AHBRSTR, 12, 1, ReadWrite, RCCAHBRSTRBase>;
    using GPIOGRST = RCC_AHBRSTR_GPIOGRST_Values<ngRCC::AHBRSTR, 7, 1, ReadWrite, RCCAHBRSTRBase>;
    using GPIOFRST = RCC_AHBRSTR_GPIOFRST_Values<ngRCC::AHBRSTR, 6, 1, ReadWrite, RCCAHBRSTRBase>;
    using GPIOHRST = RCC_AHBRSTR_GPIOHRST_Values<ngRCC::AHBRSTR, 5, 1, ReadWrite, RCCAHBRSTRBase>;
    using GPIOERST = RCC_AHBRSTR_GPIOERST_Values<ngRCC::AHBRSTR, 4, 1, ReadWrite, RCCAHBRSTRBase>;
    using GPIODRST = RCC_AHBRSTR_GPIODRST_Values<ngRCC::AHBRSTR, 3, 1, ReadWrite, RCCAHBRSTRBase>;
    using GPIOCRST = RCC_AHBRSTR_GPIOCRST_Values<ngRCC::AHBRSTR, 2, 1, ReadWrite, RCCAHBRSTRBase>;
    using GPIOBRST = RCC_AHBRSTR_GPIOBRST_Values<ngRCC::AHBRSTR, 1, 1, ReadWrite, RCCAHBRSTRBase>;
    using GPIOARST = RCC_AHBRSTR_GPIOARST_Values<ngRCC::AHBRSTR, 0, 1, ReadWrite, RCCAHBRSTRBase>;
    using FieldValues = RCC_AHBRSTR_GPIOARST_Values<ngRCC::AHBRSTR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using AHBRSTRPack  = FieldsPack<0x40023810, 32, ReadWrite, RCCAHBRSTRBase, T...>;

  struct RCCAPB2RSTRBase {};

  struct APB2RSTR : public Register<0x40023814, ReadWrite, 32>
  {
    using USART1RST = RCC_APB2RSTR_USART1RST_Values<ngRCC::APB2RSTR, 14, 1, ReadWrite, RCCAPB2RSTRBase>;
    using SPI1RST = RCC_APB2RSTR_SPI1RST_Values<ngRCC::APB2RSTR, 12, 1, ReadWrite, RCCAPB2RSTRBase>;
    using SDIORST = RCC_APB2RSTR_SDIORST_Values<ngRCC::APB2RSTR, 11, 1, ReadWrite, RCCAPB2RSTRBase>;
    using ADC1RST = RCC_APB2RSTR_ADC1RST_Values<ngRCC::APB2RSTR, 9, 1, ReadWrite, RCCAPB2RSTRBase>;
    using TM11RST = RCC_APB2RSTR_TM11RST_Values<ngRCC::APB2RSTR, 4, 1, ReadWrite, RCCAPB2RSTRBase>;
    using TM10RST = RCC_APB2RSTR_TM10RST_Values<ngRCC::APB2RSTR, 3, 1, ReadWrite, RCCAPB2RSTRBase>;
    using TIM9RST = RCC_APB2RSTR_TIM9RST_Values<ngRCC::APB2RSTR, 2, 1, ReadWrite, RCCAPB2RSTRBase>;
    using SYSCFGRST = RCC_APB2RSTR_SYSCFGRST_Values<ngRCC::APB2RSTR, 0, 1, ReadWrite, RCCAPB2RSTRBase>;
    using FieldValues = RCC_APB2RSTR_SYSCFGRST_Values<ngRCC::APB2RSTR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using APB2RSTRPack  = FieldsPack<0x40023814, 32, ReadWrite, RCCAPB2RSTRBase, T...>;

  struct RCCAPB1RSTRBase {};

  struct APB1RSTR : public Register<0x40023818, ReadWrite, 32>
  {
    using COMPRST = RCC_APB1RSTR_COMPRST_Values<ngRCC::APB1RSTR, 31, 1, ReadWrite, RCCAPB1RSTRBase>;
    using DACRST = RCC_APB1RSTR_DACRST_Values<ngRCC::APB1RSTR, 29, 1, ReadWrite, RCCAPB1RSTRBase>;
    using PWRRST = RCC_APB1RSTR_PWRRST_Values<ngRCC::APB1RSTR, 28, 1, ReadWrite, RCCAPB1RSTRBase>;
    using USBRST = RCC_APB1RSTR_USBRST_Values<ngRCC::APB1RSTR, 23, 1, ReadWrite, RCCAPB1RSTRBase>;
    using I2C2RST = RCC_APB1RSTR_I2C2RST_Values<ngRCC::APB1RSTR, 22, 1, ReadWrite, RCCAPB1RSTRBase>;
    using I2C1RST = RCC_APB1RSTR_I2C1RST_Values<ngRCC::APB1RSTR, 21, 1, ReadWrite, RCCAPB1RSTRBase>;
    using UART5RST = RCC_APB1RSTR_UART5RST_Values<ngRCC::APB1RSTR, 20, 1, ReadWrite, RCCAPB1RSTRBase>;
    using UART4RST = RCC_APB1RSTR_UART4RST_Values<ngRCC::APB1RSTR, 19, 1, ReadWrite, RCCAPB1RSTRBase>;
    using USART3RST = RCC_APB1RSTR_USART3RST_Values<ngRCC::APB1RSTR, 18, 1, ReadWrite, RCCAPB1RSTRBase>;
    using USART2RST = RCC_APB1RSTR_USART2RST_Values<ngRCC::APB1RSTR, 17, 1, ReadWrite, RCCAPB1RSTRBase>;
    using SPI3RST = RCC_APB1RSTR_SPI3RST_Values<ngRCC::APB1RSTR, 15, 1, ReadWrite, RCCAPB1RSTRBase>;
    using SPI2RST = RCC_APB1RSTR_SPI2RST_Values<ngRCC::APB1RSTR, 14, 1, ReadWrite, RCCAPB1RSTRBase>;
    using WWDRST = RCC_APB1RSTR_WWDRST_Values<ngRCC::APB1RSTR, 11, 1, ReadWrite, RCCAPB1RSTRBase>;
    using LCDRST = RCC_APB1RSTR_LCDRST_Values<ngRCC::APB1RSTR, 9, 1, ReadWrite, RCCAPB1RSTRBase>;
    using TIM7RST = RCC_APB1RSTR_TIM7RST_Values<ngRCC::APB1RSTR, 5, 1, ReadWrite, RCCAPB1RSTRBase>;
    using TIM6RST = RCC_APB1RSTR_TIM6RST_Values<ngRCC::APB1RSTR, 4, 1, ReadWrite, RCCAPB1RSTRBase>;
    using TIM5RST = RCC_APB1RSTR_TIM5RST_Values<ngRCC::APB1RSTR, 3, 1, ReadWrite, RCCAPB1RSTRBase>;
    using TIM4RST = RCC_APB1RSTR_TIM4RST_Values<ngRCC::APB1RSTR, 2, 1, ReadWrite, RCCAPB1RSTRBase>;
    using TIM3RST = RCC_APB1RSTR_TIM3RST_Values<ngRCC::APB1RSTR, 1, 1, ReadWrite, RCCAPB1RSTRBase>;
    using TIM2RST = RCC_APB1RSTR_TIM2RST_Values<ngRCC::APB1RSTR, 0, 1, ReadWrite, RCCAPB1RSTRBase>;
    using FieldValues = RCC_APB1RSTR_TIM2RST_Values<ngRCC::APB1RSTR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using APB1RSTRPack  = FieldsPack<0x40023818, 32, ReadWrite, RCCAPB1RSTRBase, T...>;

  struct RCCAHBENRBase {};

  struct AHBENR : public Register<0x4002381C, ReadWrite, 32>
  {
    using FSMCEN = RCC_AHBENR_FSMCEN_Values<ngRCC::AHBENR, 30, 1, ReadWrite, RCCAHBENRBase>;
    using DMA2EN = RCC_AHBENR_DMA2EN_Values<ngRCC::AHBENR, 25, 1, ReadWrite, RCCAHBENRBase>;
    using DMA1EN = RCC_AHBENR_DMA1EN_Values<ngRCC::AHBENR, 24, 1, ReadWrite, RCCAHBENRBase>;
    using FLITFEN = RCC_AHBENR_FLITFEN_Values<ngRCC::AHBENR, 15, 1, ReadWrite, RCCAHBENRBase>;
    using CRCEN = RCC_AHBENR_CRCEN_Values<ngRCC::AHBENR, 12, 1, ReadWrite, RCCAHBENRBase>;
    using GPIOPGEN = RCC_AHBENR_GPIOPGEN_Values<ngRCC::AHBENR, 7, 1, ReadWrite, RCCAHBENRBase>;
    using GPIOPFEN = RCC_AHBENR_GPIOPFEN_Values<ngRCC::AHBENR, 6, 1, ReadWrite, RCCAHBENRBase>;
    using GPIOPHEN = RCC_AHBENR_GPIOPHEN_Values<ngRCC::AHBENR, 5, 1, ReadWrite, RCCAHBENRBase>;
    using GPIOPEEN = RCC_AHBENR_GPIOPEEN_Values<ngRCC::AHBENR, 4, 1, ReadWrite, RCCAHBENRBase>;
    using GPIOPDEN = RCC_AHBENR_GPIOPDEN_Values<ngRCC::AHBENR, 3, 1, ReadWrite, RCCAHBENRBase>;
    using GPIOPCEN = RCC_AHBENR_GPIOPCEN_Values<ngRCC::AHBENR, 2, 1, ReadWrite, RCCAHBENRBase>;
    using GPIOPBEN = RCC_AHBENR_GPIOPBEN_Values<ngRCC::AHBENR, 1, 1, ReadWrite, RCCAHBENRBase>;
    using GPIOPAEN = RCC_AHBENR_GPIOPAEN_Values<ngRCC::AHBENR, 0, 1, ReadWrite, RCCAHBENRBase>;
    using FieldValues = RCC_AHBENR_GPIOPAEN_Values<ngRCC::AHBENR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using AHBENRPack  = FieldsPack<0x4002381C, 32, ReadWrite, RCCAHBENRBase, T...>;

  struct RCCAPB2ENRBase {};

  struct APB2ENR : public Register<0x40023820, ReadWrite, 32>
  {
    using USART1EN = RCC_APB2ENR_USART1EN_Values<ngRCC::APB2ENR, 14, 1, ReadWrite, RCCAPB2ENRBase>;
    using SPI1EN = RCC_APB2ENR_SPI1EN_Values<ngRCC::APB2ENR, 12, 1, ReadWrite, RCCAPB2ENRBase>;
    using SDIOEN = RCC_APB2ENR_SDIOEN_Values<ngRCC::APB2ENR, 11, 1, ReadWrite, RCCAPB2ENRBase>;
    using ADC1EN = RCC_APB2ENR_ADC1EN_Values<ngRCC::APB2ENR, 9, 1, ReadWrite, RCCAPB2ENRBase>;
    using TIM11EN = RCC_APB2ENR_TIM11EN_Values<ngRCC::APB2ENR, 4, 1, ReadWrite, RCCAPB2ENRBase>;
    using TIM10EN = RCC_APB2ENR_TIM10EN_Values<ngRCC::APB2ENR, 3, 1, ReadWrite, RCCAPB2ENRBase>;
    using TIM9EN = RCC_APB2ENR_TIM9EN_Values<ngRCC::APB2ENR, 2, 1, ReadWrite, RCCAPB2ENRBase>;
    using SYSCFGEN = RCC_APB2ENR_SYSCFGEN_Values<ngRCC::APB2ENR, 0, 1, ReadWrite, RCCAPB2ENRBase>;
    using FieldValues = RCC_APB2ENR_SYSCFGEN_Values<ngRCC::APB2ENR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using APB2ENRPack  = FieldsPack<0x40023820, 32, ReadWrite, RCCAPB2ENRBase, T...>;

  struct RCCAPB1ENRBase {};

  struct APB1ENR : public Register<0x40023824, ReadWrite, 32>
  {
    using COMPEN = RCC_APB1ENR_COMPEN_Values<ngRCC::APB1ENR, 31, 1, ReadWrite, RCCAPB1ENRBase>;
    using DACEN = RCC_APB1ENR_DACEN_Values<ngRCC::APB1ENR, 29, 1, ReadWrite, RCCAPB1ENRBase>;
    using PWREN = RCC_APB1ENR_PWREN_Values<ngRCC::APB1ENR, 28, 1, ReadWrite, RCCAPB1ENRBase>;
    using USBEN = RCC_APB1ENR_USBEN_Values<ngRCC::APB1ENR, 23, 1, ReadWrite, RCCAPB1ENRBase>;
    using I2C2EN = RCC_APB1ENR_I2C2EN_Values<ngRCC::APB1ENR, 22, 1, ReadWrite, RCCAPB1ENRBase>;
    using I2C1EN = RCC_APB1ENR_I2C1EN_Values<ngRCC::APB1ENR, 21, 1, ReadWrite, RCCAPB1ENRBase>;
    using USART5EN = RCC_APB1ENR_USART5EN_Values<ngRCC::APB1ENR, 20, 1, ReadWrite, RCCAPB1ENRBase>;
    using USART4EN = RCC_APB1ENR_USART4EN_Values<ngRCC::APB1ENR, 19, 1, ReadWrite, RCCAPB1ENRBase>;
    using USART3EN = RCC_APB1ENR_USART3EN_Values<ngRCC::APB1ENR, 18, 1, ReadWrite, RCCAPB1ENRBase>;
    using USART2EN = RCC_APB1ENR_USART2EN_Values<ngRCC::APB1ENR, 17, 1, ReadWrite, RCCAPB1ENRBase>;
    using SPI3EN = RCC_APB1ENR_SPI3EN_Values<ngRCC::APB1ENR, 15, 1, ReadWrite, RCCAPB1ENRBase>;
    using SPI2EN = RCC_APB1ENR_SPI2EN_Values<ngRCC::APB1ENR, 14, 1, ReadWrite, RCCAPB1ENRBase>;
    using WWDGEN = RCC_APB1ENR_WWDGEN_Values<ngRCC::APB1ENR, 11, 1, ReadWrite, RCCAPB1ENRBase>;
    using LCDEN = RCC_APB1ENR_LCDEN_Values<ngRCC::APB1ENR, 9, 1, ReadWrite, RCCAPB1ENRBase>;
    using TIM7EN = RCC_APB1ENR_TIM7EN_Values<ngRCC::APB1ENR, 5, 1, ReadWrite, RCCAPB1ENRBase>;
    using TIM6EN = RCC_APB1ENR_TIM6EN_Values<ngRCC::APB1ENR, 4, 1, ReadWrite, RCCAPB1ENRBase>;
    using TIM5EN = RCC_APB1ENR_TIM5EN_Values<ngRCC::APB1ENR, 3, 1, ReadWrite, RCCAPB1ENRBase>;
    using TIM4EN = RCC_APB1ENR_TIM4EN_Values<ngRCC::APB1ENR, 2, 1, ReadWrite, RCCAPB1ENRBase>;
    using TIM3EN = RCC_APB1ENR_TIM3EN_Values<ngRCC::APB1ENR, 1, 1, ReadWrite, RCCAPB1ENRBase>;
    using TIM2EN = RCC_APB1ENR_TIM2EN_Values<ngRCC::APB1ENR, 0, 1, ReadWrite, RCCAPB1ENRBase>;
    using FieldValues = RCC_APB1ENR_TIM2EN_Values<ngRCC::APB1ENR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using APB1ENRPack  = FieldsPack<0x40023824, 32, ReadWrite, RCCAPB1ENRBase, T...>;

  struct RCCAHBLPENRBase {};

  struct AHBLPENR : public Register<0x40023828, ReadWrite, 32>
  {
    using DMA2LPEN = RCC_AHBLPENR_DMA2LPEN_Values<ngRCC::AHBLPENR, 25, 1, ReadWrite, RCCAHBLPENRBase>;
    using DMA1LPEN = RCC_AHBLPENR_DMA1LPEN_Values<ngRCC::AHBLPENR, 24, 1, ReadWrite, RCCAHBLPENRBase>;
    using SRAMLPEN = RCC_AHBLPENR_SRAMLPEN_Values<ngRCC::AHBLPENR, 16, 1, ReadWrite, RCCAHBLPENRBase>;
    using FLITFLPEN = RCC_AHBLPENR_FLITFLPEN_Values<ngRCC::AHBLPENR, 15, 1, ReadWrite, RCCAHBLPENRBase>;
    using CRCLPEN = RCC_AHBLPENR_CRCLPEN_Values<ngRCC::AHBLPENR, 12, 1, ReadWrite, RCCAHBLPENRBase>;
    using GPIOGLPEN = RCC_AHBLPENR_GPIOGLPEN_Values<ngRCC::AHBLPENR, 7, 1, ReadWrite, RCCAHBLPENRBase>;
    using GPIOFLPEN = RCC_AHBLPENR_GPIOFLPEN_Values<ngRCC::AHBLPENR, 6, 1, ReadWrite, RCCAHBLPENRBase>;
    using GPIOHLPEN = RCC_AHBLPENR_GPIOHLPEN_Values<ngRCC::AHBLPENR, 5, 1, ReadWrite, RCCAHBLPENRBase>;
    using GPIOELPEN = RCC_AHBLPENR_GPIOELPEN_Values<ngRCC::AHBLPENR, 4, 1, ReadWrite, RCCAHBLPENRBase>;
    using GPIODLPEN = RCC_AHBLPENR_GPIODLPEN_Values<ngRCC::AHBLPENR, 3, 1, ReadWrite, RCCAHBLPENRBase>;
    using GPIOCLPEN = RCC_AHBLPENR_GPIOCLPEN_Values<ngRCC::AHBLPENR, 2, 1, ReadWrite, RCCAHBLPENRBase>;
    using GPIOBLPEN = RCC_AHBLPENR_GPIOBLPEN_Values<ngRCC::AHBLPENR, 1, 1, ReadWrite, RCCAHBLPENRBase>;
    using GPIOALPEN = RCC_AHBLPENR_GPIOALPEN_Values<ngRCC::AHBLPENR, 0, 1, ReadWrite, RCCAHBLPENRBase>;
    using FieldValues = RCC_AHBLPENR_GPIOALPEN_Values<ngRCC::AHBLPENR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using AHBLPENRPack  = FieldsPack<0x40023828, 32, ReadWrite, RCCAHBLPENRBase, T...>;

  struct RCCAPB2LPENRBase {};

  struct APB2LPENR : public Register<0x4002382C, ReadWrite, 32>
  {
    using USART1LPEN = RCC_APB2LPENR_USART1LPEN_Values<ngRCC::APB2LPENR, 14, 1, ReadWrite, RCCAPB2LPENRBase>;
    using SPI1LPEN = RCC_APB2LPENR_SPI1LPEN_Values<ngRCC::APB2LPENR, 12, 1, ReadWrite, RCCAPB2LPENRBase>;
    using SDIOLPEN = RCC_APB2LPENR_SDIOLPEN_Values<ngRCC::APB2LPENR, 11, 1, ReadWrite, RCCAPB2LPENRBase>;
    using ADC1LPEN = RCC_APB2LPENR_ADC1LPEN_Values<ngRCC::APB2LPENR, 9, 1, ReadWrite, RCCAPB2LPENRBase>;
    using TIM11LPEN = RCC_APB2LPENR_TIM11LPEN_Values<ngRCC::APB2LPENR, 4, 1, ReadWrite, RCCAPB2LPENRBase>;
    using TIM10LPEN = RCC_APB2LPENR_TIM10LPEN_Values<ngRCC::APB2LPENR, 3, 1, ReadWrite, RCCAPB2LPENRBase>;
    using TIM9LPEN = RCC_APB2LPENR_TIM9LPEN_Values<ngRCC::APB2LPENR, 2, 1, ReadWrite, RCCAPB2LPENRBase>;
    using SYSCFGLPEN = RCC_APB2LPENR_SYSCFGLPEN_Values<ngRCC::APB2LPENR, 0, 1, ReadWrite, RCCAPB2LPENRBase>;
    using FieldValues = RCC_APB2LPENR_SYSCFGLPEN_Values<ngRCC::APB2LPENR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using APB2LPENRPack  = FieldsPack<0x4002382C, 32, ReadWrite, RCCAPB2LPENRBase, T...>;

  struct RCCAPB1LPENRBase {};

  struct APB1LPENR : public Register<0x40023830, ReadWrite, 32>
  {
    using COMPLPEN = RCC_APB1LPENR_COMPLPEN_Values<ngRCC::APB1LPENR, 31, 1, ReadWrite, RCCAPB1LPENRBase>;
    using DACLPEN = RCC_APB1LPENR_DACLPEN_Values<ngRCC::APB1LPENR, 29, 1, ReadWrite, RCCAPB1LPENRBase>;
    using PWRLPEN = RCC_APB1LPENR_PWRLPEN_Values<ngRCC::APB1LPENR, 28, 1, ReadWrite, RCCAPB1LPENRBase>;
    using USBLPEN = RCC_APB1LPENR_USBLPEN_Values<ngRCC::APB1LPENR, 23, 1, ReadWrite, RCCAPB1LPENRBase>;
    using I2C2LPEN = RCC_APB1LPENR_I2C2LPEN_Values<ngRCC::APB1LPENR, 22, 1, ReadWrite, RCCAPB1LPENRBase>;
    using I2C1LPEN = RCC_APB1LPENR_I2C1LPEN_Values<ngRCC::APB1LPENR, 21, 1, ReadWrite, RCCAPB1LPENRBase>;
    using USART3LPEN = RCC_APB1LPENR_USART3LPEN_Values<ngRCC::APB1LPENR, 18, 1, ReadWrite, RCCAPB1LPENRBase>;
    using USART2LPEN = RCC_APB1LPENR_USART2LPEN_Values<ngRCC::APB1LPENR, 17, 1, ReadWrite, RCCAPB1LPENRBase>;
    using SPI2LPEN = RCC_APB1LPENR_SPI2LPEN_Values<ngRCC::APB1LPENR, 14, 1, ReadWrite, RCCAPB1LPENRBase>;
    using WWDGLPEN = RCC_APB1LPENR_WWDGLPEN_Values<ngRCC::APB1LPENR, 11, 1, ReadWrite, RCCAPB1LPENRBase>;
    using LCDLPEN = RCC_APB1LPENR_LCDLPEN_Values<ngRCC::APB1LPENR, 9, 1, ReadWrite, RCCAPB1LPENRBase>;
    using TIM7LPEN = RCC_APB1LPENR_TIM7LPEN_Values<ngRCC::APB1LPENR, 5, 1, ReadWrite, RCCAPB1LPENRBase>;
    using TIM6LPEN = RCC_APB1LPENR_TIM6LPEN_Values<ngRCC::APB1LPENR, 4, 1, ReadWrite, RCCAPB1LPENRBase>;
    using TIM4LPEN = RCC_APB1LPENR_TIM4LPEN_Values<ngRCC::APB1LPENR, 2, 1, ReadWrite, RCCAPB1LPENRBase>;
    using TIM3LPEN = RCC_APB1LPENR_TIM3LPEN_Values<ngRCC::APB1LPENR, 1, 1, ReadWrite, RCCAPB1LPENRBase>;
    using TIM2LPEN = RCC_APB1LPENR_TIM2LPEN_Values<ngRCC::APB1LPENR, 0, 1, ReadWrite, RCCAPB1LPENRBase>;
    using FieldValues = RCC_APB1LPENR_TIM2LPEN_Values<ngRCC::APB1LPENR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using APB1LPENRPack  = FieldsPack<0x40023830, 32, ReadWrite, RCCAPB1LPENRBase, T...>;

  struct RCCCSRBase {};

  struct CSR : public Register<0x40023834, ReadWrite, 32>
  {
    using LPWRSTF = RCC_CSR_LPWRSTF_Values<ngRCC::CSR, 31, 1, ReadWrite, RCCCSRBase>;
    using WWDGRSTF = RCC_CSR_WWDGRSTF_Values<ngRCC::CSR, 30, 1, ReadWrite, RCCCSRBase>;
    using IWDGRSTF = RCC_CSR_IWDGRSTF_Values<ngRCC::CSR, 29, 1, ReadWrite, RCCCSRBase>;
    using SFTRSTF = RCC_CSR_SFTRSTF_Values<ngRCC::CSR, 28, 1, ReadWrite, RCCCSRBase>;
    using PORRSTF = RCC_CSR_PORRSTF_Values<ngRCC::CSR, 27, 1, ReadWrite, RCCCSRBase>;
    using PINRSTF = RCC_CSR_PINRSTF_Values<ngRCC::CSR, 26, 1, ReadWrite, RCCCSRBase>;
    using RMVF = RCC_CSR_RMVF_Values<ngRCC::CSR, 24, 1, ReadWrite, RCCCSRBase>;
    using RTCRST = RCC_CSR_RTCRST_Values<ngRCC::CSR, 23, 1, ReadWrite, RCCCSRBase>;
    using RTCEN = RCC_CSR_RTCEN_Values<ngRCC::CSR, 22, 1, ReadWrite, RCCCSRBase>;
    using RTCSEL = RCC_CSR_RTCSEL_Values<ngRCC::CSR, 16, 2, ReadWrite, RCCCSRBase>;
    using LSEBYP = RCC_CSR_LSEBYP_Values<ngRCC::CSR, 10, 1, ReadWrite, RCCCSRBase>;
    using LSERDY = RCC_CSR_LSERDY_Values<ngRCC::CSR, 9, 1, Read, RCCCSRBase>;
    using LSEON = RCC_CSR_LSEON_Values<ngRCC::CSR, 8, 1, ReadWrite, RCCCSRBase>;
    using LSIRDY = RCC_CSR_LSIRDY_Values<ngRCC::CSR, 1, 1, Read, RCCCSRBase>;
    using LSION = RCC_CSR_LSION_Values<ngRCC::CSR, 0, 1, ReadWrite, RCCCSRBase>;
    using FieldValues = RCC_CSR_LSION_Values<ngRCC::CSR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using CSRPack  = FieldsPack<0x40023834, 32, ReadWrite, RCCCSRBase, T...>;

};

