/*******************************************************************************
* Filename      : GpiobRegisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32L1xx device.
*
*
*******************************************************************************/

#pragma once

#include "FieldValues/GpiobFieldValues.hpp"
#include <register/Register.hpp>
#include <register/FieldsPack.hpp>
#include <register/Access.hpp>

using namespace ng;
struct GPIOB
{
  struct GPIOBMODERBase {};

  struct MODER : public Register<0x40020400, ReadWrite, 32>
  {
    using MODER15 = GPIOB_MODER_MODER15_Values<GPIOB::MODER, 30, 2, ReadWrite, GPIOBMODERBase>;
    using MODER14 = GPIOB_MODER_MODER14_Values<GPIOB::MODER, 28, 2, ReadWrite, GPIOBMODERBase>;
    using MODER13 = GPIOB_MODER_MODER13_Values<GPIOB::MODER, 26, 2, ReadWrite, GPIOBMODERBase>;
    using MODER12 = GPIOB_MODER_MODER12_Values<GPIOB::MODER, 24, 2, ReadWrite, GPIOBMODERBase>;
    using MODER11 = GPIOB_MODER_MODER11_Values<GPIOB::MODER, 22, 2, ReadWrite, GPIOBMODERBase>;
    using MODER10 = GPIOB_MODER_MODER10_Values<GPIOB::MODER, 20, 2, ReadWrite, GPIOBMODERBase>;
    using MODER9 = GPIOB_MODER_MODER9_Values<GPIOB::MODER, 18, 2, ReadWrite, GPIOBMODERBase>;
    using MODER8 = GPIOB_MODER_MODER8_Values<GPIOB::MODER, 16, 2, ReadWrite, GPIOBMODERBase>;
    using MODER7 = GPIOB_MODER_MODER7_Values<GPIOB::MODER, 14, 2, ReadWrite, GPIOBMODERBase>;
    using MODER6 = GPIOB_MODER_MODER6_Values<GPIOB::MODER, 12, 2, ReadWrite, GPIOBMODERBase>;
    using MODER5 = GPIOB_MODER_MODER5_Values<GPIOB::MODER, 10, 2, ReadWrite, GPIOBMODERBase>;
    using MODER4 = GPIOB_MODER_MODER4_Values<GPIOB::MODER, 8, 2, ReadWrite, GPIOBMODERBase>;
    using MODER3 = GPIOB_MODER_MODER3_Values<GPIOB::MODER, 6, 2, ReadWrite, GPIOBMODERBase>;
    using MODER2 = GPIOB_MODER_MODER2_Values<GPIOB::MODER, 4, 2, ReadWrite, GPIOBMODERBase>;
    using MODER1 = GPIOB_MODER_MODER1_Values<GPIOB::MODER, 2, 2, ReadWrite, GPIOBMODERBase>;
    using MODER0 = GPIOB_MODER_MODER0_Values<GPIOB::MODER, 0, 2, ReadWrite, GPIOBMODERBase>;
    using FieldValues = GPIOB_MODER_MODER0_Values<GPIOB::MODER, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using MODERPack  = FieldsPack<0x40020400, 32, ReadWrite, GPIOBMODERBase, T...>;

  struct GPIOBOTYPERBase {};

  struct OTYPER : public Register<0x40020404, ReadWrite, 32>
  {
    using OT15 = GPIOB_OTYPER_OT15_Values<GPIOB::OTYPER, 15, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT14 = GPIOB_OTYPER_OT14_Values<GPIOB::OTYPER, 14, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT13 = GPIOB_OTYPER_OT13_Values<GPIOB::OTYPER, 13, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT12 = GPIOB_OTYPER_OT12_Values<GPIOB::OTYPER, 12, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT11 = GPIOB_OTYPER_OT11_Values<GPIOB::OTYPER, 11, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT10 = GPIOB_OTYPER_OT10_Values<GPIOB::OTYPER, 10, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT9 = GPIOB_OTYPER_OT9_Values<GPIOB::OTYPER, 9, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT8 = GPIOB_OTYPER_OT8_Values<GPIOB::OTYPER, 8, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT7 = GPIOB_OTYPER_OT7_Values<GPIOB::OTYPER, 7, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT6 = GPIOB_OTYPER_OT6_Values<GPIOB::OTYPER, 6, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT5 = GPIOB_OTYPER_OT5_Values<GPIOB::OTYPER, 5, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT4 = GPIOB_OTYPER_OT4_Values<GPIOB::OTYPER, 4, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT3 = GPIOB_OTYPER_OT3_Values<GPIOB::OTYPER, 3, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT2 = GPIOB_OTYPER_OT2_Values<GPIOB::OTYPER, 2, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT1 = GPIOB_OTYPER_OT1_Values<GPIOB::OTYPER, 1, 1, ReadWrite, GPIOBOTYPERBase>;
    using OT0 = GPIOB_OTYPER_OT0_Values<GPIOB::OTYPER, 0, 1, ReadWrite, GPIOBOTYPERBase>;
    using FieldValues = GPIOB_OTYPER_OT0_Values<GPIOB::OTYPER, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using OTYPERPack  = FieldsPack<0x40020404, 32, ReadWrite, GPIOBOTYPERBase, T...>;

