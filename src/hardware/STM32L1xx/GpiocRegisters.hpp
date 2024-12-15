/*******************************************************************************
* Filename      : GpiocRegisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32L1xx device.
*
*
*******************************************************************************/

#pragma once

#include "FieldValues/GpiocFieldValues.hpp"
#include <register/Register.hpp>
#include <register/FieldsPack.hpp>
#include <register/Access.hpp>

using namespace ng;

struct ngGPIOC
{
  struct GPIOCMODERBase {};

  struct MODER : public Register<0x40020800, ReadWrite, 32>
  {
    using MODER15 = GPIOC_MODER_MODER15_Values<ngGPIOC::MODER, 30, 2, ReadWrite, GPIOCMODERBase>;
    using MODER14 = GPIOC_MODER_MODER14_Values<ngGPIOC::MODER, 28, 2, ReadWrite, GPIOCMODERBase>;
    using MODER13 = GPIOC_MODER_MODER13_Values<ngGPIOC::MODER, 26, 2, ReadWrite, GPIOCMODERBase>;
    using MODER12 = GPIOC_MODER_MODER12_Values<ngGPIOC::MODER, 24, 2, ReadWrite, GPIOCMODERBase>;
    using MODER11 = GPIOC_MODER_MODER11_Values<ngGPIOC::MODER, 22, 2, ReadWrite, GPIOCMODERBase>;
    using MODER10 = GPIOC_MODER_MODER10_Values<ngGPIOC::MODER, 20, 2, ReadWrite, GPIOCMODERBase>;
    using MODER9 = GPIOC_MODER_MODER9_Values<ngGPIOC::MODER, 18, 2, ReadWrite, GPIOCMODERBase>;
    using MODER8 = GPIOC_MODER_MODER8_Values<ngGPIOC::MODER, 16, 2, ReadWrite, GPIOCMODERBase>;
    using MODER7 = GPIOC_MODER_MODER7_Values<ngGPIOC::MODER, 14, 2, ReadWrite, GPIOCMODERBase>;
    using MODER6 = GPIOC_MODER_MODER6_Values<ngGPIOC::MODER, 12, 2, ReadWrite, GPIOCMODERBase>;
    using MODER5 = GPIOC_MODER_MODER5_Values<ngGPIOC::MODER, 10, 2, ReadWrite, GPIOCMODERBase>;
    using MODER4 = GPIOC_MODER_MODER4_Values<ngGPIOC::MODER, 8, 2, ReadWrite, GPIOCMODERBase>;
    using MODER3 = GPIOC_MODER_MODER3_Values<ngGPIOC::MODER, 6, 2, ReadWrite, GPIOCMODERBase>;
    using MODER2 = GPIOC_MODER_MODER2_Values<ngGPIOC::MODER, 4, 2, ReadWrite, GPIOCMODERBase>;
    using MODER1 = GPIOC_MODER_MODER1_Values<ngGPIOC::MODER, 2, 2, ReadWrite, GPIOCMODERBase>;
    using MODER0 = GPIOC_MODER_MODER0_Values<ngGPIOC::MODER, 0, 2, ReadWrite, GPIOCMODERBase>;
    using FieldValues = GPIOC_MODER_MODER0_Values<ngGPIOC::MODER, 0, 2, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using MODERPack  = FieldsPack<0x40020800, 32, ReadWrite, GPIOCMODERBase, T...>;

  struct GPIOCOTYPERBase {};

  struct OTYPER : public Register<0x40020804, ReadWrite, 32>
  {
    using OT15 = GPIOC_OTYPER_OT15_Values<ngGPIOC::OTYPER, 15, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT14 = GPIOC_OTYPER_OT14_Values<ngGPIOC::OTYPER, 14, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT13 = GPIOC_OTYPER_OT13_Values<ngGPIOC::OTYPER, 13, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT12 = GPIOC_OTYPER_OT12_Values<ngGPIOC::OTYPER, 12, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT11 = GPIOC_OTYPER_OT11_Values<ngGPIOC::OTYPER, 11, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT10 = GPIOC_OTYPER_OT10_Values<ngGPIOC::OTYPER, 10, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT9 = GPIOC_OTYPER_OT9_Values<ngGPIOC::OTYPER, 9, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT8 = GPIOC_OTYPER_OT8_Values<ngGPIOC::OTYPER, 8, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT7 = GPIOC_OTYPER_OT7_Values<ngGPIOC::OTYPER, 7, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT6 = GPIOC_OTYPER_OT6_Values<ngGPIOC::OTYPER, 6, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT5 = GPIOC_OTYPER_OT5_Values<ngGPIOC::OTYPER, 5, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT4 = GPIOC_OTYPER_OT4_Values<ngGPIOC::OTYPER, 4, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT3 = GPIOC_OTYPER_OT3_Values<ngGPIOC::OTYPER, 3, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT2 = GPIOC_OTYPER_OT2_Values<ngGPIOC::OTYPER, 2, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT1 = GPIOC_OTYPER_OT1_Values<ngGPIOC::OTYPER, 1, 1, ReadWrite, GPIOCOTYPERBase>;
    using OT0 = GPIOC_OTYPER_OT0_Values<ngGPIOC::OTYPER, 0, 1, ReadWrite, GPIOCOTYPERBase>;
    using FieldValues = GPIOC_OTYPER_OT0_Values<ngGPIOC::OTYPER, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using OTYPERPack  = FieldsPack<0x40020804, 32, ReadWrite, GPIOCOTYPERBase, T...>;

