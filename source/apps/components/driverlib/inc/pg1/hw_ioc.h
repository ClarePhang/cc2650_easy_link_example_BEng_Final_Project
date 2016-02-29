
/******************************************************************************
*  Filename:       hw_ioc.h
*  Revised:        $Date: 2014-03-13 14:29:16 +0100 (to, 13 mar 2014) $
*  Revision:       $Revision: 40389 $
*
*  Description:    Template file for driverlib headers.
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
#ifndef __HW_IOC_H__
#define __HW_IOC_H__

//*****************************************************************************
//
// The following are defines for the IOC register offsets.
//
//*****************************************************************************
#define IOC_O_IOCFG0            0x00000000  // Configuration of IO(#N) 
#define IOC_O_IOCFG1            0x00000004  // Configuration of IO(#N) 
#define IOC_O_IOCFG2            0x00000008  // Configuration of IO(#N) 
#define IOC_O_IOCFG3            0x0000000C  // Configuration of IO(#N) 
#define IOC_O_IOCFG4            0x00000010  // Configuration of IO(#N) 
#define IOC_O_IOCFG5            0x00000014  // Configuration of IO(#N) 
#define IOC_O_IOCFG6            0x00000018  // Configuration of IO(#N) 
#define IOC_O_IOCFG7            0x0000001C  // Configuration of IO(#N) 
#define IOC_O_IOCFG8            0x00000020  // Configuration of IO(#N) 
#define IOC_O_IOCFG9            0x00000024  // Configuration of IO(#N) 
#define IOC_O_IOCFG10           0x00000028  // Configuration of IO(#N) 
#define IOC_O_IOCFG11           0x0000002C  // Configuration of IO(#N) 
#define IOC_O_IOCFG12           0x00000030  // Configuration of IO(#N) 
#define IOC_O_IOCFG13           0x00000034  // Configuration of IO(#N) 
#define IOC_O_IOCFG14           0x00000038  // Configuration of IO(#N) 
#define IOC_O_IOCFG15           0x0000003C  // Configuration of IO(#N) 
#define IOC_O_IOCFG16           0x00000040  // Configuration of IO(#N) 
#define IOC_O_IOCFG17           0x00000044  // Configuration of IO(#N) 
#define IOC_O_IOCFG18           0x00000048  // Configuration of IO(#N) 
#define IOC_O_IOCFG19           0x0000004C  // Configuration of IO(#N) 
#define IOC_O_IOCFG20           0x00000050  // Configuration of IO(#N) 
#define IOC_O_IOCFG21           0x00000054  // Configuration of IO(#N) 
#define IOC_O_IOCFG22           0x00000058  // Configuration of IO(#N) 
#define IOC_O_IOCFG23           0x0000005C  // Configuration of IO(#N) 
#define IOC_O_IOCFG24           0x00000060  // Configuration of IO(#N) 
#define IOC_O_IOCFG25           0x00000064  // Configuration of IO(#N) 
#define IOC_O_IOCFG26           0x00000068  // Configuration of IO(#N) 
#define IOC_O_IOCFG27           0x0000006C  // Configuration of IO(#N) 
#define IOC_O_IOCFG28           0x00000070  // Configuration of IO(#N) 
#define IOC_O_IOCFG29           0x00000074  // Configuration of IO(#N) 
#define IOC_O_IOCFG30           0x00000078  // Configuration of IO(#N) 
#define IOC_O_IOCFG31           0x0000007C  // Configuration of IO(#N) 
#define IOC_O_OBSDOMAIN         0x00000400  // Domain Configuration of 
                                            // Observation MUX 
#define IOC_O_OBSCLKDIV         0x00000404  // Clock configuration of 
                                            // observation MUX 
#define IOC_O_OBSIOMASK         0x00000408  // Mask configuration for 
                                            // observation MUX 
#define IOC_O_OBSAUXOUTPUT      0x0000040C  // Configuration of observation 
                                            // output to AUX 
#define IOC_O_OBSSUBDOMAIN      0x00000410  // Sub domain configuration of 
                                            // observation MUX 
#define IOC_O_OBSMCUDOMAIN      0x00000414  // Configuration of the final 
                                            // stage of observation MUX in MCU 
                                            // domain 
#define IOC_O_OBSMCUMODBUS      0x00000418  // Configuration of bus vector 
                                            // observation MUX inside chosen 
                                            // MCU submodule. 
#define IOC_O_OBSMCUMODDISC0    0x0000041C  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC1    0x00000420  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC2    0x00000424  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC3    0x00000428  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC4    0x0000042C  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC5    0x00000430  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC6    0x00000434  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC7    0x00000438  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC8    0x0000043C  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC9    0x00000440  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC10   0x00000444  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC11   0x00000448  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC12   0x0000044C  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC13   0x00000450  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC14   0x00000454  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC15   0x00000458  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC16   0x0000045C  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC17   0x00000460  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC18   0x00000464  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC19   0x00000468  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC20   0x0000046C  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC21   0x00000470  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC22   0x00000474  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC23   0x00000478  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC24   0x0000047C  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC25   0x00000480  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC26   0x00000484  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC27   0x00000488  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC28   0x0000048C  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC29   0x00000490  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC30   0x00000494  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 
#define IOC_O_OBSMCUMODDISC31   0x00000498  // Configuration of discrete 
                                            // vector observation MUX inside 
                                            // chosen MCU submodule. 


//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG0 register.
//
//*****************************************************************************
#define IOC_IOCFG0_HYST_EN      0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG0_HYST_EN_M    0x40000000
#define IOC_IOCFG0_HYST_EN_S    30
#define IOC_IOCFG0_IE           0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG0_IE_M         0x20000000
#define IOC_IOCFG0_IE_S         29
#define IOC_IOCFG0_WU_CFG_M     0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not: 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG0_WU_CFG_S     27
#define IOC_IOCFG0_IOMODE_M     0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG0_IOMODE_S     24
#define IOC_IOCFG0_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG0_IOMODE_INV   0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG0_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG0_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG0_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG0_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG0_TDI          0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG0_TDI_M        0x00100000
#define IOC_IOCFG0_TDI_S        20
#define IOC_IOCFG0_TDO          0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG0_TDO_M        0x00080000
#define IOC_IOCFG0_TDO_S        19
#define IOC_IOCFG0_EDGE_IRQ_EN  0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG0_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG0_EDGE_IRQ_EN_S 18
#define IOC_IOCFG0_EDGE_DET_M   0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG0_EDGE_DET_S   16
#define IOC_IOCFG0_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG0_EDGE_DET_NEG 0x00010000  // Negative edge detection 
#define IOC_IOCFG0_EDGE_DET_POS 0x00020000  // Positive edge detection 
#define IOC_IOCFG0_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG0_PULL_CTL_M   0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG0_PULL_CTL_S   13
#define IOC_IOCFG0_PULL_CTL_DWN 0x00002000  // Pull down 
#define IOC_IOCFG0_PULL_CTL_UP  0x00004000  // Pull up 
#define IOC_IOCFG0_PULL_CTL_DIS 0x00006000  // No pull 
#define IOC_IOCFG0_SLEW_RED     0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG0_SLEW_RED_M   0x00001000
#define IOC_IOCFG0_SLEW_RED_S   12
#define IOC_IOCFG0_IOCURR_M     0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG0_IOCURR_S     10
#define IOC_IOCFG0_IOCURR_2MA   0x00000000  // 2mA 
#define IOC_IOCFG0_IOCURR_4MA   0x00000400  // 4mA 
#define IOC_IOCFG0_IOCURR_4P8MA 0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG0_IOCURR_16MA  0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG0_IOSTR_M      0x00000300  // Select drive strength IO 
#define IOC_IOCFG0_IOSTR_S      8
#define IOC_IOCFG0_IOSTR_AUTO   0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG0_IOSTR_MIN    0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG0_IOSTR_MED    0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG0_IOSTR_MAX    0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG0_PORT_ID_M    0x0000003F  // Selects usage for IO 
#define IOC_IOCFG0_PORT_ID_S    0
#define IOC_IOCFG0_PORT_ID_GPIO 0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG0_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG0_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG0_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG0_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG0_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG0_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG0_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG0_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG0_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG0_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG0_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG0_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG0_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG0_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG0_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG0_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG0_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG0_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG0_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG0_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG0_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG0_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG0_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG0_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG0_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG0_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG0_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG0_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG0_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG0_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG0_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG0_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG0_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG0_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG0_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG0_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG0_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG0_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG0_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG0_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG0_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG0_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG0_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG0_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG0_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG1 register.
//
//*****************************************************************************
#define IOC_IOCFG1_HYST_EN      0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG1_HYST_EN_M    0x40000000
#define IOC_IOCFG1_HYST_EN_S    30
#define IOC_IOCFG1_IE           0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG1_IE_M         0x20000000
#define IOC_IOCFG1_IE_S         29
#define IOC_IOCFG1_WU_CFG_M     0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG1_WU_CFG_S     27
#define IOC_IOCFG1_IOMODE_M     0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG1_IOMODE_S     24
#define IOC_IOCFG1_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG1_IOMODE_INV   0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG1_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG1_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG1_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG1_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG1_TDI          0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG1_TDI_M        0x00100000
#define IOC_IOCFG1_TDI_S        20
#define IOC_IOCFG1_TDO          0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG1_TDO_M        0x00080000
#define IOC_IOCFG1_TDO_S        19
#define IOC_IOCFG1_EDGE_IRQ_EN  0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG1_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG1_EDGE_IRQ_EN_S 18
#define IOC_IOCFG1_EDGE_DET_M   0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG1_EDGE_DET_S   16
#define IOC_IOCFG1_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG1_EDGE_DET_NEG 0x00010000  // Negative edge detection 
#define IOC_IOCFG1_EDGE_DET_POS 0x00020000  // Positive edge detection 
#define IOC_IOCFG1_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG1_PULL_CTL_M   0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG1_PULL_CTL_S   13
#define IOC_IOCFG1_PULL_CTL_DWN 0x00002000  // Pull down 
#define IOC_IOCFG1_PULL_CTL_UP  0x00004000  // Pull up 
#define IOC_IOCFG1_PULL_CTL_DIS 0x00006000  // No pull 
#define IOC_IOCFG1_SLEW_RED     0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG1_SLEW_RED_M   0x00001000
#define IOC_IOCFG1_SLEW_RED_S   12
#define IOC_IOCFG1_IOCURR_M     0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG1_IOCURR_S     10
#define IOC_IOCFG1_IOCURR_2MA   0x00000000  // 2mA 
#define IOC_IOCFG1_IOCURR_4MA   0x00000400  // 4mA 
#define IOC_IOCFG1_IOCURR_4P8MA 0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG1_IOCURR_16MA  0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG1_IOSTR_M      0x00000300  // Select drive strength IO 
#define IOC_IOCFG1_IOSTR_S      8
#define IOC_IOCFG1_IOSTR_AUTO   0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG1_IOSTR_MIN    0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG1_IOSTR_MED    0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG1_IOSTR_MAX    0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG1_PORT_ID_M    0x0000003F  // Selects usage for IO 
#define IOC_IOCFG1_PORT_ID_S    0
#define IOC_IOCFG1_PORT_ID_GPIO 0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG1_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG1_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG1_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG1_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG1_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG1_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG1_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG1_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG1_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG1_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG1_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG1_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG1_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG1_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG1_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG1_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG1_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG1_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG1_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG1_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG1_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG1_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG1_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG1_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG1_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG1_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG1_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG1_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG1_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG1_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG1_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG1_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG1_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG1_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG1_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG1_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG1_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG1_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG1_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG1_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG1_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG1_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG1_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG1_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG1_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG2 register.
//
//*****************************************************************************
#define IOC_IOCFG2_HYST_EN      0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG2_HYST_EN_M    0x40000000
#define IOC_IOCFG2_HYST_EN_S    30
#define IOC_IOCFG2_IE           0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG2_IE_M         0x20000000
#define IOC_IOCFG2_IE_S         29
#define IOC_IOCFG2_WU_CFG_M     0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG2_WU_CFG_S     27
#define IOC_IOCFG2_IOMODE_M     0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG2_IOMODE_S     24
#define IOC_IOCFG2_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG2_IOMODE_INV   0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG2_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG2_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG2_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG2_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG2_TDI          0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG2_TDI_M        0x00100000
#define IOC_IOCFG2_TDI_S        20
#define IOC_IOCFG2_TDO          0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG2_TDO_M        0x00080000
#define IOC_IOCFG2_TDO_S        19
#define IOC_IOCFG2_EDGE_IRQ_EN  0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG2_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG2_EDGE_IRQ_EN_S 18
#define IOC_IOCFG2_EDGE_DET_M   0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG2_EDGE_DET_S   16
#define IOC_IOCFG2_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG2_EDGE_DET_NEG 0x00010000  // Negative edge detection 
#define IOC_IOCFG2_EDGE_DET_POS 0x00020000  // Positive edge detection 
#define IOC_IOCFG2_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG2_PULL_CTL_M   0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG2_PULL_CTL_S   13
#define IOC_IOCFG2_PULL_CTL_DWN 0x00002000  // Pull down 
#define IOC_IOCFG2_PULL_CTL_UP  0x00004000  // Pull up 
#define IOC_IOCFG2_PULL_CTL_DIS 0x00006000  // No pull 
#define IOC_IOCFG2_SLEW_RED     0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG2_SLEW_RED_M   0x00001000
#define IOC_IOCFG2_SLEW_RED_S   12
#define IOC_IOCFG2_IOCURR_M     0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG2_IOCURR_S     10
#define IOC_IOCFG2_IOCURR_2MA   0x00000000  // 2mA 
#define IOC_IOCFG2_IOCURR_4MA   0x00000400  // 4mA 
#define IOC_IOCFG2_IOCURR_4P8MA 0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG2_IOCURR_16MA  0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG2_IOSTR_M      0x00000300  // Select drive strength IO 
#define IOC_IOCFG2_IOSTR_S      8
#define IOC_IOCFG2_IOSTR_AUTO   0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG2_IOSTR_MIN    0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG2_IOSTR_MED    0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG2_IOSTR_MAX    0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG2_PORT_ID_M    0x0000003F  // Selects usage for IO 
#define IOC_IOCFG2_PORT_ID_S    0
#define IOC_IOCFG2_PORT_ID_GPIO 0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG2_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG2_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG2_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG2_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG2_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG2_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG2_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG2_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG2_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG2_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG2_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG2_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG2_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG2_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG2_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG2_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG2_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG2_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG2_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG2_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG2_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG2_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG2_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG2_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG2_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG2_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG2_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG2_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG2_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG2_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG2_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG2_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG2_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG2_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG2_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG2_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG2_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG2_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG2_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG2_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG2_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG2_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG2_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG2_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG2_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG3 register.
//
//*****************************************************************************
#define IOC_IOCFG3_HYST_EN      0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG3_HYST_EN_M    0x40000000
#define IOC_IOCFG3_HYST_EN_S    30
#define IOC_IOCFG3_IE           0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG3_IE_M         0x20000000
#define IOC_IOCFG3_IE_S         29
#define IOC_IOCFG3_WU_CFG_M     0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG3_WU_CFG_S     27
#define IOC_IOCFG3_IOMODE_M     0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG3_IOMODE_S     24
#define IOC_IOCFG3_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG3_IOMODE_INV   0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG3_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG3_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG3_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG3_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG3_TDI          0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG3_TDI_M        0x00100000
#define IOC_IOCFG3_TDI_S        20
#define IOC_IOCFG3_TDO          0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG3_TDO_M        0x00080000
#define IOC_IOCFG3_TDO_S        19
#define IOC_IOCFG3_EDGE_IRQ_EN  0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG3_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG3_EDGE_IRQ_EN_S 18
#define IOC_IOCFG3_EDGE_DET_M   0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG3_EDGE_DET_S   16
#define IOC_IOCFG3_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG3_EDGE_DET_NEG 0x00010000  // Negative edge detection 
#define IOC_IOCFG3_EDGE_DET_POS 0x00020000  // Positive edge detection 
#define IOC_IOCFG3_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG3_PULL_CTL_M   0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG3_PULL_CTL_S   13
#define IOC_IOCFG3_PULL_CTL_DWN 0x00002000  // Pull down 
#define IOC_IOCFG3_PULL_CTL_UP  0x00004000  // Pull up 
#define IOC_IOCFG3_PULL_CTL_DIS 0x00006000  // No pull 
#define IOC_IOCFG3_SLEW_RED     0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG3_SLEW_RED_M   0x00001000
#define IOC_IOCFG3_SLEW_RED_S   12
#define IOC_IOCFG3_IOCURR_M     0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG3_IOCURR_S     10
#define IOC_IOCFG3_IOCURR_2MA   0x00000000  // 2mA 
#define IOC_IOCFG3_IOCURR_4MA   0x00000400  // 4mA 
#define IOC_IOCFG3_IOCURR_4P8MA 0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG3_IOCURR_16MA  0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG3_IOSTR_M      0x00000300  // Select drive strength IO 
#define IOC_IOCFG3_IOSTR_S      8
#define IOC_IOCFG3_IOSTR_AUTO   0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG3_IOSTR_MIN    0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG3_IOSTR_MED    0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG3_IOSTR_MAX    0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG3_PORT_ID_M    0x0000003F  // Selects usage for IO 
#define IOC_IOCFG3_PORT_ID_S    0
#define IOC_IOCFG3_PORT_ID_GPIO 0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG3_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG3_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG3_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG3_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG3_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG3_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG3_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG3_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG3_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG3_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG3_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG3_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG3_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG3_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG3_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG3_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG3_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG3_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG3_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG3_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG3_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG3_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG3_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG3_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG3_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG3_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG3_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG3_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG3_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG3_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG3_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG3_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG3_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG3_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG3_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG3_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG3_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG3_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG3_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG3_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG3_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG3_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG3_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG3_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG3_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG4 register.
//
//*****************************************************************************
#define IOC_IOCFG4_HYST_EN      0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG4_HYST_EN_M    0x40000000
#define IOC_IOCFG4_HYST_EN_S    30
#define IOC_IOCFG4_IE           0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG4_IE_M         0x20000000
#define IOC_IOCFG4_IE_S         29
#define IOC_IOCFG4_WU_CFG_M     0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG4_WU_CFG_S     27
#define IOC_IOCFG4_IOMODE_M     0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG4_IOMODE_S     24
#define IOC_IOCFG4_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG4_IOMODE_INV   0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG4_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG4_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG4_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG4_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG4_TDI          0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG4_TDI_M        0x00100000
#define IOC_IOCFG4_TDI_S        20
#define IOC_IOCFG4_TDO          0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG4_TDO_M        0x00080000
#define IOC_IOCFG4_TDO_S        19
#define IOC_IOCFG4_EDGE_IRQ_EN  0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG4_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG4_EDGE_IRQ_EN_S 18
#define IOC_IOCFG4_EDGE_DET_M   0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG4_EDGE_DET_S   16
#define IOC_IOCFG4_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG4_EDGE_DET_NEG 0x00010000  // Negative edge detection 
#define IOC_IOCFG4_EDGE_DET_POS 0x00020000  // Positive edge detection 
#define IOC_IOCFG4_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG4_PULL_CTL_M   0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG4_PULL_CTL_S   13
#define IOC_IOCFG4_PULL_CTL_DWN 0x00002000  // Pull down 
#define IOC_IOCFG4_PULL_CTL_UP  0x00004000  // Pull up 
#define IOC_IOCFG4_PULL_CTL_DIS 0x00006000  // No pull 
#define IOC_IOCFG4_SLEW_RED     0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG4_SLEW_RED_M   0x00001000
#define IOC_IOCFG4_SLEW_RED_S   12
#define IOC_IOCFG4_IOCURR_M     0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG4_IOCURR_S     10
#define IOC_IOCFG4_IOCURR_2MA   0x00000000  // 2mA 
#define IOC_IOCFG4_IOCURR_4MA   0x00000400  // 4mA 
#define IOC_IOCFG4_IOCURR_4P8MA 0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG4_IOCURR_16MA  0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG4_IOSTR_M      0x00000300  // Select drive strength IO 
#define IOC_IOCFG4_IOSTR_S      8
#define IOC_IOCFG4_IOSTR_AUTO   0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG4_IOSTR_MIN    0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG4_IOSTR_MED    0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG4_IOSTR_MAX    0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG4_PORT_ID_M    0x0000003F  // Selects usage for IO 
#define IOC_IOCFG4_PORT_ID_S    0
#define IOC_IOCFG4_PORT_ID_GPIO 0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG4_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG4_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG4_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG4_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG4_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG4_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG4_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG4_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG4_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG4_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG4_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG4_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG4_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG4_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG4_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG4_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG4_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG4_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG4_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG4_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG4_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG4_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG4_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG4_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG4_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG4_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG4_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG4_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG4_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG4_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG4_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG4_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG4_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG4_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG4_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG4_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG4_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG4_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG4_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG4_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG4_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG4_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG4_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG4_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG4_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG5 register.
//
//*****************************************************************************
#define IOC_IOCFG5_HYST_EN      0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG5_HYST_EN_M    0x40000000
#define IOC_IOCFG5_HYST_EN_S    30
#define IOC_IOCFG5_IE           0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG5_IE_M         0x20000000
#define IOC_IOCFG5_IE_S         29
#define IOC_IOCFG5_WU_CFG_M     0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG5_WU_CFG_S     27
#define IOC_IOCFG5_IOMODE_M     0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG5_IOMODE_S     24
#define IOC_IOCFG5_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG5_IOMODE_INV   0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG5_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG5_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG5_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG5_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG5_TDI          0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG5_TDI_M        0x00100000
#define IOC_IOCFG5_TDI_S        20
#define IOC_IOCFG5_TDO          0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG5_TDO_M        0x00080000
#define IOC_IOCFG5_TDO_S        19
#define IOC_IOCFG5_EDGE_IRQ_EN  0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG5_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG5_EDGE_IRQ_EN_S 18
#define IOC_IOCFG5_EDGE_DET_M   0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG5_EDGE_DET_S   16
#define IOC_IOCFG5_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG5_EDGE_DET_NEG 0x00010000  // Negative edge detection 
#define IOC_IOCFG5_EDGE_DET_POS 0x00020000  // Positive edge detection 
#define IOC_IOCFG5_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG5_PULL_CTL_M   0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG5_PULL_CTL_S   13
#define IOC_IOCFG5_PULL_CTL_DWN 0x00002000  // Pull down 
#define IOC_IOCFG5_PULL_CTL_UP  0x00004000  // Pull up 
#define IOC_IOCFG5_PULL_CTL_DIS 0x00006000  // No pull 
#define IOC_IOCFG5_SLEW_RED     0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG5_SLEW_RED_M   0x00001000
#define IOC_IOCFG5_SLEW_RED_S   12
#define IOC_IOCFG5_IOCURR_M     0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG5_IOCURR_S     10
#define IOC_IOCFG5_IOCURR_2MA   0x00000000  // 2mA 
#define IOC_IOCFG5_IOCURR_4MA   0x00000400  // 4mA 
#define IOC_IOCFG5_IOCURR_4P8MA 0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG5_IOCURR_16MA  0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG5_IOSTR_M      0x00000300  // Select drive strength IO 
#define IOC_IOCFG5_IOSTR_S      8
#define IOC_IOCFG5_IOSTR_AUTO   0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG5_IOSTR_MIN    0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG5_IOSTR_MED    0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG5_IOSTR_MAX    0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG5_PORT_ID_M    0x0000003F  // Selects usage for IO 
#define IOC_IOCFG5_PORT_ID_S    0
#define IOC_IOCFG5_PORT_ID_GPIO 0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG5_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG5_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG5_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG5_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG5_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG5_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG5_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG5_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG5_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG5_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG5_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG5_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG5_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG5_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG5_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG5_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG5_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG5_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG5_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG5_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG5_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG5_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG5_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG5_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG5_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG5_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG5_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG5_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG5_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG5_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG5_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG5_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG5_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG5_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG5_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG5_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG5_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG5_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG5_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG5_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG5_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG5_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG5_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG5_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG5_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG6 register.
//
//*****************************************************************************
#define IOC_IOCFG6_HYST_EN      0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG6_HYST_EN_M    0x40000000
#define IOC_IOCFG6_HYST_EN_S    30
#define IOC_IOCFG6_IE           0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG6_IE_M         0x20000000
#define IOC_IOCFG6_IE_S         29
#define IOC_IOCFG6_WU_CFG_M     0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG6_WU_CFG_S     27
#define IOC_IOCFG6_IOMODE_M     0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG6_IOMODE_S     24
#define IOC_IOCFG6_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG6_IOMODE_INV   0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG6_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG6_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG6_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG6_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG6_TDI          0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG6_TDI_M        0x00100000
#define IOC_IOCFG6_TDI_S        20
#define IOC_IOCFG6_TDO          0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG6_TDO_M        0x00080000
#define IOC_IOCFG6_TDO_S        19
#define IOC_IOCFG6_EDGE_IRQ_EN  0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG6_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG6_EDGE_IRQ_EN_S 18
#define IOC_IOCFG6_EDGE_DET_M   0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG6_EDGE_DET_S   16
#define IOC_IOCFG6_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG6_EDGE_DET_NEG 0x00010000  // Negative edge detection 
#define IOC_IOCFG6_EDGE_DET_POS 0x00020000  // Positive edge detection 
#define IOC_IOCFG6_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG6_PULL_CTL_M   0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG6_PULL_CTL_S   13
#define IOC_IOCFG6_PULL_CTL_DWN 0x00002000  // Pull down 
#define IOC_IOCFG6_PULL_CTL_UP  0x00004000  // Pull up 
#define IOC_IOCFG6_PULL_CTL_DIS 0x00006000  // No pull 
#define IOC_IOCFG6_SLEW_RED     0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG6_SLEW_RED_M   0x00001000
#define IOC_IOCFG6_SLEW_RED_S   12
#define IOC_IOCFG6_IOCURR_M     0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG6_IOCURR_S     10
#define IOC_IOCFG6_IOCURR_2MA   0x00000000  // 2mA 
#define IOC_IOCFG6_IOCURR_4MA   0x00000400  // 4mA 
#define IOC_IOCFG6_IOCURR_4P8MA 0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG6_IOCURR_16MA  0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG6_IOSTR_M      0x00000300  // Select drive strength IO 
#define IOC_IOCFG6_IOSTR_S      8
#define IOC_IOCFG6_IOSTR_AUTO   0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG6_IOSTR_MIN    0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG6_IOSTR_MED    0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG6_IOSTR_MAX    0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG6_PORT_ID_M    0x0000003F  // Selects usage for IO 
#define IOC_IOCFG6_PORT_ID_S    0
#define IOC_IOCFG6_PORT_ID_GPIO 0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG6_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG6_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG6_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG6_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG6_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG6_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG6_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG6_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG6_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG6_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG6_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG6_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG6_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG6_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG6_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG6_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG6_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG6_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG6_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG6_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG6_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG6_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG6_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG6_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG6_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG6_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG6_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG6_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG6_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG6_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG6_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG6_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG6_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG6_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG6_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG6_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG6_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG6_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG6_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG6_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG6_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG6_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG6_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG6_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG6_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG7 register.
//
//*****************************************************************************
#define IOC_IOCFG7_HYST_EN      0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG7_HYST_EN_M    0x40000000
#define IOC_IOCFG7_HYST_EN_S    30
#define IOC_IOCFG7_IE           0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG7_IE_M         0x20000000
#define IOC_IOCFG7_IE_S         29
#define IOC_IOCFG7_WU_CFG_M     0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG7_WU_CFG_S     27
#define IOC_IOCFG7_IOMODE_M     0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG7_IOMODE_S     24
#define IOC_IOCFG7_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG7_IOMODE_INV   0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG7_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG7_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG7_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG7_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG7_TDI          0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG7_TDI_M        0x00100000
#define IOC_IOCFG7_TDI_S        20
#define IOC_IOCFG7_TDO          0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG7_TDO_M        0x00080000
#define IOC_IOCFG7_TDO_S        19
#define IOC_IOCFG7_EDGE_IRQ_EN  0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG7_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG7_EDGE_IRQ_EN_S 18
#define IOC_IOCFG7_EDGE_DET_M   0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG7_EDGE_DET_S   16
#define IOC_IOCFG7_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG7_EDGE_DET_NEG 0x00010000  // Negative edge detection 
#define IOC_IOCFG7_EDGE_DET_POS 0x00020000  // Positive edge detection 
#define IOC_IOCFG7_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG7_PULL_CTL_M   0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG7_PULL_CTL_S   13
#define IOC_IOCFG7_PULL_CTL_DWN 0x00002000  // Pull down 
#define IOC_IOCFG7_PULL_CTL_UP  0x00004000  // Pull up 
#define IOC_IOCFG7_PULL_CTL_DIS 0x00006000  // No pull 
#define IOC_IOCFG7_SLEW_RED     0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG7_SLEW_RED_M   0x00001000
#define IOC_IOCFG7_SLEW_RED_S   12
#define IOC_IOCFG7_IOCURR_M     0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG7_IOCURR_S     10
#define IOC_IOCFG7_IOCURR_2MA   0x00000000  // 2mA 
#define IOC_IOCFG7_IOCURR_4MA   0x00000400  // 4mA 
#define IOC_IOCFG7_IOCURR_4P8MA 0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG7_IOCURR_16MA  0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG7_IOSTR_M      0x00000300  // Select drive strength IO 
#define IOC_IOCFG7_IOSTR_S      8
#define IOC_IOCFG7_IOSTR_AUTO   0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG7_IOSTR_MIN    0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG7_IOSTR_MED    0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG7_IOSTR_MAX    0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG7_PORT_ID_M    0x0000003F  // Selects usage for IO 
#define IOC_IOCFG7_PORT_ID_S    0
#define IOC_IOCFG7_PORT_ID_GPIO 0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG7_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG7_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG7_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG7_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG7_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG7_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG7_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG7_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG7_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG7_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG7_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG7_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG7_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG7_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG7_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG7_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG7_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG7_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG7_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG7_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG7_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG7_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG7_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG7_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG7_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG7_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG7_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG7_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG7_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG7_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG7_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG7_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG7_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG7_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG7_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG7_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG7_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG7_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG7_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG7_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG7_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG7_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG7_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG7_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG7_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG8 register.
//
//*****************************************************************************
#define IOC_IOCFG8_HYST_EN      0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG8_HYST_EN_M    0x40000000
#define IOC_IOCFG8_HYST_EN_S    30
#define IOC_IOCFG8_IE           0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG8_IE_M         0x20000000
#define IOC_IOCFG8_IE_S         29
#define IOC_IOCFG8_WU_CFG_M     0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG8_WU_CFG_S     27
#define IOC_IOCFG8_IOMODE_M     0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG8_IOMODE_S     24
#define IOC_IOCFG8_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG8_IOMODE_INV   0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG8_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG8_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG8_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG8_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG8_TDI          0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG8_TDI_M        0x00100000
#define IOC_IOCFG8_TDI_S        20
#define IOC_IOCFG8_TDO          0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG8_TDO_M        0x00080000
#define IOC_IOCFG8_TDO_S        19
#define IOC_IOCFG8_EDGE_IRQ_EN  0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG8_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG8_EDGE_IRQ_EN_S 18
#define IOC_IOCFG8_EDGE_DET_M   0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG8_EDGE_DET_S   16
#define IOC_IOCFG8_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG8_EDGE_DET_NEG 0x00010000  // Negative edge detection 
#define IOC_IOCFG8_EDGE_DET_POS 0x00020000  // Positive edge detection 
#define IOC_IOCFG8_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG8_PULL_CTL_M   0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG8_PULL_CTL_S   13
#define IOC_IOCFG8_PULL_CTL_DWN 0x00002000  // Pull down 
#define IOC_IOCFG8_PULL_CTL_UP  0x00004000  // Pull up 
#define IOC_IOCFG8_PULL_CTL_DIS 0x00006000  // No pull 
#define IOC_IOCFG8_SLEW_RED     0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG8_SLEW_RED_M   0x00001000
#define IOC_IOCFG8_SLEW_RED_S   12
#define IOC_IOCFG8_IOCURR_M     0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG8_IOCURR_S     10
#define IOC_IOCFG8_IOCURR_2MA   0x00000000  // 2mA 
#define IOC_IOCFG8_IOCURR_4MA   0x00000400  // 4mA 
#define IOC_IOCFG8_IOCURR_4P8MA 0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG8_IOCURR_16MA  0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG8_IOSTR_M      0x00000300  // Select drive strength IO 
#define IOC_IOCFG8_IOSTR_S      8
#define IOC_IOCFG8_IOSTR_AUTO   0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG8_IOSTR_MIN    0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG8_IOSTR_MED    0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG8_IOSTR_MAX    0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG8_PORT_ID_M    0x0000003F  // Selects usage for IO 
#define IOC_IOCFG8_PORT_ID_S    0
#define IOC_IOCFG8_PORT_ID_GPIO 0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG8_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG8_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG8_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG8_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG8_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG8_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG8_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG8_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG8_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG8_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG8_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG8_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG8_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG8_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG8_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG8_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG8_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG8_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG8_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG8_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG8_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG8_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG8_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG8_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG8_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG8_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG8_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG8_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG8_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG8_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG8_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG8_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG8_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG8_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG8_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG8_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG8_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG8_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG8_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG8_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG8_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG8_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG8_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG8_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG8_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG9 register.
//
//*****************************************************************************
#define IOC_IOCFG9_HYST_EN      0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG9_HYST_EN_M    0x40000000
#define IOC_IOCFG9_HYST_EN_S    30
#define IOC_IOCFG9_IE           0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG9_IE_M         0x20000000
#define IOC_IOCFG9_IE_S         29
#define IOC_IOCFG9_WU_CFG_M     0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG9_WU_CFG_S     27
#define IOC_IOCFG9_IOMODE_M     0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG9_IOMODE_S     24
#define IOC_IOCFG9_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG9_IOMODE_INV   0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG9_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG9_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG9_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG9_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG9_TDI          0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG9_TDI_M        0x00100000
#define IOC_IOCFG9_TDI_S        20
#define IOC_IOCFG9_TDO          0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG9_TDO_M        0x00080000
#define IOC_IOCFG9_TDO_S        19
#define IOC_IOCFG9_EDGE_IRQ_EN  0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG9_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG9_EDGE_IRQ_EN_S 18
#define IOC_IOCFG9_EDGE_DET_M   0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG9_EDGE_DET_S   16
#define IOC_IOCFG9_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG9_EDGE_DET_NEG 0x00010000  // Negative edge detection 
#define IOC_IOCFG9_EDGE_DET_POS 0x00020000  // Positive edge detection 
#define IOC_IOCFG9_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG9_PULL_CTL_M   0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG9_PULL_CTL_S   13
#define IOC_IOCFG9_PULL_CTL_DWN 0x00002000  // Pull down 
#define IOC_IOCFG9_PULL_CTL_UP  0x00004000  // Pull up 
#define IOC_IOCFG9_PULL_CTL_DIS 0x00006000  // No pull 
#define IOC_IOCFG9_SLEW_RED     0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG9_SLEW_RED_M   0x00001000
#define IOC_IOCFG9_SLEW_RED_S   12
#define IOC_IOCFG9_IOCURR_M     0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG9_IOCURR_S     10
#define IOC_IOCFG9_IOCURR_2MA   0x00000000  // 2mA 
#define IOC_IOCFG9_IOCURR_4MA   0x00000400  // 4mA 
#define IOC_IOCFG9_IOCURR_4P8MA 0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG9_IOCURR_16MA  0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG9_IOSTR_M      0x00000300  // Select drive strength IO 
#define IOC_IOCFG9_IOSTR_S      8
#define IOC_IOCFG9_IOSTR_AUTO   0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG9_IOSTR_MIN    0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG9_IOSTR_MED    0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG9_IOSTR_MAX    0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG9_PORT_ID_M    0x0000003F  // Selects usage for IO 
#define IOC_IOCFG9_PORT_ID_S    0
#define IOC_IOCFG9_PORT_ID_GPIO 0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG9_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG9_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG9_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG9_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG9_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG9_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG9_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG9_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG9_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG9_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG9_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG9_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG9_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG9_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG9_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG9_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG9_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG9_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG9_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG9_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG9_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG9_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG9_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG9_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG9_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG9_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG9_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG9_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG9_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG9_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG9_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG9_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG9_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG9_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG9_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG9_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG9_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG9_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG9_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG9_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG9_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG9_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG9_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG9_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG9_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG10 register.
//
//*****************************************************************************
#define IOC_IOCFG10_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG10_HYST_EN_M   0x40000000
#define IOC_IOCFG10_HYST_EN_S   30
#define IOC_IOCFG10_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG10_IE_M        0x20000000
#define IOC_IOCFG10_IE_S        29
#define IOC_IOCFG10_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG10_WU_CFG_S    27
#define IOC_IOCFG10_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG10_IOMODE_S    24
#define IOC_IOCFG10_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG10_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG10_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG10_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG10_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG10_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG10_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG10_TDI_M       0x00100000
#define IOC_IOCFG10_TDI_S       20
#define IOC_IOCFG10_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG10_TDO_M       0x00080000
#define IOC_IOCFG10_TDO_S       19
#define IOC_IOCFG10_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG10_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG10_EDGE_IRQ_EN_S 18
#define IOC_IOCFG10_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG10_EDGE_DET_S  16
#define IOC_IOCFG10_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG10_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG10_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG10_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG10_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG10_PULL_CTL_S  13
#define IOC_IOCFG10_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG10_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG10_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG10_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG10_SLEW_RED_M  0x00001000
#define IOC_IOCFG10_SLEW_RED_S  12
#define IOC_IOCFG10_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG10_IOCURR_S    10
#define IOC_IOCFG10_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG10_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG10_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG10_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG10_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG10_IOSTR_S     8
#define IOC_IOCFG10_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG10_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG10_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG10_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG10_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG10_PORT_ID_S   0
#define IOC_IOCFG10_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG10_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG10_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG10_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG10_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG10_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG10_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG10_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG10_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG10_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG10_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG10_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG10_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG10_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG10_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG10_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG10_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG10_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG10_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG10_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG10_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG10_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG10_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG10_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG10_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG10_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG10_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG10_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG10_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG10_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG10_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG10_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG10_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG10_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG10_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG10_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG10_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG10_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG10_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG10_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG10_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG10_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG10_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG10_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG10_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG10_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG11 register.
//
//*****************************************************************************
#define IOC_IOCFG11_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG11_HYST_EN_M   0x40000000
#define IOC_IOCFG11_HYST_EN_S   30
#define IOC_IOCFG11_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG11_IE_M        0x20000000
#define IOC_IOCFG11_IE_S        29
#define IOC_IOCFG11_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG11_WU_CFG_S    27
#define IOC_IOCFG11_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG11_IOMODE_S    24
#define IOC_IOCFG11_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG11_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG11_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG11_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG11_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG11_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG11_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG11_TDI_M       0x00100000
#define IOC_IOCFG11_TDI_S       20
#define IOC_IOCFG11_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG11_TDO_M       0x00080000
#define IOC_IOCFG11_TDO_S       19
#define IOC_IOCFG11_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG11_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG11_EDGE_IRQ_EN_S 18
#define IOC_IOCFG11_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG11_EDGE_DET_S  16
#define IOC_IOCFG11_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG11_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG11_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG11_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG11_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG11_PULL_CTL_S  13
#define IOC_IOCFG11_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG11_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG11_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG11_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG11_SLEW_RED_M  0x00001000
#define IOC_IOCFG11_SLEW_RED_S  12
#define IOC_IOCFG11_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG11_IOCURR_S    10
#define IOC_IOCFG11_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG11_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG11_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG11_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG11_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG11_IOSTR_S     8
#define IOC_IOCFG11_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG11_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG11_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG11_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG11_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG11_PORT_ID_S   0
#define IOC_IOCFG11_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG11_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG11_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG11_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG11_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG11_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG11_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG11_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG11_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG11_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG11_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG11_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG11_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG11_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG11_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG11_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG11_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG11_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG11_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG11_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG11_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG11_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG11_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG11_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG11_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG11_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG11_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG11_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG11_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG11_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG11_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG11_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG11_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG11_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG11_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG11_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG11_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG11_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG11_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG11_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG11_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG11_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG11_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG11_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG11_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG11_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG12 register.
//
//*****************************************************************************
#define IOC_IOCFG12_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG12_HYST_EN_M   0x40000000
#define IOC_IOCFG12_HYST_EN_S   30
#define IOC_IOCFG12_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG12_IE_M        0x20000000
#define IOC_IOCFG12_IE_S        29
#define IOC_IOCFG12_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG12_WU_CFG_S    27
#define IOC_IOCFG12_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG12_IOMODE_S    24
#define IOC_IOCFG12_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG12_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG12_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG12_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG12_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG12_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG12_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG12_TDI_M       0x00100000
#define IOC_IOCFG12_TDI_S       20
#define IOC_IOCFG12_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG12_TDO_M       0x00080000
#define IOC_IOCFG12_TDO_S       19
#define IOC_IOCFG12_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG12_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG12_EDGE_IRQ_EN_S 18
#define IOC_IOCFG12_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG12_EDGE_DET_S  16
#define IOC_IOCFG12_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG12_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG12_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG12_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG12_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG12_PULL_CTL_S  13
#define IOC_IOCFG12_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG12_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG12_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG12_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG12_SLEW_RED_M  0x00001000
#define IOC_IOCFG12_SLEW_RED_S  12
#define IOC_IOCFG12_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG12_IOCURR_S    10
#define IOC_IOCFG12_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG12_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG12_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG12_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG12_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG12_IOSTR_S     8
#define IOC_IOCFG12_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG12_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG12_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG12_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG12_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG12_PORT_ID_S   0
#define IOC_IOCFG12_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG12_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG12_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG12_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG12_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG12_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG12_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG12_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG12_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG12_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG12_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG12_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG12_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG12_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG12_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG12_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG12_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG12_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG12_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG12_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG12_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG12_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG12_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG12_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG12_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG12_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG12_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG12_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG12_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG12_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG12_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG12_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG12_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG12_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG12_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG12_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG12_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG12_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG12_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG12_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG12_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG12_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG12_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG12_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG12_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG12_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG13 register.
//
//*****************************************************************************
#define IOC_IOCFG13_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG13_HYST_EN_M   0x40000000
#define IOC_IOCFG13_HYST_EN_S   30
#define IOC_IOCFG13_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG13_IE_M        0x20000000
#define IOC_IOCFG13_IE_S        29
#define IOC_IOCFG13_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG13_WU_CFG_S    27
#define IOC_IOCFG13_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG13_IOMODE_S    24
#define IOC_IOCFG13_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG13_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG13_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG13_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG13_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG13_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG13_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG13_TDI_M       0x00100000
#define IOC_IOCFG13_TDI_S       20
#define IOC_IOCFG13_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG13_TDO_M       0x00080000
#define IOC_IOCFG13_TDO_S       19
#define IOC_IOCFG13_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG13_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG13_EDGE_IRQ_EN_S 18
#define IOC_IOCFG13_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG13_EDGE_DET_S  16
#define IOC_IOCFG13_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG13_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG13_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG13_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG13_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG13_PULL_CTL_S  13
#define IOC_IOCFG13_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG13_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG13_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG13_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG13_SLEW_RED_M  0x00001000
#define IOC_IOCFG13_SLEW_RED_S  12
#define IOC_IOCFG13_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG13_IOCURR_S    10
#define IOC_IOCFG13_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG13_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG13_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG13_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG13_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG13_IOSTR_S     8
#define IOC_IOCFG13_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG13_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG13_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG13_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG13_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG13_PORT_ID_S   0
#define IOC_IOCFG13_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG13_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG13_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG13_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG13_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG13_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG13_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG13_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG13_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG13_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG13_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG13_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG13_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG13_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG13_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG13_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG13_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG13_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG13_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG13_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG13_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG13_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG13_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG13_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG13_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG13_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG13_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG13_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG13_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG13_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG13_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG13_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG13_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG13_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG13_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG13_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG13_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG13_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG13_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG13_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG13_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG13_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG13_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG13_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG13_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG13_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG14 register.
//
//*****************************************************************************
#define IOC_IOCFG14_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG14_HYST_EN_M   0x40000000
#define IOC_IOCFG14_HYST_EN_S   30
#define IOC_IOCFG14_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG14_IE_M        0x20000000
#define IOC_IOCFG14_IE_S        29
#define IOC_IOCFG14_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG14_WU_CFG_S    27
#define IOC_IOCFG14_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG14_IOMODE_S    24
#define IOC_IOCFG14_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG14_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG14_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG14_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG14_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG14_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG14_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG14_TDI_M       0x00100000
#define IOC_IOCFG14_TDI_S       20
#define IOC_IOCFG14_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG14_TDO_M       0x00080000
#define IOC_IOCFG14_TDO_S       19
#define IOC_IOCFG14_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG14_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG14_EDGE_IRQ_EN_S 18
#define IOC_IOCFG14_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG14_EDGE_DET_S  16
#define IOC_IOCFG14_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG14_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG14_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG14_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG14_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG14_PULL_CTL_S  13
#define IOC_IOCFG14_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG14_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG14_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG14_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG14_SLEW_RED_M  0x00001000
#define IOC_IOCFG14_SLEW_RED_S  12
#define IOC_IOCFG14_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG14_IOCURR_S    10
#define IOC_IOCFG14_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG14_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG14_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG14_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG14_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG14_IOSTR_S     8
#define IOC_IOCFG14_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG14_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG14_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG14_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG14_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG14_PORT_ID_S   0
#define IOC_IOCFG14_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG14_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG14_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG14_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG14_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG14_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG14_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG14_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG14_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG14_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG14_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG14_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG14_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG14_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG14_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG14_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG14_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG14_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG14_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG14_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG14_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG14_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG14_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG14_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG14_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG14_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG14_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG14_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG14_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG14_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG14_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG14_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG14_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG14_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG14_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG14_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG14_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG14_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG14_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG14_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG14_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG14_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG14_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG14_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG14_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG14_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG15 register.
//
//*****************************************************************************
#define IOC_IOCFG15_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG15_HYST_EN_M   0x40000000
#define IOC_IOCFG15_HYST_EN_S   30
#define IOC_IOCFG15_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG15_IE_M        0x20000000
#define IOC_IOCFG15_IE_S        29
#define IOC_IOCFG15_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG15_WU_CFG_S    27
#define IOC_IOCFG15_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG15_IOMODE_S    24
#define IOC_IOCFG15_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG15_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG15_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG15_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG15_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG15_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG15_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG15_TDI_M       0x00100000
#define IOC_IOCFG15_TDI_S       20
#define IOC_IOCFG15_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG15_TDO_M       0x00080000
#define IOC_IOCFG15_TDO_S       19
#define IOC_IOCFG15_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG15_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG15_EDGE_IRQ_EN_S 18
#define IOC_IOCFG15_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG15_EDGE_DET_S  16
#define IOC_IOCFG15_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG15_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG15_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG15_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG15_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG15_PULL_CTL_S  13
#define IOC_IOCFG15_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG15_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG15_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG15_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG15_SLEW_RED_M  0x00001000
#define IOC_IOCFG15_SLEW_RED_S  12
#define IOC_IOCFG15_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG15_IOCURR_S    10
#define IOC_IOCFG15_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG15_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG15_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG15_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG15_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG15_IOSTR_S     8
#define IOC_IOCFG15_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG15_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG15_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG15_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG15_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG15_PORT_ID_S   0
#define IOC_IOCFG15_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG15_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG15_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG15_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG15_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG15_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG15_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG15_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG15_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG15_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG15_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG15_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG15_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG15_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG15_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG15_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG15_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG15_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG15_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG15_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG15_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG15_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG15_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG15_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG15_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG15_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG15_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG15_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG15_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG15_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG15_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG15_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG15_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG15_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG15_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG15_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG15_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG15_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG15_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG15_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG15_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG15_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG15_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG15_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG15_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG15_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG16 register.
//
//*****************************************************************************
#define IOC_IOCFG16_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG16_HYST_EN_M   0x40000000
#define IOC_IOCFG16_HYST_EN_S   30
#define IOC_IOCFG16_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG16_IE_M        0x20000000
#define IOC_IOCFG16_IE_S        29
#define IOC_IOCFG16_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG16_WU_CFG_S    27
#define IOC_IOCFG16_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG16_IOMODE_S    24
#define IOC_IOCFG16_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG16_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG16_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG16_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG16_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG16_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG16_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG16_TDI_M       0x00100000
#define IOC_IOCFG16_TDI_S       20
#define IOC_IOCFG16_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG16_TDO_M       0x00080000
#define IOC_IOCFG16_TDO_S       19
#define IOC_IOCFG16_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG16_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG16_EDGE_IRQ_EN_S 18
#define IOC_IOCFG16_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG16_EDGE_DET_S  16
#define IOC_IOCFG16_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG16_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG16_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG16_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG16_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG16_PULL_CTL_S  13
#define IOC_IOCFG16_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG16_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG16_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG16_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG16_SLEW_RED_M  0x00001000
#define IOC_IOCFG16_SLEW_RED_S  12
#define IOC_IOCFG16_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG16_IOCURR_S    10
#define IOC_IOCFG16_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG16_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG16_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG16_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG16_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG16_IOSTR_S     8
#define IOC_IOCFG16_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG16_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG16_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG16_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG16_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG16_PORT_ID_S   0
#define IOC_IOCFG16_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG16_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG16_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG16_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG16_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG16_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG16_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG16_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG16_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG16_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG16_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG16_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG16_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG16_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG16_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG16_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG16_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG16_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG16_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG16_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG16_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG16_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG16_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG16_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG16_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG16_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG16_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG16_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG16_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG16_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG16_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG16_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG16_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG16_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG16_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG16_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG16_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG16_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG16_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG16_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG16_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG16_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG16_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG16_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG16_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG16_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG17 register.
//
//*****************************************************************************
#define IOC_IOCFG17_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG17_HYST_EN_M   0x40000000
#define IOC_IOCFG17_HYST_EN_S   30
#define IOC_IOCFG17_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG17_IE_M        0x20000000
#define IOC_IOCFG17_IE_S        29
#define IOC_IOCFG17_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG17_WU_CFG_S    27
#define IOC_IOCFG17_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG17_IOMODE_S    24
#define IOC_IOCFG17_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG17_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG17_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG17_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG17_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG17_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG17_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG17_TDI_M       0x00100000
#define IOC_IOCFG17_TDI_S       20
#define IOC_IOCFG17_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG17_TDO_M       0x00080000
#define IOC_IOCFG17_TDO_S       19
#define IOC_IOCFG17_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG17_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG17_EDGE_IRQ_EN_S 18
#define IOC_IOCFG17_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG17_EDGE_DET_S  16
#define IOC_IOCFG17_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG17_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG17_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG17_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG17_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG17_PULL_CTL_S  13
#define IOC_IOCFG17_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG17_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG17_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG17_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG17_SLEW_RED_M  0x00001000
#define IOC_IOCFG17_SLEW_RED_S  12
#define IOC_IOCFG17_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG17_IOCURR_S    10
#define IOC_IOCFG17_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG17_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG17_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG17_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG17_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG17_IOSTR_S     8
#define IOC_IOCFG17_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG17_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG17_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG17_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG17_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG17_PORT_ID_S   0
#define IOC_IOCFG17_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG17_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG17_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG17_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG17_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG17_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG17_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG17_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG17_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG17_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG17_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG17_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG17_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG17_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG17_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG17_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG17_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG17_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG17_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG17_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG17_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG17_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG17_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG17_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG17_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG17_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG17_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG17_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG17_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG17_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG17_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG17_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG17_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG17_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG17_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG17_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG17_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG17_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG17_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG17_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG17_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG17_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG17_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG17_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG17_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG17_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG18 register.
//
//*****************************************************************************
#define IOC_IOCFG18_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG18_HYST_EN_M   0x40000000
#define IOC_IOCFG18_HYST_EN_S   30
#define IOC_IOCFG18_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG18_IE_M        0x20000000
#define IOC_IOCFG18_IE_S        29
#define IOC_IOCFG18_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG18_WU_CFG_S    27
#define IOC_IOCFG18_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG18_IOMODE_S    24
#define IOC_IOCFG18_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG18_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG18_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG18_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG18_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG18_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG18_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG18_TDI_M       0x00100000
#define IOC_IOCFG18_TDI_S       20
#define IOC_IOCFG18_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG18_TDO_M       0x00080000
#define IOC_IOCFG18_TDO_S       19
#define IOC_IOCFG18_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG18_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG18_EDGE_IRQ_EN_S 18
#define IOC_IOCFG18_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG18_EDGE_DET_S  16
#define IOC_IOCFG18_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG18_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG18_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG18_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG18_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG18_PULL_CTL_S  13
#define IOC_IOCFG18_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG18_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG18_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG18_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG18_SLEW_RED_M  0x00001000
#define IOC_IOCFG18_SLEW_RED_S  12
#define IOC_IOCFG18_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG18_IOCURR_S    10
#define IOC_IOCFG18_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG18_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG18_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG18_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG18_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG18_IOSTR_S     8
#define IOC_IOCFG18_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG18_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG18_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG18_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG18_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG18_PORT_ID_S   0
#define IOC_IOCFG18_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG18_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG18_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG18_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG18_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG18_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG18_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG18_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG18_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG18_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG18_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG18_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG18_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG18_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG18_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG18_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG18_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG18_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG18_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG18_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG18_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG18_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG18_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG18_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG18_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG18_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG18_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG18_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG18_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG18_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG18_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG18_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG18_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG18_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG18_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG18_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG18_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG18_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG18_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG18_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG18_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG18_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG18_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG18_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG18_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG18_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG19 register.
//
//*****************************************************************************
#define IOC_IOCFG19_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG19_HYST_EN_M   0x40000000
#define IOC_IOCFG19_HYST_EN_S   30
#define IOC_IOCFG19_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG19_IE_M        0x20000000
#define IOC_IOCFG19_IE_S        29
#define IOC_IOCFG19_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG19_WU_CFG_S    27
#define IOC_IOCFG19_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG19_IOMODE_S    24
#define IOC_IOCFG19_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG19_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG19_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG19_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG19_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG19_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG19_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG19_TDI_M       0x00100000
#define IOC_IOCFG19_TDI_S       20
#define IOC_IOCFG19_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG19_TDO_M       0x00080000
#define IOC_IOCFG19_TDO_S       19
#define IOC_IOCFG19_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG19_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG19_EDGE_IRQ_EN_S 18
#define IOC_IOCFG19_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG19_EDGE_DET_S  16
#define IOC_IOCFG19_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG19_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG19_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG19_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG19_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG19_PULL_CTL_S  13
#define IOC_IOCFG19_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG19_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG19_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG19_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG19_SLEW_RED_M  0x00001000
#define IOC_IOCFG19_SLEW_RED_S  12
#define IOC_IOCFG19_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG19_IOCURR_S    10
#define IOC_IOCFG19_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG19_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG19_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG19_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG19_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG19_IOSTR_S     8
#define IOC_IOCFG19_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG19_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG19_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG19_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG19_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG19_PORT_ID_S   0
#define IOC_IOCFG19_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG19_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG19_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG19_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG19_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG19_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG19_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG19_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG19_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG19_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG19_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG19_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG19_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG19_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG19_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG19_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG19_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG19_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG19_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG19_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG19_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG19_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG19_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG19_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG19_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG19_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG19_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG19_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG19_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG19_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG19_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG19_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG19_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG19_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG19_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG19_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG19_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG19_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG19_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG19_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG19_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG19_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG19_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG19_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG19_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG19_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG20 register.
//
//*****************************************************************************
#define IOC_IOCFG20_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG20_HYST_EN_M   0x40000000
#define IOC_IOCFG20_HYST_EN_S   30
#define IOC_IOCFG20_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG20_IE_M        0x20000000
#define IOC_IOCFG20_IE_S        29
#define IOC_IOCFG20_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG20_WU_CFG_S    27
#define IOC_IOCFG20_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG20_IOMODE_S    24
#define IOC_IOCFG20_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG20_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG20_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG20_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG20_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG20_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG20_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG20_TDI_M       0x00100000
#define IOC_IOCFG20_TDI_S       20
#define IOC_IOCFG20_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG20_TDO_M       0x00080000
#define IOC_IOCFG20_TDO_S       19
#define IOC_IOCFG20_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG20_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG20_EDGE_IRQ_EN_S 18
#define IOC_IOCFG20_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG20_EDGE_DET_S  16
#define IOC_IOCFG20_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG20_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG20_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG20_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG20_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG20_PULL_CTL_S  13
#define IOC_IOCFG20_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG20_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG20_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG20_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG20_SLEW_RED_M  0x00001000
#define IOC_IOCFG20_SLEW_RED_S  12
#define IOC_IOCFG20_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG20_IOCURR_S    10
#define IOC_IOCFG20_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG20_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG20_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG20_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG20_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG20_IOSTR_S     8
#define IOC_IOCFG20_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG20_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG20_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG20_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG20_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG20_PORT_ID_S   0
#define IOC_IOCFG20_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG20_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG20_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG20_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG20_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG20_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG20_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG20_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG20_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG20_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG20_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG20_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG20_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG20_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG20_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG20_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG20_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG20_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG20_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG20_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG20_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG20_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG20_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG20_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG20_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG20_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG20_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG20_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG20_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG20_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG20_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG20_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG20_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG20_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG20_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG20_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG20_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG20_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG20_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG20_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG20_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG20_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG20_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG20_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG20_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG20_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG21 register.
//
//*****************************************************************************
#define IOC_IOCFG21_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG21_HYST_EN_M   0x40000000
#define IOC_IOCFG21_HYST_EN_S   30
#define IOC_IOCFG21_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG21_IE_M        0x20000000
#define IOC_IOCFG21_IE_S        29
#define IOC_IOCFG21_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG21_WU_CFG_S    27
#define IOC_IOCFG21_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG21_IOMODE_S    24
#define IOC_IOCFG21_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG21_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG21_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG21_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG21_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG21_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG21_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG21_TDI_M       0x00100000
#define IOC_IOCFG21_TDI_S       20
#define IOC_IOCFG21_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG21_TDO_M       0x00080000
#define IOC_IOCFG21_TDO_S       19
#define IOC_IOCFG21_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG21_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG21_EDGE_IRQ_EN_S 18
#define IOC_IOCFG21_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG21_EDGE_DET_S  16
#define IOC_IOCFG21_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG21_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG21_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG21_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG21_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG21_PULL_CTL_S  13
#define IOC_IOCFG21_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG21_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG21_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG21_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG21_SLEW_RED_M  0x00001000
#define IOC_IOCFG21_SLEW_RED_S  12
#define IOC_IOCFG21_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG21_IOCURR_S    10
#define IOC_IOCFG21_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG21_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG21_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG21_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG21_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG21_IOSTR_S     8
#define IOC_IOCFG21_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG21_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG21_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG21_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG21_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG21_PORT_ID_S   0
#define IOC_IOCFG21_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG21_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG21_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG21_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG21_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG21_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG21_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG21_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG21_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG21_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG21_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG21_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG21_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG21_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG21_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG21_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG21_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG21_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG21_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG21_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG21_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG21_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG21_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG21_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG21_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG21_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG21_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG21_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG21_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG21_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG21_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG21_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG21_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG21_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG21_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG21_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG21_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG21_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG21_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG21_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG21_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG21_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG21_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG21_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG21_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG21_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG22 register.
//
//*****************************************************************************
#define IOC_IOCFG22_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG22_HYST_EN_M   0x40000000
#define IOC_IOCFG22_HYST_EN_S   30
#define IOC_IOCFG22_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG22_IE_M        0x20000000
#define IOC_IOCFG22_IE_S        29
#define IOC_IOCFG22_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG22_WU_CFG_S    27
#define IOC_IOCFG22_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG22_IOMODE_S    24
#define IOC_IOCFG22_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG22_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG22_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG22_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG22_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG22_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG22_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG22_TDI_M       0x00100000
#define IOC_IOCFG22_TDI_S       20
#define IOC_IOCFG22_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG22_TDO_M       0x00080000
#define IOC_IOCFG22_TDO_S       19
#define IOC_IOCFG22_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG22_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG22_EDGE_IRQ_EN_S 18
#define IOC_IOCFG22_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG22_EDGE_DET_S  16
#define IOC_IOCFG22_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG22_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG22_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG22_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG22_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG22_PULL_CTL_S  13
#define IOC_IOCFG22_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG22_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG22_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG22_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG22_SLEW_RED_M  0x00001000
#define IOC_IOCFG22_SLEW_RED_S  12
#define IOC_IOCFG22_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG22_IOCURR_S    10
#define IOC_IOCFG22_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG22_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG22_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG22_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG22_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG22_IOSTR_S     8
#define IOC_IOCFG22_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG22_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG22_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG22_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG22_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG22_PORT_ID_S   0
#define IOC_IOCFG22_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG22_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG22_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG22_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG22_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG22_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG22_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG22_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG22_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG22_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG22_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG22_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG22_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG22_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG22_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG22_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG22_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG22_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG22_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG22_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG22_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG22_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG22_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG22_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG22_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG22_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG22_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG22_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG22_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG22_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG22_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG22_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG22_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG22_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG22_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG22_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG22_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG22_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG22_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG22_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG22_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG22_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG22_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG22_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG22_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG22_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG23 register.
//
//*****************************************************************************
#define IOC_IOCFG23_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG23_HYST_EN_M   0x40000000
#define IOC_IOCFG23_HYST_EN_S   30
#define IOC_IOCFG23_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG23_IE_M        0x20000000
#define IOC_IOCFG23_IE_S        29
#define IOC_IOCFG23_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG23_WU_CFG_S    27
#define IOC_IOCFG23_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG23_IOMODE_S    24
#define IOC_IOCFG23_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG23_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG23_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG23_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG23_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG23_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG23_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG23_TDI_M       0x00100000
#define IOC_IOCFG23_TDI_S       20
#define IOC_IOCFG23_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG23_TDO_M       0x00080000
#define IOC_IOCFG23_TDO_S       19
#define IOC_IOCFG23_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG23_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG23_EDGE_IRQ_EN_S 18
#define IOC_IOCFG23_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG23_EDGE_DET_S  16
#define IOC_IOCFG23_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG23_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG23_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG23_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG23_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG23_PULL_CTL_S  13
#define IOC_IOCFG23_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG23_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG23_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG23_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG23_SLEW_RED_M  0x00001000
#define IOC_IOCFG23_SLEW_RED_S  12
#define IOC_IOCFG23_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG23_IOCURR_S    10
#define IOC_IOCFG23_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG23_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG23_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG23_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG23_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG23_IOSTR_S     8
#define IOC_IOCFG23_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG23_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG23_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG23_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG23_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG23_PORT_ID_S   0
#define IOC_IOCFG23_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG23_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG23_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG23_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG23_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG23_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG23_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG23_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG23_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG23_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG23_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG23_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG23_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG23_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG23_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG23_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG23_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG23_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG23_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG23_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG23_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG23_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG23_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG23_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG23_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG23_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG23_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG23_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG23_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG23_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG23_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG23_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG23_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG23_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG23_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG23_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG23_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG23_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG23_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG23_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG23_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG23_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG23_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG23_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG23_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG23_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG24 register.
//
//*****************************************************************************
#define IOC_IOCFG24_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG24_HYST_EN_M   0x40000000
#define IOC_IOCFG24_HYST_EN_S   30
#define IOC_IOCFG24_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG24_IE_M        0x20000000
#define IOC_IOCFG24_IE_S        29
#define IOC_IOCFG24_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG24_WU_CFG_S    27
#define IOC_IOCFG24_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG24_IOMODE_S    24
#define IOC_IOCFG24_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG24_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG24_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG24_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG24_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG24_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG24_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG24_TDI_M       0x00100000
#define IOC_IOCFG24_TDI_S       20
#define IOC_IOCFG24_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG24_TDO_M       0x00080000
#define IOC_IOCFG24_TDO_S       19
#define IOC_IOCFG24_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG24_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG24_EDGE_IRQ_EN_S 18
#define IOC_IOCFG24_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG24_EDGE_DET_S  16
#define IOC_IOCFG24_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG24_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG24_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG24_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG24_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG24_PULL_CTL_S  13
#define IOC_IOCFG24_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG24_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG24_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG24_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG24_SLEW_RED_M  0x00001000
#define IOC_IOCFG24_SLEW_RED_S  12
#define IOC_IOCFG24_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG24_IOCURR_S    10
#define IOC_IOCFG24_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG24_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG24_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG24_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG24_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG24_IOSTR_S     8
#define IOC_IOCFG24_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG24_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG24_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG24_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG24_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG24_PORT_ID_S   0
#define IOC_IOCFG24_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG24_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG24_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG24_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG24_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG24_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG24_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG24_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG24_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG24_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG24_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG24_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG24_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG24_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG24_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG24_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG24_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG24_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG24_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG24_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG24_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG24_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG24_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG24_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG24_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG24_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG24_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG24_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG24_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG24_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG24_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG24_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG24_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG24_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG24_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG24_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG24_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG24_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG24_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG24_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG24_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG24_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG24_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG24_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG24_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG24_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG25 register.
//
//*****************************************************************************
#define IOC_IOCFG25_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG25_HYST_EN_M   0x40000000
#define IOC_IOCFG25_HYST_EN_S   30
#define IOC_IOCFG25_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG25_IE_M        0x20000000
#define IOC_IOCFG25_IE_S        29
#define IOC_IOCFG25_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG25_WU_CFG_S    27
#define IOC_IOCFG25_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG25_IOMODE_S    24
#define IOC_IOCFG25_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG25_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG25_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG25_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG25_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG25_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG25_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG25_TDI_M       0x00100000
#define IOC_IOCFG25_TDI_S       20
#define IOC_IOCFG25_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG25_TDO_M       0x00080000
#define IOC_IOCFG25_TDO_S       19
#define IOC_IOCFG25_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG25_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG25_EDGE_IRQ_EN_S 18
#define IOC_IOCFG25_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG25_EDGE_DET_S  16
#define IOC_IOCFG25_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG25_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG25_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG25_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG25_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG25_PULL_CTL_S  13
#define IOC_IOCFG25_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG25_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG25_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG25_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG25_SLEW_RED_M  0x00001000
#define IOC_IOCFG25_SLEW_RED_S  12
#define IOC_IOCFG25_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG25_IOCURR_S    10
#define IOC_IOCFG25_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG25_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG25_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG25_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG25_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG25_IOSTR_S     8
#define IOC_IOCFG25_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG25_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG25_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG25_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG25_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG25_PORT_ID_S   0
#define IOC_IOCFG25_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG25_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG25_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG25_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG25_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG25_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG25_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG25_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG25_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG25_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG25_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG25_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG25_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG25_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG25_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG25_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG25_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG25_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG25_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG25_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG25_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG25_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG25_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG25_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG25_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG25_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG25_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG25_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG25_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG25_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG25_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG25_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG25_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG25_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG25_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG25_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG25_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG25_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG25_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG25_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG25_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG25_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG25_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG25_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG25_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG25_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG26 register.
//
//*****************************************************************************
#define IOC_IOCFG26_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG26_HYST_EN_M   0x40000000
#define IOC_IOCFG26_HYST_EN_S   30
#define IOC_IOCFG26_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG26_IE_M        0x20000000
#define IOC_IOCFG26_IE_S        29
#define IOC_IOCFG26_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG26_WU_CFG_S    27
#define IOC_IOCFG26_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG26_IOMODE_S    24
#define IOC_IOCFG26_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG26_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG26_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG26_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG26_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG26_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG26_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG26_TDI_M       0x00100000
#define IOC_IOCFG26_TDI_S       20
#define IOC_IOCFG26_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG26_TDO_M       0x00080000
#define IOC_IOCFG26_TDO_S       19
#define IOC_IOCFG26_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG26_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG26_EDGE_IRQ_EN_S 18
#define IOC_IOCFG26_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG26_EDGE_DET_S  16
#define IOC_IOCFG26_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG26_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG26_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG26_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG26_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG26_PULL_CTL_S  13
#define IOC_IOCFG26_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG26_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG26_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG26_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG26_SLEW_RED_M  0x00001000
#define IOC_IOCFG26_SLEW_RED_S  12
#define IOC_IOCFG26_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG26_IOCURR_S    10
#define IOC_IOCFG26_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG26_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG26_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG26_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG26_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG26_IOSTR_S     8
#define IOC_IOCFG26_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG26_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG26_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG26_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG26_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG26_PORT_ID_S   0
#define IOC_IOCFG26_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG26_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG26_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG26_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG26_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG26_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG26_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG26_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG26_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG26_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG26_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG26_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG26_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG26_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG26_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG26_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG26_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG26_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG26_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG26_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG26_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG26_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG26_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG26_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG26_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG26_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG26_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG26_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG26_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG26_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG26_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG26_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG26_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG26_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG26_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG26_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG26_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG26_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG26_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG26_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG26_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG26_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG26_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG26_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG26_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG26_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG27 register.
//
//*****************************************************************************
#define IOC_IOCFG27_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG27_HYST_EN_M   0x40000000
#define IOC_IOCFG27_HYST_EN_S   30
#define IOC_IOCFG27_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG27_IE_M        0x20000000
#define IOC_IOCFG27_IE_S        29
#define IOC_IOCFG27_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG27_WU_CFG_S    27
#define IOC_IOCFG27_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG27_IOMODE_S    24
#define IOC_IOCFG27_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG27_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG27_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG27_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG27_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG27_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG27_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG27_TDI_M       0x00100000
#define IOC_IOCFG27_TDI_S       20
#define IOC_IOCFG27_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG27_TDO_M       0x00080000
#define IOC_IOCFG27_TDO_S       19
#define IOC_IOCFG27_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG27_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG27_EDGE_IRQ_EN_S 18
#define IOC_IOCFG27_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG27_EDGE_DET_S  16
#define IOC_IOCFG27_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG27_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG27_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG27_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG27_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG27_PULL_CTL_S  13
#define IOC_IOCFG27_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG27_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG27_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG27_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG27_SLEW_RED_M  0x00001000
#define IOC_IOCFG27_SLEW_RED_S  12
#define IOC_IOCFG27_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG27_IOCURR_S    10
#define IOC_IOCFG27_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG27_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG27_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG27_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG27_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG27_IOSTR_S     8
#define IOC_IOCFG27_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG27_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG27_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG27_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG27_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG27_PORT_ID_S   0
#define IOC_IOCFG27_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG27_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG27_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG27_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG27_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG27_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG27_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG27_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG27_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG27_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG27_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG27_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG27_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG27_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG27_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG27_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG27_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG27_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG27_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG27_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG27_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG27_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG27_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG27_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG27_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG27_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG27_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG27_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG27_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG27_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG27_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG27_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG27_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG27_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG27_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG27_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG27_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG27_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG27_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG27_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG27_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG27_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG27_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG27_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG27_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG27_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG28 register.
//
//*****************************************************************************
#define IOC_IOCFG28_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG28_HYST_EN_M   0x40000000
#define IOC_IOCFG28_HYST_EN_S   30
#define IOC_IOCFG28_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG28_IE_M        0x20000000
#define IOC_IOCFG28_IE_S        29
#define IOC_IOCFG28_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG28_WU_CFG_S    27
#define IOC_IOCFG28_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG28_IOMODE_S    24
#define IOC_IOCFG28_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG28_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG28_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG28_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG28_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG28_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG28_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG28_TDI_M       0x00100000
#define IOC_IOCFG28_TDI_S       20
#define IOC_IOCFG28_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG28_TDO_M       0x00080000
#define IOC_IOCFG28_TDO_S       19
#define IOC_IOCFG28_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG28_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG28_EDGE_IRQ_EN_S 18
#define IOC_IOCFG28_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG28_EDGE_DET_S  16
#define IOC_IOCFG28_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG28_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG28_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG28_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG28_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG28_PULL_CTL_S  13
#define IOC_IOCFG28_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG28_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG28_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG28_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG28_SLEW_RED_M  0x00001000
#define IOC_IOCFG28_SLEW_RED_S  12
#define IOC_IOCFG28_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG28_IOCURR_S    10
#define IOC_IOCFG28_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG28_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG28_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG28_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG28_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG28_IOSTR_S     8
#define IOC_IOCFG28_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG28_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG28_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG28_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG28_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG28_PORT_ID_S   0
#define IOC_IOCFG28_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG28_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG28_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG28_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG28_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG28_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG28_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG28_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG28_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG28_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG28_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG28_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG28_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG28_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG28_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG28_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG28_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG28_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG28_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG28_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG28_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG28_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG28_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG28_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG28_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG28_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG28_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG28_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG28_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG28_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG28_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG28_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG28_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG28_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG28_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG28_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG28_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG28_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG28_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG28_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG28_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG28_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG28_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG28_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG28_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG28_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG29 register.
//
//*****************************************************************************
#define IOC_IOCFG29_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG29_HYST_EN_M   0x40000000
#define IOC_IOCFG29_HYST_EN_S   30
#define IOC_IOCFG29_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG29_IE_M        0x20000000
#define IOC_IOCFG29_IE_S        29
#define IOC_IOCFG29_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG29_WU_CFG_S    27
#define IOC_IOCFG29_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG29_IOMODE_S    24
#define IOC_IOCFG29_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG29_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG29_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG29_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG29_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG29_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG29_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG29_TDI_M       0x00100000
#define IOC_IOCFG29_TDI_S       20
#define IOC_IOCFG29_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG29_TDO_M       0x00080000
#define IOC_IOCFG29_TDO_S       19
#define IOC_IOCFG29_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG29_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG29_EDGE_IRQ_EN_S 18
#define IOC_IOCFG29_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG29_EDGE_DET_S  16
#define IOC_IOCFG29_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG29_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG29_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG29_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG29_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG29_PULL_CTL_S  13
#define IOC_IOCFG29_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG29_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG29_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG29_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG29_SLEW_RED_M  0x00001000
#define IOC_IOCFG29_SLEW_RED_S  12
#define IOC_IOCFG29_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG29_IOCURR_S    10
#define IOC_IOCFG29_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG29_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG29_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG29_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG29_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG29_IOSTR_S     8
#define IOC_IOCFG29_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG29_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG29_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG29_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG29_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG29_PORT_ID_S   0
#define IOC_IOCFG29_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG29_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG29_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG29_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG29_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG29_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG29_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG29_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG29_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG29_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG29_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG29_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG29_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG29_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG29_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG29_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG29_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG29_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG29_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG29_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG29_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG29_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG29_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG29_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG29_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG29_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG29_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG29_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG29_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG29_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG29_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG29_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG29_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG29_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG29_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG29_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG29_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG29_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG29_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG29_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG29_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG29_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG29_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG29_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG29_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG29_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG30 register.
//
//*****************************************************************************
#define IOC_IOCFG30_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG30_HYST_EN_M   0x40000000
#define IOC_IOCFG30_HYST_EN_S   30
#define IOC_IOCFG30_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG30_IE_M        0x20000000
#define IOC_IOCFG30_IE_S        29
#define IOC_IOCFG30_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG30_WU_CFG_S    27
#define IOC_IOCFG30_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG30_IOMODE_S    24
#define IOC_IOCFG30_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG30_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG30_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG30_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG30_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG30_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG30_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG30_TDI_M       0x00100000
#define IOC_IOCFG30_TDI_S       20
#define IOC_IOCFG30_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG30_TDO_M       0x00080000
#define IOC_IOCFG30_TDO_S       19
#define IOC_IOCFG30_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG30_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG30_EDGE_IRQ_EN_S 18
#define IOC_IOCFG30_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG30_EDGE_DET_S  16
#define IOC_IOCFG30_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG30_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG30_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG30_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG30_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG30_PULL_CTL_S  13
#define IOC_IOCFG30_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG30_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG30_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG30_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG30_SLEW_RED_M  0x00001000
#define IOC_IOCFG30_SLEW_RED_S  12
#define IOC_IOCFG30_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG30_IOCURR_S    10
#define IOC_IOCFG30_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG30_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG30_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG30_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG30_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG30_IOSTR_S     8
#define IOC_IOCFG30_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG30_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG30_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG30_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG30_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG30_PORT_ID_S   0
#define IOC_IOCFG30_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG30_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG30_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG30_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG30_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG30_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG30_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG30_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG30_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG30_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG30_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG30_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG30_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG30_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG30_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG30_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG30_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG30_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG30_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG30_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG30_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG30_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG30_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG30_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG30_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG30_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG30_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG30_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG30_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG30_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG30_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG30_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG30_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG30_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG30_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG30_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG30_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG30_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG30_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG30_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG30_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG30_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG30_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG30_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG30_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG30_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the IOC_O_IOCFG31 register.
//
//*****************************************************************************
#define IOC_IOCFG31_HYST_EN     0x40000000  // 0: Input hysteresis disable 1: 
                                            // Input hysteresis enable 
#define IOC_IOCFG31_HYST_EN_M   0x40000000
#define IOC_IOCFG31_HYST_EN_S   30
#define IOC_IOCFG31_IE          0x20000000  // 0: Input disabled 1: Input 
                                            // enabled Note: If IO is 
                                            // configured for AUX, ie PORTID = 
                                            // 0x08, the enable will be 
                                            // ignored. 
#define IOC_IOCFG31_IE_M        0x20000000
#define IOC_IOCFG31_IE_S        29
#define IOC_IOCFG31_WU_CFG_M    0x18000000  // 00: No wake-up 01: No wake-up 
                                            // 10: Wakes up from shutdown if 
                                            // this pad is going low. 11: Wakes 
                                            // up from shutdown if this pad is 
                                            // going high. If IO is configured 
                                            // for AON peripheral signals or 
                                            // AUX, ie PORTID 0x01-0x08, this 
                                            // register only sets wakeup enable 
                                            // or not. 00, 01: Wakeup disabled 
                                            // 10, 11: Wakeup enabled Polarity 
                                            // is controlled from AON 
                                            // registers. 
#define IOC_IOCFG31_WU_CFG_S    27
#define IOC_IOCFG31_IOMODE_M    0x07000000  // IO Mode N/A for IO configured 
                                            // for AON periph. signals and AUX, 
                                            // ie. PORTID 0x01-0x08 AUX has its 
                                            // own open_source/drain 
                                            // configuration. 0x2: Reserved. 
                                            // Undefined behavior. 0x3: 
                                            // Reserved. Undefined behavior. 
#define IOC_IOCFG31_IOMODE_S    24
#define IOC_IOCFG31_IOMODE_NORMAL \
                                0x00000000  // Normal input / output: 
                                            // Y_int=Y_pad A_pad=A_int 
#define IOC_IOCFG31_IOMODE_INV  0x01000000  // Inverted input / ouput: 
                                            // Y_int=not(Y_pad) 
                                            // A_pad=not(A_int) 
#define IOC_IOCFG31_IOMODE_OPENDR \
                                0x04000000  // Open Drain, Normal input / 
                                            // output GZ_pad = A_int or GZ_int 
                                            // A_PAD = 0 Y_int = Y_pad 
#define IOC_IOCFG31_IOMODE_OPENDR_INV \
                                0x05000000  // Open Drain Inverted input / 
                                            // output GZ_pad = not (A_int) or 
                                            // GZ_int A_PAD = 0, Y_int = not 
                                            // (Y_pad) 
#define IOC_IOCFG31_IOMODE_OPENSRC \
                                0x06000000  // Open Source Normal input / 
                                            // outut GZ_pad = (not A_int) or 
                                            // GZ_int A_PAD = 1, Y_int = Y_pad 
#define IOC_IOCFG31_IOMODE_OPENSRC_INV \
                                0x07000000  // Open Source Inverted 
                                            // input/output GZ_pad = A_int or 
                                            // GZ_int A_PAD = 1 Y_int = (not 
                                            // Y_pad) 
#define IOC_IOCFG31_TDI         0x00100000  // 1: IO enabled as JTAG TDI It 
                                            // must always be one IO that is 
                                            // set as TDI. If another IO is set 
                                            // as TDI, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG31_TDI_M       0x00100000
#define IOC_IOCFG31_TDI_S       20
#define IOC_IOCFG31_TDO         0x00080000  // 1: IO enabled as JTAG TDO It 
                                            // must always be one IO that is 
                                            // set as TDO. If another IO is set 
                                            // as TDO, this bit will be 
                                            // cleared. Will not be cleared if 
                                            // writing '0' to it. 
#define IOC_IOCFG31_TDO_M       0x00080000
#define IOC_IOCFG31_TDO_S       19
#define IOC_IOCFG31_EDGE_IRQ_EN 0x00040000  // 0: No interrupt generation 1: 
                                            // Enable interrupt generation for 
                                            // this IO (Only effective if edge 
                                            // detection is enabled) 
#define IOC_IOCFG31_EDGE_IRQ_EN_M \
                                0x00040000
#define IOC_IOCFG31_EDGE_IRQ_EN_S 18
#define IOC_IOCFG31_EDGE_DET_M  0x00030000  // Enable generation of edge 
                                            // detection events on this IO. 
#define IOC_IOCFG31_EDGE_DET_S  16
#define IOC_IOCFG31_EDGE_DET_NONE \
                                0x00000000  // No edge detection 
#define IOC_IOCFG31_EDGE_DET_NEG \
                                0x00010000  // Negative edge detection 
#define IOC_IOCFG31_EDGE_DET_POS \
                                0x00020000  // Positive edge detection 
#define IOC_IOCFG31_EDGE_DET_BOTH \
                                0x00030000  // Positive and negative edge 
                                            // detection 
#define IOC_IOCFG31_PULL_CTL_M  0x00006000  // 00: Reserved 01: Pull down 10: 
                                            // Pull up 11: No pull 
#define IOC_IOCFG31_PULL_CTL_S  13
#define IOC_IOCFG31_PULL_CTL_DWN \
                                0x00002000  // Pull down 
#define IOC_IOCFG31_PULL_CTL_UP 0x00004000  // Pull up 
#define IOC_IOCFG31_PULL_CTL_DIS \
                                0x00006000  // No pull 
#define IOC_IOCFG31_SLEW_RED    0x00001000  // 0: Normal slew rate 1: Enables 
                                            // reduced slew rate in output 
                                            // driver. 
#define IOC_IOCFG31_SLEW_RED_M  0x00001000
#define IOC_IOCFG31_SLEW_RED_S  12
#define IOC_IOCFG31_IOCURR_M    0x00000C00  // Selects IO current in 
                                            // combination with IOSTR 
#define IOC_IOCFG31_IOCURR_S    10
#define IOC_IOCFG31_IOCURR_2MA  0x00000000  // 2mA 
#define IOC_IOCFG31_IOCURR_4MA  0x00000400  // 4mA 
#define IOC_IOCFG31_IOCURR_4P8MA \
                                0x00000800  // 4 or 8mA 8 mA if master is 
                                            // double drive strength 
#define IOC_IOCFG31_IOCURR_16MA 0x00000C00  // Up to 16 mA for double bonded 
                                            // pads 
#define IOC_IOCFG31_IOSTR_M     0x00000300  // Select drive strength IO 
#define IOC_IOCFG31_IOSTR_S     8
#define IOC_IOCFG31_IOSTR_AUTO  0x00000000  // Automatic drive strength 
                                            // (2/4/8mA@VDDS) 
#define IOC_IOCFG31_IOSTR_MIN   0x00000100  // Minimum drive strength 
                                            // (2/4/8mA@3.3V) 
#define IOC_IOCFG31_IOSTR_MED   0x00000200  // Medium drive strength 
                                            // (2/4/8mA@2.5V) 
#define IOC_IOCFG31_IOSTR_MAX   0x00000300  // Maximum drive strength 
                                            // (2/4/8mA@1.8V) 
#define IOC_IOCFG31_PORT_ID_M   0x0000003F  // Selects usage for IO 
#define IOC_IOCFG31_PORT_ID_S   0
#define IOC_IOCFG31_PORT_ID_GPIO \
                                0x00000000  // Port for default general 
                                            // purpose IO usage (GPIO) 
#define IOC_IOCFG31_PORT_ID_AON_SCS \
                                0x00000001  // Port for AON SPI-S SCS pin. 
#define IOC_IOCFG31_PORT_ID_AON_SCK \
                                0x00000002  // Port for AON SPI-S SCK pin 
#define IOC_IOCFG31_PORT_ID_AON_SDI \
                                0x00000003  // Port for AON SPI-S SDI pin 
#define IOC_IOCFG31_PORT_ID_AON_SDO \
                                0x00000004  // Port for AON SPI-S SDO pin 
#define IOC_IOCFG31_PORT_ID_AON_CLK32K \
                                0x00000007  // Port for AON 32 KHz clock pin 
#define IOC_IOCFG31_PORT_ID_AUX_IO \
                                0x00000008  // Port for AUX IO pin 
#define IOC_IOCFG31_PORT_ID_SSI0_RX \
                                0x00000009  // Port for SSI 0 Rx pin 
#define IOC_IOCFG31_PORT_ID_SSI0_TX \
                                0x0000000A  // Port for SSI 0 Tx pin 
#define IOC_IOCFG31_PORT_ID_SSI0_FSS \
                                0x0000000B  // Port for SSI 0 FSS pin 
#define IOC_IOCFG31_PORT_ID_SSI0_CLK \
                                0x0000000C  // Port for SSI 0 CLK pin 
#define IOC_IOCFG31_PORT_ID_I2C_MSSDA \
                                0x0000000D  // Port for I2C Data 
#define IOC_IOCFG31_PORT_ID_I2C_MSSCL \
                                0x0000000E  // Port for I2C Clock 
#define IOC_IOCFG31_PORT_ID_UART0_RX \
                                0x0000000F  // Port for UART 0 Rx pin 
#define IOC_IOCFG31_PORT_ID_UART0_TX \
                                0x00000010  // Port for UART 0 Tx pin 
#define IOC_IOCFG31_PORT_ID_UART0_CTS \
                                0x00000011  // Port for UART 0 CTS pin 
#define IOC_IOCFG31_PORT_ID_UART0_RTS \
                                0x00000012  // Port for UART 0 RTS pin 
#define IOC_IOCFG31_PORT_ID_GPT0A \
                                0x00000017  // Port for GMTM timer pin GPTM0 
#define IOC_IOCFG31_PORT_ID_GPT0B \
                                0x00000018  // Port for GMTM timer pin GPTM1 
#define IOC_IOCFG31_PORT_ID_GPT1A \
                                0x00000019  // Port for GMTM timer pin GPTM2 
#define IOC_IOCFG31_PORT_ID_GPT1B \
                                0x0000001A  // Port for GMTM timer pin GPTM3 
#define IOC_IOCFG31_PORT_ID_GPT2A \
                                0x0000001B  // Port for GMTM timer pin GPTM4 
#define IOC_IOCFG31_PORT_ID_GPT2B \
                                0x0000001C  // Port for GMTM timer pin GPTM5 
#define IOC_IOCFG31_PORT_ID_GPT3A \
                                0x0000001D  // Port for GMTM timer pin GPTM6 
#define IOC_IOCFG31_PORT_ID_GPT3B \
                                0x0000001E  // Port for GMTM timer pin GPTM7 
#define IOC_IOCFG31_PORT_ID_CM3_SWV \
                                0x00000020  // Port for CM3 SWV 
#define IOC_IOCFG31_PORT_ID_SSI1_RX \
                                0x00000021  // Port for SSI 1 Rx pin 
#define IOC_IOCFG31_PORT_ID_SSI1_TX \
                                0x00000022  // Port for SSI 1 Tx pin 
#define IOC_IOCFG31_PORT_ID_SSI1_FSS \
                                0x00000023  // Port for SSI 1 FSS pin 
#define IOC_IOCFG31_PORT_ID_SSI1_CLK \
                                0x00000024  // Port for SSI 1 CLK pin 
#define IOC_IOCFG31_PORT_ID_I2S_AD0 \
                                0x00000025  // Port for I2S Data 0 pin 
#define IOC_IOCFG31_PORT_ID_I2S_AD1 \
                                0x00000026  // Port for I2S Data 1 pin 
#define IOC_IOCFG31_PORT_ID_I2S_WCLK \
                                0x00000027  // Port for I2S WCLK pin 
#define IOC_IOCFG31_PORT_ID_I2S_BCLK \
                                0x00000028  // Port for I2S BCLK pin 
#define IOC_IOCFG31_PORT_ID_I2S_MCLK \
                                0x00000029  // Port for I2S MCLK pin 
#define IOC_IOCFG31_PORT_ID_RFC_TRC \
                                0x0000002E  // Port for RF Core Trace 
#define IOC_IOCFG31_PORT_ID_RFC_GPO0 \
                                0x0000002F  // Port for RF Core Data Out 0 pin 
#define IOC_IOCFG31_PORT_ID_RFC_GPO1 \
                                0x00000030  // Port for RF Core Data Out 1 pin 
#define IOC_IOCFG31_PORT_ID_RFC_GPO2 \
                                0x00000031  // Port for RF Core Data Out 2 pin 
#define IOC_IOCFG31_PORT_ID_RFC_GPO3 \
                                0x00000032  // Port for RF Core Data Out 3 pin 
#define IOC_IOCFG31_PORT_ID_RFC_GPI0 \
                                0x00000033  // Port for RF Core Data In 0 pin 
#define IOC_IOCFG31_PORT_ID_RFC_GPI1 \
                                0x00000034  // Port for RF Core Data In 1 pin 
#define IOC_IOCFG31_PORT_ID_RFC_SMI_DL_OUT \
                                0x00000035  // Port for RF Core SMI Data Link 
                                            // Out 
#define IOC_IOCFG31_PORT_ID_RFC_SMI_DL_IN \
                                0x00000036  // Port for RF Core SMI Data Link 
                                            // In 
#define IOC_IOCFG31_PORT_ID_RFC_SMI_CL_OUT \
                                0x00000037  // Port for RF Core SMI Command 
                                            // Link Out 
#define IOC_IOCFG31_PORT_ID_RFC_SMI_CL_IN \
                                0x00000038  // Port for RF Core SMI Command 
                                            // Link In 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSDOMAIN register.
//
//*****************************************************************************
#define IOC_OBSDOMAIN_SUBDOMAINMUX_M \
                                0x00000180  // Controls which domain is 
                                            // getting the select vector set in 
                                            // OBSERVESUBDOMAIN 

#define IOC_OBSDOMAIN_SUBDOMAINMUX_S 7
#define IOC_OBSDOMAIN_SUBDOMAINMUX_NONE \
                                0x00000000  // None of the domains are getting 
                                            // the select vector 
#define IOC_OBSDOMAIN_SUBDOMAINMUX_AUX \
                                0x00000080  // AUX is getting the subdomain 
                                            // select vector 
#define IOC_OBSDOMAIN_SUBDOMAINMUX_AON \
                                0x00000100  // AON is getting the subdomain 
                                            // select vector 
#define IOC_OBSDOMAIN_SUBDOMAINMUX_DEBUGSS \
                                0x00000180  // DEBUGSS is getting the 
                                            // subdomain select vector 
#define IOC_OBSDOMAIN_SEL_M     0x00000007  // Select which domain in the 
                                            // CC26xx that drives the 
                                            // observation output and 
                                            // observation clock output 
#define IOC_OBSDOMAIN_SEL_S     0
#define IOC_OBSDOMAIN_SEL_NONE  0x00000000  // Select none of the domains 
#define IOC_OBSDOMAIN_SEL_MCU   0x00000001  // Select to observe MCU domain 
#define IOC_OBSDOMAIN_SEL_AUX   0x00000002  // Select to observe AUX domain 
#define IOC_OBSDOMAIN_SEL_AON   0x00000003  // Select to observe AON domain 
#define IOC_OBSDOMAIN_SEL_ANAOSC \
                                0x00000004  // Select to observe ANAOSC domain 
#define IOC_OBSDOMAIN_SEL_ANADLO \
                                0x00000005  // Select to observe ANADLO domain 
#define IOC_OBSDOMAIN_SEL_DEBUGSS \
                                0x00000006  // Select to observe DEBUGSS 
                                            // domain 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSCLKDIV register.
//
//*****************************************************************************
#define IOC_OBSCLKDIV_RATIO_M   0x00000003  // Clock divider setting for 
                                            // observation clock output. 00 : 
                                            // Divide by 1 01 : Divide by 2 10 
                                            // : Divide by 4 11 : Divide by 8 
#define IOC_OBSCLKDIV_RATIO_S   0
#define IOC_OBSCLKDIV_RATIO_DIV1 \
                                0x00000000  // Divide by 1, i.e. no divide 
#define IOC_OBSCLKDIV_RATIO_DIV2 \
                                0x00000001  // Divide by2 
#define IOC_OBSCLKDIV_RATIO_DIV4 \
                                0x00000002  // Divide by 4 
#define IOC_OBSCLKDIV_RATIO_DIV8 \
                                0x00000003  // Divide by 8 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSIOMASK register.
//
//*****************************************************************************
#define IOC_OBSIOMASK_CLK       0x00010000  // Mask setting for IO used for 
                                            // observe clk output 1: IO enabled 
                                            // for observation 0: IO disabled 
                                            // for observation Clock appears on 
                                            // GPIO11. 
#define IOC_OBSIOMASK_CLK_M     0x00010000
#define IOC_OBSIOMASK_CLK_S     16
#define IOC_OBSIOMASK_DATA_M    0x0000FFFF  // Mask setting for IO used for 
                                            // observe data output 1: IO 
                                            // enabled for observation 0: IO 
                                            // disabled for observation 
#define IOC_OBSIOMASK_DATA_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSAUXOUTPUT register.
//
//*****************************************************************************
#define IOC_OBSAUXOUTPUT_SEL_MISC_M \
                                0x000F0000  // Misc. select observation 
                                            // towards TEST_SS for AUX outputs 
                                            // bit 16:aux_tdc_clk_sel bit 
                                            // 17-19: reserved 

#define IOC_OBSAUXOUTPUT_SEL_MISC_S 16
#define IOC_OBSAUXOUTPUT_SEL_MISC_NONE \
                                0x00000000  // Select NONE 
#define IOC_OBSAUXOUTPUT_SEL_MISC_AUX_TDC_CLK \
                                0x00010000  // Select AUX TDC CLK 
#define IOC_OBSAUXOUTPUT_SEL3_M 0x0000F000  // Select observation output[3] to 
                                            // AUX 
#define IOC_OBSAUXOUTPUT_SEL3_S 12
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO0 \
                                0x00000000  // Select index 0 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO1 \
                                0x00001000  // Select index 1 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO2 \
                                0x00002000  // Select index 2 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO3 \
                                0x00003000  // Select index 3 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO4 \
                                0x00004000  // Select index 4 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO5 \
                                0x00005000  // Select index 5 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO6 \
                                0x00006000  // Select index 6 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO7 \
                                0x00007000  // Select index 7 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO8 \
                                0x00008000  // Select index 8 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO9 \
                                0x00009000  // Select index 9 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO10 \
                                0x0000A000  // Select index 10 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO11 \
                                0x0000B000  // Select index 11 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO12 \
                                0x0000C000  // Select index 12 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO13 \
                                0x0000D000  // Select index 13 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO14 \
                                0x0000E000  // Select index 14 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL3_OBSIO15 \
                                0x0000F000  // Select index 15 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_M 0x00000F00  // Select observation output[2] to 
                                            // AUX 
#define IOC_OBSAUXOUTPUT_SEL2_S 8
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO0 \
                                0x00000000  // Select index 0 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO1 \
                                0x00000100  // Select index 1 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO2 \
                                0x00000200  // Select index 2 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO3 \
                                0x00000300  // Select index 3 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO4 \
                                0x00000400  // Select index 4 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO5 \
                                0x00000500  // Select index 5 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO6 \
                                0x00000600  // Select index 6 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO7 \
                                0x00000700  // Select index 7 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO8 \
                                0x00000800  // Select index 8 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO9 \
                                0x00000900  // Select index 9 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO10 \
                                0x00000A00  // Select index 10 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO11 \
                                0x00000B00  // Select index 11 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO12 \
                                0x00000C00  // Select index 12 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO13 \
                                0x00000D00  // Select index 13 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO14 \
                                0x00000E00  // Select index 14 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL2_OBSIO15 \
                                0x00000F00  // Select index 15 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_M 0x000000F0  // Select observation output[1] to 
                                            // AUX 
#define IOC_OBSAUXOUTPUT_SEL1_S 4
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO0 \
                                0x00000000  // Select index 0 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO1 \
                                0x00000010  // Select index 1 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO2 \
                                0x00000020  // Select index 2 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO3 \
                                0x00000030  // Select index 3 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO4 \
                                0x00000040  // Select index 4 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO5 \
                                0x00000050  // Select index 5 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO6 \
                                0x00000060  // Select index 6 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO7 \
                                0x00000070  // Select index 7 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO8 \
                                0x00000080  // Select index 8 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO9 \
                                0x00000090  // Select index 9 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO10 \
                                0x000000A0  // Select index 10 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO11 \
                                0x000000B0  // Select index 11 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO12 \
                                0x000000C0  // Select index 12 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO13 \
                                0x000000D0  // Select index 13 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO14 \
                                0x000000E0  // Select index 14 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL1_OBSIO15 \
                                0x000000F0  // Select index 15 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_M 0x0000000F  // Select observation output[0] to 
                                            // AUX 
#define IOC_OBSAUXOUTPUT_SEL0_S 0
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO0 \
                                0x00000000  // Select index 0 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO1 \
                                0x00000001  // Select index 1 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO2 \
                                0x00000002  // Select index 2 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO3 \
                                0x00000003  // Select index 3 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO4 \
                                0x00000004  // Select index 4 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO5 \
                                0x00000005  // Select index 5 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO6 \
                                0x00000006  // Select index 6 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO7 \
                                0x00000007  // Select index 7 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO8 \
                                0x00000008  // Select index 8 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO9 \
                                0x00000009  // Select index 9 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO10 \
                                0x0000000A  // Select index 10 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO11 \
                                0x0000000B  // Select index 11 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO12 \
                                0x0000000C  // Select index 12 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO13 \
                                0x0000000D  // Select index 13 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO14 \
                                0x0000000E  // Select index 14 from IO obs 
                                            // vector 
#define IOC_OBSAUXOUTPUT_SEL0_OBSIO15 \
                                0x0000000F  // Select index 15 from IO obs 
                                            // vector 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSSUBDOMAIN register.
//
//*****************************************************************************
#define IOC_OBSSUBDOMAIN_SEL_M  0x000000FF  // Select vector sent towards sub 
                                            // domain chosen in OBSERVEDOMAIN 
                                            // register. Bit [0] : Set this to 
                                            // enable the observation signal 
                                            // interface in the Sub domain. Bit 
                                            // [7:1] : Selector for observation 
                                            // signals. 
#define IOC_OBSSUBDOMAIN_SEL_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUDOMAIN register.
//
//*****************************************************************************
#define IOC_OBSMCUDOMAIN_SEL_FINAL_STAGE_MSB \
                                0x04000000  // Select for the final stage of 
                                            // the observation MUX in MCU 
                                            // domain. 0: Discrete vector to 
                                            // output[15:8] 1: Bus vector to 
                                            // output[15:8] 

#define IOC_OBSMCUDOMAIN_SEL_FINAL_STAGE_MSB_M \
                                0x04000000
#define IOC_OBSMCUDOMAIN_SEL_FINAL_STAGE_MSB_S 26
#define IOC_OBSMCUDOMAIN_SEL_FINAL_STAGE_MSB_DISC \
                                0x00000000  // Select DISC input in final MCU 
                                            // obs mux stage 
#define IOC_OBSMCUDOMAIN_SEL_FINAL_STAGE_MSB_BUS \
                                0x04000000  // Select BUS input in final MCU 
                                            // obs mux stage 
#define IOC_OBSMCUDOMAIN_SEL_FINAL_STAGE_LSB \
                                0x02000000  // Select for the final stage of 
                                            // the observation MUX in MCU 
                                            // domain. 0: Discrete vector to 
                                            // output[7:0] 1: Bus vector to 
                                            // output[7:0] 

#define IOC_OBSMCUDOMAIN_SEL_FINAL_STAGE_LSB_M \
                                0x02000000
#define IOC_OBSMCUDOMAIN_SEL_FINAL_STAGE_LSB_S 25
#define IOC_OBSMCUDOMAIN_SEL_FINAL_STAGE_LSB_DISC \
                                0x00000000  // Select DISC input in final MCU 
                                            // obs mux stage 
#define IOC_OBSMCUDOMAIN_SEL_FINAL_STAGE_LSB_BUS \
                                0x02000000  // Select BUS input in final MCU 
                                            // obs mux stage 
#define IOC_OBSMCUDOMAIN_SELBUS_M \
                                0x01F00000  // Select MCU submodule that will 
                                            // output signals on MCU 
                                            // observation vector[15:0] for bus 
                                            // signals. 

#define IOC_OBSMCUDOMAIN_SELBUS_S 20
#define IOC_OBSMCUDOMAIN_SELBUS_PRCM \
                                0x00000000  // Select PRCM as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELBUS_CLKCTRL \
                                0x00100000  // Select CLKCTRL as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELBUS_FLASH \
                                0x00200000  // Select FLASH as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELBUS_MSPIS \
                                0x00800000  // Select MSPIS as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELBUS_UDMA \
                                0x00900000  // Select UDMA as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELBUS_WIC \
                                0x00B00000  // Select WIC as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELBUS_GPIO \
                                0x01000000  // Select GPIO as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELBUS_I2S \
                                0x01100000  // Select I2S as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_M \
                                0x000F8000  // Select MCU submodule that will 
                                            // output signals on MCU 
                                            // observation vector[15:12] for 
                                            // discrete signals. 

#define IOC_OBSMCUDOMAIN_SELDISC3_S 15
#define IOC_OBSMCUDOMAIN_SELDISC3_PRCM \
                                0x00000000  // Select PRCM as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_CLKCTL \
                                0x00008000  // Select CLKCTRL as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_FLASH \
                                0x00010000  // Select FLASH as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_VIMS \
                                0x00018000  // Select VIMS as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_CM3 \
                                0x00020000  // Select CM3 as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_UART \
                                0x00028000  // Select UART as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_GPT \
                                0x00030000  // Select GPT as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_SRAM \
                                0x00038000  // Select SRAM as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_MCUIOC \
                                0x00050000  // Select MCUIOC as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_WDT \
                                0x00060000  // Select WDT as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_AES \
                                0x00068000  // Select AES as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_SSP0 \
                                0x00070000  // Select SSP0 as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_SSP1 \
                                0x00078000  // Select SSP1 as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_GPIO \
                                0x00080000  // Select GPIO as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC3_I2S \
                                0x00088000  // Select I2S as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_M \
                                0x00007C00  // Select MCU submodule that will 
                                            // output signals on MCU 
                                            // observation vector[11:8] for 
                                            // discrete signals. 

#define IOC_OBSMCUDOMAIN_SELDISC2_S 10
#define IOC_OBSMCUDOMAIN_SELDISC2_PRCM \
                                0x00000000  // Select PRCM as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_CLKCTL \
                                0x00000400  // Select CLKCTRL as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_FLASH \
                                0x00000800  // Select FLASH as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_VIMS \
                                0x00000C00  // Select VIMS as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_CM3 \
                                0x00001000  // Select CM3 as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_UART \
                                0x00001400  // Select UART as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_GPT \
                                0x00001800  // Select GPT as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_SRAM \
                                0x00001C00  // Select SRAM as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_MCUIOC \
                                0x00002800  // Select MCUIOC as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_WDT \
                                0x00003000  // Select WDT as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_AES \
                                0x00003400  // Select AES as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_SSP0 \
                                0x00003800  // Select SSP0 as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_SSP1 \
                                0x00003C00  // Select SSP1 as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_GPIO \
                                0x00004000  // Select GPIO as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC2_I2S \
                                0x00004400  // Select I2S as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_M \
                                0x000003E0  // Select MCU submodule that will 
                                            // output signals on MCU 
                                            // observation vector[7:4] for 
                                            // discrete signals. 

#define IOC_OBSMCUDOMAIN_SELDISC1_S 5
#define IOC_OBSMCUDOMAIN_SELDISC1_PRCM \
                                0x00000000  // Select PRCM as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_CLKCTL \
                                0x00000020  // Select CLKCTRL as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_FLASH \
                                0x00000040  // Select FLASH as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_VIMS \
                                0x00000060  // Select VIMS as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_CM3 \
                                0x00000080  // Select CM3 as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_UART \
                                0x000000A0  // Select UART as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_GPT \
                                0x000000C0  // Select GPT as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_SRAM \
                                0x000000E0  // Select SRAM as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_MCUIOC \
                                0x00000140  // Select MCUIOC as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_WDT \
                                0x00000180  // Select WDT as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_AES \
                                0x000001A0  // Select AES as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_SSP0 \
                                0x000001C0  // Select SSP0 as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_SSP1 \
                                0x000001E0  // Select SSP1 as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_GPIO \
                                0x00000200  // Select GPIO as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC1_I2S \
                                0x00000220  // Select I2S as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_M \
                                0x0000001F  // Select MCU submodule that will 
                                            // output signals on MCU 
                                            // observation vector[3:0] for 
                                            // discrete signals. 

#define IOC_OBSMCUDOMAIN_SELDISC0_S 0
#define IOC_OBSMCUDOMAIN_SELDISC0_PRCM \
                                0x00000000  // Select PRCM as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_CLKCTL \
                                0x00000001  // Select CLKCTRL as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_FLASH \
                                0x00000002  // Select FLASH as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_VIMS \
                                0x00000003  // Select VIMS as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_CM3 \
                                0x00000004  // Select CM3 as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_UART \
                                0x00000005  // Select UART as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_GPT \
                                0x00000006  // Select GPT as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_SRAM \
                                0x00000007  // Select SRAM as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_MCUIOC \
                                0x0000000A  // Select MCUIOC as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_WDT \
                                0x0000000C  // Select WDT as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_AES \
                                0x0000000D  // Select AES as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_SSP0 \
                                0x0000000E  // Select SSP0 as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_SSP1 \
                                0x0000000F  // Select SSP1 as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_GPIO \
                                0x00000010  // Select GPIO as MCU submodule 
#define IOC_OBSMCUDOMAIN_SELDISC0_I2S \
                                0x00000011  // Select I2S as MCU submodule 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODBUS register.
//
//*****************************************************************************
#define IOC_OBSMCUMODBUS_SEL_M  0x0000000F  // Bus select sent towards all MCU 
                                            // submodules 
#define IOC_OBSMCUMODBUS_SEL_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC0 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC0_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC0_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC1 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC1_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC1_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC2 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC2_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC2_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC3 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC3_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC3_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC4 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC4_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC4_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC5 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC5_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC5_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC6 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC6_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC6_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC7 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC7_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC7_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC8 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC8_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC8_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC9 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC9_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC9_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC10 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC10_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC10_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC11 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC11_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC11_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC12 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC12_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC12_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC13 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC13_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC13_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC14 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC14_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC14_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC15 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC15_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC15_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC16 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC16_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC16_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC17 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC17_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC17_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC18 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC18_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC18_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC19 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC19_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC19_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC20 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC20_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC20_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC21 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC21_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC21_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC22 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC22_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC22_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC23 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC23_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC23_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC24 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC24_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC24_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC25 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC25_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC25_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC26 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC26_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC26_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC27 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC27_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC27_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC28 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC28_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC28_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC29 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC29_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC29_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC30 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC30_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC30_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// IOC_O_OBSMCUMODDISC31 register.
//
//*****************************************************************************
#define IOC_OBSMCUMODDISC31_SEL_M \
                                0x0000000F  // Select sent towards MCU 
                                            // submodule Bit [0] : Set this bit 
                                            // to enable the observation signal 
                                            // interface for the given MCU 
                                            // module Bit [3:1] : Selector for 
                                            // the discrete observation signals 
                                            // for the given MCU module. 

#define IOC_OBSMCUMODDISC31_SEL_S 0


#endif // __HW_IOC_H__

