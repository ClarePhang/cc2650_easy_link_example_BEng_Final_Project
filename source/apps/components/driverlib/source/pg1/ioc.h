/******************************************************************************
*  Filename:       ioc.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the IO Controller.
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
//! \addtogroup ioc_api
//! @{
//
//*****************************************************************************

#ifndef __IOC_H__
#define __IOC_H__

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
#include "hw_ioc.h"
#include "hw_ints.h"
#include "interrupt.h"
#include "debug.h"
#include "gpio.h"

//*****************************************************************************
//
// Number of IOs (max. total of 32)
//
//*****************************************************************************
#define NUM_IO_MAX 32

//*****************************************************************************
//
// The following fields are IO Id for the IOC module
//
//*****************************************************************************
#define IOID_0                  0x00000000  // IO Id 0
#define IOID_1                  0x00000001  // IO Id 1
#define IOID_2                  0x00000002  // IO Id 2
#define IOID_3                  0x00000003  // IO Id 3
#define IOID_4                  0x00000004  // IO Id 4
#define IOID_5                  0x00000005  // IO Id 5
#define IOID_6                  0x00000006  // IO Id 6
#define IOID_7                  0x00000007  // IO Id 7
#define IOID_8                  0x00000008  // IO Id 8
#define IOID_9                  0x00000009  // IO Id 9
#define IOID_10                 0x0000000A  // IO Id 10
#define IOID_11                 0x0000000B  // IO Id 11
#define IOID_12                 0x0000000C  // IO Id 12
#define IOID_13                 0x0000000D  // IO Id 13
#define IOID_14                 0x0000000E  // IO Id 14
#define IOID_15                 0x0000000F  // IO Id 15
#define IOID_16                 0x00000010  // IO Id 16
#define IOID_17                 0x00000011  // IO Id 17
#define IOID_18                 0x00000012  // IO Id 18
#define IOID_19                 0x00000013  // IO Id 19
#define IOID_20                 0x00000014  // IO Id 20
#define IOID_21                 0x00000015  // IO Id 21
#define IOID_22                 0x00000016  // IO Id 22
#define IOID_23                 0x00000017  // IO Id 23
#define IOID_24                 0x00000018  // IO Id 24
#define IOID_25                 0x00000019  // IO Id 25
#define IOID_26                 0x0000001A  // IO Id 26
#define IOID_27                 0x0000001B  // IO Id 27
#define IOID_28                 0x0000001C  // IO Id 28
#define IOID_29                 0x0000001D  // IO Id 29
#define IOID_30                 0x0000001E  // IO Id 30
#define IOID_31                 0x0000001F  // IO Id 31
#define IOID_UNUSED             0xFFFFFFFF  // Unsued IO Id

#define IOC_IOID_MASK           0x000000FF  // IOC IO Id bit mask

//*****************************************************************************
//
// Number of IO ports
//
//*****************************************************************************
#define NUM_IO_PORTS 56

//*****************************************************************************
//
// IOC Peripheral Port Mapping
//
//*****************************************************************************
#define IOC_PORT_GPIO           0x00000000  // Default general purpose IO usage
#define IOC_PORT_AON_SCS        0x00000001  // AON SPI-S SCS Pin
#define IOC_PORT_AON_SCK        0x00000002  // AON SPI-S SCK Pin
#define IOC_PORT_AON_SDI        0x00000003  // AON SPI-S SDI Pin
#define IOC_PORT_AON_SDO        0x00000004  // AON SPI-S SDO Pin
#define IOC_PORT_AON_TDI        0x00000005  // AON JTAG TDI Pin
#define IOC_PORT_AON_TDO        0x00000006  // AON JTAG TDO Pin
#define IOC_PORT_AON_CLK32K     0x00000007  // AON External 32kHz clock
#define IOC_PORT_AUX_IO         0x00000008  // AUX IO Pin
#define IOC_PORT_MCU_SSI0_RX    0x00000009  // MCU SSI0 Receive Pin
#define IOC_PORT_MCU_SSI0_TX    0x0000000A  // MCU SSI0 Transmit Pin
#define IOC_PORT_MCU_SSI0_FSS   0x0000000B  // MCU SSI0 FSS Pin
#define IOC_PORT_MCU_SSI0_CLK   0x0000000C  // MCU SSI0 Clock Pin
#define IOC_PORT_MCU_I2C_MSSDA  0x0000000D  // MCU I2C Data Pin
#define IOC_PORT_MCU_I2C_MSSCL  0x0000000E  // MCU I2C Clock Pin
#define IOC_PORT_MCU_UART0_RX   0x0000000F  // MCU UART0 Receive Pin
#define IOC_PORT_MCU_UART0_TX   0x00000010  // MCU UART0 Transmit Pin
#define IOC_PORT_MCU_UART0_CTS  0x00000011  // MCU UART0 Clear To Send Pin
#define IOC_PORT_MCU_UART0_RTS  0x00000012  // MCU UART0 Request To Send Pin
#define IOC_PORT_MCU_UART1_RX   0x00000013  // MCU UART1 Receive Pin
#define IOC_PORT_MCU_UART1_TX   0x00000014  // MCU UART1 Transmit Pin
#define IOC_PORT_MCU_UART1_CTS  0x00000015  // MCU UART1 Clear To Send  Pin
#define IOC_PORT_MCU_UART1_RTS  0x00000016  // MCU UART1 Request To Send  Pin
#define IOC_PORT_MCU_TIMER0     0x00000017  // MCU GPT Pin 0
#define IOC_PORT_MCU_TIMER1     0x00000018  // MCU GPT Pin 1
#define IOC_PORT_MCU_TIMER2     0x00000019  // MCU GPT Pin 2
#define IOC_PORT_MCU_TIMER3     0x0000001A  // MCU GPT Pin 3
#define IOC_PORT_MCU_TIMER4     0x0000001B  // MCU GPT Pin 4
#define IOC_PORT_MCU_TIMER5     0x0000001C  // MCU GPT Pin 5
#define IOC_PORT_MCU_TIMER6     0x0000001D  // MCU GPT Pin 6
#define IOC_PORT_MCU_TIMER7     0x0000001E  // MCU GPT Pin 7
#define IOC_PORT_RESERVED0      0x0000001F  // Reserved0
#define IOC_PORT_RESERVED1      0x00000020  // Reserved1
#define IOC_PORT_MCU_SSI1_RX    0x00000021  // MCU SSI1 Receive Pin
#define IOC_PORT_MCU_SSI1_TX    0x00000022  // MCU SSI1 Transmit Pin
#define IOC_PORT_MCU_SSI1_FSS   0x00000023  // MCU SSI1 FSS Pin
#define IOC_PORT_MCU_SSI1_CLK   0x00000024  // MCU SSI1 Clock Pin
#define IOC_PORT_MCU_I2S_AD0    0x00000025  // MCU I2S Data Pin 0
#define IOC_PORT_MCU_I2S_AD1    0x00000026  // MCU I2S Data Pin 1
#define IOC_PORT_MCU_I2S_WCLK   0x00000027  // MCU I2S Frame/Word Clock
#define IOC_PORT_MCU_I2S_BCLK   0x00000028  // MCU I2S Bit Clock
#define IOC_PORT_MCU_I2S_MCLK   0x00000029  // MCU I2S Master clock 2
#define IOC_PORT_MCU_IOC_OBS0   0x0000002A  // MCU Port 0 for observation
#define IOC_PORT_MCU_IOC_OBS1   0x0000002B  // MCU Port 1 for observation
#define IOC_PORT_MCU_IOC_OBS2   0x0000002C  // MCU Port 2 for observation
#define IOC_PORT_MCU_IOC_OBS3   0x0000002D  // MCU Port 3 for observation
#define IOC_PORT_RFC_TRC        0x0000002E  // RF Core Tracer
#define IOC_PORT_RFC_GPO0       0x0000002F  // RC Core Data Out Pin 0
#define IOC_PORT_RFC_GPO1       0x00000030  // RC Core Data Out Pin 1
#define IOC_PORT_RFC_GPO2       0x00000031  // RC Core Data Out Pin 2
#define IOC_PORT_RFC_GPO3       0x00000032  // RC Core Data Out Pin 3
#define IOC_PORT_RFC_GPI0       0x00000033  // RC Core Data In Pin 0
#define IOC_PORT_RFC_GPI1       0x00000034  // RC Core Data In Pin 1
#define IOC_PORT_RFC_SMI_DL_OUT 0x00000035  // RF Core SMI Data Link Out
#define IOC_PORT_RFC_SMI_DL_IN  0x00000036  // RF Core SMI Data Link in
#define IOC_PORT_RFC_SMI_CL_OUT 0x00000037  // RF Core SMI Command Link Out
#define IOC_PORT_RFC_SMI_CL_IN  0x00000038  // RF Core SMI Command Link In

//*****************************************************************************
//
// Defines for enabling/disabling an IO
//
//*****************************************************************************
#define IOC_SLEW_ENABLE         0x00001000
#define IOC_SLEW_DISABLE        0x00000000
#define IOC_INPUT_ENABLE        0x20000000
#define IOC_INPUT_DISABLE       0x00000000
#define IOC_HYST_ENABLE         0x40000000
#define IOC_HYST_DISABLE        0x00000000
#define IOC_JTAG_TDO_ENABLE     0x00080000
#define IOC_JTAG_TDI_ENABLE     0x00100000
#define IOC_JTAG_DISABLE        0x00000000

//*****************************************************************************
//
// Values that can be used to set the shutdown mode of an IO
//
//*****************************************************************************
#define IOC_NO_WAKE_UP          0x00000000
#define IOC_WAKE_ON_LOW         0x10000000
#define IOC_WAKE_ON_HIGH        0x18000000

//*****************************************************************************
//
// Values that can be used to set the IO Mode of an IO
//
//*****************************************************************************
#define IOC_IOMODE_NORMAL       0x00000000  // Normal Input/Output
#define IOC_IOMODE_INV          0x01000000  // Inverted Input/Output
#define IOC_IOMODE_OPEN_DRAIN_NORMAL \
                                0x04000000  // Open Drain, Normal Input/Output
#define IOC_IOMODE_OPEN_DRAIN_INV \
                                0x05000000  // Open Drain, Inverted
                                            // Input/Output
#define IOC_IOMODE_OPEN_SRC_NORMAL \
                                0x06000000  // Open Source, Normal Input/Output
#define IOC_IOMODE_OPEN_SRC_INV \
                                0x07000000  // Open Source, Inverted
                                            // Input/Output

//*****************************************************************************
//
// Values that can be used to set the edge detection on an IO
//
//*****************************************************************************
#define IOC_NO_EDGE             0x00000000  // No edge detection
#define IOC_FALLING_EDGE        0x00010000  // Edge detection on falling edge
#define IOC_RISING_EDGE         0x00020000  // Edge detection on rising edge
#define IOC_BOTH_EDGES          0x00030000  // Edge detection on both edges
#define IOC_INT_ENABLE          0x00040000  // Enable interrupt on edge detect
#define IOC_INT_DISABLE         0x00000000  // Disable interrupt on edge detect
#define IOC_INT_M               0x00070000  // Int config mask

//*****************************************************************************
//
// Values that be used to set pull on an IO
//
//*****************************************************************************
#define IOC_NO_IOPULL           0x00006000  // No IO pull
#define IOC_IOPULL_UP           0x00004000  // Pull up
#define IOC_IOPULL_DOWN         0x00002000  // Pull down
#define IOC_IOPULL_M            0x00006000  // Pull config mask
#define IOC_IOPULL_M            0x00006000

//*****************************************************************************
//
// Values that can be used to select the drive strength of an IO
//
//*****************************************************************************
#define IOC_CURRENT_2MA         0x00000000  // 2mA drive strength
#define IOC_CURRENT_4MA         0x00000400  // 4mA drive strength
#define IOC_CURRENT_8MA         0x00000800  // 4 or 8mA drive strength
#define IOC_CURRENT_16MA        0x00000C00  // Up to 16mA drive strength

#define IOC_STRENGTH_AUTO       0x00000000  // Automatic Drive Strength
                                            // (2/4/8 mA @ VVDS)
#define IOC_STRENGTH_MAX        0x00000300  // Maximum Drive Strength
                                            // (2/4/8 mA @ 1.8V)
#define IOC_STRENGTH_MED        0x00000200  // Medium Drive Strength
                                            // (2/4/8 mA @ 2.5V)
#define IOC_STRENGTH_MIN        0x00000100  // Miniumm Drive Strength
                                            // (2/4/8 mA @ 3.3V)
//*****************************************************************************
//
// Defines for standard IO setup
//
//*****************************************************************************
#define IOC_STD_INPUT           (IOC_CURRENT_2MA | IOC_STRENGTH_AUTO |      \
                                 IOC_NO_IOPULL | IOC_SLEW_DISABLE |         \
                                 IOC_HYST_DISABLE | IOC_NO_EDGE |           \
                                 IOC_INT_DISABLE | IOC_IOMODE_NORMAL | \
                                 IOC_NO_WAKE_UP | IOC_INPUT_ENABLE |        \
                                 IOC_JTAG_DISABLE)
#define IOC_STD_OUTPUT          (IOC_CURRENT_2MA | IOC_STRENGTH_AUTO |      \
                                 IOC_NO_IOPULL | IOC_SLEW_DISABLE |         \
                                 IOC_HYST_DISABLE | IOC_NO_EDGE |           \
                                 IOC_INT_DISABLE | IOC_IOMODE_NORMAL | \
                                 IOC_NO_WAKE_UP | IOC_INPUT_DISABLE |       \
                                 IOC_JTAG_DISABLE)

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// void IOCPortConfigureSet(uint32_t ui32IOId, uint32_t ui32PortId, 
//                          uint32_t ui32IOConfig);
// uint32_t IOCPortConfigureGet(uint32_t ui32IOId);
// void IOCIOShutdownSet(uint32_t ui32IOId, uint32_t ui32IOShutdown);
// void IOCIOJTagSet(uint32_t ui32IOId, uint32_t ui32IOJTag);
// void IOCIOModeSet(uint32_t ui32IOId, uint32_t ui32IOMode);
// void IOCIOPortPullSet(uint32_t ui32IOId, uint32_t ui32Pull);
// void IOCIOHystSet(uint32_t ui32IOId, uint32_t ui32Hysteresis);
// void IOCIOInputSet(uint32_t ui32IOId, uint32_t ui32IoEnable);
// void IOCIOSlewCtrlSet(uint32_t ui32IOId, uint32_t ui32Slew);
// void IOCIODrvStrengthSet(uint32_t ui32IOId, uint32_t ui32IOCurrent,
//                          uint32_t ui32DrvStrength);
// void IOCIOPortIdSet(uint32_t ui32IOId, uint32_t ui32PortId);
// void IOCIOIntSet(uint32_t ui32IOId, uint32_t ui32Int, 
//                  uint32_t ui32EdgeDet);
// void IOCIntRegister(void (*pfnHandler)(void));
// void IOCIntUnregister(void);
// void IOCIntEnable(uint32_t ui32IOId);
// void IOCIntDisable(uint32_t ui32IOId);
// void IOCIntClear(uint32_t ui32IOId);
// uint32_t IOCIntStatus(uint32_t ui32IOId);
// void IOCPinTypeGpioInput(uint32_t ui32IOId);
// void IOCPinTypeGpioOutput(uint32_t ui32IOId);
// void IOCPinTypeUart(uint32_t ui32Base, uint32_t ui32Rx,
//                     uint32_t ui32Tx, uint32_t ui32Cts,
//                     uint32_t ui32Rts);
// void IOCPinTypeSsiMaster(uint32_t ui32Base, uint32_t ui32Rx, 
//                          uint32_t ui32Tx, uint32_t ui32Fss, 
//                          uint32_t ui32Clk);
// void IOCPinTypeSsiSlave(uint32_t ui32Base, uint32_t ui32Rx, 
//                         uint32_t ui32Tx, uint32_t ui32Fss, 
//                         uint32_t ui32Clk);
// void IOCPinTypeI2c(uint32_t ui32Base, uint32_t ui32Data,
//                    uint32_t ui32Clk);
// void IOCPinTypeAux(uint32_t ui32IOId);
// void IOCPinTypeSpis(uint32_t ui32Rx, uint32_t ui32Tx,
//                     uint32_t ui32Fss, uint32_t ui32Clk);

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//! Set the configuration of an IO port
//!
//! \param ui32IOId defines the IO to configure
//! \param ui32PortId selects the functional IO port to connect
//! \param ui32IOConfig is the IO configuration
//!
//! This function is used to configure the functionality of an IO. The
//! \b ui32IOId must be one of the following \b IOID_0 ... \b IOID_31.
//!
//! The \b ui32PortId specifies which functional perihperal to hook up to this
//! IO. The available IO ports are
//! \b IOC_PORT_GPIO, \b IOC_PORT_AON_SCS,
//! \b IOC_PORT_AON_SCK,  \b IOC_PORT_AON_SDI,
//! \b IOC_PORT_AON_SDO, \b IOC_PORT_AON_TDI,
//! \b IOC_PORT_AON_TDO, \b IOC_PORT_AON_CLK32K,
//! \b IOC_PORT_AUX_IO, \b IOC_PORT_MCU_SSI0_RX,
//! \b IOC_PORT_MCU_SSI0_TX, \b IOC_PORT_MCU_SSI0_FSS,
//! \b IOC_PORT_MCU_SSI0_CLK, \b IOC_PORT_MCU_I2C_MSSDA,
//! \b IOC_PORT_MCU_I2C_MSSCL, \b IOC_PORT_MCU_UART0_RX
//! \b IOC_PORT_MCU_UART0_TX, \b IOC_PORT_MCU_UART0_CTS
//! \b IOC_PORT_MCU_UART0_RTS, \b IOC_PORT_MCU_UART1_RX
//! \b IOC_PORT_MCU_UART1_TX, \b IOC_PORT_MCU_UART1_CTS
//! \b IOC_PORT_MCU_UART1_RTS, \b IOC_PORT_MCU_TIMER0
//! \b IOC_PORT_MCU_TIMER1, \b IOC_PORT_MCU_TIMER2
//! \b IOC_PORT_MCU_TIMER3, \b IOC_PORT_MCU_TIMER4
//! \b IOC_PORT_MCU_TIMER5, \b IOC_PORT_MCU_TIMER6
//! \b IOC_PORT_MCU_TIMER7, \b IOC_PORT_RESERVED0
//! \b IOC_PORT_RESERVED1, \b IOC_PORT_MCU_SSI1_RX
//! \b IOC_PORT_MCU_SSI1_TX, \b IOC_PORT_MCU_SSI1_FSS
//! \b IOC_PORT_MCU_SSI1_CLK, \b IOC_PORT_MCU_I2S_AD0
//! \b IOC_PORT_MCU_I2S_AD1, \b IOC_PORT_MCU_I2S_AD2
//! \b IOC_PORT_MCU_I2S_WCLK, \b IOC_PORT_MCU_I2S_BCLK
//! \b IOC_PORT_MCU_IOC_OBS0, \b IOC_PORT_MCU_IOC_OBS1
//! \b IOC_PORT_MCU_IOC_OBS2, \b IOC_PORT_MCU_IOC_OBS3
//! \b IOC_PORT_RFC_TRC, \b IOC_PORT_RFC_GPO0
//! \b IOC_PORT_RFC_GPO1, \b IOC_PORT_RFC_GPO2
//! \b IOC_PORT_RFC_GPO3, \b IOC_PORT_RFC_GPI0
//! \b IOC_PORT_RFC_GPI1, \b IOC_PORT_RFC_SMI_DL_OUT,
//! \b IOC_PORT_RFC_SMI_DL_IN, \b IOC_PORT_RFC_SMI_CL_OUT,
//! \b IOC_PORT_RFC_SMI_CL_IN
//!
//! The configuration parameter consists of a logical OR'ed value of all
//! the available configuration modes.
//!
//! For the input/output mode the following configurations are available
//! \b IOC_IOMODE_NORMAL, \b IOC_IOMODE_INV, \b IOC_IOMODE_WAKE_ON_LO,
//! \b IOC_IOMODE_WAKE_ON_HI, \b IOC_IOMODE_OPEN_DRAIN_NORMAL,
//! \b IOC_IOMODE_OPEN_DRAIN_INV, \b IOC_IOMODE_OPEN_SRC_NORMAL,
//! \b IOC_IOMODE_OPEN_SRC_INV
//!
//! The wake up mode of the IO can be
//! \b IOC_NO_WAKE_UP, \b IOC_WAKE_ON_LOW, \b IOC_WAKE_ON_HIGH
//!
//! The JTAG configuration modes for the IO are \b IOC_JTAG_TDO_ENABLE,
//! \b IOC_JTAG_TDI_ENABLE or \b IOC_JTAG_DISABLE.
//!
//! The edge detection of the IO can have the following configurations
//! \b IOC_NO_EDGE, \b IOC_FALLING_EDGE, \b IOC_RISING_EDGE,
//! \b IOC_BOTH_EDGES
//! and the parameter \b IOC_INT_ENABLE is used for enabling
//! interrupt on the edge detection and IOC_INT_DISABLE disables
//! interrupt on edge detection.
//!
//! The pull on an IO can be
//! \b IOC_NO_IOPULL, \b IOC_IOPULL_UP or \b IOC_IOPULL_DOWN.
//!
//! The IO can have input enabled or disabled using \b IOC_INPUT_ENABLE
//! or \b IOC_INPUT_DISABLE.
//!
//! The IO can have hysteresis enabled or disabled using \b IOC_HYST_ENABLE
//! or \b IOC_HYST_DISABLE.
//!
//! The IO slew can be enabled or disabled using \b IOC_SLEW_ENABLE
//! or \b IOC_SLEW_DISABLE.
//!
//! Set the maximum current of an IO using the configurations
//! \b IOC_CURRENT_2MA, \b IOC_CURRENT_4MA, \b IOC_CURRENT_8MA or
//! IOC_CURRENT_16MA
//!
//! The actual drive strength of the IO is set using
//! \b IOC_STRENGTH_AUTO, \b IOC_STRENGTH_MAX, \b IOC_STRENGTH_MED or
//! \b IOC_STRENGTH_MIN.
//!
//! \note All IO Ports are tied to a specific functionality in a sub modules
//! except for the \b IOC_PORT_AUX_IO. Each of the IOs in the AUX domain are
//! hardcoded to a specific IO. When enabling on or more pins for the AUX
//! domain, they should all be configured to using \b IOC_PORT_AUX_IO.
//!
//! \return None
//
//*****************************************************************************
extern void IOCPortConfigureSet(uint32_t ui32IOId, uint32_t ui32PortId,
                                uint32_t ui32IOConfig);

//*****************************************************************************
//
//! Get the configuration of an IO port
//!
//! \param ui32IOId selects the IO to return the configuration for.
//!
//! This function is used for getting the configuration of an IO. The
//! \b ui32IOId must be one of the following \b IOID_0 ... \b IOID_31.
//!
//! Each IO port has a dedicated register for setting up the IO. This function
//! returns the current configuration for the given IO.
//!
//! \return Returns the IO Port configuration.
//
//*****************************************************************************
extern uint32_t IOCPortConfigureGet(uint32_t ui32IOId);

//*****************************************************************************
//
//! Set wake-up on an IO port
//!
//! \param ui32IOId defines the IO to configure
//! \param ui32IOShutdown enables wake-up on LOW/HIGH by this IO port.
//!
//! This function is used to set the wake-up mode of an IO. The
//! \b ui32IOId must be one of the following \b IOID_0 ... \b IOID_31.
//!
//! The available wake up modes are \b IOC_NO_WAKE_UP, \b IOC_WAKE_ON_LOW or
//! \b IOC_WAKE_ON_HIGH.
//!
//! \return None
//
//*****************************************************************************
extern void IOCIOShutdownSet(uint32_t ui32IOId, uint32_t ui32IOShutdown);

//*****************************************************************************
//
//! Set wake-up on an IO port
//!
//! \param ui32IOId defines the IO to configure
//! \param ui32IOJTag enables the IO for JTAG operation.
//!
//! This function is used to set the wake-up mode of an IO. The
//! \b ui32IOId must be one of the following \b IOID_0 ... \b IOID_31.
//!
//! The available JTAG modes are \b IOC_JTAG_TDO_ENABLE, \b IOC_JTAG_TDI_ENABLE
//! or \b IOC_JTAG_DISABLE.
//!
//! \return None
//
//*****************************************************************************
extern void IOCIOJTagSet(uint32_t ui32IOId, uint32_t ui32IOJTag);

//*****************************************************************************
//
//! Set the IO Mode of an IO Port
//!
//! \param ui32IOId defines the IO to configure
//! \param ui32IOMode sets the port IO Mode
//!
//! This function is used to set the input/output mode of an IO. The
//! \b ui32IOId must be one of the following \b IOID_0 ... \b IOID_31.
//!
//! The different IO modes modes are \b IOC_IOMODE_NORMAL, \b IOC_IOMODE_INV,
//! \b IOC_IOMODE_OPEN_DRAIN_NORMAL, \b IOC_IOMODE_OPEN_DRAIN_INV,
//! \b IOC_IOMODE_OPEN_SRC_NORMAL or \b IOC_IOMODE_OPEN_SRC_INV.
//!
//! \return None
//
//*****************************************************************************
extern void IOCIOModeSet(uint32_t ui32IOId, uint32_t ui32IOMode);

//*****************************************************************************
//
//! Setup interrupt detection on an IO Port
//!
//! \param ui32IOId defines the IO to configure
//! \param ui32Int enables/disables interrupt generation on this IO port. This
//!        is a single bit parameter \b true / \b false parameter.
//! \param ui32EdgeDet enables/disables edge detection events on this IO
//!        port.
//!
//! This function is used to setup the interrupt detection on an IO. The
//! \b ui32IOId must be one of the following \b IOID_0 ... \b IOID_31.
//!
//! The \b lInt determines if and edge detection should cause and interrupt.
//! The paramter can be either \b IOC_INT_ENABLE or IOC_INT_DISABLE.
//!
//! The available edge detection modes are \b IOC_NO_EDGE, \b IOC_FALLING_EDGE,
//! \b IOC_RISING_EDGE or \b IOC_BOTH_EDGES.
//!
//! \return None
//
//*****************************************************************************
extern void IOCIOIntSet(uint32_t ui32IOId, uint32_t ui32Int, 
                        uint32_t ui32EdgeDet);

//*****************************************************************************
//
//! Set the pull on an IO port
//!
//! \param ui32IOId defines the IO to configure
//! \param ui32Pull enables/disables pull on this IO port.
//!
//! This function is used to configure the pull on an IO. The
//! \b ui32IOId must be one of the following \b IOID_0 ... \b IOID_31.
//!
//! The available pull configurations are \b IOC_NO_IOPULL, \b IOC_IOPULL_UP or
//! \b IOC_IOPULL_DOWN.
//!
//! \return None
//
//*****************************************************************************
extern void IOCIOPortPullSet(uint32_t ui32IOId, uint32_t ui32Pull);

//*****************************************************************************
//
//! Configure hysteresis on and IO port
//!
//! \param ui32IOId defines the IO to configure
//! \param ui32Hysteresis enable/disable input hysteresis on IO.
//!
//! This function is used to enable/disable hysteresis on an IO. The
//! \b ui32IOId must be one of the following \b IOID_0 ... \b IOID_31.
//!
//! It exptects \b IOC_HYST_ENABLE to enable and \b IOC_HYST_DISABLE to disable
//! hysteresis.
//!
//! \return None
//
//*****************************************************************************
extern void IOCIOHystSet(uint32_t ui32IOId, uint32_t ui32Hysteresis);

//*****************************************************************************
//
//! Enable/disable IO port as input
//!
//! \param ui32IOId defines the IO to configure
//! \param ui32Input enable/disable input on IO.
//!
//! This function is used to enable/disable input on an IO. The parameter
//! \b ui32IOId must be one of the following \b IOID_0 ... \b IOID_31.
//!
//! It exptects \b IOC_INPUT_ENABLE to enable and \b IOC_INPUT_DISABLE to
//! disable input.
//!
//! \return None
//
//*****************************************************************************
extern void IOCIOInputSet(uint32_t ui32IOId, uint32_t ui32Input);

//*****************************************************************************
//
//! Enable/disable the slew control on an IO port
//!
//! \param ui32IOId defines the IO to configure
//! \param ui32SlewEnable enables/disables the slew control on an output.
//!
//! This function is used to enable/disable slew control on an IO. The
//! \b ui32IOId must be one of the following \b IOID_0 ... \b IOID_31.
//!
//! It expects \b IOC_SLEW_ENABLE to enable and \b IOC_SLEW_DISABLE to disable
//! slew control.
//!
//! \return None
//
//*****************************************************************************
extern void IOCIOSlewCtrlSet(uint32_t ui32IOId, uint32_t ui32SlewEnable);

//*****************************************************************************
//
//! Configure the drive strength and maxium current of an IO port
//!
//! \param ui32IOId defines the IO to configure
//! \param ui32IOCurrent sets the IO current on the IO port.
//! \param ui32DrvStrength sets the drive strength for the IO port.
//!
//! This function sets the drive strength of an IO port. The available current
//! settings are \b IOC_CURRENT_2MA, \b IOC_CURRENT_4MA, \b IOC_CURRENT_8MA or
//! \b IOC_CURRENT_16MA.
//!
//! The drive strength settings are \b IOC_STRENGTH_AUTO, \b IOC_STRENGTH_MAX,
//! \b IOC_STRENGTH_MED or \b IOC_STRENGTH_MIN.
//!
//! \return None
//
//*****************************************************************************
extern void IOCIODrvStrengthSet(uint32_t ui32IOId, uint32_t ui32IOCurrent,
                                uint32_t ui32DrvStrength);

//*****************************************************************************
//
//! Setup the Port ID for this IO
//!
//! \param ui32IOId defines the IO to configure
//! \param ui32PortId selects the port to map to the IO.
//!
//! The \b ui32PortId specifies which functional perihperal to hook up to this
//! IO. The available IO ports are
//! \b IOC_PORT_GPIO, \b IOC_PORT_AON_SCS,
//! \b IOC_PORT_AON_SCK, \b IOC_PORT_AON_SDI,
//! \b IOC_PORT_AON_SDO, \b IOC_PORT_AON_TDI,
//!\b IOC_PORT_AON_TDO, \b IOC_PORT_AON_CLK32K,
//! \b IOC_PORT_AUX_IO, \b IOC_PORT_MCU_SSI0_RX,
//! \b IOC_PORT_MCU_SSI0_TX, \b IOC_PORT_MCU_SSI0_FSS,
//! \b IOC_PORT_MCU_SSI0_CLK, \b IOC_PORT_MCU_I2C_MSSDA,
//! \b IOC_PORT_MCU_I2C_MSSCL, \b IOC_PORT_MCU_UART0_RX
//! \b IOC_PORT_MCU_UART0_TX, \b IOC_PORT_MCU_UART0_CTS
//! \b IOC_PORT_MCU_UART0_RTS, \b IOC_PORT_MCU_UART1_RX
//! \b IOC_PORT_MCU_UART1_TX, \b IOC_PORT_MCU_UART1_CTS
//! \b IOC_PORT_MCU_UART1_RTS, \b IOC_PORT_MCU_TIMER0
//! \b IOC_PORT_MCU_TIMER1, \b IOC_PORT_MCU_TIMER2
//! \b IOC_PORT_MCU_TIMER3, \b IOC_PORT_MCU_TIMER4
//! \b IOC_PORT_MCU_TIMER5, \b IOC_PORT_MCU_TIMER6
//! \b IOC_PORT_MCU_TIMER7, \b IOC_PORT_RESERVED0
//! \b IOC_PORT_RESERVED1, \b IOC_PORT_MCU_SSI1_RX
//! \b IOC_PORT_MCU_SSI1_TX, \b IOC_PORT_MCU_SSI1_FSS
//! \b IOC_PORT_MCU_SSI1_CLK, \b IOC_PORT_MCU_I2S_AD0
//! \b IOC_PORT_MCU_I2S_AD1, \b IOC_PORT_MCU_I2S_AD2
//! \b IOC_PORT_MCU_I2S_WCLK, \b IOC_PORT_MCU_I2S_BCLK
//! \b IOC_PORT_MCU_IOC_OBS0, \b IOC_PORT_MCU_IOC_OBS1
//! \b IOC_PORT_MCU_IOC_OBS2, \b IOC_PORT_MCU_IOC_OBS3
//! \b IOC_PORT_RFC_TRC, \b IOC_PORT_RFC_GPO0
//! \b IOC_PORT_RFC_GPO1, \b IOC_PORT_RFC_GPO2
//! \b IOC_PORT_RFC_GPO3, \b IOC_PORT_RFC_GPI0
//! \b IOC_PORT_RFC_GPI1, \b IOC_PORT_RFC_SMI_DL_OUT,
//! \b IOC_PORT_RFC_SMI_DL_IN, \b IOC_PORT_RFC_SMI_CL_OUT,
//! \b IOC_PORT_RFC_SMI_CL_IN
//!
//! \return None
//
//*****************************************************************************
extern void IOCIOPortIdSet(uint32_t ui32IOId, uint32_t ui32PortId);

//*****************************************************************************
//
//! Register an interrupt handler for an IO edge interrupt
//!
//! \param pfnHandler is a pointer to the function to be called when the
//! IOC interrupt occurs.
//!
//! This function does the actual registering of the interrupt handler.  This
//! function enables the global interrupt in the interrupt controller; specific
//! IO interrupts must be enabled via IOCIntEnable(). It is the interrupt
//! handler's responsibility to clear the interrupt source.
//!
//! \sa IntRegister() for important information about registering interrupt
//! handlers.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
IOCIntRegister(void (*pfnHandler)(void))
{
    //
    // Register the interrupt handler.
    //
    IntRegister(INT_EDGE_DETECT, pfnHandler);

    //
    // Enable the IO edge interrupt.
    //
    IntEnable(INT_EDGE_DETECT);
}

//*****************************************************************************
//
//! Unregisters an interrupt handler for a IO edge interrupt
//!
//! This function does the actual unregistering of the interrupt handler.  It
//! clears the handler to be called when an IO edge interrupt occurs.
//!
//! \sa IntRegister() for important information about registering interrupt
//! handlers.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
IOCIntUnregister(void)
{
    //
    // Disable the interrupts.
    //
    IntDisable(INT_EDGE_DETECT);

    //
    // Unregister the interrupt handler.
    //
    IntUnregister(INT_EDGE_DETECT);
}

//*****************************************************************************
//
//! Enables individual IO edge detect interrupt
//!
//! \param ui32IOId is the IO to enable edge detect interrupt for.
//!
//! This function enables the indicated IO edge interrupt sources. Only the
//! sources that are enabled can be reflected to the processor interrupt;
//! disabled sources have no effect on the processor.
//!
//! \return None
//
//*****************************************************************************
extern void IOCIntEnable(uint32_t ui32IOId);

//*****************************************************************************
//
//! Disables individual IO edge interrupt sources
//!
//! \param ui32IOId is the IO edge interrupt source to be disabled.
//!
//! This function disables the indicated IO edge interrupt source. Only the
//! sources that are enabled can be reflected to the processor interrupt;
//! disabled sources have no effect on the processor.
//!
//! The \e ui32IOId parameter has the same definition as the \e ui32IOId
//! parameter to IOCIntEnable().
//!
//! \return None
//
//*****************************************************************************
extern void IOCIntDisable(uint32_t ui32IOId);

//*****************************************************************************
//
//! Clears the IO edge interrupt source
//!
//! \param ui32IOId is the IO causing the interrupt.
//!
//! The specified IO edge interrupt source is cleared, so that it no longer
//! assert. This function must be called in the interrupt handler to keep the
//! interrupt from being recognized again immediately upon exit.
//!
//! The \e ui32IOId parameter has the same definition as the \e ui32IOId
//! parameter to IOCIntEnable().
//!
//! \note Because there is a write buffer in the Cortex-M3 processor, it may
//! take several clock cycles before the interrupt source is actually cleared.
//! Therefore, it is recommended that the interrupt source be cleared early in
//! the interrupt handler (as opposed to the very last action) to avoid
//! returning from the interrupt handler before the interrupt source is
//! actually cleared. Failure to do so may result in the interrupt handler
//! being immediately reentered (because the interrupt controller still sees
//! the interrupt source asserted).
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
IOCIntClear(uint32_t ui32IOId)
{
    //
    // Check the arguments.
    //
    ASSERT(ui32IOId <= IOID_31);

    //
    // Clear the requested interrupt source by clearing the event.
    //
    GPIOEventClear(1 << ui32IOId);
}

//*****************************************************************************
//
//! Returns the status of the IO interrupts
//!
//! \param ui32IOId is the IO to get the status for.
//!
//! TBD : Please check with designer if IOC configuration bit
//! (IOC_IOCFG0_EDGE_IRQ_EN) works as a masking bit for the interrupt generation.
//! In other words will GPIO events always appear in the EVENT register in the GPIO module.
//!
//!
//! The \e ui32IOId parameter has the same definition as the \e ui32IOId
//! parameter to IOCIntEnable().
//!
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE uint32_t
IOCIntStatus(uint32_t ui32IOId)
{
    //
    // Check the arguments.
    //
    ASSERT(ui32IOId <= IOID_31);

    //
    // Clear the requested interrupt source by clearing the event.
    //
    return (GPIOEventGet(1 << ui32IOId));
}


//*****************************************************************************
//
//! Setup an IO for standard GPIO input
//!
//! \param ui32IOId is the IO to setup for GPIO input
//!
//! Long description
//!
//! \return None
//
//*****************************************************************************
extern void IOCPinTypeGpioInput(uint32_t ui32IOId);

//*****************************************************************************
//
//! Setup an IO for standard GPIO output
//!
//! \param ui32IOId is the IO to setup for GPIO output
//!
//! \return None
//
//*****************************************************************************
extern void IOCPinTypeGpioOutput(uint32_t ui32IOId);

//*****************************************************************************
//
//! Configure a set of IOs for standard UART peripheral control
//!
//! \param ui32Base is the base address of the UART module
//! \param ui32Rx is the IO Id of the IO to use as UART Receive
//! \param ui32Tx is the IO Id of the IO to use as UART Transmit
//! \param ui32Cts is the IO Id of the IO to use for UART Clear to send
//! \param ui32Rts is the IO Id of the IO to use for UART Request to send
//!
//! The UART pins must be properly configured for the UART peripheral to
//! function correctly. This function provides a typical configuration for
//! those pin(s). other configurations may work as well depending upon the
//! board setup (for example, using the on-chip pull-ups).
//!
//! Each of the UART pins are specified using the proper IO Id for that
//! specific UART pin. The IO Ids for the for parameters \b ui32Rx, \b ui32Tx,
//! \b ui32Cts and \b ui32Rts must be one of the following \b IOID_0 ...
//! \b IOID_31 or \b IOID_UNUSED.
//!
//! \note If a UART pin is not intended to be used, then the parameter in the
//! functions should be \b IOID_UNUSED.
//!
//! \return None
//
//*****************************************************************************
extern void IOCPinTypeUart(uint32_t ui32Base, uint32_t ui32Rx,
                           uint32_t ui32Tx, uint32_t ui32Cts,
                           uint32_t ui32Rts);

//*****************************************************************************
//
//! Configure a set of IOs for standard SSI peripheral master control
//!
//! \param ui32Base is the mase address of the SSI module to connect to the IOs
//! \param ui32Rx is the IO to connect to the SSI MISO line.
//! \param ui32Tx is the IO to connect to the SSI MOSI line.
//! \param ui32Fss is the IO to connect to the SSI FSS line.
//! \param ui32Clk is the IO to connect to the SSI Clock output line.
//!
//! \return None
//
//*****************************************************************************
extern void IOCPinTypeSsiMaster(uint32_t ui32Base, uint32_t ui32Rx,
                                uint32_t ui32Tx, uint32_t ui32Fss,
                                uint32_t ui32Clk);

//*****************************************************************************
//
//! Configure a set of IOs for standard SSI peripheral slave control
//!
//! \param ui32Base is the base address of the SSI module to connect to the IOs
//! \param ui32Rx is the IO to connect to the SSI MOSI line.
//! \param ui32Tx is the IO to connect to the SSI MISO line.
//! \param ui32Fss is the IO to connect to the SSI FSS line.
//! \param ui32Clk is the IO to connect to the SSI Clock input line.
//!
//! \return None
//
//*****************************************************************************
extern void IOCPinTypeSsiSlave(uint32_t ui32Base, uint32_t ui32Rx,
                               uint32_t ui32Tx, uint32_t ui32Fss,
                               uint32_t ui32Clk);

//*****************************************************************************
//
//! Configure a set of IOs for standard I2C peripheral control
//!
//! \param ui32Base is the base address of the I2C module to connect to the IOs
//! \param ui32Data is the I2C data line
//! \param ui32Clk is the I2C input clock
//!
//! \return None
//
//*****************************************************************************
extern void IOCPinTypeI2c(uint32_t ui32Base, uint32_t ui32Data,
                          uint32_t ui32Clk);

//*****************************************************************************
//
//! Configure a set of IOs for standard SPIS peripheral control
//!
//! \param ui32Rx is the IO to connect to the SPIs MOSI line.
//! \param ui32Tx is the IO to connect to the SPIS MISO line.
//! \param ui32Fss is the IO to connect to the SPIS FSS line.
//! \param ui32Clk is the IO to connect to the SPIS Clock input line.
//!
//! \return None
//
//*****************************************************************************
extern void IOCPinTypeSpis(uint32_t ui32Rx, uint32_t ui32Tx, uint32_t ui32Fss,
                           uint32_t ui32Clk);

//*****************************************************************************
//
//! Configure an IO for AUX control
//!
//! \param ui32IOId is the IO to setup for AUX usage.
//!
//! Use this function to enable AUX to control a specific IO. Please note, that
//! when using AUX to control the IO, the input/output control in the IOC is
//! bypassed and completely controlled by AUX, so enabling or disabling input
//! in the IOC has no effect.
//!
//! \note The IOs available for AUX control various with devices.
//!
//! \return None
//
//*****************************************************************************
extern void IOCPinTypeAux(uint32_t ui32IOId);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __IOC_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
