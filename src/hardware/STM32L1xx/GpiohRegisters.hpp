/*******************************************************************************
* Filename      : GpiohRegisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32L1xx device.
*
*
*******************************************************************************/

#pragma once

#include "FieldValues/GpiohFieldValues.hpp"
#include <register/Register.hpp>
#include <register/FieldsPack.hpp>
#include <register/Access.hpp>

using namespace ng;
struct GPIOH
{
  struct GPIOHMODERBase {};

  struct MODER : public Register<0x40021400, ReadWrite, 32>
  {
    using MODER15 = GPIOH_MODER_MODER15_Values<GPIOH::MODER, 30, 2, ReadWrite, GPIOHMODERBase>;
    using MODER14 = GPIOH_MODER_MODER14_Values<GPIOH::MODER, 28, 2, ReadWrite, GPIOHMODERBase>;
    using MODER13 = GPIOH_MODER_MODER13_Values<GPIOH::MODER, 26, 2, ReadWrite, GPIOHMODERBase>;
    using MODER12 = GPIOH_MODER_MODER12_Values<GPIOH::MODER, 24, 2, ReadWrite, GPIOHMODERBase>;
    using MODER11 = GPIOH_MODER_MODER11_Values<GPIOH::MODER, 22, 2, ReadWrite, GPIOHMODERBase>;
    using MODER10 = GPIOH_MODER_MODER10_Values<GPIOH::MODER, 20, 2, ReadWrite, GPIOHMODERBase>;
    using MODER9 = GPIOH_MODER_MODER9_Values<GPIOH::MODER, 18, 2, ReadWrite, GPIOHMODERBase>;
    using MODER8 = GPIOH_MODER_MODER8_Values<GPIOH::MODER, 16, 2, ReadWrite, GPIOHMODERBase>;
    using MODER7 = GPIOH_MODER_MODER7_Values<GPIOH::MODER, 14, 2, ReadWrite, GPIOHMODERBase>;
    using MODER6 = GPIOH_MODER_MODER6_Values<GPIOH::MODER, 12, 2, ReadWrite, GPIOHMODERBase>;
    using MODER5 = GPIOH_MODER_MODER5_Values<GPIOH::MODER, 10, 2, ReadWrite, GPIOHMODERBase>;
    using MODER4 = GPIOH_MODER_MODER4_Values<GPIOH::MODER, 8, 2, ReadWrite, GPIOHMODERBase>;
    using MODER3 = GPIOH_MODER_MODER3_Values<GPIOH::MODER, 6, 2, ReadWrite, GPIOHMODERBase>;
    using MODER2 = GPIOH_MODER_MODER2_Values<GPIOH::MODER, 4, 2, ReadWrite, GPIOHMODERBase>;
    using MODER1 = GPIOH_MODER_MODER1_Values<GPIOH::MODER, 2, 2, ReadWrite, GPIOHMODERBase>;
    using MODER0 = GPIOH_MODER_MODER0_Values<GPIOH::MODER, 0, 2, ReadWrite, GPIOHMODERBase>;
    using FieldValues = GPIOH_MODER_MODER0_Values<GPIOH::MODER, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using MODERPack  = FieldsPack<0x40021400, 32, ReadWrite, GPIOHMODERBase, T...>;

  struct GPIOHOTYPERBase {};

  struct OTYPER : public Register<0x40021404, ReadWrite, 32>
  {
    using OT15 = GPIOH_OTYPER_OT15_Values<GPIOH::OTYPER, 15, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT14 = GPIOH_OTYPER_OT14_Values<GPIOH::OTYPER, 14, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT13 = GPIOH_OTYPER_OT13_Values<GPIOH::OTYPER, 13, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT12 = GPIOH_OTYPER_OT12_Values<GPIOH::OTYPER, 12, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT11 = GPIOH_OTYPER_OT11_Values<GPIOH::OTYPER, 11, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT10 = GPIOH_OTYPER_OT10_Values<GPIOH::OTYPER, 10, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT9 = GPIOH_OTYPER_OT9_Values<GPIOH::OTYPER, 9, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT8 = GPIOH_OTYPER_OT8_Values<GPIOH::OTYPER, 8, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT7 = GPIOH_OTYPER_OT7_Values<GPIOH::OTYPER, 7, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT6 = GPIOH_OTYPER_OT6_Values<GPIOH::OTYPER, 6, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT5 = GPIOH_OTYPER_OT5_Values<GPIOH::OTYPER, 5, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT4 = GPIOH_OTYPER_OT4_Values<GPIOH::OTYPER, 4, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT3 = GPIOH_OTYPER_OT3_Values<GPIOH::OTYPER, 3, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT2 = GPIOH_OTYPER_OT2_Values<GPIOH::OTYPER, 2, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT1 = GPIOH_OTYPER_OT1_Values<GPIOH::OTYPER, 1, 1, ReadWrite, GPIOHOTYPERBase>;
    using OT0 = GPIOH_OTYPER_OT0_Values<GPIOH::OTYPER, 0, 1, ReadWrite, GPIOHOTYPERBase>;
    using FieldValues = GPIOH_OTYPER_OT0_Values<GPIOH::OTYPER, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using OTYPERPack  = FieldsPack<0x40021404, 32, ReadWrite, GPIOHOTYPERBase, T...>;

