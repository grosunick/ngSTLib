/*******************************************************************************
* Filename      : GpioaRegisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32L1xx device.
*
*
*******************************************************************************/

#pragma once

#include "FieldValues/GpioaFieldValues.hpp"
#include <register/Register.hpp>
#include <register/FieldsPack.hpp>
#include <register/Access.hpp>

using namespace ng;

struct ngGPIOA
{
  struct GPIOAMODERBase {};

  struct MODER : public Register<0x40020000, ReadWrite, 32>
  {
    using MODER15 = GPIOA_MODER_MODER15_Values<ngGPIOA::MODER, 30, 2, ReadWrite, GPIOAMODERBase>;
    using MODER14 = GPIOA_MODER_MODER14_Values<ngGPIOA::MODER, 28, 2, ReadWrite, GPIOAMODERBase>;
    using MODER13 = GPIOA_MODER_MODER13_Values<ngGPIOA::MODER, 26, 2, ReadWrite, GPIOAMODERBase>;
    using MODER12 = GPIOA_MODER_MODER12_Values<ngGPIOA::MODER, 24, 2, ReadWrite, GPIOAMODERBase>;
    using MODER11 = GPIOA_MODER_MODER11_Values<ngGPIOA::MODER, 22, 2, ReadWrite, GPIOAMODERBase>;
    using MODER10 = GPIOA_MODER_MODER10_Values<ngGPIOA::MODER, 20, 2, ReadWrite, GPIOAMODERBase>;
    using MODER9 = GPIOA_MODER_MODER9_Values<ngGPIOA::MODER, 18, 2, ReadWrite, GPIOAMODERBase>;
    using MODER8 = GPIOA_MODER_MODER8_Values<ngGPIOA::MODER, 16, 2, ReadWrite, GPIOAMODERBase>;
    using MODER7 = GPIOA_MODER_MODER7_Values<ngGPIOA::MODER, 14, 2, ReadWrite, GPIOAMODERBase>;
    using MODER6 = GPIOA_MODER_MODER6_Values<ngGPIOA::MODER, 12, 2, ReadWrite, GPIOAMODERBase>;
    using MODER5 = GPIOA_MODER_MODER5_Values<ngGPIOA::MODER, 10, 2, ReadWrite, GPIOAMODERBase>;
    using MODER4 = GPIOA_MODER_MODER4_Values<ngGPIOA::MODER, 8, 2, ReadWrite, GPIOAMODERBase>;
    using MODER3 = GPIOA_MODER_MODER3_Values<ngGPIOA::MODER, 6, 2, ReadWrite, GPIOAMODERBase>;
    using MODER2 = GPIOA_MODER_MODER2_Values<ngGPIOA::MODER, 4, 2, ReadWrite, GPIOAMODERBase>;
    using MODER1 = GPIOA_MODER_MODER1_Values<ngGPIOA::MODER, 2, 2, ReadWrite, GPIOAMODERBase>;
    using MODER0 = GPIOA_MODER_MODER0_Values<ngGPIOA::MODER, 0, 2, ReadWrite, GPIOAMODERBase>;
    using FieldValues = GPIOA_MODER_MODER0_Values<ngGPIOA::MODER, 0, 2, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using MODERPack  = FieldsPack<0x40020000, 32, ReadWrite, GPIOAMODERBase, T...>;

  struct GPIOAOTYPERBase {};

