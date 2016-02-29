/******************************************************************************
*  Filename:       aon_wuc.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the AON Wake-Up Controller
*
*  Copyright (C) 2014 Texas Instruments Incorporated - http://www.ti.com/
*
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*    Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/

//*****************************************************************************
//
//! \addtogroup aonwuc_api
//! @{
//
//*****************************************************************************

#ifndef __AON_WUC_H__
#define __AON_WUC_H__

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdint.h>
#include "hw_types.h"
#include "hw_memmap.h"
#include "hw_ints.h"
#include "hw_aon_wuc.h"
#include "hw_aon_rtc.h"
#include "interrupt.h"
#include "debug.h"

//*****************************************************************************
//
// Defines the possible clock source for the MCU and AUX domain.
//
//*****************************************************************************
#define AONWUC_CLOCK_SRC_HF     0x00000003  // System clock high frequency -
                                            // 48 MHz.
#define AONWUC_CLOCK_SRC_MF     0x00000002  // System clock medium frequency -
                                            // 512 kHz.
#define AONWUC_CLOCK_SRC_LF     0x00000001  // System clock low frequency - 
                                            // 32 kHz.
#define AONWUC_NO_CLOCK         0x00000000  // System clock low frequency - 
                                            // 32 kHz.

//*****************************************************************************
//
// Defines the possible clock division factors for the AUX domain.
//
//*****************************************************************************
#define AUX_CLOCK_DIV_2         0x00000000
#define AUX_CLOCK_DIV_4         0x00000100
#define AUX_CLOCK_DIV_8         0x00000200
#define AUX_CLOCK_DIV_16        0x00000300
#define AUX_CLOCK_DIV_32        0x00000400
#define AUX_CLOCK_DIV_64        0x00000500
#define AUX_CLOCK_DIV_128       0x00000600
#define AUX_CLOCK_DIV_256       0x00000700
#define AUX_CLOCK_DIV_UNUSED    0x00000800
#define AUX_CLOCK_DIV_M         0x00000700

//*****************************************************************************
//
// Defines used for configuring the power-off and wake up procedure.
//
//*****************************************************************************
#define MCU_VIRT_PWOFF_DISABLE  0x00000000
#define MCU_VIRT_PWOFF_ENABLE   0x00020000
#define MCU_IMM_WAKE_UP         0x00000000
#define MCU_FIXED_WAKE_UP       0x00010000
#define AUX_VIRT_PWOFF_DISABLE  0x00000000
#define AUX_VIRT_PWOFF_ENABLE   0x00020000
#define AUX_IMM_WAKE_UP         0x00000000
#define AUX_FIXED_WAKE_UP       0x00010000

//*****************************************************************************
//
// Defines that can be be used to enable/disable the entire SRAM and the 
// retention on the SRAM in both the MCU and the AUX domain.
//
//*****************************************************************************
#define MCU_RAM0_RETENTION      0x00000001
#define MCU_RAM1_RETENTION      0x00000002
#define MCU_RAM2_RETENTION      0x00000004
#define MCU_RAM3_RETENTION      0x00000008
#define MCU_RAM_BLOCK_RETENTION 0x0000000F
#define MCU_AUX_RET_ENABLE      0x00000001

//*****************************************************************************
//
// Defines for different wake up modes for AUX domain which can be set using
// AONWUCAuxWakeUpEvent() .
//
//*****************************************************************************
#define AONWUC_AUX_WAKEUP_SWEVT 0x00000002
#define AONWUC_AUX_WAKEUP_RUN   0x00000005
#define AONWUC_AUX_WAKEUP_RESET 0x80000001
#define AONWUC_AUX_WAKEUP       0x00000001
#define AONWUC_AUX_ALLOW_SLEEP  0x00000000

//*****************************************************************************
//
// Defines for all the different power modes available through 
// AONWUCPowerStatusGet() .
//
//*****************************************************************************
#define AONWUC_OSC_GBIAS_REQ    0x00400000  // OSC is requesting GBias
#define AONWUC_AUX_GBIAS_REQ    0x00200000  // AUX is requesting GBias
#define AONWUC_MCU_GBIAS_REQ    0x00100000  // MCU is requesting GBias
#define AONWUC_OSC_BGAP_REQ     0x00040000  // OSC is requesting BGap
#define AONWUC_AUX_BGAP_REQ     0x00020000  // AUX is requesting BGap
#define AONWUC_MCU_BGAP_REQ     0x00010000  // MCU is requesting BGap
#define AONWUC_GBIAS_ON         0x00002000  // Global Bias is on
#define AONWUC_BGAP_ON          0x00001000  // Band Gap is on
#define AONWUC_AUX_POWER_DOWN   0x00000200  // AUX is in powerdown mode
#define AONWUC_MCU_POWER_DOWN   0x00000100  // MCU is in powerdown mode
#define AONWUC_JTAG_POWER_ON    0x00000040  // JTAG is powered on
#define AONWUC_AUX_POWER_ON     0x00000020  // AUX is powered on
#define AONWUC_MCU_POWER_ON     0x00000010  // MCU is powered on
#define AONWUC_SPLY_POWER_DOWN  0x00000001  // Power supply is in power down

//*****************************************************************************
//
// Defines for the different configuration options for the JTAG domain that can
// be passed to AONWUCJTagConfig() .
//
//*****************************************************************************
#define AONWUC_JTAG_FORCE_ON   0x00000100
#define AONWUC_JTAG_ICE        0x00000000
#define AONWUC_JTAG_PBIST2TAP  0x00000040
#define AONWUC_JTAG_PBIST1TAP  0x00000020
#define AONWUC_JTAG_EFUSETAP   0x00000010
#define AONWUC_JTAG_TESTTAP    0x00000008
#define AONWUC_JTAG_WUCTAP     0x00000004
#define AONWUC_JTAG_PRCMTAP    0x00000002
#define AONWUC_JTAG_CPUDAP     0x00000001
#define AONWUC_JTAG_MASK       0x0000007F

//*****************************************************************************
//
// RAM repair status bits. Values are returned by AOXWUCRamRepairStatusGet() .
//
//*****************************************************************************
#define MCU_RAMREPAIR_DONE      0x00000001
#define AUX_RAMREPAIR_DONE      0x00000002

//*****************************************************************************

//*****************************************************************************
#define RC_RATE_MAX                   768   // Maximum recharge rate for the 
                                            // recharge controller.
#define RC_RATE_MIN                     2   // Minimum recharge rate for the 
                                            // recharge controller.

//*****************************************************************************
#define AONWUC_TOTAL_FLASH_ERASE                                              \
                                0x00000200  // A total flash erase includes the
                                            // Customer Configuration Area   
#define AONWUC_FULL_FLASH_ERASE 0x00000100  // A full flash erase excludes the
                                            // the customer configuration area
#define AONWUC_MCU_RESET_SRC    0x00000002  // MCU reset source can be SW or
                                            // JTAG
#define AONWUC_MCU_RESET_TYPE   0x00000001  // MCU reset type and can be warm
                                            // or not warm. 

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// void AONWUCMcuWakeUpConfig(uint32_t ui32WakeUp);
// void AONWUCMcuPowerDownConfig(uint32_t ui32ClkSrc);
// void AONWUCMcuPowerOffConfig(uint32_t ui32Mode);
// void AONWUCMcuSRamConfig(uint32_t ui32Retention);
// void AONWUCAuxClockConfigSet(uint32_t ui32ClkSrc, uint32_t ui32ClkDiv);
// uint32_t AONWUCAuxClockConfigGet(void);
// void AONWUCAuxPowerDownConfig(uint32_t ui32ClkSrc);
// void AONWUCAuxPowerOffConfig(uint32_t ui32Mode);
// void AONWUCAuxWakeUpConfig(uint32_t ui32WakeUp);
// void AONWUCAuxSRamConfig(uint32_t ui32Rentention);
// void AONWUCAuxWakeupEvent(uint32_t ui32Mode);
// void AONWUCAuxReset(void);
// uint32_t AONWUCPowerStatus(void);
// void AONWUCShutDownEnable(void);
// void AONWUCDomainPowerDownEnable(void);
// void AONWUCDomainPowerDownDisable(void);
// uint32_t AONWUCMcuResetStatus(void);
// void AONWUCMcuResetClear(uint32_t ui32Status);
// void AONWUCRechargeCtrlConfigSet(bool bAdaptEnable, 
//                                 uint32_t ui32AdaptRate,
//                                 uint32_t ui32Period,
//                                 uint32_t ui32MaxPeriod);
//uint32_t AONWUCRechargeCtrlConfigGet(void);
//void AONWUCOscConfig(uint32_t ui32Period);
//void AONWUCJtagPowerOff(void);
//

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//! Configure the power down clock for the MCU domain
//!
//! \param ui32ClkSrc is the clock source for the MCU domain when in power
//! down.
//!
//! Use this function to control which one of the clock sources that
//! is fed into the MCU domain when the system is in standby mode. When the
//! power is back in Active mode the clock source will autmatically switch to
//! \b AONWUC_CLOCK_SRC_HF. Three values are available as clock source
//! \b AONWUC_NO_CLOCK, \b AONWUC_CLOCK_SRC_MF and \b AONWUC_CLOCK_SRC_LF.
//! Each clock is fed 'as is' into the MCU domain, since the MCU domain
//! contains internal clock dividers controllable through the PRCM.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCMcuPowerDownConfig(uint32_t ui32ClkSrc)
{
    uint32_t ui32Reg;

    //
    // Check the arguments.
    //
    ASSERT((ui32ClkSrc == AONWUC_NO_CLOCK) ||
           (ui32ClkSrc == AONWUC_CLOCK_SRC_MF) ||
           (ui32ClkSrc == AONWUC_CLOCK_SRC_LF));

    //
    // Set the clock source for the MCU domain when in power down.
    //
    ui32Reg = HWREG(AON_WUC_BASE + AON_WUC_O_MCUCLK);
    ui32Reg &= ~AON_WUC_MCUCLK_PWR_DWN_SRC_M;
    HWREG(AON_WUC_BASE + AON_WUC_O_MCUCLK) = ui32Reg | ui32ClkSrc;
}

//*****************************************************************************
//
//! Configure the power down mode for the MCU domain
//!
//! \param ui32Mode defines the power down mode of the MCU domain.
//!
//! The parameter \b ui32Mode determines the power down mode of the MCU Voltage
//! Domain. When the AON WUC receives a request to power off the MCU domain it
//! can choose to power off completely or use a virtual power-off. In a virtual
//! power-off reset is asserted and the clock is stopped, but the power to the
//! domain is kept on.  Allowed values for setting the virtual power-off are:
//! \b MCU_VIRT_PWOFF_DISABLE or \b MCU_VIRT_PWOFF_ENABLE
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCMcuPowerOffConfig(uint32_t ui32Mode)
{
    uint32_t ui32Reg;

    //
    // Check the arguments.
    //
    ASSERT((ui32Mode == MCU_VIRT_PWOFF_ENABLE) ||
           (ui32Mode == MCU_VIRT_PWOFF_DISABLE));

    //
    // Set the powerdown mode.
    //
    ui32Reg = HWREG(AON_WUC_BASE + AON_WUC_O_MCUCFG);
    ui32Reg &= ~AON_WUC_MCUCFG_VIRT_OFF_M;
    HWREG(AON_WUC_BASE + AON_WUC_O_MCUCFG) = ui32Reg | ui32Mode;
}

//*****************************************************************************
//
//! Configure the wake-up procedure for the MCU domain
//!
//! \param ui32WakeUp determines the timing of the MCU wake up  procedure.
//!
//! The MCU domain can wake up using two different procedures. Either it wakes
//! up immediately following the triggering event or wake-up is forced to
//! happen a fixed number (TBD) of 32 KHz clocks following the triggering
//! event. The last can be used to compensate for any variable delays caused
//! by other activities going on at the time of wakeup (such as a recharge
//! event, etc.). The values that can be passed as ui32WakeUp are:
//! \b MCU_IMM_WAKE_UP or \b MCU_FIXED_WAKE_UP.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCMcuWakeUpConfig(uint32_t ui32WakeUp)
{
    uint32_t ui32Reg;

    //
    // Check the arguments.
    //
    ASSERT((ui32WakeUp == MCU_IMM_WAKE_UP) ||
           (ui32WakeUp == MCU_FIXED_WAKE_UP));

    //
    // Configure the wake up procedure.
    //
    ui32Reg = HWREG(AON_WUC_BASE + AON_WUC_O_MCUCFG);
    ui32Reg &= ~AON_WUC_MCUCFG_FIXED_WU_EN;
    HWREG(AON_WUC_BASE + AON_WUC_O_MCUCFG) = ui32Reg | ui32WakeUp;
}

//*****************************************************************************
//
//! Configure the rentention on the block RAM in the MCU domain.
//!
//! \param ui32Retention defines which RAM blocks to enable/disable retention on.
//!
//! MCU SRAM is partitioned into 4 banks of 1Kx32 each. The SRAM support
//! retention on all 4 blocks. The retention on the SRAM can be turned on and
//! off. Use this function to enable the retention on the individual blocks.
//! To enable rentention on individual parts of the RAM use a bitwise OR'ed
//! combination of:
//! \b MCU_RAM0_RETENTION, \b MCU_RAM1_RETENTION, \b MCU_RAM2_RETENTION and
//! \b MCU_RAM3_RETENTION
//!
//! If a block is not represented in the parameter \b ui32Retention then the
//! the retention will be disabled for that block.
//!
//! \note Rentention on the SRAM is not enabled by default. If retention is
//! turned off on all RAM blocks then the SRAM is powered off when it would
//! otherwise be put in retention mode.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCMcuSRamConfig(uint32_t ui32Retention)
{
    uint32_t ui32Reg;

    //
    // Check the arguments.
    //
    ASSERT(ui32Retention & MCU_RAM_BLOCK_RETENTION);
    ASSERT(!(ui32Retention & ~MCU_RAM_BLOCK_RETENTION));

    //
    // Configure the retention.
    //
    ui32Reg = HWREG(AON_WUC_BASE + AON_WUC_O_MCUCFG) & ~MCU_RAM_BLOCK_RETENTION;
    ui32Reg |= ui32Retention;
    HWREG(AON_WUC_BASE + AON_WUC_O_MCUCFG) = ui32Reg;
}

//*****************************************************************************
//
//! Set the clock source for the AUX domain
//!
//! \param ui32ClkSrc is the clock source for the AUX domain.
//! \param ui32ClkDiv is the setting of the AUX clock divider.
//!
//! This function is used to controlled which one of the system clocks that
//! is fed into the AUX domain and what the value of the AUX clock divider is.
//! Since the AUX domain has no internal clock divider, the AON WUC contains
//! a dedicated clock divider for the AUX domain.
//! The 3 values that are available as clock source are:
//! \b AONWUC_CLOCK_SRC_HF, \b AONWUC_CLOCK_SRC_MF or \b AONWUC_CLOCK_SRC_LF.
//!
//! The values available for the clock divider are:
//! \b AUX_CLOCK_DIV_2, \b AUX_CLOCK_DIV_4, \b AUX_CLOCK_DIV_8,
//! \b AUX_CLOCK_DIV_16, \b AUX_CLOCK_DIV_32, \b AUX_CLOCK_DIV_64,
//! \b AUX_CLOCK_DIV_128 or \b AUX_CLOCK_DIV_256.
//!
//! \note It is not allowed to change the AUX clock divider while it is sourced
//! from the HF clock. So always make sure that the AUX is either powered off
//! or not running from the HF clock when changing the division factor.
//!
//! \return None
//
//*****************************************************************************
extern void AONWUCAuxClockConfigSet(uint32_t ui32ClkSrc, uint32_t ui32ClkDiv);

//*****************************************************************************
//
//! Return the clock configuration for the AUX domain
//!
//! The AUX domain does not have a local clock divider, so the AON WUC contains
//! a dedicated clock divider circuitry for AUX domain. Use this function to
//! get the setting of the clock divider.
//!
//! \sa AONWUCAuxClockConfig()
//!
//! \return Return the clock configuration
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AONWUCAuxClockConfigGet(void)
{
    //
    // Return the clock divider value.
    //
    return ((HWREG(AON_WUC_BASE + AON_WUC_O_AUXCLK) & AON_WUC_AUXCLK_SCLK_HF_DIV_M) >>
             AON_WUC_AUXCLK_SCLK_HF_DIV_S);
}

//*****************************************************************************
//
//! Configure the power down mode for the AUX domain
//!
//! \param ui32ClkSrc is the clock source for the AUX domain when in power down.
//!
//! Use this function to control which one of the clock sources that
//! is fed into the MCU domain when it is in Power Down mode. When the Power
//! is back in active mode the clock source will autmatically switch to
//! \b AONWUC_CLOCK_SRC_HF. Three values are available as clock source
//! \b AONWUC_NO_CLOCK, \b AONWUC_CLOCK_SRC_MF and \b AONWUC_CLOCK_SRC_LF.
//! Each clock is fed 'as is' into the AUX domain, since the AUX domain
//! contains internal clock dividers controllable through the PRCM.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCAuxPowerDownConfig(uint32_t ui32ClkSrc)
{
    uint32_t ui32Reg;

    //
    // Check the arguments.
    //
    ASSERT((ui32ClkSrc == AONWUC_NO_CLOCK) ||
           (ui32ClkSrc == AONWUC_CLOCK_SRC_MF) ||
           (ui32ClkSrc == AONWUC_CLOCK_SRC_LF));

    //
    // Set the clock source for the AUX domain when in power down.
    //
    ui32Reg = HWREG(AON_WUC_BASE + AON_WUC_O_AUXCLK);
    ui32Reg &= ~AON_WUC_AUXCLK_PWR_DWN_SRC_M;
    HWREG(AON_WUC_BASE + AON_WUC_O_AUXCLK) = ui32Reg |
                                             (ui32ClkSrc <<
                                              AON_WUC_AUXCLK_PWR_DWN_SRC_S);
}

//*****************************************************************************
//
//! Configure the power off mode for the AUX domain
//!
//! \param ui32Mode defines the power down mode of the AUX domain.
//!
//! The parameter \b ui32Mode determines the power down mode of the AUX Voltage
//! Domain. When the AON WUC receives a request to power off the AUX domain it
//! can choose to power off completely or use a virtual power-off. In a virtual
//! power-off reset is asserted and the clock is stopped, but the power to the
//! domain is kept on.  Allowed values for setting the virtual power-off are:
//! \b AUX_VIRT_PWOFF_DISABLE or \b AUX_VIRT_PWOFF_ENABLE
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCAuxPowerOffConfig(uint32_t ui32Mode)
{
    uint32_t ui32Reg;

    //
    // Check the arguments.
    //
    ASSERT((ui32Mode == AUX_VIRT_PWOFF_ENABLE) ||
           (ui32Mode == AUX_VIRT_PWOFF_DISABLE));

    //
    // Set the poweroff mode.
    //
    ui32Reg = HWREG(AON_WUC_BASE + AON_WUC_O_AUXCFG);
    ui32Reg &= ~AON_WUC_AUXCFG_VIRT_OFF;
    HWREG(AON_WUC_BASE + AON_WUC_O_AUXCFG) = ui32Mode | ui32Reg;
}

//*****************************************************************************
//
//! Configure the wake-up procedure for the AUX domain
//!
//! \param ui32WakeUp determines the timing of the AUX wake up procedure.
//!
//! The AUX domain can wake up using two different procedures. Either it wakes
//! up immediately following the triggering event or wake-up is forced to
//! happen a fixed number (TBD) of 32 KHz clocks following the triggering
//! event. The last can be used to compensate for any variable delays caused
//! by other activities going on at the time of wakeup (such as a recharge
//! event, etc.). The values that can be passed as ui32WakeUp are:
//! \b AUX_IMM_WAKE_UP or \b AUX_FIXED_WAKE_UP.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCAuxWakeUpConfig(uint32_t ui32WakeUp)
{
    uint32_t ui32Reg;

    //
    // Check the arguments.
    //
    ASSERT((ui32WakeUp == AUX_IMM_WAKE_UP) || (ui32WakeUp == AUX_FIXED_WAKE_UP));

    //
    // Configure the wake up procedure.
    //
    ui32Reg = HWREG(AON_WUC_BASE + AON_WUC_O_AUXCFG);
    ui32Reg &= ~AON_WUC_AUXCFG_FIXED_WU_EN_M;
    HWREG(AON_WUC_BASE + AON_WUC_O_AUXCFG) = ui32Reg | ui32WakeUp;
}

//*****************************************************************************
//
//! Configure the rentention on the AUX SRAM
//!
//! The AUX SRAM contains only on block which supports retention. The retention
//! on the SRAM can be turned on and off. Use this function to enable/disable
//! the retention on the entire RAM.
//!
//! \note Rentention on the SRAM is not enabled by default. If retention is
//! turned off then the SRAM is powered off when it would otherwise be put in
//! retention mode.
//! TBD Is this done in the bootcode?
//!
//! \return None
//
//*****************************************************************************
extern void AONWUCAuxSRamConfig(uint32_t ui32Retention);

//*****************************************************************************
//
//! Control the wake up procedure of the AUX domain
//!
//! \param ui32Mode is the wake up mode for the AUX domain.
//!
//! The AUX domain can he woken in three different modes. In all modes, power
//! is turned on. In one mode a software event is generated for the AUX
//! controller and it is allowed to start processing. The second mode will
//! just let the AUX domain start running assuming there is a valid programm
//! in the memory. In the last mode it is kept in reset. Keeping the AUX
//! controller in reset allows the MCU exclusive access to all the AUX
//! resources.
//!
//! The possible wake modes that can be passed as argument to this function
//! are \b AONWUC_AUX_WAKEUP_RESET, \b AONWUC_AUX_WAKEUP_SWEVENT or
//! \b AONWUC_AUX_WAKEUP_RUN.
//!
//! \note Any writes to the AON interface must pass a 32 kHz clock boundary,
//! and is therefore comparatively slow. To ensure that a given write is
//! complete the value of the register can be read back after write.
//
//! \note When accessing the AUX domain from the CM3, it is adviced always to
//! have set the AUX in at least \b AONWUC_AUX_WAKEUP. This overwrites any
//! instruction from the the AUX controller and ensure that the AUX domain and
//! is on so it wont leave the CM3 hanging.
//!!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCAuxWakeupEvent(uint32_t ui32Mode)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Mode == AONWUC_AUX_WAKEUP_SWEVT) ||
           (ui32Mode == AONWUC_AUX_WAKEUP_RUN) ||
           (ui32Mode == AONWUC_AUX_WAKEUP_RESET) ||
           (ui32Mode == AONWUC_AUX_WAKEUP) ||
           (ui32Mode == AONWUC_AUX_ALLOW_SLEEP));

    //
    // Wake up the AUX domain.
    //
    HWREG(AON_WUC_BASE + AON_WUC_O_AUXCTL) = ui32Mode;
}

//*****************************************************************************
//
//! Reset the AUX domain
//!
//! Use this function to reset the entire AUX domain. The write to the AON_WUC
//! module must pass an 32 kHz clock boundary. By reading the
//! \b AON_RTC_O_SYNC register after each write, it is guarateed that the AON
//! interface will be in sync and that both the assert and the deassert of the
//! reset signal to AUX will propagate.
//!
//! \note This requires to writes and two reads on a 32 kHz clock boundary.
//!
//! \return None
//
//*****************************************************************************
extern void AONWUCAuxReset(void);

//*****************************************************************************
//
//! Get the power status of the device
//!
//! The Always On Domain is the only part of the device which is truly
//! "ALWAYS ON". The power status for the other device can always be read from¨
//! this status register.
//!
//! Possible power modes for the different parts of the device are:
//!
//! \b AONWUC_OSC_GBIAS_REQ, \b AONWUC_AUX_GBIAS_REQ
//! \b AONWUC_MCU_GBIAS_REQ, \b AONWUC_OSC_BGAP_REQ
//! \b AONWUC_AUX_BGAP_REQ, \b AONWUC_MCU_BGAP_REQ
//! \b AONWUC_GBIAS_ON, \b AONWUC_BGAP_ON
//! \b AONWUC_AUX_POWER_DOWN, \b AONWUC_MCU_POWER_DOWN
//! \b AONWUC_JTAG_POWER_ON, \b AONWUC_AUX_POWER_ON
//! \b AONWUC_MCU_POWER_ON or \b AONWUC_POWER_DOWN_MODE.
//!
//! \return Returns the current power status of the device as a bitwise OR'ed
//! combination of the values stated above.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AONWUCPowerStatus(void)
{
    //
    // Return the power status.
    //
    return (HWREG(AON_WUC_BASE + AON_WUC_O_PWRSTAT));
}

//*****************************************************************************
//
//! Enable shut down of the device
//!
//! Use this function to enable shutdown of the device. This wil force all I/O values to
//! be latched – possibly enabling I/O  wakeup – then all internal power
//! supplies are turned off, effectively putting the device into Shutdown mode.
//!
//! \note No action will take place before the Cortex-M3 is put to deep sleep.
//!
//! \note The shutdown command is ignored if the JTAG interface has been
//! activated.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCShutDownEnable(void)
{
    //
    // Ensure the JTAG domain is turned off;
    // otherwise MCU domain can't be turned off.
    //
    HWREG(AON_WUC_BASE + AON_WUC_O_JTAGCFG) = 0;

    //
    // Enable shutdown of the device.
    //
    HWREG(AON_WUC_BASE + AON_WUC_O_CTL0) &= ~AON_WUC_CTL0_PWR_DWN_DIS;
    HWREG(AON_WUC_BASE + AON_WUC_O_SHUTDOWN) = AON_WUC_SHUTDOWN_EN;
}

//*****************************************************************************
//
//! Enable power down mode on AUX and MCU domain
//!
//! Use this function to enable powerdown on the AUX and MCU domain.
//!
//! \note The powerdown command is ignored if the JTAG interface has been
//! activated.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCDomainPowerDownEnable(void)
{
    //
    // Ensure the JTAG domain is turned off;
    // otherwise MCU domain can't be turned off.
    //
    HWREG(AON_WUC_BASE + AON_WUC_O_JTAGCFG) = 0;

    //
    // Enable power down mode.
    //
    HWREG(AON_WUC_BASE + AON_WUC_O_CTL0) &= ~AON_WUC_CTL0_PWR_DWN_DIS;
}

//*****************************************************************************
//
//! Use this function to disable power down mode of the MCU and AUX domain.
//!
//! Disabling powerdown on the MCU and/or AUX will put the domains in to a 
//! virtual power down when requesting to be powered down. Logic is the same
//! but power is kept on.
//!
//! \return None.
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCDomainPowerDownDisable(void)
{
    //
    // Disable power down mode.
    //
    HWREG(AON_WUC_BASE + AON_WUC_O_CTL0) |= AON_WUC_CTL0_PWR_DWN_DIS;
}

//*****************************************************************************
//
//! Use this function to clear specific status bits
//!
//! \param ui32Status defines in a one-hot encoding which bits to clear in the
//! status register.
//!
//! Use this function to clear the bits that are set in the AON WUC status
//! register. This registers requires a write 1 to clear. Possible values to
//! that can be passed to this function (OR'ed together) are:
//! \b AONWUC_TOTAL_FLASH_ERASE, \b AONWUC_FULL_FLASH_ERASE
//! \b AONWUC_MCU_RESET_SRC, \b AONWUC_MCU_RESET_TYPE
//!
//! AON Wake Up Controller TAP can request a total/full Flash erase. If so,
//! the corresponding status bits will be set in the status register, and can
//! be read using AONWUCStatusGet() or cleared using this function. The reset
//! source and type gives information about what and how the latest reset
//! was performed. Access to these bits are indentical to the flash erase
//! bits.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCMcuResetClear(uint32_t ui32Status)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Status & AONWUC_TOTAL_FLASH_ERASE) ||
           (ui32Status & AONWUC_FULL_FLASH_ERASE) ||
           (ui32Status & AONWUC_MCU_RESET_SRC) ||
           (ui32Status & AONWUC_MCU_RESET_TYPE));

    //
    // Clear the status bits.
    //
    HWREG(AON_WUC_BASE + AON_WUC_O_CTL1) = ui32Status;
}

//*****************************************************************************
//
//! Return the reset status
//!
//! TBD
//!
//! \return Returns the status from the AON WUC
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AONWUCMcuResetStatus(void)
{
    //
    // Return the current status.
    //
    return (HWREG(AON_WUC_BASE + AON_WUC_O_CTL1));
}

//*****************************************************************************
//
//! Configure the recharge controller
//!
//! \param bAdaptEnable enables the adaption algorithm for the controller.
//! \param ui32AdaptRate determines the adjustment value for the adoption
//! algorithm.
//! \param ui32Period determines the number of clock cycles between each
//! activation of the recharge controller.
//! \param ui32MaxPeriod determines the maximum number of clock cycles between
//! each activation of the recharge controller.
//!
//! The parameter \b bAdaptEnable is used to enable og disable the adaptive
//! algorithm for the recharge controller.
//! The adaptive algorithm for the recharge controller is defined as
//!
//! \verbatim
//!
//! New_Period = Period * (1 + AdaptRate / 1024 )
//!
//!     AdaptRate
//!    ----------- = ( 2^(-C1) + 2^(-C2)  )
//!       1024
//!
//! \endverbatim
//!
//! Where C1 is between 1 and 10 and C2 is between 2 and 10. The \b ui32AdaptRate
//! must be a number between 2 and 768 (\e RC_RATE_MIN and \e RC_RATE_MAX)
//! resulting in an adaptive rate between 0.2% and 75%.
//!
//! The \b ui32Period is the number of 32 KHz clocks between two recharges. The
//! length of the interval is defined by the formular:
//!
//! Period = ({ulMantissa,5'b1111} << ui32Exponent)
//!
//! \note The maximum number of recharge cycles is required when enabling the
//!       adaptive recharge algorithm.
//!
//! \note The maximum period between two recharges should never exceed the
//! period between two oscillator amplitude calibrations which is configured
//! using \b AONWUCOscConfig().
//!
//! \return None
//
//*****************************************************************************
extern void AONWUCRechargeCtrlConfigSet(bool bAdaptEnable,
                                        uint32_t ui32AdaptRate,
                                        uint32_t ui32Period,
                                        uint32_t ui32MaxPeriod);

//*****************************************************************************
//
//! Get the current configuration of the recharge controller
//!
//! \return Returns the current configuration of the recharge controller.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AONWUCRechargeCtrlConfigGet(void)
{
    //
    // Return the current configuration.
    //
    return(HWREG(AON_WUC_BASE + AON_WUC_O_RECHARGECFG));
}

//*****************************************************************************
//
//! Configure the interval for oscillator amplitude calibration
//!
//! \param ui32Period is the number of 32 kHz clock cycles in each interval.
//!
//! Use this function to set the number of 32 KHz clocks between oscillator
//! amplitude calibrations.
//!
//! The value of the interval is defined by the formular:
//!
//! Period = ({ulMantissa,5'b1111} << ui32Exponent)
//!
//! \note When this counter expires, an oscillator amplitude calibration is
//! triggered immediately in Active mode. When this counter expires in
//! Powerdown mode an internal flag is set that causes GBIAS to turn on
//! together with BGAP when the next recharge occurs, at the same time
//! triggering the oscillator amplitude calibration as well as a recharge of
//! the uLDO reference voltage.
//!
//! \note The oscillator amplitude calibration is performed at the same time
//! as the recharge for the uLDO reference voltage. So the maximum period
//! between each recharge operation should not exceed the number of clock
//! cycles for the amplitude calibration.
//!
//! \return None
//
//*****************************************************************************
extern void AONWUCOscConfig(uint32_t ui32Period);

//*****************************************************************************
//
//! Request power off of the JTAG domain
//!
//! The JTAG domain is automatically powered up on if a debugger is connected.
//! If a debugger is not connected this function can be used to power off the
//! JTAG domain.
//!
//! \note Achieving the lowest power modes (shutdown/powerdown) requires the
//! JTAG domain to be turned off. In general the JTAG domain should never be 
//! powered in production code.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONWUCJtagPowerOff(void)
{
    //
    // Request the power off of the Jtag domain
    //
    HWREG(AON_WUC_BASE + AON_WUC_O_JTAGCFG) = 0;
}

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __AON_WUC_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