  struct GPIOHOSPEEDERBase {};

  struct OSPEEDER : public Register<0x40021408, ReadWrite, 32>
  {
    using OSPEEDR15 = GPIOH_OSPEEDER_OSPEEDR15_Values<GPIOH::OSPEEDER, 30, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR14 = GPIOH_OSPEEDER_OSPEEDR14_Values<GPIOH::OSPEEDER, 28, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR13 = GPIOH_OSPEEDER_OSPEEDR13_Values<GPIOH::OSPEEDER, 26, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR12 = GPIOH_OSPEEDER_OSPEEDR12_Values<GPIOH::OSPEEDER, 24, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR11 = GPIOH_OSPEEDER_OSPEEDR11_Values<GPIOH::OSPEEDER, 22, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR10 = GPIOH_OSPEEDER_OSPEEDR10_Values<GPIOH::OSPEEDER, 20, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR9 = GPIOH_OSPEEDER_OSPEEDR9_Values<GPIOH::OSPEEDER, 18, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR8 = GPIOH_OSPEEDER_OSPEEDR8_Values<GPIOH::OSPEEDER, 16, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR7 = GPIOH_OSPEEDER_OSPEEDR7_Values<GPIOH::OSPEEDER, 14, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR6 = GPIOH_OSPEEDER_OSPEEDR6_Values<GPIOH::OSPEEDER, 12, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR5 = GPIOH_OSPEEDER_OSPEEDR5_Values<GPIOH::OSPEEDER, 10, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR4 = GPIOH_OSPEEDER_OSPEEDR4_Values<GPIOH::OSPEEDER, 8, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR3 = GPIOH_OSPEEDER_OSPEEDR3_Values<GPIOH::OSPEEDER, 6, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR2 = GPIOH_OSPEEDER_OSPEEDR2_Values<GPIOH::OSPEEDER, 4, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR1 = GPIOH_OSPEEDER_OSPEEDR1_Values<GPIOH::OSPEEDER, 2, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using OSPEEDR0 = GPIOH_OSPEEDER_OSPEEDR0_Values<GPIOH::OSPEEDER, 0, 2, ReadWrite, GPIOHOSPEEDERBase>;
    using FieldValues = GPIOH_OSPEEDER_OSPEEDR0_Values<GPIOH::OSPEEDER, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using OSPEEDERPack  = FieldsPack<0x40021408, 32, ReadWrite, GPIOHOSPEEDERBase, T...>;

  struct GPIOHPUPDRBase {};