  struct GPIOCOSPEEDERBase {};

  struct OSPEEDER : public Register<0x40020808, ReadWrite, 32>
  {
    using OSPEEDR15 = GPIOC_OSPEEDER_OSPEEDR15_Values<ngGPIOC::OSPEEDER, 30, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR14 = GPIOC_OSPEEDER_OSPEEDR14_Values<ngGPIOC::OSPEEDER, 28, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR13 = GPIOC_OSPEEDER_OSPEEDR13_Values<ngGPIOC::OSPEEDER, 26, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR12 = GPIOC_OSPEEDER_OSPEEDR12_Values<ngGPIOC::OSPEEDER, 24, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR11 = GPIOC_OSPEEDER_OSPEEDR11_Values<ngGPIOC::OSPEEDER, 22, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR10 = GPIOC_OSPEEDER_OSPEEDR10_Values<ngGPIOC::OSPEEDER, 20, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR9 = GPIOC_OSPEEDER_OSPEEDR9_Values<ngGPIOC::OSPEEDER, 18, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR8 = GPIOC_OSPEEDER_OSPEEDR8_Values<ngGPIOC::OSPEEDER, 16, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR7 = GPIOC_OSPEEDER_OSPEEDR7_Values<ngGPIOC::OSPEEDER, 14, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR6 = GPIOC_OSPEEDER_OSPEEDR6_Values<ngGPIOC::OSPEEDER, 12, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR5 = GPIOC_OSPEEDER_OSPEEDR5_Values<ngGPIOC::OSPEEDER, 10, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR4 = GPIOC_OSPEEDER_OSPEEDR4_Values<ngGPIOC::OSPEEDER, 8, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR3 = GPIOC_OSPEEDER_OSPEEDR3_Values<ngGPIOC::OSPEEDER, 6, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR2 = GPIOC_OSPEEDER_OSPEEDR2_Values<ngGPIOC::OSPEEDER, 4, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR1 = GPIOC_OSPEEDER_OSPEEDR1_Values<ngGPIOC::OSPEEDER, 2, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using OSPEEDR0 = GPIOC_OSPEEDER_OSPEEDR0_Values<ngGPIOC::OSPEEDER, 0, 2, ReadWrite, GPIOCOSPEEDERBase>;
    using FieldValues = GPIOC_OSPEEDER_OSPEEDR0_Values<ngGPIOC::OSPEEDER, 0, 2, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using OSPEEDERPack  = FieldsPack<0x40020808, 32, ReadWrite, GPIOCOSPEEDERBase, T...>;

  struct GPIOCPUPDRBase {};