  struct OTYPER : public Register<0x40020004, ReadWrite, 32>
  {
    using OT15 = GPIOA_OTYPER_OT15_Values<ngGPIOA::OTYPER, 15, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT14 = GPIOA_OTYPER_OT14_Values<ngGPIOA::OTYPER, 14, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT13 = GPIOA_OTYPER_OT13_Values<ngGPIOA::OTYPER, 13, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT12 = GPIOA_OTYPER_OT12_Values<ngGPIOA::OTYPER, 12, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT11 = GPIOA_OTYPER_OT11_Values<ngGPIOA::OTYPER, 11, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT10 = GPIOA_OTYPER_OT10_Values<ngGPIOA::OTYPER, 10, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT9 = GPIOA_OTYPER_OT9_Values<ngGPIOA::OTYPER, 9, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT8 = GPIOA_OTYPER_OT8_Values<ngGPIOA::OTYPER, 8, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT7 = GPIOA_OTYPER_OT7_Values<ngGPIOA::OTYPER, 7, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT6 = GPIOA_OTYPER_OT6_Values<ngGPIOA::OTYPER, 6, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT5 = GPIOA_OTYPER_OT5_Values<ngGPIOA::OTYPER, 5, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT4 = GPIOA_OTYPER_OT4_Values<ngGPIOA::OTYPER, 4, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT3 = GPIOA_OTYPER_OT3_Values<ngGPIOA::OTYPER, 3, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT2 = GPIOA_OTYPER_OT2_Values<ngGPIOA::OTYPER, 2, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT1 = GPIOA_OTYPER_OT1_Values<ngGPIOA::OTYPER, 1, 1, ReadWrite, GPIOAOTYPERBase>;
    using OT0 = GPIOA_OTYPER_OT0_Values<ngGPIOA::OTYPER, 0, 1, ReadWrite, GPIOAOTYPERBase>;
    using FieldValues = GPIOA_OTYPER_OT0_Values<ngGPIOA::OTYPER, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using OTYPERPack  = FieldsPack<0x40020004, 32, ReadWrite, GPIOAOTYPERBase, T...>;

  struct GPIOAOSPEEDERBase {};

  struct OSPEEDER : public Register<0x40020008, ReadWrite, 32>
  {
    using OSPEEDR15 = GPIOA_OSPEEDER_OSPEEDR15_Values<ngGPIOA::OSPEEDER, 30, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR14 = GPIOA_OSPEEDER_OSPEEDR14_Values<ngGPIOA::OSPEEDER, 28, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR13 = GPIOA_OSPEEDER_OSPEEDR13_Values<ngGPIOA::OSPEEDER, 26, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR12 = GPIOA_OSPEEDER_OSPEEDR12_Values<ngGPIOA::OSPEEDER, 24, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR11 = GPIOA_OSPEEDER_OSPEEDR11_Values<ngGPIOA::OSPEEDER, 22, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR10 = GPIOA_OSPEEDER_OSPEEDR10_Values<ngGPIOA::OSPEEDER, 20, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR9 = GPIOA_OSPEEDER_OSPEEDR9_Values<ngGPIOA::OSPEEDER, 18, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR8 = GPIOA_OSPEEDER_OSPEEDR8_Values<ngGPIOA::OSPEEDER, 16, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR7 = GPIOA_OSPEEDER_OSPEEDR7_Values<ngGPIOA::OSPEEDER, 14, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR6 = GPIOA_OSPEEDER_OSPEEDR6_Values<ngGPIOA::OSPEEDER, 12, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR5 = GPIOA_OSPEEDER_OSPEEDR5_Values<ngGPIOA::OSPEEDER, 10, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR4 = GPIOA_OSPEEDER_OSPEEDR4_Values<ngGPIOA::OSPEEDER, 8, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR3 = GPIOA_OSPEEDER_OSPEEDR3_Values<ngGPIOA::OSPEEDER, 6, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR2 = GPIOA_OSPEEDER_OSPEEDR2_Values<ngGPIOA::OSPEEDER, 4, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR1 = GPIOA_OSPEEDER_OSPEEDR1_Values<ngGPIOA::OSPEEDER, 2, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using OSPEEDR0 = GPIOA_OSPEEDER_OSPEEDR0_Values<ngGPIOA::OSPEEDER, 0, 2, ReadWrite, GPIOAOSPEEDERBase>;
    using FieldValues = GPIOA_OSPEEDER_OSPEEDR0_Values<ngGPIOA::OSPEEDER, 0, 2, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using OSPEEDERPack  = FieldsPack<0x40020008, 32, ReadWrite, GPIOAOSPEEDERBase, T...>;