  struct GPIOBOSPEEDERBase {};

  struct OSPEEDER : public Register<0x40020408, ReadWrite, 32>
  {
    using OSPEEDR15 = GPIOB_OSPEEDER_OSPEEDR15_Values<GPIOB::OSPEEDER, 30, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR14 = GPIOB_OSPEEDER_OSPEEDR14_Values<GPIOB::OSPEEDER, 28, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR13 = GPIOB_OSPEEDER_OSPEEDR13_Values<GPIOB::OSPEEDER, 26, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR12 = GPIOB_OSPEEDER_OSPEEDR12_Values<GPIOB::OSPEEDER, 24, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR11 = GPIOB_OSPEEDER_OSPEEDR11_Values<GPIOB::OSPEEDER, 22, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR10 = GPIOB_OSPEEDER_OSPEEDR10_Values<GPIOB::OSPEEDER, 20, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR9 = GPIOB_OSPEEDER_OSPEEDR9_Values<GPIOB::OSPEEDER, 18, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR8 = GPIOB_OSPEEDER_OSPEEDR8_Values<GPIOB::OSPEEDER, 16, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR7 = GPIOB_OSPEEDER_OSPEEDR7_Values<GPIOB::OSPEEDER, 14, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR6 = GPIOB_OSPEEDER_OSPEEDR6_Values<GPIOB::OSPEEDER, 12, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR5 = GPIOB_OSPEEDER_OSPEEDR5_Values<GPIOB::OSPEEDER, 10, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR4 = GPIOB_OSPEEDER_OSPEEDR4_Values<GPIOB::OSPEEDER, 8, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR3 = GPIOB_OSPEEDER_OSPEEDR3_Values<GPIOB::OSPEEDER, 6, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR2 = GPIOB_OSPEEDER_OSPEEDR2_Values<GPIOB::OSPEEDER, 4, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR1 = GPIOB_OSPEEDER_OSPEEDR1_Values<GPIOB::OSPEEDER, 2, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using OSPEEDR0 = GPIOB_OSPEEDER_OSPEEDR0_Values<GPIOB::OSPEEDER, 0, 2, ReadWrite, GPIOBOSPEEDERBase>;
    using FieldValues = GPIOB_OSPEEDER_OSPEEDR0_Values<GPIOB::OSPEEDER, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using OSPEEDERPack  = FieldsPack<0x40020408, 32, ReadWrite, GPIOBOSPEEDERBase, T...>;

  struct GPIOBPUPDRBase {};