  struct PUPDR : public Register<0x4002140C, ReadWrite, 32>
  {
    using PUPDR15 = GPIOH_PUPDR_PUPDR15_Values<GPIOH::PUPDR, 30, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR14 = GPIOH_PUPDR_PUPDR14_Values<GPIOH::PUPDR, 28, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR13 = GPIOH_PUPDR_PUPDR13_Values<GPIOH::PUPDR, 26, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR12 = GPIOH_PUPDR_PUPDR12_Values<GPIOH::PUPDR, 24, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR11 = GPIOH_PUPDR_PUPDR11_Values<GPIOH::PUPDR, 22, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR10 = GPIOH_PUPDR_PUPDR10_Values<GPIOH::PUPDR, 20, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR9 = GPIOH_PUPDR_PUPDR9_Values<GPIOH::PUPDR, 18, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR8 = GPIOH_PUPDR_PUPDR8_Values<GPIOH::PUPDR, 16, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR7 = GPIOH_PUPDR_PUPDR7_Values<GPIOH::PUPDR, 14, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR6 = GPIOH_PUPDR_PUPDR6_Values<GPIOH::PUPDR, 12, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR5 = GPIOH_PUPDR_PUPDR5_Values<GPIOH::PUPDR, 10, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR4 = GPIOH_PUPDR_PUPDR4_Values<GPIOH::PUPDR, 8, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR3 = GPIOH_PUPDR_PUPDR3_Values<GPIOH::PUPDR, 6, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR2 = GPIOH_PUPDR_PUPDR2_Values<GPIOH::PUPDR, 4, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR1 = GPIOH_PUPDR_PUPDR1_Values<GPIOH::PUPDR, 2, 2, ReadWrite, GPIOHPUPDRBase>;
    using PUPDR0 = GPIOH_PUPDR_PUPDR0_Values<GPIOH::PUPDR, 0, 2, ReadWrite, GPIOHPUPDRBase>;
    using FieldValues = GPIOH_PUPDR_PUPDR0_Values<GPIOH::PUPDR, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using PUPDRPack  = FieldsPack<0x4002140C, 32, ReadWrite, GPIOHPUPDRBase, T...>;

  struct GPIOHIDRBase {};

  struct IDR : public Register<0x40021410, Read, 32>
  {
    using IDR15 = GPIOH_IDR_IDR15_Values<GPIOH::IDR, 15, 1, Read, GPIOHIDRBase>;
    using IDR14 = GPIOH_IDR_IDR14_Values<GPIOH::IDR, 14, 1, Read, GPIOHIDRBase>;
    using IDR13 = GPIOH_IDR_IDR13_Values<GPIOH::IDR, 13, 1, Read, GPIOHIDRBase>;
    using IDR12 = GPIOH_IDR_IDR12_Values<GPIOH::IDR, 12, 1, Read, GPIOHIDRBase>;
    using IDR11 = GPIOH_IDR_IDR11_Values<GPIOH::IDR, 11, 1, Read, GPIOHIDRBase>;
    using IDR10 = GPIOH_IDR_IDR10_Values<GPIOH::IDR, 10, 1, Read, GPIOHIDRBase>;
    using IDR9 = GPIOH_IDR_IDR9_Values<GPIOH::IDR, 9, 1, Read, GPIOHIDRBase>;
    using IDR8 = GPIOH_IDR_IDR8_Values<GPIOH::IDR, 8, 1, Read, GPIOHIDRBase>;
    using IDR7 = GPIOH_IDR_IDR7_Values<GPIOH::IDR, 7, 1, Read, GPIOHIDRBase>;
    using IDR6 = GPIOH_IDR_IDR6_Values<GPIOH::IDR, 6, 1, Read, GPIOHIDRBase>;
    using IDR5 = GPIOH_IDR_IDR5_Values<GPIOH::IDR, 5, 1, Read, GPIOHIDRBase>;
    using IDR4 = GPIOH_IDR_IDR4_Values<GPIOH::IDR, 4, 1, Read, GPIOHIDRBase>;
    using IDR3 = GPIOH_IDR_IDR3_Values<GPIOH::IDR, 3, 1, Read, GPIOHIDRBase>;
    using IDR2 = GPIOH_IDR_IDR2_Values<GPIOH::IDR, 2, 1, Read, GPIOHIDRBase>;
    using IDR1 = GPIOH_IDR_IDR1_Values<GPIOH::IDR, 1, 1, Read, GPIOHIDRBase>;
    using IDR0 = GPIOH_IDR_IDR0_Values<GPIOH::IDR, 0, 1, Read, GPIOHIDRBase>;
    using FieldValues = GPIOH_IDR_IDR0_Values<GPIOH::IDR, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using IDRPack  = FieldsPack<0x40021410, 32, Read, GPIOHIDRBase, T...>;

  struct GPIOHODRBase {};