  struct PUPDR : public Register<0x4002080C, ReadWrite, 32>
  {
    using PUPDR15 = GPIOC_PUPDR_PUPDR15_Values<ngGPIOC::PUPDR, 30, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR14 = GPIOC_PUPDR_PUPDR14_Values<ngGPIOC::PUPDR, 28, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR13 = GPIOC_PUPDR_PUPDR13_Values<ngGPIOC::PUPDR, 26, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR12 = GPIOC_PUPDR_PUPDR12_Values<ngGPIOC::PUPDR, 24, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR11 = GPIOC_PUPDR_PUPDR11_Values<ngGPIOC::PUPDR, 22, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR10 = GPIOC_PUPDR_PUPDR10_Values<ngGPIOC::PUPDR, 20, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR9 = GPIOC_PUPDR_PUPDR9_Values<ngGPIOC::PUPDR, 18, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR8 = GPIOC_PUPDR_PUPDR8_Values<ngGPIOC::PUPDR, 16, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR7 = GPIOC_PUPDR_PUPDR7_Values<ngGPIOC::PUPDR, 14, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR6 = GPIOC_PUPDR_PUPDR6_Values<ngGPIOC::PUPDR, 12, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR5 = GPIOC_PUPDR_PUPDR5_Values<ngGPIOC::PUPDR, 10, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR4 = GPIOC_PUPDR_PUPDR4_Values<ngGPIOC::PUPDR, 8, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR3 = GPIOC_PUPDR_PUPDR3_Values<ngGPIOC::PUPDR, 6, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR2 = GPIOC_PUPDR_PUPDR2_Values<ngGPIOC::PUPDR, 4, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR1 = GPIOC_PUPDR_PUPDR1_Values<ngGPIOC::PUPDR, 2, 2, ReadWrite, GPIOCPUPDRBase>;
    using PUPDR0 = GPIOC_PUPDR_PUPDR0_Values<ngGPIOC::PUPDR, 0, 2, ReadWrite, GPIOCPUPDRBase>;
    using FieldValues = GPIOC_PUPDR_PUPDR0_Values<ngGPIOC::PUPDR, 0, 2, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using PUPDRPack  = FieldsPack<0x4002080C, 32, ReadWrite, GPIOCPUPDRBase, T...>;

  struct GPIOCIDRBase {};

  struct IDR : public Register<0x40020810, Read, 32>
  {
    using IDR15 = GPIOC_IDR_IDR15_Values<ngGPIOC::IDR, 15, 1, Read, GPIOCIDRBase>;
    using IDR14 = GPIOC_IDR_IDR14_Values<ngGPIOC::IDR, 14, 1, Read, GPIOCIDRBase>;
    using IDR13 = GPIOC_IDR_IDR13_Values<ngGPIOC::IDR, 13, 1, Read, GPIOCIDRBase>;
    using IDR12 = GPIOC_IDR_IDR12_Values<ngGPIOC::IDR, 12, 1, Read, GPIOCIDRBase>;
    using IDR11 = GPIOC_IDR_IDR11_Values<ngGPIOC::IDR, 11, 1, Read, GPIOCIDRBase>;
    using IDR10 = GPIOC_IDR_IDR10_Values<ngGPIOC::IDR, 10, 1, Read, GPIOCIDRBase>;
    using IDR9 = GPIOC_IDR_IDR9_Values<ngGPIOC::IDR, 9, 1, Read, GPIOCIDRBase>;
    using IDR8 = GPIOC_IDR_IDR8_Values<ngGPIOC::IDR, 8, 1, Read, GPIOCIDRBase>;
    using IDR7 = GPIOC_IDR_IDR7_Values<ngGPIOC::IDR, 7, 1, Read, GPIOCIDRBase>;
    using IDR6 = GPIOC_IDR_IDR6_Values<ngGPIOC::IDR, 6, 1, Read, GPIOCIDRBase>;
    using IDR5 = GPIOC_IDR_IDR5_Values<ngGPIOC::IDR, 5, 1, Read, GPIOCIDRBase>;
    using IDR4 = GPIOC_IDR_IDR4_Values<ngGPIOC::IDR, 4, 1, Read, GPIOCIDRBase>;
    using IDR3 = GPIOC_IDR_IDR3_Values<ngGPIOC::IDR, 3, 1, Read, GPIOCIDRBase>;
    using IDR2 = GPIOC_IDR_IDR2_Values<ngGPIOC::IDR, 2, 1, Read, GPIOCIDRBase>;
    using IDR1 = GPIOC_IDR_IDR1_Values<ngGPIOC::IDR, 1, 1, Read, GPIOCIDRBase>;
    using IDR0 = GPIOC_IDR_IDR0_Values<ngGPIOC::IDR, 0, 1, Read, GPIOCIDRBase>;
    using FieldValues = GPIOC_IDR_IDR0_Values<ngGPIOC::IDR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using IDRPack  = FieldsPack<0x40020810, 32, Read, GPIOCIDRBase, T...>;

  struct GPIOCODRBase {};