  struct GPIOAPUPDRBase {};

  struct PUPDR : public Register<0x4002000C, ReadWrite, 32>
  {
    using PUPDR15 = GPIOA_PUPDR_PUPDR15_Values<ngGPIOA::PUPDR, 30, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR14 = GPIOA_PUPDR_PUPDR14_Values<ngGPIOA::PUPDR, 28, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR13 = GPIOA_PUPDR_PUPDR13_Values<ngGPIOA::PUPDR, 26, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR12 = GPIOA_PUPDR_PUPDR12_Values<ngGPIOA::PUPDR, 24, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR11 = GPIOA_PUPDR_PUPDR11_Values<ngGPIOA::PUPDR, 22, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR10 = GPIOA_PUPDR_PUPDR10_Values<ngGPIOA::PUPDR, 20, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR9 = GPIOA_PUPDR_PUPDR9_Values<ngGPIOA::PUPDR, 18, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR8 = GPIOA_PUPDR_PUPDR8_Values<ngGPIOA::PUPDR, 16, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR7 = GPIOA_PUPDR_PUPDR7_Values<ngGPIOA::PUPDR, 14, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR6 = GPIOA_PUPDR_PUPDR6_Values<ngGPIOA::PUPDR, 12, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR5 = GPIOA_PUPDR_PUPDR5_Values<ngGPIOA::PUPDR, 10, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR4 = GPIOA_PUPDR_PUPDR4_Values<ngGPIOA::PUPDR, 8, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR3 = GPIOA_PUPDR_PUPDR3_Values<ngGPIOA::PUPDR, 6, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR2 = GPIOA_PUPDR_PUPDR2_Values<ngGPIOA::PUPDR, 4, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR1 = GPIOA_PUPDR_PUPDR1_Values<ngGPIOA::PUPDR, 2, 2, ReadWrite, GPIOAPUPDRBase>;
    using PUPDR0 = GPIOA_PUPDR_PUPDR0_Values<ngGPIOA::PUPDR, 0, 2, ReadWrite, GPIOAPUPDRBase>;
    using FieldValues = GPIOA_PUPDR_PUPDR0_Values<ngGPIOA::PUPDR, 0, 2, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using PUPDRPack  = FieldsPack<0x4002000C, 32, ReadWrite, GPIOAPUPDRBase, T...>;

  struct GPIOAIDRBase {};

  struct IDR : public Register<0x40020010, Read, 32>
  {
    using IDR15 = GPIOA_IDR_IDR15_Values<ngGPIOA::IDR, 15, 1, Read, GPIOAIDRBase>;
    using IDR14 = GPIOA_IDR_IDR14_Values<ngGPIOA::IDR, 14, 1, Read, GPIOAIDRBase>;
    using IDR13 = GPIOA_IDR_IDR13_Values<ngGPIOA::IDR, 13, 1, Read, GPIOAIDRBase>;
    using IDR12 = GPIOA_IDR_IDR12_Values<ngGPIOA::IDR, 12, 1, Read, GPIOAIDRBase>;
    using IDR11 = GPIOA_IDR_IDR11_Values<ngGPIOA::IDR, 11, 1, Read, GPIOAIDRBase>;
    using IDR10 = GPIOA_IDR_IDR10_Values<ngGPIOA::IDR, 10, 1, Read, GPIOAIDRBase>;
    using IDR9 = GPIOA_IDR_IDR9_Values<ngGPIOA::IDR, 9, 1, Read, GPIOAIDRBase>;
    using IDR8 = GPIOA_IDR_IDR8_Values<ngGPIOA::IDR, 8, 1, Read, GPIOAIDRBase>;
    using IDR7 = GPIOA_IDR_IDR7_Values<ngGPIOA::IDR, 7, 1, Read, GPIOAIDRBase>;
    using IDR6 = GPIOA_IDR_IDR6_Values<ngGPIOA::IDR, 6, 1, Read, GPIOAIDRBase>;
    using IDR5 = GPIOA_IDR_IDR5_Values<ngGPIOA::IDR, 5, 1, Read, GPIOAIDRBase>;
    using IDR4 = GPIOA_IDR_IDR4_Values<ngGPIOA::IDR, 4, 1, Read, GPIOAIDRBase>;
    using IDR3 = GPIOA_IDR_IDR3_Values<ngGPIOA::IDR, 3, 1, Read, GPIOAIDRBase>;
    using IDR2 = GPIOA_IDR_IDR2_Values<ngGPIOA::IDR, 2, 1, Read, GPIOAIDRBase>;
    using IDR1 = GPIOA_IDR_IDR1_Values<ngGPIOA::IDR, 1, 1, Read, GPIOAIDRBase>;
    using IDR0 = GPIOA_IDR_IDR0_Values<ngGPIOA::IDR, 0, 1, Read, GPIOAIDRBase>;
    using FieldValues = GPIOA_IDR_IDR0_Values<ngGPIOA::IDR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using IDRPack  = FieldsPack<0x40020010, 32, Read, GPIOAIDRBase, T...>;