  struct ODR : public Register<0x40021414, ReadWrite, 32>
  {
    using ODR15 = GPIOH_ODR_ODR15_Values<GPIOH::ODR, 15, 1, ReadWrite, GPIOHODRBase>;
    using ODR14 = GPIOH_ODR_ODR14_Values<GPIOH::ODR, 14, 1, ReadWrite, GPIOHODRBase>;
    using ODR13 = GPIOH_ODR_ODR13_Values<GPIOH::ODR, 13, 1, ReadWrite, GPIOHODRBase>;
    using ODR12 = GPIOH_ODR_ODR12_Values<GPIOH::ODR, 12, 1, ReadWrite, GPIOHODRBase>;
    using ODR11 = GPIOH_ODR_ODR11_Values<GPIOH::ODR, 11, 1, ReadWrite, GPIOHODRBase>;
    using ODR10 = GPIOH_ODR_ODR10_Values<GPIOH::ODR, 10, 1, ReadWrite, GPIOHODRBase>;
    using ODR9 = GPIOH_ODR_ODR9_Values<GPIOH::ODR, 9, 1, ReadWrite, GPIOHODRBase>;
    using ODR8 = GPIOH_ODR_ODR8_Values<GPIOH::ODR, 8, 1, ReadWrite, GPIOHODRBase>;
    using ODR7 = GPIOH_ODR_ODR7_Values<GPIOH::ODR, 7, 1, ReadWrite, GPIOHODRBase>;
    using ODR6 = GPIOH_ODR_ODR6_Values<GPIOH::ODR, 6, 1, ReadWrite, GPIOHODRBase>;
    using ODR5 = GPIOH_ODR_ODR5_Values<GPIOH::ODR, 5, 1, ReadWrite, GPIOHODRBase>;
    using ODR4 = GPIOH_ODR_ODR4_Values<GPIOH::ODR, 4, 1, ReadWrite, GPIOHODRBase>;
    using ODR3 = GPIOH_ODR_ODR3_Values<GPIOH::ODR, 3, 1, ReadWrite, GPIOHODRBase>;
    using ODR2 = GPIOH_ODR_ODR2_Values<GPIOH::ODR, 2, 1, ReadWrite, GPIOHODRBase>;
    using ODR1 = GPIOH_ODR_ODR1_Values<GPIOH::ODR, 1, 1, ReadWrite, GPIOHODRBase>;
    using ODR0 = GPIOH_ODR_ODR0_Values<GPIOH::ODR, 0, 1, ReadWrite, GPIOHODRBase>;
    using FieldValues = GPIOH_ODR_ODR0_Values<GPIOH::ODR, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using ODRPack  = FieldsPack<0x40021414, 32, ReadWrite, GPIOHODRBase, T...>;

  struct GPIOHBSRRBase {};

