/*******************************************************************************
* Filename      : FlashRegisters.hpp
*
* Details       : Flash. This header file is auto-generated for STM32L1xx
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "FieldValues/FlashFieldValues.hpp"
#include <register/Register.hpp>
#include <register/FieldsPack.hpp>
#include <register/Access.hpp>

using namespace ng;

struct ngFlash
{
  struct FlashACRBase {};

  struct ACR : public Register<0x40023C00, ReadWrite, 32>
  {
    using LATENCY = Flash_ACR_LATENCY_Values<ngFlash::ACR, 0, 1, ReadWrite, FlashACRBase>;
    using PRFTEN = Flash_ACR_PRFTEN_Values<ngFlash::ACR, 1, 1, ReadWrite, FlashACRBase>;
    using ACC64 = Flash_ACR_ACC64_Values<ngFlash::ACR, 2, 1, ReadWrite, FlashACRBase>;
    using SLEEP_PD = Flash_ACR_SLEEP_PD_Values<ngFlash::ACR, 3, 1, ReadWrite, FlashACRBase>;
    using RUN_PD = Flash_ACR_RUN_PD_Values<ngFlash::ACR, 4, 1, ReadWrite, FlashACRBase>;
    using FieldValues = Flash_ACR_RUN_PD_Values<ngFlash::ACR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using ACRPack  = FieldsPack<0x40023C00, 32, ReadWrite, FlashACRBase, T...>;

  struct FlashPECRBase {};

  struct PECR : public Register<0x40023C04, ReadWrite, 32>
  {
    using PELOCK = Flash_PECR_PELOCK_Values<ngFlash::PECR, 0, 1, ReadWrite, FlashPECRBase>;
    using PRGLOCK = Flash_PECR_PRGLOCK_Values<ngFlash::PECR, 1, 1, ReadWrite, FlashPECRBase>;
    using OPTLOCK = Flash_PECR_OPTLOCK_Values<ngFlash::PECR, 2, 1, ReadWrite, FlashPECRBase>;
    using PROG = Flash_PECR_PROG_Values<ngFlash::PECR, 3, 1, ReadWrite, FlashPECRBase>;
    using DATA = Flash_PECR_DATA_Values<ngFlash::PECR, 4, 1, ReadWrite, FlashPECRBase>;
    using FTDW = Flash_PECR_FTDW_Values<ngFlash::PECR, 8, 1, ReadWrite, FlashPECRBase>;
    using ERASE = Flash_PECR_ERASE_Values<ngFlash::PECR, 9, 1, ReadWrite, FlashPECRBase>;
    using FPRG = Flash_PECR_FPRG_Values<ngFlash::PECR, 10, 1, ReadWrite, FlashPECRBase>;
    using PARALLELBANK = Flash_PECR_PARALLELBANK_Values<ngFlash::PECR, 15, 1, ReadWrite, FlashPECRBase>;
    using EOPIE = Flash_PECR_EOPIE_Values<ngFlash::PECR, 16, 1, ReadWrite, FlashPECRBase>;
    using ERRIE = Flash_PECR_ERRIE_Values<ngFlash::PECR, 17, 1, ReadWrite, FlashPECRBase>;
    using OBL_LAUNCH = Flash_PECR_OBL_LAUNCH_Values<ngFlash::PECR, 18, 1, ReadWrite, FlashPECRBase>;
    using FieldValues = Flash_PECR_OBL_LAUNCH_Values<ngFlash::PECR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using PECRPack  = FieldsPack<0x40023C04, 32, ReadWrite, FlashPECRBase, T...>;

  struct FlashPDKEYRBase {};

  struct PDKEYR : public Register<0x40023C08, Write, 32>
  {
    using PDKEYRField = Flash_PDKEYR_PDKEYR_Values<ngFlash::PDKEYR, 0, 32, Write, FlashPDKEYRBase>;
    using FieldValues = Flash_PDKEYR_PDKEYR_Values<ngFlash::PDKEYR, 0, 32, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using PDKEYRPack  = FieldsPack<0x40023C08, 32, Write, FlashPDKEYRBase, T...>;

  struct FlashPEKEYRBase {};

  struct PEKEYR : public Register<0x40023C0C, Write, 32>
  {
    using PEKEYRField = Flash_PEKEYR_PEKEYR_Values<ngFlash::PEKEYR, 0, 32, Write, FlashPEKEYRBase>;
    using FieldValues = Flash_PEKEYR_PEKEYR_Values<ngFlash::PEKEYR, 0, 32, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using PEKEYRPack  = FieldsPack<0x40023C0C, 32, Write, FlashPEKEYRBase, T...>;

  struct FlashPRGKEYRBase {};

  struct PRGKEYR : public Register<0x40023C10, Write, 32>
  {
    using PRGKEYRField = Flash_PRGKEYR_PRGKEYR_Values<ngFlash::PRGKEYR, 0, 32, Write, FlashPRGKEYRBase>;
    using FieldValues = Flash_PRGKEYR_PRGKEYR_Values<ngFlash::PRGKEYR, 0, 32, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using PRGKEYRPack  = FieldsPack<0x40023C10, 32, Write, FlashPRGKEYRBase, T...>;

  struct FlashOPTKEYRBase {};

  struct OPTKEYR : public Register<0x40023C14, Write, 32>
  {
    using OPTKEYRField = Flash_OPTKEYR_OPTKEYR_Values<ngFlash::OPTKEYR, 0, 32, Write, FlashOPTKEYRBase>;
    using FieldValues = Flash_OPTKEYR_OPTKEYR_Values<ngFlash::OPTKEYR, 0, 32, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using OPTKEYRPack  = FieldsPack<0x40023C14, 32, Write, FlashOPTKEYRBase, T...>;

  struct FlashSRBase {};

  struct SR : public Register<0x40023C18, ReadWrite, 32>
  {
    using BSY = Flash_SR_BSY_Values<ngFlash::SR, 0, 1, Read, FlashSRBase>;
    using EOP = Flash_SR_EOP_Values<ngFlash::SR, 1, 1, Read, FlashSRBase>;
    using ENDHV = Flash_SR_ENDHV_Values<ngFlash::SR, 2, 1, Read, FlashSRBase>;
    using READY = Flash_SR_READY_Values<ngFlash::SR, 3, 1, Read, FlashSRBase>;
    using WRPERR = Flash_SR_WRPERR_Values<ngFlash::SR, 8, 1, ReadWrite, FlashSRBase>;
    using PGAERR = Flash_SR_PGAERR_Values<ngFlash::SR, 9, 1, ReadWrite, FlashSRBase>;
    using SIZERR = Flash_SR_SIZERR_Values<ngFlash::SR, 10, 1, ReadWrite, FlashSRBase>;
    using OPTVERR = Flash_SR_OPTVERR_Values<ngFlash::SR, 11, 1, ReadWrite, FlashSRBase>;
    using OPTVERRUSR = Flash_SR_OPTVERRUSR_Values<ngFlash::SR, 12, 1, ReadWrite, FlashSRBase>;
    using FieldValues = Flash_SR_OPTVERRUSR_Values<ngFlash::SR, 0, 1, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using SRPack  = FieldsPack<0x40023C18, 32, ReadWrite, FlashSRBase, T...>;

  struct FlashOBRBase {};

  struct OBR : public Register<0x40023C1C, Read, 32>
  {
    using RDPRT = Flash_OBR_RDPRT_Values<ngFlash::OBR, 0, 8, Read, FlashOBRBase>;
    using BOR_LEV = Flash_OBR_BOR_LEV_Values<ngFlash::OBR, 16, 4, Read, FlashOBRBase>;
    using IWDG_SW = Flash_OBR_IWDG_SW_Values<ngFlash::OBR, 20, 1, Read, FlashOBRBase>;
    using nRTS_STOP = Flash_OBR_nRTS_STOP_Values<ngFlash::OBR, 21, 1, Read, FlashOBRBase>;
    using nRST_STDBY = Flash_OBR_nRST_STDBY_Values<ngFlash::OBR, 22, 1, Read, FlashOBRBase>;
    using BFB2 = Flash_OBR_BFB2_Values<ngFlash::OBR, 23, 1, Read, FlashOBRBase>;
    using FieldValues = Flash_OBR_BFB2_Values<ngFlash::OBR, 0, 8, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using OBRPack  = FieldsPack<0x40023C1C, 32, Read, FlashOBRBase, T...>;

  struct FlashWRPR1Base {};

  struct WRPR1 : public Register<0x40023C20, ReadWrite, 32>
  {
    using WRP1 = Flash_WRPR1_WRP1_Values<ngFlash::WRPR1, 0, 32, ReadWrite, FlashWRPR1Base>;
    using FieldValues = Flash_WRPR1_WRP1_Values<ngFlash::WRPR1, 0, 32, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using WRPR1Pack  = FieldsPack<0x40023C20, 32, ReadWrite, FlashWRPR1Base, T...>;

  struct FlashWRPR2Base {};

  struct WRPR2 : public Register<0x40023C80, ReadWrite, 32>
  {
    using WRP2 = Flash_WRPR2_WRP2_Values<ngFlash::WRPR2, 0, 32, ReadWrite, FlashWRPR2Base>;
    using FieldValues = Flash_WRPR2_WRP2_Values<ngFlash::WRPR2, 0, 32, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using WRPR2Pack  = FieldsPack<0x40023C80, 32, ReadWrite, FlashWRPR2Base, T...>;

  struct FlashWRPR3Base {};

  struct WRPR3 : public Register<0x40023C84, ReadWrite, 32>
  {
    using WRP3 = Flash_WRPR3_WRP3_Values<ngFlash::WRPR3, 0, 32, ReadWrite, FlashWRPR3Base>;
    using FieldValues = Flash_WRPR3_WRP3_Values<ngFlash::WRPR3, 0, 32, NoAccess, NoAccess>;
  };

  template<typename... T> 
  using WRPR3Pack  = FieldsPack<0x40023C84, 32, ReadWrite, FlashWRPR3Base, T...>;

};