  struct GPIOAODRBase {};

  struct ODR : public Register<0x40020014, ReadWrite, 32>
  {
    using ODR15 = GPIOA_ODR_ODR15_Values<ngGPIOA::ODR, 15, 1, ReadWrite, GPIOAODRBase>;
    using ODR14 = GPIOA_ODR_ODR14_Values<ngGPIOA::ODR, 14, 1, ReadWrite, GPIOAODRBase>;
    using ODR13 = GPIOA_ODR_ODR13_Values<ngGPIOA::ODR, 13, 1, ReadWrite, GPIOAODRBase>;
    using ODR12 = GPIOA_ODR_ODR12_Values<ngGPIOA::ODR, 12, 1, ReadWrite, GPIOAODRBase>;
    using ODR11 = GPIOA_ODR_ODR11_Values<ngGPIOA::ODR, 11, 1, ReadWrite, GPIOAODRBase>;
    using ODR10 = GPIOA_ODR_ODR10_Values<ngGPIOA::ODR, 10, 1, ReadWrite, GPIOAODRBase>;
    using ODR9 = GPIOA_ODR_ODR9_Values<ngGPIOA::ODR, 9, 1, ReadWrite, GPIOAODRBase>;
    using ODR8 = GPIOA_ODR_ODR8_Values<ngGPIOA::ODR, 8, 1, ReadWrite, GPIOAODRBase>;
    using ODR7 = GPIOA_ODR_ODR7_Values<ngGPIOA::ODR, 7, 1, ReadWrite, GPIOAODRBase>;
    using ODR6 = GPIOA_ODR_ODR6_Values<ngGPIOA::ODR, 6, 1, ReadWrite, GPIOAODRBase>;
    using ODR5 = GPIOA_ODR_ODR5_Values<ngGPIOA::ODR, 5, 1, ReadWrite, GPIOAODRBase>;
    using ODR4 = GPIOA_ODR_ODR4_Values<ngGPIOA::ODR, 4, 1, ReadWrite, GPIOAODRBase>;
    using ODR3 = GPIOA_ODR_ODR3_Values<ngGPIOA::ODR, 3, 1, ReadWrite, GPIOAODRBase>;
    using ODR2 = GPIOA_ODR_ODR2_Values<ngGPIOA::ODR, 2, 1, ReadWrite, GPIOAODRBase>;
    using ODR1 = GPIOA_ODR_ODR1_Values<ngGPIOA::ODR, 1, 1, ReadWrite, GPIOAODRBase>;
    using ODR0 = GPIOA_ODR_ODR0_Values<ngGPIOA::ODR, 0, 1, ReadWrite, GPIOAODRBase>;
    using FieldValues = GPIOA_ODR_ODR0_Values<ngGPIOA::ODR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using ODRPack  = FieldsPack<0x40020014, 32, ReadWrite, GPIOAODRBase, T...>;

