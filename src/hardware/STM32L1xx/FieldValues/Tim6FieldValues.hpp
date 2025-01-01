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

/** Auto-reload preload enable */
template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_CR1_ARPE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    // register is not buffered
    using NotBuffered = FieldValue<TIM6_CR1_ARPE_Values, 0U, BaseType>;
    // register is buffered
    using Buffered = FieldValue<TIM6_CR1_ARPE_Values, 1U, BaseType>;
};

/** One-pulse mode */
template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_CR1_OPM_Values : public RegisterField<Reg, offset, size, AccessMode> {
    // Counter is not stopped at update event
    using Disabled = FieldValue<TIM6_CR1_OPM_Values, 0U, BaseType>;
    // Counter stops counting at the next update event (clearing the CEN bit).
    using Enabled = FieldValue<TIM6_CR1_OPM_Values, 1U, BaseType>;
};

/**
 * Update request source
 *
 * This bit is set and cleared by software to select the UEV event sources
 */
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

/** Update disable */
template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_CR1_UDIS_Values : public RegisterField<Reg, offset, size, AccessMode> {
    /**
     * 0: UEV enabled. The Update (UEV) event is generated by one of the following events:
     *
     *   – Counter overflow/underflow
     *   – Setting the UG bit
     *   – Update generation through the slave mode controller
     *
     * Buffered registers are then loaded with their preload values.
     */
    using UEVEnabled = FieldValue<TIM6_CR1_UDIS_Values, 0U, BaseType>;
    /**
     * 1: UEV disabled. The Update event is not generated, shadow registers keep their value
     * (ARR, PSC). However the counter and the prescaler are reinitialized if the UG bit is set or if
     * a hardware reset is received from the slave mode controller.
     */
    using UEVDisabled = FieldValue<TIM6_CR1_UDIS_Values, 1U, BaseType>;
};

/** Counter enable */
template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_CR1_CEN_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using Disable = FieldValue<TIM6_CR1_CEN_Values, 0U, BaseType>;
    using Enable = FieldValue<TIM6_CR1_CEN_Values, 1U, BaseType>;
};

/**
 * Master mode selection
 *
 * These bits are used to select the information to be sent in master mode to slave timers for
 * synchronization (TRGO). The combination is as follows:
 */
template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_CR2_MMS_Values : public RegisterField<Reg, offset, size, AccessMode> {
    /**
     * 000: Reset - the UG bit from the TIMx_EGR register is used as trigger output (TRGO). If the
     * reset is generated by the trigger input (slave mode controller configured in reset mode) then
     * the signal on TRGO is delayed compared to the actual reset.
     */
    using Reset = FieldValue<TIM6_CR2_MMS_Values, 0U, BaseType>;
    /**
     * 001: Enable - the Counter enable signal, CNT_EN, is used as trigger output (TRGO). It is
     * useful to start several timers at the same time or to control a window in which a slave timer is
     * enabled. The Counter Enable signal is generated by a logic OR between CEN control bit
     * and the trigger input when configured in gated mode.
     * When the Counter Enable signal is controlled by the trigger input, there is a delay on TRGO,
     * except if the master/slave mode is selected (see the MSM bit description in TIMx_SMCR register).
     */
    using Enable = FieldValue<TIM6_CR2_MMS_Values, 1U, BaseType>;
    /**
     * 010: Update - The update event is selected as trigger output (TRGO). For instance a master
     * timer can then be used as a prescaler for a slave timer.
     */
    using Update = FieldValue<TIM6_CR2_MMS_Values, 2U, BaseType>;
};

/** Update DMA request enable */
template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_DIER_UDE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    // Update DMA request disabled
    using Disabled = FieldValue<TIM6_DIER_UDE_Values, 0U, BaseType>;
    // Update DMA request enabled
    using Enabled = FieldValue<TIM6_DIER_UDE_Values, 1U, BaseType>;
};

/** Update interrupt enable */
template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_DIER_UIE_Values : public RegisterField<Reg, offset, size, AccessMode> {
    // Update interrupt disabled
    using Disabled = FieldValue<TIM6_DIER_UIE_Values, 0U, BaseType>;
    // Update interrupt enabled
    using Enabled = FieldValue<TIM6_DIER_UIE_Values, 1U, BaseType>;
};

/**
 * Update interrupt flag.
 * This bit is set by hardware on an update event. It is cleared by software.
 */
template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_SR_UIF_Values : public RegisterField<Reg, offset, size, AccessMode> {
    // No update occurred.
    using Cleared = FieldValue<TIM6_SR_UIF_Values, 0U, BaseType>;
    /**
     * Update interrupt pending. This bit is set by hardware when the registers are updated:
     *   – At overflow or underflow and if UDIS = 0 in the TIMx_CR1 register.
     *   – When CNT is reinitialized by software using the UG bit in the TIMx_EGR register, if URS = 0
     *     and UDIS = 0 in the TIMx_CR1 register.
     */
    using Updated = FieldValue<TIM6_SR_UIF_Values, 1U, BaseType>;
};

/** Update generation */
template<typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct TIM6_EGR_UG_Values : public RegisterField<Reg, offset, size, AccessMode> {
    using NoAction = FieldValue<TIM6_EGR_UG_Values, 0U, BaseType>;
    /**
     *  Re-initializes the timer counter and generates an update of the registers. Note that the
     *  prescaler counter is cleared too (but the prescaler ratio is not affected).
     */
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

