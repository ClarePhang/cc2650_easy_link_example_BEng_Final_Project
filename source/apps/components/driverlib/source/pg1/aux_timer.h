/******************************************************************************
*  Filename:       aux_timer.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the AUX Timer
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
//! \addtogroup auxtimer_api
//! @{
//
//*****************************************************************************

#ifndef __AUX_TIMER_H__
#define __AUX_TIMER_H__

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
#include "hw_ints.h"
#include "hw_memmap.h"
#include "hw_aux_timer.h"
#include "debug.h"
#include "interrupt.h"

//*****************************************************************************
//
// Values that can be passed to AUXTimerConfigure().
//
//*****************************************************************************
#define AUX_TIMER_CFG_ONE_SHOT \
                                0x00000000  // One-shot timer mode
#define AUX_TIMER_CFG_PERIODIC \
                                0x00000001  // Period timer mode
#define AUX_TIMER_CFG_ONE_SHOT_EDGE_COUNT \
                                0x00000002  // One-shot timer with edge count
#define AUX_TIMER_CFG_PERIODIC_EDGE_COUNT \
                                0x00000003  // Periodic timer with edge count 
#define AUX_TIMER_CFG_RISING_EDGE \
                                0x00000000  // Count rising edges (used with 
                                            // edge count mode)
#define AUX_TIMER_CFG_FALLING_EDGE \
                                0x00000010  // Count falling edges (used with 
                                            // edge count mode)
#define AUX_TIMER_CFG_TICK_SRC_AON_WU_EVENT \
                                0x00000000 // AON wake-up event
#define AUX_TIMER_CFG_TICK_SRC_CMP_A_I \
                                0x00000100 // Comperator A
#define AUX_TIMER_CFG_TICK_SRC_CMP_B_I \
                                0x00000200 // Comperator B
#define AUX_TIMER_CFG_TICK_SRC_TDCDONE \
                                0x00000300 // TDC Done
#define AUX_TIMER_CFG_TICK_SRC_TIMER0_EVENT \
                                0x00000400 // Timer 0 event
#define AUX_TIMER_CFG_TICK_SRC_TIMER1_EVENT \
                                0x00000500 // Timer 1 event
#define AUX_TIMER_CFG_TICK_SRC_SMPH_RELEASE \
                                0x00000600 // Semaphore release
#define AUX_TIMER_CFG_TICK_SRC_ADC_DONE \
                                0x00000700 // ADC done
#define AUX_TIMER_CFG_TICK_SRC_ADC_DONE \
                                0x00000700 // ADC done
                                
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_0 \
                                0x00000d00 // AIO_DAT[ 0]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_1 \
                                0x00000e00 // AIO_DAT[ 1]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_2 \
                                0x00000f00 // AIO_DAT[ 2]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_3 \
                                0x00001000 // AIO_DAT[ 3]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_4 \
                                0x00001100 // AIO_DAT[ 4]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_5 \
                                0x00001200 // AIO_DAT[ 5]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_6 \
                                0x00001300 // AIO_DAT[ 6]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_7 \
                                0x00001400 // AIO_DAT[ 7]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_8 \
                                0x00001500 // AIO_DAT[ 8]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_9 \
                                0x00001600 // AIO_DAT[ 9]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_10 \
                                0x00001700 // AIO_DAT[10]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_11 \
                                0x00001800 // AIO_DAT[11]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_12 \
                                0x00001900 // AIO_DAT[12]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_13 \
                                0x00001A00 // AIO_DAT[13]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_14 \
                                0x00001B00 // AIO_DAT[14]
#define AUX_TIMER_CFG_TICK_SRC_AIO_DAT_15 \
                                0x00001C00 // AIO_DAT[15]
#define AUX_TIMER_CFG_TICK_SRC_ACLK_REF \
                                0x00001D00 // ACLK_REF_i
#define AUX_TIMER_CFG_TICK_SRC_MCU_EVENT \
                                0x00001D00 // MCU event
#define AUX_TIMER_CFG_TICK_SRC_ADC_IRQ \
                                0x00001F00 // DMA done

//*****************************************************************************
//
// Values that can be passed to most of the timer APIs as the ui32Timer
// parameter.
//
//*****************************************************************************
#define AUX_TIMER_0             0x000000FF  // AUX Timer 0
#define AUX_TIMER_1             0x0000FF00  // AUX Timer 1
#define AUX_TIMER_BOTH          0x0000FFFF  // AUX Timer Both 0 and 1

//*****************************************************************************
//
// Values that can be passed to AUXTimerPrescaleSet and returned from 
// AUXTimerPrescaleGet.
//
//*****************************************************************************
#define AUX_TIMER_PRESCALE_DIV_1 \
                                0x00000000  // Prescale division ratio 1
#define AUX_TIMER_PRESCALE_DIV_2 \
                                0x00000001  // Prescale division ratio 2
#define AUX_TIMER_PRESCALE_DIV_4 \
                                0x00000002  // Prescale division ratio 4
#define AUX_TIMER_PRESCALE_DIV_8 \
                                0x00000003  // Prescale division ratio 8
#define AUX_TIMER_PRESCALE_DIV_16 \
                                0x00000004  // Prescale division ratio 16
#define AUX_TIMER_PRESCALE_DIV_32 \
                                0x00000005  // Prescale division ratio 32
#define AUX_TIMER_PRESCALE_DIV_64 \
                                0x00000006  // Prescale division ratio 64
#define AUX_TIMER_PRESCALE_DIV_128 \
                                0x00000007  // Prescale division ratio 128
#define AUX_TIMER_PRESCALE_DIV_256 \
                                0x00000008  // Prescale division ratio 256
#define AUX_TIMER_PRESCALE_DIV_512 \
                                0x00000009  // Prescale division ratio 512
#define AUX_TIMER_PRESCALE_DIV_1028 \
                                0x0000000A  // Prescale div. ratio 1028
#define AUX_TIMER_PRESCALE_DIV_2048 \
                                0x0000000B  // Prescale div. ratio 2048
#define AUX_TIMER_PRESCALE_DIV_4096 \
                                0x0000000C  // Prescale div. ratio 4096
#define AUX_TIMER_PRESCALE_DIV_8192 \
                                0x0000000D  // Prescale div. ratio 8192
#define AUX_TIMER_PRESCALE_DIV_16384 \
                                0x0000000E  // Prescale div. ratio 16384
#define AUX_TIMER_PRESCALE_DIV_32768 \
                                0x0000000F  // Prescale div. ratio 32768

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// void AUXTimerConfigure(uint32_t ui32Timer, uint32_t ui32Config);
// void AUXTimerStart(uint32_t ui32Timer);
// void AUXTimerStop(uint32_t ui32Timer);
// void AUXTimerTargetValSet(uint32_t ui32Timer, uint32_t ui8Target);
// uint32_t AUXTimerTargetValGet(uint32_t ui32Timer);
// void AUXTimerPrescaleSet(uint32_t ui32Timer, uint32_t ui32PrescaleDiv);
// uint32_t AUXTimerPrescaleGet(uint32_t ui32Timer);

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//! Configure AUX timer
//!
//! \param ui32Timer is the timer to configure
//! \param ui32Config is the timer configuration
//!
//! This call configures the AUX timer selected by the \e ui32Timer.
//! The timer module is disabled before being configured and is left in the
//! disabled state.
//!
//! The \e ui32Timer must specified as one of the following values:
//! - \b AUX_TIMER_0
//! - \b AUX_TIMER_1
//!
//! The configuration is specified in \e ui32Config as one of the following
//! values:
//!
//! - \b AUX_TIMER_CFG_ONE_SHOT            - One-shot timer
//! - \b AUX_TIMER_CFG_PERIODIC            - Periodic timer
//! - \b AUX_TIMER_CFG_ONE_SHOT_EDGE_COUNT - One-shot edge counter
//! - \b AUX_TIMER_CFG_PERIODIC_EDGE_COUNT - Periodic edge counter
//!
//! When configured as timer, the counter is incremented based on the aux clock
//! after the prescaler. The prescale division ratio is set
//! using AUXTimerPrescaleSet().
//!
//! When configured as an edge counter the counter is incremented only on edges
//! of the selected event.
//! The polarity of the event is selected by:
//! - \b AUX_TIMER_CFG_RISING_EDGE  - risging edge trigger
//! - \b AUX_TIMER_CFG_FALLING_EDGE - falling edge trigger
//!
//! The event source is selected as one of the following defines
//! - \b AUX_TIMER_CFG_TICK_SRC_AON_WU_EVENT
//! - \b AUX_TIMER_CFG_TICK_SRC_CMP_A_I
//! - \b AUX_TIMER_CFG_TICK_SRC_CMP_B_I
//! - \b AUX_TIMER_CFG_TICK_SRC_TDCDONE
//! - \b AUX_TIMER_CFG_TICK_SRC_TIMER0_EVENT
//! - \b AUX_TIMER_CFG_TICK_SRC_TIMER1_EVENT
//! - \b AUX_TIMER_CFG_TICK_SRC_SMPH_RELEASE
//! - \b AUX_TIMER_CFG_TICK_SRC_ADC_DONE
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_0
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_1
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_2
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_3
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_4
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_5
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_6
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_7
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_8
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_9
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_10
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_11
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_12
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_13
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_14
//! - \b AUX_TIMER_CFG_TICK_SRC_AIO_DAT_15
//! - \b AUX_TIMER_CFG_TICK_SRC_ACLK_REF
//! - \b AUX_TIMER_CFG_TICK_SRC_MCU_EVENT
//! - \b AUX_TIMER_CFG_TICK_SRC_ADC_IRQ
//!
//! The mode, event polarity and event source are configured by setting the
//! \e ui32Config parameter as the logical OR of the various settings.
//! I.e. (\b AUX_TIMER_CFG_ONE_SHOT_EDGE_COUNT | \b AUX_TIMER_CFG_RISING_EDGE |
//!       \b AUX_TIMER_CFG_TICK_SRC_EVENT0).
//!
//! \note When used as an edge counter the prescaler should be set to
//! \b AUX_TIMER_PRESCALE_DIV_1.
//!
//! \return None
//
//*****************************************************************************
extern void AUXTimerConfigure(uint32_t ui32Timer, uint32_t ui32Config);

//*****************************************************************************
//
//! Start AUX timer
//!
//! \param ui32Timer is the timer to start.
//!
//! This call starts the AUX timer selected by the \e ui32Timer.
//!
//! The \b ui32Timer must specified as one of the following values:
//! - \b AUX_TIMER_0
//! - \b AUX_TIMER_1
//! - \b AUX_TIMER_BOTH
//!
//! \note The counter will start counting up from zero.
//!
//! \return None
//
//*****************************************************************************
extern void AUXTimerStart(uint32_t ui32Timer);

//*****************************************************************************
//
//! Stop AUX timer
//!
//! \param ui32Timer is the timer to stop
//!
//! This call stops the AUX timer selected by the \e ui32Timer.
//!
//! The \b ui32Timer must specified as one of the following values:
//! - \b AUX_TIMER_0
//! - \b AUX_TIMER_1
//! - \b AUX_TIMER_BOTH
//!
//! \return None
//
//*****************************************************************************
extern void AUXTimerStop(uint32_t ui32Timer);

//*****************************************************************************
//
//! Set AUX timer target value
//!
//! \param ui32Timer is the timer to set the target value for.
//! \param ui32Target is the timer ta4get value.
//!
//! The time4 counts from zero to the target value. When target value is
//! reached an event is generated.
//!
//! The \e ui32Timer must specified as one of the following values:
//! - \b AUX_TIMER_0
//! - \b AUX_TIMER_1
//!
//! The \e ui32Target must be an integer in the range 0 .. 255.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AUXTimerTargetValSet(uint32_t ui32Timer, uint32_t ui32Target)
{
    uint32_t ui32Addr;
    
    //
    // Check the arguments.
    //
    ASSERT((ui32Timer == AUX_TIMER_0) || (ui32Timer == AUX_TIMER_1));
    ASSERT(ui32Target < 256);

    ui32Addr = (ui32Timer & AUX_TIMER_0) ?
               (AUX_TIMER_BASE + AUX_TIMER_O_T0TARGET) :
               (AUX_TIMER_BASE + AUX_TIMER_O_T1TARGET);

    HWREG(ui32Addr) = ui32Target;
}

//*****************************************************************************
//
//! Get AUX timer target value
//!
//! \param ui32Timer is the timer to get the target value from.
//!
//! The timer counts from zero to the target value. When target value is 
//! reached an event is generated. This function returns the programmed target
//! value for the specified timer.
//!
//! The \e ui32Timer must specified as one of the following values:
//! - \b AUX_TIMER_0
//! - \b AUX_TIMER_1
//!
//! \return Returns target value for the specified timer
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AUXTimerTargetValGet(uint32_t ui32Timer)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Timer == AUX_TIMER_0) || (ui32Timer == AUX_TIMER_1));

    return(HWREG((ui32Timer & AUX_TIMER_0) ?
                 (AUX_TIMER_BASE + AUX_TIMER_O_T0TARGET) :
                 (AUX_TIMER_BASE + AUX_TIMER_O_T1TARGET)));
}

//*****************************************************************************
//
//! Set AUX timer prescale value
//!
//! \param ui32Timer is the timer to set the prescale on
//! \param ui32PrescaleDiv is the prescaler division ratio
//!
//! When configured as timer, the counter is incremented based on the Aux clock
//! after the prescaler.
//! Setting prescale value is not adviced when the timer is running.
//!
//! The \e ui32Timer must specified as one of the following values:
//! - \b AUX_TIMER_0
//! - \b AUX_TIMER_1
//!
//! The \e ui32PrescaleDiv argument must be set to one of the following:
//! - \b AUX_TIMER_PRESCALE_DIV_1     - Prescale division ratio 1
//! - \b AUX_TIMER_PRESCALE_DIV_2     - Prescale division ratio 2
//! - \b AUX_TIMER_PRESCALE_DIV_4     - Prescale division ratio 4
//! - \b AUX_TIMER_PRESCALE_DIV_16    - Prescale division ratio 16
//! - \b AUX_TIMER_PRESCALE_DIV_32    - Prescale division ratio 32
//! - \b AUX_TIMER_PRESCALE_DIV_64    - Prescale division ratio 64
//! - \b AUX_TIMER_PRESCALE_DIV_128   - Prescale division ratio 128
//! - \b AUX_TIMER_PRESCALE_DIV_256   - Prescale division ratio 256
//! - \b AUX_TIMER_PRESCALE_DIV_1028  - Prescale division ratio 1028
//! - \b AUX_TIMER_PRESCALE_DIV_2048  - Prescale division ratio 2048
//! - \b AUX_TIMER_PRESCALE_DIV_4096  - Prescale division ratio 4096
//! - \b AUX_TIMER_PRESCALE_DIV_8192  - Prescale division ratio 8192
//! - \b AUX_TIMER_PRESCALE_DIV_16384 - Prescale division ratio 16384
//! - \b AUX_TIMER_PRESCALE_DIV_32768 - Prescale division ratio 32768
//!
//! \note When timer is used as an edge counter the prescaler should be
//!       set to AUX_TIMER_PRESCALE_DIV_1.
//!
//! \return None
//
//*****************************************************************************
extern void AUXTimerPrescaleSet(uint32_t ui32Timer, uint32_t ui32PrescaleDiv);

//*****************************************************************************
//
//! Get AUX timer prescale value
//!
//! \param ui32Timer is the timer to get the prescale value from.
//!
//! When configured as timer, the counter is incremented based on the aux clock
//! after the prescaler. This call returns the setting of the prescale divide
//! ratio for the specified timer.
//!
//! The \e ui32Timer must specified as one of the following values:
//! - \b AUX_TIMER_0
//! - \b AUX_TIMER_1
//!
//! \return One of the following values:
//! - \b AUX_TIMER_PRESCALE_DIV_1     - Prescale division ratio 1
//! - \b AUX_TIMER_PRESCALE_DIV_2     - Prescale division ratio 2
//! - \b AUX_TIMER_PRESCALE_DIV_4     - Prescale division ratio 4
//! - \b AUX_TIMER_PRESCALE_DIV_16    - Prescale division ratio 16
//! - \b AUX_TIMER_PRESCALE_DIV_32    - Prescale division ratio 32
//! - \b AUX_TIMER_PRESCALE_DIV_64    - Prescale division ratio 64
//! - \b AUX_TIMER_PRESCALE_DIV_128   - Prescale division ratio 128
//! - \b AUX_TIMER_PRESCALE_DIV_256   - Prescale division ratio 256
//! - \b AUX_TIMER_PRESCALE_DIV_1028  - Prescale division ratio 1028
//! - \b AUX_TIMER_PRESCALE_DIV_2048  - Prescale division ratio 2048
//! - \b AUX_TIMER_PRESCALE_DIV_4096  - Prescale division ratio 4096
//! - \b AUX_TIMER_PRESCALE_DIV_8192  - Prescale division ratio 8192
//! - \b AUX_TIMER_PRESCALE_DIV_16384 - Prescale division ratio 16384
//! - \b AUX_TIMER_PRESCALE_DIV_32768 - Prescale division ratio 32768
//!
//! \return Returns the prescaler division ratio
//
//*****************************************************************************
extern uint32_t AUXTimerPrescaleGet(uint32_t ui32Timer);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __AUX_TIMER_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