  struct PUPDR : public Register<0x4002040C, ReadWrite, 32>
  {
    using PUPDR15 = GPIOB_PUPDR_PUPDR15_Values<GPIOB::PUPDR, 30, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR14 = GPIOB_PUPDR_PUPDR14_Values<GPIOB::PUPDR, 28, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR13 = GPIOB_PUPDR_PUPDR13_Values<GPIOB::PUPDR, 26, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR12 = GPIOB_PUPDR_PUPDR12_Values<GPIOB::PUPDR, 24, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR11 = GPIOB_PUPDR_PUPDR11_Values<GPIOB::PUPDR, 22, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR10 = GPIOB_PUPDR_PUPDR10_Values<GPIOB::PUPDR, 20, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR9 = GPIOB_PUPDR_PUPDR9_Values<GPIOB::PUPDR, 18, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR8 = GPIOB_PUPDR_PUPDR8_Values<GPIOB::PUPDR, 16, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR7 = GPIOB_PUPDR_PUPDR7_Values<GPIOB::PUPDR, 14, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR6 = GPIOB_PUPDR_PUPDR6_Values<GPIOB::PUPDR, 12, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR5 = GPIOB_PUPDR_PUPDR5_Values<GPIOB::PUPDR, 10, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR4 = GPIOB_PUPDR_PUPDR4_Values<GPIOB::PUPDR, 8, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR3 = GPIOB_PUPDR_PUPDR3_Values<GPIOB::PUPDR, 6, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR2 = GPIOB_PUPDR_PUPDR2_Values<GPIOB::PUPDR, 4, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR1 = GPIOB_PUPDR_PUPDR1_Values<GPIOB::PUPDR, 2, 2, ReadWrite, GPIOBPUPDRBase>;
    using PUPDR0 = GPIOB_PUPDR_PUPDR0_Values<GPIOB::PUPDR, 0, 2, ReadWrite, GPIOBPUPDRBase>;
    using FieldValues = GPIOB_PUPDR_PUPDR0_Values<GPIOB::PUPDR, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using PUPDRPack  = FieldsPack<0x4002040C, 32, ReadWrite, GPIOBPUPDRBase, T...>;

  struct GPIOBIDRBase {};

  struct IDR : public Register<0x40020410, Read, 32>
  {
    using IDR15 = GPIOB_IDR_IDR15_Values<GPIOB::IDR, 15, 1, Read, GPIOBIDRBase>;
    using IDR14 = GPIOB_IDR_IDR14_Values<GPIOB::IDR, 14, 1, Read, GPIOBIDRBase>;
    using IDR13 = GPIOB_IDR_IDR13_Values<GPIOB::IDR, 13, 1, Read, GPIOBIDRBase>;
    using IDR12 = GPIOB_IDR_IDR12_Values<GPIOB::IDR, 12, 1, Read, GPIOBIDRBase>;
    using IDR11 = GPIOB_IDR_IDR11_Values<GPIOB::IDR, 11, 1, Read, GPIOBIDRBase>;
    using IDR10 = GPIOB_IDR_IDR10_Values<GPIOB::IDR, 10, 1, Read, GPIOBIDRBase>;
    using IDR9 = GPIOB_IDR_IDR9_Values<GPIOB::IDR, 9, 1, Read, GPIOBIDRBase>;
    using IDR8 = GPIOB_IDR_IDR8_Values<GPIOB::IDR, 8, 1, Read, GPIOBIDRBase>;
    using IDR7 = GPIOB_IDR_IDR7_Values<GPIOB::IDR, 7, 1, Read, GPIOBIDRBase>;
    using IDR6 = GPIOB_IDR_IDR6_Values<GPIOB::IDR, 6, 1, Read, GPIOBIDRBase>;
    using IDR5 = GPIOB_IDR_IDR5_Values<GPIOB::IDR, 5, 1, Read, GPIOBIDRBase>;
    using IDR4 = GPIOB_IDR_IDR4_Values<GPIOB::IDR, 4, 1, Read, GPIOBIDRBase>;
    using IDR3 = GPIOB_IDR_IDR3_Values<GPIOB::IDR, 3, 1, Read, GPIOBIDRBase>;
    using IDR2 = GPIOB_IDR_IDR2_Values<GPIOB::IDR, 2, 1, Read, GPIOBIDRBase>;
    using IDR1 = GPIOB_IDR_IDR1_Values<GPIOB::IDR, 1, 1, Read, GPIOBIDRBase>;
    using IDR0 = GPIOB_IDR_IDR0_Values<GPIOB::IDR, 0, 1, Read, GPIOBIDRBase>;
    using FieldValues = GPIOB_IDR_IDR0_Values<GPIOB::IDR, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using IDRPack  = FieldsPack<0x40020410, 32, Read, GPIOBIDRBase, T...>;

  struct GPIOBODRBase {};