  struct BSRR : public Register<0x40021418, Write, 32>
  {
    using BR15 = GPIOH_BSRR_BR15_Values<GPIOH::BSRR, 31, 1, Write, GPIOHBSRRBase>;
    using BR14 = GPIOH_BSRR_BR14_Values<GPIOH::BSRR, 30, 1, Write, GPIOHBSRRBase>;
    using BR13 = GPIOH_BSRR_BR13_Values<GPIOH::BSRR, 29, 1, Write, GPIOHBSRRBase>;
    using BR12 = GPIOH_BSRR_BR12_Values<GPIOH::BSRR, 28, 1, Write, GPIOHBSRRBase>;
    using BR11 = GPIOH_BSRR_BR11_Values<GPIOH::BSRR, 27, 1, Write, GPIOHBSRRBase>;
    using BR10 = GPIOH_BSRR_BR10_Values<GPIOH::BSRR, 26, 1, Write, GPIOHBSRRBase>;
    using BR9 = GPIOH_BSRR_BR9_Values<GPIOH::BSRR, 25, 1, Write, GPIOHBSRRBase>;
    using BR8 = GPIOH_BSRR_BR8_Values<GPIOH::BSRR, 24, 1, Write, GPIOHBSRRBase>;
    using BR7 = GPIOH_BSRR_BR7_Values<GPIOH::BSRR, 23, 1, Write, GPIOHBSRRBase>;
    using BR6 = GPIOH_BSRR_BR6_Values<GPIOH::BSRR, 22, 1, Write, GPIOHBSRRBase>;
    using BR5 = GPIOH_BSRR_BR5_Values<GPIOH::BSRR, 21, 1, Write, GPIOHBSRRBase>;
    using BR4 = GPIOH_BSRR_BR4_Values<GPIOH::BSRR, 20, 1, Write, GPIOHBSRRBase>;
    using BR3 = GPIOH_BSRR_BR3_Values<GPIOH::BSRR, 19, 1, Write, GPIOHBSRRBase>;
    using BR2 = GPIOH_BSRR_BR2_Values<GPIOH::BSRR, 18, 1, Write, GPIOHBSRRBase>;
    using BR1 = GPIOH_BSRR_BR1_Values<GPIOH::BSRR, 17, 1, Write, GPIOHBSRRBase>;
    using BR0 = GPIOH_BSRR_BR0_Values<GPIOH::BSRR, 16, 1, Write, GPIOHBSRRBase>;
    using BS15 = GPIOH_BSRR_BS15_Values<GPIOH::BSRR, 15, 1, Write, GPIOHBSRRBase>;
    using BS14 = GPIOH_BSRR_BS14_Values<GPIOH::BSRR, 14, 1, Write, GPIOHBSRRBase>;
    using BS13 = GPIOH_BSRR_BS13_Values<GPIOH::BSRR, 13, 1, Write, GPIOHBSRRBase>;
    using BS12 = GPIOH_BSRR_BS12_Values<GPIOH::BSRR, 12, 1, Write, GPIOHBSRRBase>;
    using BS11 = GPIOH_BSRR_BS11_Values<GPIOH::BSRR, 11, 1, Write, GPIOHBSRRBase>;
    using BS10 = GPIOH_BSRR_BS10_Values<GPIOH::BSRR, 10, 1, Write, GPIOHBSRRBase>;
    using BS9 = GPIOH_BSRR_BS9_Values<GPIOH::BSRR, 9, 1, Write, GPIOHBSRRBase>;
    using BS8 = GPIOH_BSRR_BS8_Values<GPIOH::BSRR, 8, 1, Write, GPIOHBSRRBase>;
    using BS7 = GPIOH_BSRR_BS7_Values<GPIOH::BSRR, 7, 1, Write, GPIOHBSRRBase>;
    using BS6 = GPIOH_BSRR_BS6_Values<GPIOH::BSRR, 6, 1, Write, GPIOHBSRRBase>;
    using BS5 = GPIOH_BSRR_BS5_Values<GPIOH::BSRR, 5, 1, Write, GPIOHBSRRBase>;
    using BS4 = GPIOH_BSRR_BS4_Values<GPIOH::BSRR, 4, 1, Write, GPIOHBSRRBase>;
    using BS3 = GPIOH_BSRR_BS3_Values<GPIOH::BSRR, 3, 1, Write, GPIOHBSRRBase>;
    using BS2 = GPIOH_BSRR_BS2_Values<GPIOH::BSRR, 2, 1, Write, GPIOHBSRRBase>;
    using BS1 = GPIOH_BSRR_BS1_Values<GPIOH::BSRR, 1, 1, Write, GPIOHBSRRBase>;
    using BS0 = GPIOH_BSRR_BS0_Values<GPIOH::BSRR, 0, 1, Write, GPIOHBSRRBase>;
    using FieldValues = GPIOH_BSRR_BS0_Values<GPIOH::BSRR, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using BSRRPack  = FieldsPack<0x40021418, 32, Write, GPIOHBSRRBase, T...>;

  struct GPIOHLCKRBase {};

  struct LCKR : public Register<0x4002141C, ReadWrite, 32>
  {
    using LCKK = GPIOH_LCKR_LCKK_Values<GPIOH::LCKR, 16, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK15 = GPIOH_LCKR_LCK15_Values<GPIOH::LCKR, 15, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK14 = GPIOH_LCKR_LCK14_Values<GPIOH::LCKR, 14, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK13 = GPIOH_LCKR_LCK13_Values<GPIOH::LCKR, 13, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK12 = GPIOH_LCKR_LCK12_Values<GPIOH::LCKR, 12, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK11 = GPIOH_LCKR_LCK11_Values<GPIOH::LCKR, 11, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK10 = GPIOH_LCKR_LCK10_Values<GPIOH::LCKR, 10, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK9 = GPIOH_LCKR_LCK9_Values<GPIOH::LCKR, 9, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK8 = GPIOH_LCKR_LCK8_Values<GPIOH::LCKR, 8, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK7 = GPIOH_LCKR_LCK7_Values<GPIOH::LCKR, 7, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK6 = GPIOH_LCKR_LCK6_Values<GPIOH::LCKR, 6, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK5 = GPIOH_LCKR_LCK5_Values<GPIOH::LCKR, 5, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK4 = GPIOH_LCKR_LCK4_Values<GPIOH::LCKR, 4, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK3 = GPIOH_LCKR_LCK3_Values<GPIOH::LCKR, 3, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK2 = GPIOH_LCKR_LCK2_Values<GPIOH::LCKR, 2, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK1 = GPIOH_LCKR_LCK1_Values<GPIOH::LCKR, 1, 1, ReadWrite, GPIOHLCKRBase>;
    using LCK0 = GPIOH_LCKR_LCK0_Values<GPIOH::LCKR, 0, 1, ReadWrite, GPIOHLCKRBase>;
    using FieldValues = GPIOH_LCKR_LCK0_Values<GPIOH::LCKR, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using LCKRPack  = FieldsPack<0x4002141C, 32, ReadWrite, GPIOHLCKRBase, T...>;