  struct GPIOABSRRBase {};

  struct BSRR : public Register<0x40020018, Write, 32>
  {
    using BR15 = GPIOA_BSRR_BR15_Values<ngGPIOA::BSRR, 31, 1, Write, GPIOABSRRBase>;
    using BR14 = GPIOA_BSRR_BR14_Values<ngGPIOA::BSRR, 30, 1, Write, GPIOABSRRBase>;
    using BR13 = GPIOA_BSRR_BR13_Values<ngGPIOA::BSRR, 29, 1, Write, GPIOABSRRBase>;
    using BR12 = GPIOA_BSRR_BR12_Values<ngGPIOA::BSRR, 28, 1, Write, GPIOABSRRBase>;
    using BR11 = GPIOA_BSRR_BR11_Values<ngGPIOA::BSRR, 27, 1, Write, GPIOABSRRBase>;
    using BR10 = GPIOA_BSRR_BR10_Values<ngGPIOA::BSRR, 26, 1, Write, GPIOABSRRBase>;
    using BR9 = GPIOA_BSRR_BR9_Values<ngGPIOA::BSRR, 25, 1, Write, GPIOABSRRBase>;
    using BR8 = GPIOA_BSRR_BR8_Values<ngGPIOA::BSRR, 24, 1, Write, GPIOABSRRBase>;
    using BR7 = GPIOA_BSRR_BR7_Values<ngGPIOA::BSRR, 23, 1, Write, GPIOABSRRBase>;
    using BR6 = GPIOA_BSRR_BR6_Values<ngGPIOA::BSRR, 22, 1, Write, GPIOABSRRBase>;
    using BR5 = GPIOA_BSRR_BR5_Values<ngGPIOA::BSRR, 21, 1, Write, GPIOABSRRBase>;
    using BR4 = GPIOA_BSRR_BR4_Values<ngGPIOA::BSRR, 20, 1, Write, GPIOABSRRBase>;
    using BR3 = GPIOA_BSRR_BR3_Values<ngGPIOA::BSRR, 19, 1, Write, GPIOABSRRBase>;
    using BR2 = GPIOA_BSRR_BR2_Values<ngGPIOA::BSRR, 18, 1, Write, GPIOABSRRBase>;
    using BR1 = GPIOA_BSRR_BR1_Values<ngGPIOA::BSRR, 17, 1, Write, GPIOABSRRBase>;
    using BR0 = GPIOA_BSRR_BR0_Values<ngGPIOA::BSRR, 16, 1, Write, GPIOABSRRBase>;
    using BS15 = GPIOA_BSRR_BS15_Values<ngGPIOA::BSRR, 15, 1, Write, GPIOABSRRBase>;
    using BS14 = GPIOA_BSRR_BS14_Values<ngGPIOA::BSRR, 14, 1, Write, GPIOABSRRBase>;
    using BS13 = GPIOA_BSRR_BS13_Values<ngGPIOA::BSRR, 13, 1, Write, GPIOABSRRBase>;
    using BS12 = GPIOA_BSRR_BS12_Values<ngGPIOA::BSRR, 12, 1, Write, GPIOABSRRBase>;
    using BS11 = GPIOA_BSRR_BS11_Values<ngGPIOA::BSRR, 11, 1, Write, GPIOABSRRBase>;
    using BS10 = GPIOA_BSRR_BS10_Values<ngGPIOA::BSRR, 10, 1, Write, GPIOABSRRBase>;
    using BS9 = GPIOA_BSRR_BS9_Values<ngGPIOA::BSRR, 9, 1, Write, GPIOABSRRBase>;
    using BS8 = GPIOA_BSRR_BS8_Values<ngGPIOA::BSRR, 8, 1, Write, GPIOABSRRBase>;
    using BS7 = GPIOA_BSRR_BS7_Values<ngGPIOA::BSRR, 7, 1, Write, GPIOABSRRBase>;
    using BS6 = GPIOA_BSRR_BS6_Values<ngGPIOA::BSRR, 6, 1, Write, GPIOABSRRBase>;
    using BS5 = GPIOA_BSRR_BS5_Values<ngGPIOA::BSRR, 5, 1, Write, GPIOABSRRBase>;
    using BS4 = GPIOA_BSRR_BS4_Values<ngGPIOA::BSRR, 4, 1, Write, GPIOABSRRBase>;
    using BS3 = GPIOA_BSRR_BS3_Values<ngGPIOA::BSRR, 3, 1, Write, GPIOABSRRBase>;
    using BS2 = GPIOA_BSRR_BS2_Values<ngGPIOA::BSRR, 2, 1, Write, GPIOABSRRBase>;
    using BS1 = GPIOA_BSRR_BS1_Values<ngGPIOA::BSRR, 1, 1, Write, GPIOABSRRBase>;
    using BS0 = GPIOA_BSRR_BS0_Values<ngGPIOA::BSRR, 0, 1, Write, GPIOABSRRBase>;
    using FieldValues = GPIOA_BSRR_BS0_Values<ngGPIOA::BSRR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using BSRRPack  = FieldsPack<0x40020018, 32, Write, GPIOABSRRBase, T...>;