  struct ODR : public Register<0x40020814, ReadWrite, 32>
  {
    using ODR15 = GPIOC_ODR_ODR15_Values<ngGPIOC::ODR, 15, 1, ReadWrite, GPIOCODRBase>;
    using ODR14 = GPIOC_ODR_ODR14_Values<ngGPIOC::ODR, 14, 1, ReadWrite, GPIOCODRBase>;
    using ODR13 = GPIOC_ODR_ODR13_Values<ngGPIOC::ODR, 13, 1, ReadWrite, GPIOCODRBase>;
    using ODR12 = GPIOC_ODR_ODR12_Values<ngGPIOC::ODR, 12, 1, ReadWrite, GPIOCODRBase>;
    using ODR11 = GPIOC_ODR_ODR11_Values<ngGPIOC::ODR, 11, 1, ReadWrite, GPIOCODRBase>;
    using ODR10 = GPIOC_ODR_ODR10_Values<ngGPIOC::ODR, 10, 1, ReadWrite, GPIOCODRBase>;
    using ODR9 = GPIOC_ODR_ODR9_Values<ngGPIOC::ODR, 9, 1, ReadWrite, GPIOCODRBase>;
    using ODR8 = GPIOC_ODR_ODR8_Values<ngGPIOC::ODR, 8, 1, ReadWrite, GPIOCODRBase>;
    using ODR7 = GPIOC_ODR_ODR7_Values<ngGPIOC::ODR, 7, 1, ReadWrite, GPIOCODRBase>;
    using ODR6 = GPIOC_ODR_ODR6_Values<ngGPIOC::ODR, 6, 1, ReadWrite, GPIOCODRBase>;
    using ODR5 = GPIOC_ODR_ODR5_Values<ngGPIOC::ODR, 5, 1, ReadWrite, GPIOCODRBase>;
    using ODR4 = GPIOC_ODR_ODR4_Values<ngGPIOC::ODR, 4, 1, ReadWrite, GPIOCODRBase>;
    using ODR3 = GPIOC_ODR_ODR3_Values<ngGPIOC::ODR, 3, 1, ReadWrite, GPIOCODRBase>;
    using ODR2 = GPIOC_ODR_ODR2_Values<ngGPIOC::ODR, 2, 1, ReadWrite, GPIOCODRBase>;
    using ODR1 = GPIOC_ODR_ODR1_Values<ngGPIOC::ODR, 1, 1, ReadWrite, GPIOCODRBase>;
    using ODR0 = GPIOC_ODR_ODR0_Values<ngGPIOC::ODR, 0, 1, ReadWrite, GPIOCODRBase>;
    using FieldValues = GPIOC_ODR_ODR0_Values<ngGPIOC::ODR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using ODRPack  = FieldsPack<0x40020814, 32, ReadWrite, GPIOCODRBase, T...>;

  struct GPIOCBSRRBase {};