  struct GPIOHAFRLBase {};

  struct AFRL : public Register<0x40021420, ReadWrite, 32>
  {
    using AFRL7 = GPIOH_AFRL_AFRL7_Values<GPIOH::AFRL, 28, 4, ReadWrite, GPIOHAFRLBase>;
    using AFRL6 = GPIOH_AFRL_AFRL6_Values<GPIOH::AFRL, 24, 4, ReadWrite, GPIOHAFRLBase>;
    using AFRL5 = GPIOH_AFRL_AFRL5_Values<GPIOH::AFRL, 20, 4, ReadWrite, GPIOHAFRLBase>;
    using AFRL4 = GPIOH_AFRL_AFRL4_Values<GPIOH::AFRL, 16, 4, ReadWrite, GPIOHAFRLBase>;
    using AFRL3 = GPIOH_AFRL_AFRL3_Values<GPIOH::AFRL, 12, 4, ReadWrite, GPIOHAFRLBase>;
    using AFRL2 = GPIOH_AFRL_AFRL2_Values<GPIOH::AFRL, 8, 4, ReadWrite, GPIOHAFRLBase>;
    using AFRL1 = GPIOH_AFRL_AFRL1_Values<GPIOH::AFRL, 4, 4, ReadWrite, GPIOHAFRLBase>;
    using AFRL0 = GPIOH_AFRL_AFRL0_Values<GPIOH::AFRL, 0, 4, ReadWrite, GPIOHAFRLBase>;
    using FieldValues = GPIOH_AFRL_AFRL0_Values<GPIOH::AFRL, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using AFRLPack  = FieldsPack<0x40021420, 32, ReadWrite, GPIOHAFRLBase, T...>;

  struct GPIOHAFRHBase {};

  struct AFRH : public Register<0x40021424, ReadWrite, 32>
  {
    using AFRH15 = GPIOH_AFRH_AFRH15_Values<GPIOH::AFRH, 28, 4, ReadWrite, GPIOHAFRHBase>;
    using AFRH14 = GPIOH_AFRH_AFRH14_Values<GPIOH::AFRH, 24, 4, ReadWrite, GPIOHAFRHBase>;
    using AFRH13 = GPIOH_AFRH_AFRH13_Values<GPIOH::AFRH, 20, 4, ReadWrite, GPIOHAFRHBase>;
    using AFRH12 = GPIOH_AFRH_AFRH12_Values<GPIOH::AFRH, 16, 4, ReadWrite, GPIOHAFRHBase>;
    using AFRH11 = GPIOH_AFRH_AFRH11_Values<GPIOH::AFRH, 12, 4, ReadWrite, GPIOHAFRHBase>;
    using AFRH10 = GPIOH_AFRH_AFRH10_Values<GPIOH::AFRH, 8, 4, ReadWrite, GPIOHAFRHBase>;
    using AFRH9 = GPIOH_AFRH_AFRH9_Values<GPIOH::AFRH, 4, 4, ReadWrite, GPIOHAFRHBase>;
    using AFRH8 = GPIOH_AFRH_AFRH8_Values<GPIOH::AFRH, 0, 4, ReadWrite, GPIOHAFRHBase>;
    using FieldValues = GPIOH_AFRH_AFRH8_Values<GPIOH::AFRH, 0, 0, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using AFRHPack  = FieldsPack<0x40021424, 32, ReadWrite, GPIOHAFRHBase, T...>;

};