  struct ODR : public Register<0x40020414, ReadWrite, 32>
  {
    using ODR15 = GPIOB_ODR_ODR15_Values<GPIOB::ODR, 15, 1, ReadWrite, GPIOBODRBase>;
    using ODR14 = GPIOB_ODR_ODR14_Values<GPIOB::ODR, 14, 1, ReadWrite, GPIOBODRBase>;
    using ODR13 = GPIOB_ODR_ODR13_Values<GPIOB::ODR, 13, 1, ReadWrite, GPIOBODRBase>;
    using ODR12 = GPIOB_ODR_ODR12_Values<GPIOB::ODR, 12, 1, ReadWrite, GPIOBODRBase>;
    using ODR11 = GPIOB_ODR_ODR11_Values<GPIOB::ODR, 11, 1, ReadWrite, GPIOBODRBase>;
    using ODR10 = GPIOB_ODR_ODR10_Values<GPIOB::ODR, 10, 1, ReadWrite, GPIOBODRBase>;
    using ODR9 = GPIOB_ODR_ODR9_Values<GPIOB::ODR, 9, 1, ReadWrite, GPIOBODRBase>;
    using ODR8 = GPIOB_ODR_ODR8_Values<GPIOB::ODR, 8, 1, ReadWrite, GPIOBODRBase>;
    using ODR7 = GPIOB_ODR_ODR7_Values<GPIOB::ODR, 7, 1, ReadWrite, GPIOBODRBase>;
    using ODR6 = GPIOB_ODR_ODR6_Values<GPIOB::ODR, 6, 1, ReadWrite, GPIOBODRBase>;
    using ODR5 = GPIOB_ODR_ODR5_Values<GPIOB::ODR, 5, 1, ReadWrite, GPIOBODRBase>;
    using ODR4 = GPIOB_ODR_ODR4_Values<GPIOB::ODR, 4, 1, ReadWrite, GPIOBODRBase>;
    using ODR3 = GPIOB_ODR_ODR3_Values<GPIOB::ODR, 3, 1, ReadWrite, GPIOBODRBase>;
    using ODR2 = GPIOB_ODR_ODR2_Values<GPIOB::ODR, 2, 1, ReadWrite, GPIOBODRBase>;
    using ODR1 = GPIOB_ODR_ODR1_Values<GPIOB::ODR, 1, 1, ReadWrite, GPIOBODRBase>;
    using ODR0 = GPIOB_ODR_ODR0_Values<GPIOB::ODR, 0, 1, ReadWrite, GPIOBODRBase>;
    using FieldValues = GPIOB_ODR_ODR0_Values<GPIOB::ODR, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using ODRPack  = FieldsPack<0x40020414, 32, ReadWrite, GPIOBODRBase, T...>;

  struct GPIOBBSRRBase {};