  struct BSRR : public Register<0x40020818, Write, 32>
  {
    using BR15 = GPIOC_BSRR_BR15_Values<ngGPIOC::BSRR, 31, 1, Write, GPIOCBSRRBase>;
    using BR14 = GPIOC_BSRR_BR14_Values<ngGPIOC::BSRR, 30, 1, Write, GPIOCBSRRBase>;
    using BR13 = GPIOC_BSRR_BR13_Values<ngGPIOC::BSRR, 29, 1, Write, GPIOCBSRRBase>;
    using BR12 = GPIOC_BSRR_BR12_Values<ngGPIOC::BSRR, 28, 1, Write, GPIOCBSRRBase>;
    using BR11 = GPIOC_BSRR_BR11_Values<ngGPIOC::BSRR, 27, 1, Write, GPIOCBSRRBase>;
    using BR10 = GPIOC_BSRR_BR10_Values<ngGPIOC::BSRR, 26, 1, Write, GPIOCBSRRBase>;
    using BR9 = GPIOC_BSRR_BR9_Values<ngGPIOC::BSRR, 25, 1, Write, GPIOCBSRRBase>;
    using BR8 = GPIOC_BSRR_BR8_Values<ngGPIOC::BSRR, 24, 1, Write, GPIOCBSRRBase>;
    using BR7 = GPIOC_BSRR_BR7_Values<ngGPIOC::BSRR, 23, 1, Write, GPIOCBSRRBase>;
    using BR6 = GPIOC_BSRR_BR6_Values<ngGPIOC::BSRR, 22, 1, Write, GPIOCBSRRBase>;
    using BR5 = GPIOC_BSRR_BR5_Values<ngGPIOC::BSRR, 21, 1, Write, GPIOCBSRRBase>;
    using BR4 = GPIOC_BSRR_BR4_Values<ngGPIOC::BSRR, 20, 1, Write, GPIOCBSRRBase>;
    using BR3 = GPIOC_BSRR_BR3_Values<ngGPIOC::BSRR, 19, 1, Write, GPIOCBSRRBase>;
    using BR2 = GPIOC_BSRR_BR2_Values<ngGPIOC::BSRR, 18, 1, Write, GPIOCBSRRBase>;
    using BR1 = GPIOC_BSRR_BR1_Values<ngGPIOC::BSRR, 17, 1, Write, GPIOCBSRRBase>;
    using BR0 = GPIOC_BSRR_BR0_Values<ngGPIOC::BSRR, 16, 1, Write, GPIOCBSRRBase>;
    using BS15 = GPIOC_BSRR_BS15_Values<ngGPIOC::BSRR, 15, 1, Write, GPIOCBSRRBase>;
    using BS14 = GPIOC_BSRR_BS14_Values<ngGPIOC::BSRR, 14, 1, Write, GPIOCBSRRBase>;
    using BS13 = GPIOC_BSRR_BS13_Values<ngGPIOC::BSRR, 13, 1, Write, GPIOCBSRRBase>;
    using BS12 = GPIOC_BSRR_BS12_Values<ngGPIOC::BSRR, 12, 1, Write, GPIOCBSRRBase>;
    using BS11 = GPIOC_BSRR_BS11_Values<ngGPIOC::BSRR, 11, 1, Write, GPIOCBSRRBase>;
    using BS10 = GPIOC_BSRR_BS10_Values<ngGPIOC::BSRR, 10, 1, Write, GPIOCBSRRBase>;
    using BS9 = GPIOC_BSRR_BS9_Values<ngGPIOC::BSRR, 9, 1, Write, GPIOCBSRRBase>;
    using BS8 = GPIOC_BSRR_BS8_Values<ngGPIOC::BSRR, 8, 1, Write, GPIOCBSRRBase>;
    using BS7 = GPIOC_BSRR_BS7_Values<ngGPIOC::BSRR, 7, 1, Write, GPIOCBSRRBase>;
    using BS6 = GPIOC_BSRR_BS6_Values<ngGPIOC::BSRR, 6, 1, Write, GPIOCBSRRBase>;
    using BS5 = GPIOC_BSRR_BS5_Values<ngGPIOC::BSRR, 5, 1, Write, GPIOCBSRRBase>;
    using BS4 = GPIOC_BSRR_BS4_Values<ngGPIOC::BSRR, 4, 1, Write, GPIOCBSRRBase>;
    using BS3 = GPIOC_BSRR_BS3_Values<ngGPIOC::BSRR, 3, 1, Write, GPIOCBSRRBase>;
    using BS2 = GPIOC_BSRR_BS2_Values<ngGPIOC::BSRR, 2, 1, Write, GPIOCBSRRBase>;
    using BS1 = GPIOC_BSRR_BS1_Values<ngGPIOC::BSRR, 1, 1, Write, GPIOCBSRRBase>;
    using BS0 = GPIOC_BSRR_BS0_Values<ngGPIOC::BSRR, 0, 1, Write, GPIOCBSRRBase>;
    using FieldValues = GPIOC_BSRR_BS0_Values<ngGPIOC::BSRR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using BSRRPack  = FieldsPack<0x40020818, 32, Write, GPIOCBSRRBase, T...>;

  struct GPIOCLCKRBase {};

  struct LCKR : public Register<0x4002081C, ReadWrite, 32>
  {
    using LCKK = GPIOC_LCKR_LCKK_Values<ngGPIOC::LCKR, 16, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK15 = GPIOC_LCKR_LCK15_Values<ngGPIOC::LCKR, 15, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK14 = GPIOC_LCKR_LCK14_Values<ngGPIOC::LCKR, 14, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK13 = GPIOC_LCKR_LCK13_Values<ngGPIOC::LCKR, 13, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK12 = GPIOC_LCKR_LCK12_Values<ngGPIOC::LCKR, 12, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK11 = GPIOC_LCKR_LCK11_Values<ngGPIOC::LCKR, 11, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK10 = GPIOC_LCKR_LCK10_Values<ngGPIOC::LCKR, 10, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK9 = GPIOC_LCKR_LCK9_Values<ngGPIOC::LCKR, 9, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK8 = GPIOC_LCKR_LCK8_Values<ngGPIOC::LCKR, 8, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK7 = GPIOC_LCKR_LCK7_Values<ngGPIOC::LCKR, 7, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK6 = GPIOC_LCKR_LCK6_Values<ngGPIOC::LCKR, 6, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK5 = GPIOC_LCKR_LCK5_Values<ngGPIOC::LCKR, 5, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK4 = GPIOC_LCKR_LCK4_Values<ngGPIOC::LCKR, 4, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK3 = GPIOC_LCKR_LCK3_Values<ngGPIOC::LCKR, 3, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK2 = GPIOC_LCKR_LCK2_Values<ngGPIOC::LCKR, 2, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK1 = GPIOC_LCKR_LCK1_Values<ngGPIOC::LCKR, 1, 1, ReadWrite, GPIOCLCKRBase>;
    using LCK0 = GPIOC_LCKR_LCK0_Values<ngGPIOC::LCKR, 0, 1, ReadWrite, GPIOCLCKRBase>;
    using FieldValues = GPIOC_LCKR_LCK0_Values<ngGPIOC::LCKR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using LCKRPack  = FieldsPack<0x4002081C, 32, ReadWrite, GPIOCLCKRBase, T...>;