  struct GPIOALCKRBase {};

  struct LCKR : public Register<0x4002001C, ReadWrite, 32>
  {
    using LCKK = GPIOA_LCKR_LCKK_Values<ngGPIOA::LCKR, 16, 1, ReadWrite, GPIOALCKRBase>;
    using LCK15 = GPIOA_LCKR_LCK15_Values<ngGPIOA::LCKR, 15, 1, ReadWrite, GPIOALCKRBase>;
    using LCK14 = GPIOA_LCKR_LCK14_Values<ngGPIOA::LCKR, 14, 1, ReadWrite, GPIOALCKRBase>;
    using LCK13 = GPIOA_LCKR_LCK13_Values<ngGPIOA::LCKR, 13, 1, ReadWrite, GPIOALCKRBase>;
    using LCK12 = GPIOA_LCKR_LCK12_Values<ngGPIOA::LCKR, 12, 1, ReadWrite, GPIOALCKRBase>;
    using LCK11 = GPIOA_LCKR_LCK11_Values<ngGPIOA::LCKR, 11, 1, ReadWrite, GPIOALCKRBase>;
    using LCK10 = GPIOA_LCKR_LCK10_Values<ngGPIOA::LCKR, 10, 1, ReadWrite, GPIOALCKRBase>;
    using LCK9 = GPIOA_LCKR_LCK9_Values<ngGPIOA::LCKR, 9, 1, ReadWrite, GPIOALCKRBase>;
    using LCK8 = GPIOA_LCKR_LCK8_Values<ngGPIOA::LCKR, 8, 1, ReadWrite, GPIOALCKRBase>;
    using LCK7 = GPIOA_LCKR_LCK7_Values<ngGPIOA::LCKR, 7, 1, ReadWrite, GPIOALCKRBase>;
    using LCK6 = GPIOA_LCKR_LCK6_Values<ngGPIOA::LCKR, 6, 1, ReadWrite, GPIOALCKRBase>;
    using LCK5 = GPIOA_LCKR_LCK5_Values<ngGPIOA::LCKR, 5, 1, ReadWrite, GPIOALCKRBase>;
    using LCK4 = GPIOA_LCKR_LCK4_Values<ngGPIOA::LCKR, 4, 1, ReadWrite, GPIOALCKRBase>;
    using LCK3 = GPIOA_LCKR_LCK3_Values<ngGPIOA::LCKR, 3, 1, ReadWrite, GPIOALCKRBase>;
    using LCK2 = GPIOA_LCKR_LCK2_Values<ngGPIOA::LCKR, 2, 1, ReadWrite, GPIOALCKRBase>;
    using LCK1 = GPIOA_LCKR_LCK1_Values<ngGPIOA::LCKR, 1, 1, ReadWrite, GPIOALCKRBase>;
    using LCK0 = GPIOA_LCKR_LCK0_Values<ngGPIOA::LCKR, 0, 1, ReadWrite, GPIOALCKRBase>;
    using FieldValues = GPIOA_LCKR_LCK0_Values<ngGPIOA::LCKR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using LCKRPack  = FieldsPack<0x4002001C, 32, ReadWrite, GPIOALCKRBase, T...>;

