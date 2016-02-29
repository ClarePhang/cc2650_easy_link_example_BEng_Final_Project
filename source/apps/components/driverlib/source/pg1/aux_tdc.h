/******************************************************************************
*  Filename:       aux_tdc.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the AUX Time-to-Digital Converter
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
//! \addtogroup auxtdc_api
//! @{
//
//*****************************************************************************

#ifndef __AUX_TDC_H__
#define __AUX_TDC_H__

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
#include "hw_aux_tdc.h"
#include "debug.h"

//*****************************************************************************
//
// Defines for the status of a AUX TDC measurement.
//
//*****************************************************************************
#define AUX_TDC_BUSY            0x00000001
#define AUX_TDC_TIMEOUT         0x00000002
#define AUX_TDC_DONE            0x00000004

//*****************************************************************************
//
// Defines for the control of a AUX TDC.
//
//*****************************************************************************
#define AUX_TDC_RUNSYNC         0x00000001
#define AUX_TDC_RUN             0x00000002
#define AUX_TDC_ABORT           0x00000003

//*****************************************************************************
//
// Defines for possible states of the TDC internal state machine.
//
//*****************************************************************************
#define AUXTDC_WAIT_START       0x00000000
#define AUXTDC_WAIT_START_CNTEN 0x00000004
#define AUXTDC_IDLE             0x00000006
#define AUXTDC_CLRCNT           0x00000007
#define AUXTDC_WAIT_STOP        0x00000008
#define AUXTDC_WAIT_STOP_CNTDOWN \
                                0x0000000C
#define AUXTDC_GETRESULTS       0x0000000E
#define AUXTDC_POR              0x0000000F
#define AUXTDC_WAIT_CLRCNT_DONE  \
                                0x00000016
#define AUXTDC_START_FALL       0x0000001E
#define AUXTDC_FORCE_STOP       0x0000002E

//*****************************************************************************
//
// Defines for controlling the AUX TDC. Values can be passed to AUXTDCConfig().
//
//*****************************************************************************
#define AUXTDC_STOPPOL_RIS      0x00000000  // Rising edge polarity for stop 
                                            // event
#define AUXTDC_STOPPOL_FALL     0x00002000  // Falling edge polarity for stop 
                                            // event
#define AUXTDC_STOP_AON_WUC     0x00000000
#define AUXTDC_STOP_CMP_A       0x00000100
#define AUXTDC_STOP_CMP_B       0x00000200
#define AUXTDC_STOP_CS_RESET    0x00000300
#define AUXTDC_STOP_TIMER0      0x00000400
#define AUXTDC_STOP_TIMER1      0x00000500
#define AUXTDC_STOP_ADC_DONE    0x00000700
#define AUXTDC_STOP_AIO0        0x00000D00
#define AUXTDC_STOP_AIO1        0x00000E00
#define AUXTDC_STOP_AIO2        0x00000F00
#define AUXTDC_STOP_AIO3        0x00001000
#define AUXTDC_STOP_AIO4        0x00001100
#define AUXTDC_STOP_AIO5        0x00001200
#define AUXTDC_STOP_AIO6        0x00001300
#define AUXTDC_STOP_AIO7        0x00001400
#define AUXTDC_STOP_AIO8        0x00001500
#define AUXTDC_STOP_AIO9        0x00001600
#define AUXTDC_STOP_AIO10       0x00001700
#define AUXTDC_STOP_AIO11       0x00001800
#define AUXTDC_STOP_AIO12       0x00001900
#define AUXTDC_STOP_AIO13       0x00001A00
#define AUXTDC_STOP_AIO14       0x00001B00
#define AUXTDC_STOP_AIO15       0x00001C00
#define AUXTDC_STOP_ACLK        0x00001D00
#define AUXTDC_STOP_MCU_EVT     0x00001E00
#define AUXTDC_STOP_PRESCALER   0x00001F00

#define AUXTDC_STARTPOL_RIS     0x00000000  // Rising edge polarity for start 
                                            // event
#define AUXTDC_STARTPOL_FALL    0x00002000  // Falling edge polarity for start 
                                            // event
#define AUXTDC_START_AON_WUC    0x00000000
#define AUXTDC_START_CMP_A      0x00000001
#define AUXTDC_START_CMP_B      0x00000002
#define AUXTDC_START_CS_RESET   0x00000003
#define AUXTDC_START_TIMER0     0x00000004
#define AUXTDC_START_TIMER1     0x00000005
#define AUXTDC_START_ADC_DONE   0x00000007   
#define AUXTDC_START_AIO0       0x0000000D
#define AUXTDC_START_AIO1       0x0000000E
#define AUXTDC_START_AIO2       0x0000000F
#define AUXTDC_START_AIO3       0x00000010
#define AUXTDC_START_AIO4       0x00000011
#define AUXTDC_START_AIO5       0x00000012
#define AUXTDC_START_AIO6       0x00000013
#define AUXTDC_START_AIO7       0x00000014
#define AUXTDC_START_AIO8       0x00000015
#define AUXTDC_START_AIO9       0x00000016
#define AUXTDC_START_AIO10      0x00000017
#define AUXTDC_START_AIO11      0x00000018
#define AUXTDC_START_AIO12      0x00000019
#define AUXTDC_START_AIO13      0x0000001A
#define AUXTDC_START_AIO14      0x0000001B
#define AUXTDC_START_AIO15      0x0000001C
#define AUXTDC_START_ACLK       0x0000001D
#define AUXTDC_START_MCU_EVT    0x0000001E
#define AUXTDC_START_PRESCALER  0x0000001F

//*****************************************************************************
//
// Defines for the possible saturation values set using AUXTDCLimitSet().
//
//*****************************************************************************
#define AUXTDC_SAT_512          0x00000000
#define AUXTDC_SAT_1024         0x00000001
#define AUXTDC_SAT_2048         0x00000002
#define AUXTDC_SAT_4096         0x00000003
#define AUXTDC_SAT_8192         0x00000004
#define AUXTDC_SAT_16384        0x00000005
#define AUXTDC_SAT_32768        0x00000006
#define AUXTDC_SAT_65536        0x00000007
#define AUXTDC_SAT_131072       0x00000008
#define AUXTDC_SAT_262144       0x00000009
#define AUXTDC_SAT_524288       0x0000000A
#define AUXTDC_SAT_1048576      0x0000000B
#define AUXTDC_SAT_2097152      0x0000000C
#define AUXTDC_SAT_4194304      0x0000000D
#define AUXTDC_SAT_8388608      0x0000000E
#define AUXTDC_SAT_WRAP_AROUND  0x0000000F
#define AUXTDC_NUM_SAT_VALS     16

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// uint32_t AUXTDCStatusGet(uint32_t ui32Base);
// void AUXTDCConfigSet(uint32_t ui32Base, uint32_t ui32StartCondition,
//                      uint32_t ui32StopCondition);
// bool AUXTDCIdle(uint32_t ui32Base);
// void AUXTDCEnable(uint32_t ui32Base, uint32_t ui32RunMode);
// void AUXTDCIdleForce(uint32_t ui32Base);
// uint32_t AUXTDCMeasurementDone(uint32_t ui32Base);
// uint32_t AUXTDCMeasurementGet(uint32_t ui32Base);
// void AUXTDCLimitSet(uint32_t ui32Base, uint32_t ui32Limit);
// uint32_t AUXTDCLimitGet(uint32_t ui32Base);
// bool AUXTDCCounterSet(uint32_t ui32Base, uint32_t ui32Events);
// uint32_t AUXTDCCounterGet(uint32_t ui32Base);
// bool AUXTDCCounterEnable(uint32_t ui32Base);
// bool AUXTDCCounterDisable(uint32_t ui32Base);

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//! \internal
//! Checks an AUX TDC base address.
//!
//! \param ui32Base is the base address of the AUX TDC port.
//!
//! This function determines if a AUX TDC port base address is valid.
//!
//! \return Returns \b true if the base address is valid and \b false
//! otherwise.
//
//*****************************************************************************
#ifdef DEBUG
static bool
AUXTDCBaseValid(uint32_t ui32Base)
{
    return(ui32Base == AUX_TDCIF_BASE);
}
#endif

//*****************************************************************************
//
//! Get the status of the AUX TDC internal state machine
//!
//! \param ui32Base is base address of the AUX TDC
//!
//! This function will return the current state of the AUX TDC internal state
//! machine. Possible states for the state machine are:
//! \b AUXTDC_WAIT_START, \b AUXTDC_WAIT_START_CNTEN, \b AUXTDC_IDLE,
//! \b AUXTDC_CLRCNT, \b AUXTDC_WAIT_STOP, \b AUXTDC_WAIT_STOP_CNTDOWN,
//! \b AUXTDC_GETRESULTS, \b AUXTDC_POR, \b AUXTDC_WAIT_CLRCNT_DONE,
//! \b AUXTDC_START_FALL or \b AUXTDC_FORCE_STOP.
//!
//! \return Returns the current state of the state machine.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AUXTDCStatusGet(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(AUXTDCBaseValid(ui32Base));

    //
    // Return the status value for the correct ADI Slave.
    //
    return((HWREG(ui32Base + AUX_TDC_O_STAT) & AUX_TDC_STAT_STATE_M) >>
           AUX_TDC_STAT_STATE_S);
}

//*****************************************************************************
//
//! Configure the operation of the AUX TDC
//!
//! \param ui32Base is base address of the AUX TDC.
//! \param ui32StartCondition is AUX TDC start event and polarity
//! \param ui32StopCondition is AUX TDC stop event and polarity
//!
//! Use this function to configure the start and stop event for the AUX TDC.
//!
//! The \b ui32StartCondition must be a logical OR of the start event and the
//! polarity of the start event. The start events are
//! \b AUXTDC_START_AON_WUC, \b AUXTDC_START_CMP_A, \b AUXTDC_START_CMP_B,
//! \b AUXTDC_START_CS_RESET, \b AUXTDC_START_TIMER0, \b AUXTDC_START_TIMER1,
//! \b AUXTDC_START_ADC_DONE, \b AUXTDC_START_AIO0, \b AUXTDC_START_AIO1,
//! \b AUXTDC_START_AIO2, \b AUXTDC_START_AIO3, \b AUXTDC_START_AIO4,
//! \b AUXTDC_START_AIO5, \b AUXTDC_START_AIO6, \b AUXTDC_START_AIO7
//! \b AUXTDC_START_AIO8, \b AUXTDC_START_AIO9, \b AUXTDC_START_AIO10,
//! \b AUXTDC_START_AIO11, \b AUXTDC_START_AIO12, \b AUXTDC_START_AIO13,
//! \b AUXTDC_START_AIO14, \b AUXTDC_START_AIO15, \b AUXTDC_START_ACLK,
//! \b AUXTDC_START_MCU_EVT and \b AUXTDC_START_PRESCALE.
//!
//! The polarity of the start event is either rising \b AUXTDC_STARTPOL_RIS
//! or falling \b AUXTDC_STARTPOL_FALL.
//!
//! The \b ui32StopCondition must be a logical OR of the stop event and the
//! polarity of the stop event. The stop events are
//! \b AUXTDC_STOP_AON_WUC, \b AUXTDC_STOP_CMP_A, \b AUXTDC_STOP_CMP_B,
//! \b AUXTDC_STOP_CS_RESET, \b AUXTDC_STOP_TIMER0, \b AUXTDC_STOP_TIMER1,
//! \b AUXTDC_STOP_ADC_DONE, \b AUXTDC_STOP_AIO0, \b AUXTDC_STOP_AIO1,
//! \b AUXTDC_STOP_AIO2, \b AUXTDC_STOP_AIO3, \b AUXTDC_STOP_AIO4,
//! \b AUXTDC_STOP_AIO5, \b AUXTDC_STOP_AIO6, \b AUXTDC_STOP_AIO7
//! \b AUXTDC_STOP_AIO8, \b AUXTDC_STOP_AIO9, \b AUXTDC_STOP_AIO10,
//! \b AUXTDC_STOP_AIO11, \b AUXTDC_STOP_AIO12, \b AUXTDC_STOP_AIO13,
//! \b AUXTDC_STOP_AIO14, \b AUXTDC_STOP_AIO15, \b AUXTDC_STOP_ACLK,
//! \b AUXTDC_STOP_MCU_EVT and \b AUXTDC_STOP_PRESCALE.
//!
//! The polarity of the stop event is either rising \b AUXTDC_STOPPOL_RIS
//! or falling \b AUXTDC_STOPPOL_FALL.
//!
//! \note The AUX TDC should only be configure when the AUX TDC is in the Idle
//! state. To ensure that software doesn't lock up, it is recommended to
//! ensure that the AUX TDC is actually in idle when calling AUXTDCConfigSet().
//! This can be tested using AUXTDCIdle().
//!
//! \return None
//
//*****************************************************************************
extern void AUXTDCConfigSet(uint32_t ui32Base, uint32_t ui32StartCondition,
                            uint32_t ui32StopCondition);

//*****************************************************************************
//
//! Check if the AUX TDC is in idle mode
//!
//! \param ui32Base is the base address of the AUX TDC.
//!
//! This function can be used to check whether the AUX TDC internal state
//! machine is in idle mode. This is required before setting the polarity
//! of the start and stop event.
//!
//! \return Returns \b true if state machine is in idle and returns \b false
//! if the state machine is in any other state.
//
//*****************************************************************************
__STATIC_INLINE bool
AUXTDCIdle(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(AUXTDCBaseValid(ui32Base));

    //
    // Check if the AUX TDC is in the Idle state.
    //
    return (((HWREG(ui32Base + AUX_TDC_O_STAT) & AUX_TDC_STAT_STATE_M) ==
             AUX_TDC_STAT_STATE_IDLE) ? true : false);
}

//*****************************************************************************
//
//! Enable the AUX TDC for a measurement
//!
//! \param ui32Base is the base address of the AUX TDC.
//! \param ui32RunMode is the run mode for the AUX TDC.
//!
//! This function is used for arming the AUX TDC to begin a measurement as
//! soon as the start condition is fullfilled. There are two run modes:
//! \b AUX_TDC_SYNCRUN will wait for a falling event of the start pulse before
//! starting measurement on next rising edge of start. This guarantees an edge
//! triggered start and is recommended for frequency measurements. If the
//! first falling edge is close to the start command it may be missed, but
//! the TDC shall catch later falling edges and in any case guarantee a
//! measurement start synchronous to the rising edge of the start event.
//! The \b AUX_TDC_RUN is asyncronous start and asyncronous stop mode. Using
//! this a TDC measurement may start immediately if start is high and hence it
//! may not give precise edge to edge measurements. This mode is only
//! recommended when start pulse is guaranteed to arrive at least 7 clock
//! periods after command.
//!
//! \note The AUX TDC should be configured and in Idle mode before calling this
//! function.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AUXTDCEnable(uint32_t ui32Base, uint32_t ui32RunMode)
{
    //
    // Check the arguments.
    //
    ASSERT(AUXTDCBaseValid(ui32Base));
    ASSERT((ui32RunMode == AUX_TDC_RUN) || 
           (ui32RunMode == AUX_TDC_RUNSYNC));

    //
    // Enable the AUX TDC.
    //
    HWREG(ui32Base + AUX_TDC_O_CTL) = ui32RunMode;
}

//*****************************************************************************
//
//! Force the AUX TDC back to Idle mode
//!
//! \param ui32Base is the base address of the AUX TDC.
//!
//! This function will force the AUX TDC in too Idle mode. The internal state
//! machine will not go directly to Idle mode, so it is left to the programmer to
//! ensure that the state machine is in Idle mode before doing any new
//! configuration. This can be checked using AUXTDCIdle().
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AUXTDCIdleForce(uint32_t ui32Base)
{
    //
    // Check the arguments
    //
    ASSERT(AUXTDCBaseValid(ui32Base));

    //
    // Abort operation of AUX TDC and force into Idle mode.
    //
    HWREG(ui32Base + AUX_TDC_O_CTL) = AUX_TDC_CTL_CMD_ABORT;
}

//*****************************************************************************
//
//! Check if the AUX TDC is done measuring
//!
//! \param ui32Base is the base address of the AUX TDC.
//!
//! This function can be used to check whether the AUX TDC has finish a
//! measurement. The AUX TDC may have completed a measurement for two reasons.
//! Either it finish succesfully \b AUX_TDC_DONE or it failed due to a timeout
//! \b AUX_TDC_TIMEOUT. If the AUX TDC is still measuring it this function
//! will return \b AUX_TDC_BUSY.
//!
//! \return Returns the current status of a measurement
//
//*****************************************************************************
extern uint32_t AUXTDCMeasurementDone(uint32_t ui32Base);

//*****************************************************************************
//
//! Get the value of the latest measurement
//!
//! \param ui32Base is the base address of the AUX TDC.
//!
//! This function is used for retreving the value of the lastest measurement
//! performed by the AUX TDC.
//!
//! \return Returns the result of the latest measurement
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AUXTDCMeasurementGet(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(AUXTDCBaseValid(ui32Base));

    //
    // Return the measurement.
    //
    return (HWREG(ui32Base + AUX_TDC_O_RESULT));
}

//*****************************************************************************
//
//! Set the saturation limit of the measurement
//!
//! \param ui32Base is base address of the AUX TDC.
//! \param ui32Limit is the saturation limit.
//!
//! This function is used to set a saturation limit for the event accumulation
//! register. The saturation limit is defined as a bit width of the
//! accumulation register and therefore increases in power of 2.
//! \b AUXTDC_SAT_4096, \b AUXTDC_SAT_8192, \b AUXTDC_SAT_16384,
//! \b AUXTDC_SAT_32768, \b AUXTDC_SAT_65536, \b AUXTDC_SAT_131072,
//! \b AUXTDC_SAT_262144, \b AUXTDC_SAT_524288, \b AUXTDC_SAT_1048576,
//! \b AUXTDC_SAT_2097152, \b AUXTDC_SAT_4194304, \b AUXTDC_SAT_8388608 or
//! \b AUXTDC_SAT_WRAP_AROUND.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AUXTDCLimitSet(uint32_t ui32Base, uint32_t ui32Limit)
{
    //
    // Check the arguments.
    //
    ASSERT(AUXTDCBaseValid(ui32Base));
    ASSERT(ui32Limit < AUXTDC_NUM_SAT_VALS);

    //
    // Set the saturation limit.
    //
    HWREG(ui32Base + AUX_TDC_O_SATCFG) = ui32Limit;
}

//*****************************************************************************
//
//! Get the saturation limit of the measurement
//!
//! \param ui32Base is base address of the AUX TDC.
//!
//! This function is used to retreive the current saturation for the
//! accumulator register.
//!
//! \return Returns the saturation limit
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AUXTDCLimitGet(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(AUXTDCBaseValid(ui32Base));

    //
    // Return the saturation limit.
    //
    return (HWREG(ui32Base + AUX_TDC_O_SATCFG));
}

//*****************************************************************************
//
//! Enables the counter if possible
//!
//! \param ui32Base is base address of the AUX TDC.
//!
//! This function can be used to ensable the AUX TDC stop/cmp event counter.
//! The counter can be used to measure multiple periods of a clock signal.
//! For each stop/compare event the counter will be decremented by one and
//! the measurement will continue running until the value of the counter
//! reaches 0. The current value of the counter can be read using
//! AUXTDCCounterGet(). The reset value of the counter can be set using
//! AUXTDCCounterSet().
//!
//! \return Returns \b true if the counter was succesfully enabled. If the
//! AUX TDC is not in Idle mode, the counter can not be enabled, and the
//! return value will be \b false.
//
//*****************************************************************************
__STATIC_INLINE bool
AUXTDCCounterEnable(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(AUXTDCBaseValid(ui32Base));

    //
    // Check if the AUX TDC is in idle mode. If not in Idle mode, the counter
    // will not be enabled.
    //
    if(!((HWREG(ui32Base + AUX_TDC_O_STAT) & AUX_TDC_STAT_STATE_M) ==
            AUX_TDC_STAT_STATE_IDLE))
    {
        return false;
    }

    //
    // Enable the counter.
    //
    HWREG(ui32Base + AUX_TDC_O_TRIGCNTCFG) = AUX_TDC_TRIGCNTCFG_EN;

    //
    // Counter succesfully enabled.
    //
    return true;
}

//*****************************************************************************
//
//! Disables the counter if possible
//!
//! \param ui32Base is base address of the AUX TDC.
//!
//! This function can be used to disable the AUX TDC stop/cmp event counter.
//!
//! \sa AUXTDCCounterEnable() for more information on how to use the counter.
//!
//! \return Returns \b true if the counter was succesfully disabled. If the
//! AUX TDC is not in Idle mode, the counter can not be disabled, and the
//! return value will be \b false.
//
//*****************************************************************************
__STATIC_INLINE bool
AUXTDCCounterDisable(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(AUXTDCBaseValid(ui32Base));

    //
    // Check if the AUX TDC is in Idle mode. If not in Idle mode, the counter
    // will not be disabled.
    //
    if(!((HWREG(ui32Base + AUX_TDC_O_STAT) & AUX_TDC_STAT_STATE_M) ==
            AUX_TDC_STAT_STATE_IDLE))
    {
        return false;
    }

    //
    // Disable the counter.
    //
    HWREG(ui32Base + AUX_TDC_O_TRIGCNTCFG) = 0;

    //
    // Counter succesfull disabled.
    //
    return true;
}

//*****************************************************************************
//
//! Set the reset number of counter compare/stop event to ignore before taking
//! a measurement
//!
//! \param ui32Base is base address of the AUX TDC.
//! \param ui32Events is the number of compare/stop events to load into the
//! counter.
//!
//! This function loads the reset value of the counter with the specified
//! number of events to ignore. A reset is in this context means the counter
//! has been disabled and then enabled.
//!
//! \sa AUXTDCCounterEnable().
//!
//! \return Returns \b true if the counter was succesfully updated. If the
//! AUX TDC is not in Idle mode, the counter can not be updated, and the
//! return value will be \b false.
//
//*****************************************************************************
__STATIC_INLINE bool
AUXTDCCounterSet(uint32_t ui32Base, uint32_t ui32Events)
{
    //
    // Check the arguments.
    //
    ASSERT(AUXTDCBaseValid(ui32Base));

    //
    // Check if the AUX TDC is in idle mode. If not in idle mode, the counter
    // will not be disabled.
    //
    if(!((HWREG(ui32Base + AUX_TDC_O_STAT) & AUX_TDC_STAT_STATE_M) ==
            AUX_TDC_STAT_STATE_IDLE))
    {
        return false;
    }

    //
    // Update the reset counter value.
    //
    HWREG(ui32Base + AUX_TDC_O_TRIGCNTLOAD) = ui32Events;

    //
    // Counter succesfully updated.
    //
    return true;
}

//*****************************************************************************
//
//! Get the current number of counter compare/stop event to ignore before
//! taking a measurement
//!
//! \param ui32Base is base address of the AUX TDC.
//!
//! This function returns the current value of compare/stop events before
//! a measurement is registered. This value is decremented by one for each
//! registered compare/stop event and will always be less than or equal the
//! reset value of the counter set using AUXTDCCounterSet().
//!
//! \sa AUXTDCCounterEnable().
//!
//! \return Returns the current value of compare/stop events ignored before a
//! measurement is performed.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AUXTDCCounterGet(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(AUXTDCBaseValid(ui32Base));

    //
    // Return the current counter value.
    //
    return (HWREG(ui32Base + AUX_TDC_O_TRIGCNT));
}

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __AUX_TDC_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