  struct GPIOCAFRLBase {};

  struct AFRL : public Register<0x40020820, ReadWrite, 32>
  {
    using AFRL7 = GPIOC_AFRL_AFRL7_Values<ngGPIOC::AFRL, 28, 4, ReadWrite, GPIOCAFRLBase>;
    using AFRL6 = GPIOC_AFRL_AFRL6_Values<ngGPIOC::AFRL, 24, 4, ReadWrite, GPIOCAFRLBase>;
    using AFRL5 = GPIOC_AFRL_AFRL5_Values<ngGPIOC::AFRL, 20, 4, ReadWrite, GPIOCAFRLBase>;
    using AFRL4 = GPIOC_AFRL_AFRL4_Values<ngGPIOC::AFRL, 16, 4, ReadWrite, GPIOCAFRLBase>;
    using AFRL3 = GPIOC_AFRL_AFRL3_Values<ngGPIOC::AFRL, 12, 4, ReadWrite, GPIOCAFRLBase>;
    using AFRL2 = GPIOC_AFRL_AFRL2_Values<ngGPIOC::AFRL, 8, 4, ReadWrite, GPIOCAFRLBase>;
    using AFRL1 = GPIOC_AFRL_AFRL1_Values<ngGPIOC::AFRL, 4, 4, ReadWrite, GPIOCAFRLBase>;
    using AFRL0 = GPIOC_AFRL_AFRL0_Values<ngGPIOC::AFRL, 0, 4, ReadWrite, GPIOCAFRLBase>;
    using FieldValues = GPIOC_AFRL_AFRL0_Values<ngGPIOC::AFRL, 0, 4, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using AFRLPack  = FieldsPack<0x40020820, 32, ReadWrite, GPIOCAFRLBase, T...>;

  struct GPIOCAFRHBase {};

  struct AFRH : public Register<0x40020824, ReadWrite, 32>
  {
    using AFRH15 = GPIOC_AFRH_AFRH15_Values<ngGPIOC::AFRH, 28, 4, ReadWrite, GPIOCAFRHBase>;
    using AFRH14 = GPIOC_AFRH_AFRH14_Values<ngGPIOC::AFRH, 24, 4, ReadWrite, GPIOCAFRHBase>;
    using AFRH13 = GPIOC_AFRH_AFRH13_Values<ngGPIOC::AFRH, 20, 4, ReadWrite, GPIOCAFRHBase>;
    using AFRH12 = GPIOC_AFRH_AFRH12_Values<ngGPIOC::AFRH, 16, 4, ReadWrite, GPIOCAFRHBase>;
    using AFRH11 = GPIOC_AFRH_AFRH11_Values<ngGPIOC::AFRH, 12, 4, ReadWrite, GPIOCAFRHBase>;
    using AFRH10 = GPIOC_AFRH_AFRH10_Values<ngGPIOC::AFRH, 8, 4, ReadWrite, GPIOCAFRHBase>;
    using AFRH9 = GPIOC_AFRH_AFRH9_Values<ngGPIOC::AFRH, 4, 4, ReadWrite, GPIOCAFRHBase>;
    using AFRH8 = GPIOC_AFRH_AFRH8_Values<ngGPIOC::AFRH, 0, 4, ReadWrite, GPIOCAFRHBase>;
    using FieldValues = GPIOC_AFRH_AFRH8_Values<ngGPIOC::AFRH, 0, 4, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using AFRHPack  = FieldsPack<0x40020824, 32, ReadWrite, GPIOCAFRHBase, T...>;

};