  struct GPIOAAFRLBase {};

  struct AFRL : public Register<0x40020020, ReadWrite, 32>
  {
    using AFRL7 = GPIOA_AFRL_AFRL7_Values<ngGPIOA::AFRL, 28, 4, ReadWrite, GPIOAAFRLBase>;
    using AFRL6 = GPIOA_AFRL_AFRL6_Values<ngGPIOA::AFRL, 24, 4, ReadWrite, GPIOAAFRLBase>;
    using AFRL5 = GPIOA_AFRL_AFRL5_Values<ngGPIOA::AFRL, 20, 4, ReadWrite, GPIOAAFRLBase>;
    using AFRL4 = GPIOA_AFRL_AFRL4_Values<ngGPIOA::AFRL, 16, 4, ReadWrite, GPIOAAFRLBase>;
    using AFRL3 = GPIOA_AFRL_AFRL3_Values<ngGPIOA::AFRL, 12, 4, ReadWrite, GPIOAAFRLBase>;
    using AFRL2 = GPIOA_AFRL_AFRL2_Values<ngGPIOA::AFRL, 8, 4, ReadWrite, GPIOAAFRLBase>;
    using AFRL1 = GPIOA_AFRL_AFRL1_Values<ngGPIOA::AFRL, 4, 4, ReadWrite, GPIOAAFRLBase>;
    using AFRL0 = GPIOA_AFRL_AFRL0_Values<ngGPIOA::AFRL, 0, 4, ReadWrite, GPIOAAFRLBase>;
    using FieldValues = GPIOA_AFRL_AFRL0_Values<ngGPIOA::AFRL, 0, 4, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using AFRLPack  = FieldsPack<0x40020020, 32, ReadWrite, GPIOAAFRLBase, T...>;

  struct GPIOAAFRHBase {};

  struct AFRH : public Register<0x40020024, ReadWrite, 32>
  {
    using AFRH15 = GPIOA_AFRH_AFRH15_Values<ngGPIOA::AFRH, 28, 4, ReadWrite, GPIOAAFRHBase>;
    using AFRH14 = GPIOA_AFRH_AFRH14_Values<ngGPIOA::AFRH, 24, 4, ReadWrite, GPIOAAFRHBase>;
    using AFRH13 = GPIOA_AFRH_AFRH13_Values<ngGPIOA::AFRH, 20, 4, ReadWrite, GPIOAAFRHBase>;
    using AFRH12 = GPIOA_AFRH_AFRH12_Values<ngGPIOA::AFRH, 16, 4, ReadWrite, GPIOAAFRHBase>;
    using AFRH11 = GPIOA_AFRH_AFRH11_Values<ngGPIOA::AFRH, 12, 4, ReadWrite, GPIOAAFRHBase>;
    using AFRH10 = GPIOA_AFRH_AFRH10_Values<ngGPIOA::AFRH, 8, 4, ReadWrite, GPIOAAFRHBase>;
    using AFRH9 = GPIOA_AFRH_AFRH9_Values<ngGPIOA::AFRH, 4, 4, ReadWrite, GPIOAAFRHBase>;
    using AFRH8 = GPIOA_AFRH_AFRH8_Values<ngGPIOA::AFRH, 0, 4, ReadWrite, GPIOAAFRHBase>;
    using FieldValues = GPIOA_AFRH_AFRH8_Values<ngGPIOA::AFRH, 0, 4, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using AFRHPack  = FieldsPack<0x40020024, 32, ReadWrite, GPIOAAFRHBase, T...>;

};