  struct BSRR : public Register<0x40020418, Write, 32>
  {
    using BR15 = GPIOB_BSRR_BR15_Values<GPIOB::BSRR, 31, 1, Write, GPIOBBSRRBase>;
    using BR14 = GPIOB_BSRR_BR14_Values<GPIOB::BSRR, 30, 1, Write, GPIOBBSRRBase>;
    using BR13 = GPIOB_BSRR_BR13_Values<GPIOB::BSRR, 29, 1, Write, GPIOBBSRRBase>;
    using BR12 = GPIOB_BSRR_BR12_Values<GPIOB::BSRR, 28, 1, Write, GPIOBBSRRBase>;
    using BR11 = GPIOB_BSRR_BR11_Values<GPIOB::BSRR, 27, 1, Write, GPIOBBSRRBase>;
    using BR10 = GPIOB_BSRR_BR10_Values<GPIOB::BSRR, 26, 1, Write, GPIOBBSRRBase>;
    using BR9 = GPIOB_BSRR_BR9_Values<GPIOB::BSRR, 25, 1, Write, GPIOBBSRRBase>;
    using BR8 = GPIOB_BSRR_BR8_Values<GPIOB::BSRR, 24, 1, Write, GPIOBBSRRBase>;
    using BR7 = GPIOB_BSRR_BR7_Values<GPIOB::BSRR, 23, 1, Write, GPIOBBSRRBase>;
    using BR6 = GPIOB_BSRR_BR6_Values<GPIOB::BSRR, 22, 1, Write, GPIOBBSRRBase>;
    using BR5 = GPIOB_BSRR_BR5_Values<GPIOB::BSRR, 21, 1, Write, GPIOBBSRRBase>;
    using BR4 = GPIOB_BSRR_BR4_Values<GPIOB::BSRR, 20, 1, Write, GPIOBBSRRBase>;
    using BR3 = GPIOB_BSRR_BR3_Values<GPIOB::BSRR, 19, 1, Write, GPIOBBSRRBase>;
    using BR2 = GPIOB_BSRR_BR2_Values<GPIOB::BSRR, 18, 1, Write, GPIOBBSRRBase>;
    using BR1 = GPIOB_BSRR_BR1_Values<GPIOB::BSRR, 17, 1, Write, GPIOBBSRRBase>;
    using BR0 = GPIOB_BSRR_BR0_Values<GPIOB::BSRR, 16, 1, Write, GPIOBBSRRBase>;
    using BS15 = GPIOB_BSRR_BS15_Values<GPIOB::BSRR, 15, 1, Write, GPIOBBSRRBase>;
    using BS14 = GPIOB_BSRR_BS14_Values<GPIOB::BSRR, 14, 1, Write, GPIOBBSRRBase>;
    using BS13 = GPIOB_BSRR_BS13_Values<GPIOB::BSRR, 13, 1, Write, GPIOBBSRRBase>;
    using BS12 = GPIOB_BSRR_BS12_Values<GPIOB::BSRR, 12, 1, Write, GPIOBBSRRBase>;
    using BS11 = GPIOB_BSRR_BS11_Values<GPIOB::BSRR, 11, 1, Write, GPIOBBSRRBase>;
    using BS10 = GPIOB_BSRR_BS10_Values<GPIOB::BSRR, 10, 1, Write, GPIOBBSRRBase>;
    using BS9 = GPIOB_BSRR_BS9_Values<GPIOB::BSRR, 9, 1, Write, GPIOBBSRRBase>;
    using BS8 = GPIOB_BSRR_BS8_Values<GPIOB::BSRR, 8, 1, Write, GPIOBBSRRBase>;
    using BS7 = GPIOB_BSRR_BS7_Values<GPIOB::BSRR, 7, 1, Write, GPIOBBSRRBase>;
    using BS6 = GPIOB_BSRR_BS6_Values<GPIOB::BSRR, 6, 1, Write, GPIOBBSRRBase>;
    using BS5 = GPIOB_BSRR_BS5_Values<GPIOB::BSRR, 5, 1, Write, GPIOBBSRRBase>;
    using BS4 = GPIOB_BSRR_BS4_Values<GPIOB::BSRR, 4, 1, Write, GPIOBBSRRBase>;
    using BS3 = GPIOB_BSRR_BS3_Values<GPIOB::BSRR, 3, 1, Write, GPIOBBSRRBase>;
    using BS2 = GPIOB_BSRR_BS2_Values<GPIOB::BSRR, 2, 1, Write, GPIOBBSRRBase>;
    using BS1 = GPIOB_BSRR_BS1_Values<GPIOB::BSRR, 1, 1, Write, GPIOBBSRRBase>;
    using BS0 = GPIOB_BSRR_BS0_Values<GPIOB::BSRR, 0, 1, Write, GPIOBBSRRBase>;
    using FieldValues = GPIOB_BSRR_BS0_Values<GPIOB::BSRR, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using BSRRPack  = FieldsPack<0x40020418, 32, Write, GPIOBBSRRBase, T...>;

  struct GPIOBLCKRBase {};

  struct LCKR : public Register<0x4002041C, ReadWrite, 32>
  {
    using LCKK = GPIOB_LCKR_LCKK_Values<GPIOB::LCKR, 16, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK15 = GPIOB_LCKR_LCK15_Values<GPIOB::LCKR, 15, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK14 = GPIOB_LCKR_LCK14_Values<GPIOB::LCKR, 14, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK13 = GPIOB_LCKR_LCK13_Values<GPIOB::LCKR, 13, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK12 = GPIOB_LCKR_LCK12_Values<GPIOB::LCKR, 12, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK11 = GPIOB_LCKR_LCK11_Values<GPIOB::LCKR, 11, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK10 = GPIOB_LCKR_LCK10_Values<GPIOB::LCKR, 10, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK9 = GPIOB_LCKR_LCK9_Values<GPIOB::LCKR, 9, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK8 = GPIOB_LCKR_LCK8_Values<GPIOB::LCKR, 8, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK7 = GPIOB_LCKR_LCK7_Values<GPIOB::LCKR, 7, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK6 = GPIOB_LCKR_LCK6_Values<GPIOB::LCKR, 6, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK5 = GPIOB_LCKR_LCK5_Values<GPIOB::LCKR, 5, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK4 = GPIOB_LCKR_LCK4_Values<GPIOB::LCKR, 4, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK3 = GPIOB_LCKR_LCK3_Values<GPIOB::LCKR, 3, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK2 = GPIOB_LCKR_LCK2_Values<GPIOB::LCKR, 2, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK1 = GPIOB_LCKR_LCK1_Values<GPIOB::LCKR, 1, 1, ReadWrite, GPIOBLCKRBase>;
    using LCK0 = GPIOB_LCKR_LCK0_Values<GPIOB::LCKR, 0, 1, ReadWrite, GPIOBLCKRBase>;
    using FieldValues = GPIOB_LCKR_LCK0_Values<GPIOB::LCKR, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using LCKRPack  = FieldsPack<0x4002041C, 32, ReadWrite, GPIOBLCKRBase, T...>;

