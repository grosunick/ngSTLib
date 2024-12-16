/*******************************************************************************
* Filename      : FlashFieldValues.hpp
*
* Details       : Enumerations related with Flash peripheral. This header file
*                 is auto-generated for STM32L1xx device.
*
*
*******************************************************************************/

#pragma once

#include <register/FieldValue.hpp>

using namespace ng;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_LATENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ZeroWS = FieldValue<Flash_ACR_LATENCY_Values, 0U, BaseType>;
  using OneWS = FieldValue<Flash_ACR_LATENCY_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_PRFTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<Flash_ACR_PRFTEN_Values, 0U, BaseType>;
  using Enabled = FieldValue<Flash_ACR_PRFTEN_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_ACC64_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Bit32 = FieldValue<Flash_ACR_ACC64_Values, 0U, BaseType>;
  using Bit64 = FieldValue<Flash_ACR_ACC64_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_SLEEP_PD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR_SLEEP_PD_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_ACR_SLEEP_PD_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_RUN_PD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR_RUN_PD_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_ACR_RUN_PD_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PECR_PELOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PECR_PELOCK_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_PECR_PELOCK_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PECR_PRGLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PECR_PRGLOCK_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_PECR_PRGLOCK_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PECR_OPTLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PECR_OPTLOCK_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_PECR_OPTLOCK_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PECR_PROG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PECR_PROG_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_PECR_PROG_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PECR_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PECR_DATA_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_PECR_DATA_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PECR_FTDW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PECR_FTDW_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_PECR_FTDW_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PECR_ERASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PECR_ERASE_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_PECR_ERASE_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PECR_FPRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PECR_FPRG_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_PECR_FPRG_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PECR_PARALLELBANK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PECR_PARALLELBANK_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_PECR_PARALLELBANK_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PECR_EOPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PECR_EOPIE_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_PECR_EOPIE_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PECR_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PECR_ERRIE_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_PECR_ERRIE_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PECR_OBL_LAUNCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PECR_OBL_LAUNCH_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_PECR_OBL_LAUNCH_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PDKEYR_PDKEYR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PEKEYR_PEKEYR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRGKEYR_PRGKEYR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTKEYR_OPTKEYR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_BSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_BSY_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_SR_BSY_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_EOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_EOP_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_SR_EOP_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_ENDHV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_ENDHV_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_SR_ENDHV_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_READY_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_SR_READY_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_WRPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_WRPERR_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_SR_WRPERR_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_PGAERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_PGAERR_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_SR_PGAERR_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_SIZERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_SIZERR_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_SR_SIZERR_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_OPTVERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_OPTVERR_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_SR_OPTVERR_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_OPTVERRUSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_OPTVERRUSR_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_SR_OPTVERRUSR_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OBR_RDPRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OBR_BOR_LEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OBR_BOR_LEV_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_OBR_BOR_LEV_Values, 1U, BaseType>;
  using Value2 = FieldValue<Flash_OBR_BOR_LEV_Values, 2U, BaseType>;
  using Value3 = FieldValue<Flash_OBR_BOR_LEV_Values, 3U, BaseType>;
  using Value4 = FieldValue<Flash_OBR_BOR_LEV_Values, 4U, BaseType>;
  using Value5 = FieldValue<Flash_OBR_BOR_LEV_Values, 5U, BaseType>;
  using Value6 = FieldValue<Flash_OBR_BOR_LEV_Values, 6U, BaseType>;
  using Value7 = FieldValue<Flash_OBR_BOR_LEV_Values, 7U, BaseType>;
  using Value8 = FieldValue<Flash_OBR_BOR_LEV_Values, 8U, BaseType>;
  using Value9 = FieldValue<Flash_OBR_BOR_LEV_Values, 9U, BaseType>;
  using Value10 = FieldValue<Flash_OBR_BOR_LEV_Values, 10U, BaseType>;
  using Value11 = FieldValue<Flash_OBR_BOR_LEV_Values, 11U, BaseType>;
  using Value12 = FieldValue<Flash_OBR_BOR_LEV_Values, 12U, BaseType>;
  using Value13 = FieldValue<Flash_OBR_BOR_LEV_Values, 13U, BaseType>;
  using Value14 = FieldValue<Flash_OBR_BOR_LEV_Values, 14U, BaseType>;
  using Value15 = FieldValue<Flash_OBR_BOR_LEV_Values, 15U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OBR_IWDG_SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OBR_IWDG_SW_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_OBR_IWDG_SW_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OBR_nRTS_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OBR_nRTS_STOP_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_OBR_nRTS_STOP_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OBR_nRST_STDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OBR_nRST_STDBY_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_OBR_nRST_STDBY_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OBR_BFB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OBR_BFB2_Values, 0U, BaseType>;
  using Value1 = FieldValue<Flash_OBR_BFB2_Values, 1U, BaseType>;
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_WRPR1_WRP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_WRPR2_WRP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
};

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_WRPR3_WRP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
};