  struct GPIOBAFRLBase {};

  struct AFRL : public Register<0x40020420, ReadWrite, 32>
  {
    using AFRL7 = GPIOB_AFRL_AFRL7_Values<GPIOB::AFRL, 28, 4, ReadWrite, GPIOBAFRLBase>;
    using AFRL6 = GPIOB_AFRL_AFRL6_Values<GPIOB::AFRL, 24, 4, ReadWrite, GPIOBAFRLBase>;
    using AFRL5 = GPIOB_AFRL_AFRL5_Values<GPIOB::AFRL, 20, 4, ReadWrite, GPIOBAFRLBase>;
    using AFRL4 = GPIOB_AFRL_AFRL4_Values<GPIOB::AFRL, 16, 4, ReadWrite, GPIOBAFRLBase>;
    using AFRL3 = GPIOB_AFRL_AFRL3_Values<GPIOB::AFRL, 12, 4, ReadWrite, GPIOBAFRLBase>;
    using AFRL2 = GPIOB_AFRL_AFRL2_Values<GPIOB::AFRL, 8, 4, ReadWrite, GPIOBAFRLBase>;
    using AFRL1 = GPIOB_AFRL_AFRL1_Values<GPIOB::AFRL, 4, 4, ReadWrite, GPIOBAFRLBase>;
    using AFRL0 = GPIOB_AFRL_AFRL0_Values<GPIOB::AFRL, 0, 4, ReadWrite, GPIOBAFRLBase>;
    using FieldValues = GPIOB_AFRL_AFRL0_Values<GPIOB::AFRL, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using AFRLPack  = FieldsPack<0x40020420, 32, ReadWrite, GPIOBAFRLBase, T...>;

  struct GPIOBAFRHBase {};

  struct AFRH : public Register<0x40020424, ReadWrite, 32>
  {
    using AFRH15 = GPIOB_AFRH_AFRH15_Values<GPIOB::AFRH, 28, 4, ReadWrite, GPIOBAFRHBase>;
    using AFRH14 = GPIOB_AFRH_AFRH14_Values<GPIOB::AFRH, 24, 4, ReadWrite, GPIOBAFRHBase>;
    using AFRH13 = GPIOB_AFRH_AFRH13_Values<GPIOB::AFRH, 20, 4, ReadWrite, GPIOBAFRHBase>;
    using AFRH12 = GPIOB_AFRH_AFRH12_Values<GPIOB::AFRH, 16, 4, ReadWrite, GPIOBAFRHBase>;
    using AFRH11 = GPIOB_AFRH_AFRH11_Values<GPIOB::AFRH, 12, 4, ReadWrite, GPIOBAFRHBase>;
    using AFRH10 = GPIOB_AFRH_AFRH10_Values<GPIOB::AFRH, 8, 4, ReadWrite, GPIOBAFRHBase>;
    using AFRH9 = GPIOB_AFRH_AFRH9_Values<GPIOB::AFRH, 4, 4, ReadWrite, GPIOBAFRHBase>;
    using AFRH8 = GPIOB_AFRH_AFRH8_Values<GPIOB::AFRH, 0, 4, ReadWrite, GPIOBAFRHBase>;
    using FieldValues = GPIOB_AFRH_AFRH8_Values<GPIOB::AFRH, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using AFRHPack  = FieldsPack<0x40020424, 32, ReadWrite, GPIOBAFRHBase, T...>;

};

