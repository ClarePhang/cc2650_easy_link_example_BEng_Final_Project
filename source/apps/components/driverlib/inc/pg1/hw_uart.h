
/******************************************************************************
*  Filename:       hw_uart.h
*  Revised:        $Date: 2014-03-04 14:05:57 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40297 $
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
#ifndef __HW_UART_H__
#define __HW_UART_H__

//*****************************************************************************
//
// The following are defines for the UART register offsets.
//
//*****************************************************************************
#define UART_O_DR               0x00000000  // UART Data For words to be 
                                            // transmitted: if the FIFOs are 
                                            // enabled, data written to this 
                                            // location is pushed onto the 
                                            // transmit FIFO if the FIFOs are 
                                            // not enabled, data is stored in 
                                            // the transmitter holding register 
                                            // (the bottom word of the transmit 
                                            // FIFO). The write operation 
                                            // initiates transmission from the 
                                            // UART. The data is prefixed with 
                                            // a start bit, appended with the 
                                            // appropriate parity bit (if 
                                            // parity is enabled), and a stop 
                                            // bit. The resultant word is then 
                                            // transmitted. For received words: 
                                            // if the FIFOs are enabled, the 
                                            // data byte and the 4-bit status 
                                            // (break, frame, parity, and 
                                            // overrun) is pushed onto the 
                                            // 12-bit wide receive FIFO if the 
                                            // FIFOs are not enabled, the data 
                                            // byte and status are stored in 
                                            // the receiving holding register 
                                            // (the bottom word of the receive 
                                            // FIFO). 
#define UART_O_RSR              0x00000004  // UART Status Register 
#define UART_O_ECR              0x00000004  // UART Error Clear Register 
#define UART_O_FR               0x00000018  // UART Flag 
#define UART_O_IBRD             0x00000024  // UART integer part of the baud 
                                            // rate divisor value 
#define UART_O_FBRD             0x00000028  // UART Fractional Baud-Rate 
                                            // Divisor 
#define UART_O_LCRH             0x0000002C  // UART Line Control 
#define UART_O_CTL              0x00000030  // UART Control 
#define UART_O_IFLS             0x00000034  // UART Interrupt FIFO Level 
                                            // Select 
#define UART_O_IMSC             0x00000038  // UART Interrupt mask set/clear 
                                            // register 
#define UART_O_RIS              0x0000003C  // UART RIS Register is the raw 
                                            // interrupt status register. 
#define UART_O_MIS              0x00000040  // UART MIS Register is the masked 
                                            // interrupt status register 
#define UART_O_ICR              0x00000044  // UART Interrupt Clear On a write 
                                            // of 1, the corresponding 
                                            // interrupt is cleared. A write of 
                                            // 0 has no effect. 
#define UART_O_DMACTL           0x00000048  // UART DMACR Register is the DMA 
                                            // control register. 
#define UART_O_PERIPHID0        0x00000FE0  // Peripheral Identification 
                                            // Register 
#define UART_O_PERIPHID1        0x00000FE4  // Peripheral Identification 
                                            // Register 
#define UART_O_PERIPHID2        0x00000FE8  // Peripheral Identification 
                                            // Register 
#define UART_O_PERIPHID3        0x00000FEC  // Peripheral Identification 
                                            // Register 
#define UART_O_PCELLID0         0x00000FF0  // PrimeCell Identification 
                                            // Register 0 
#define UART_O_PCELLID1         0x00000FF4  // PrimeCell Identification 
                                            // Register 1 
#define UART_O_PCELLID2         0x00000FF8  // PrimeCell Identification 
                                            // Register 2 
#define UART_O_PCELLID3         0x00000FFC  // PrimeCell Identification 
                                            // Register 3 


//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_DR register.
//
//*****************************************************************************
#define UART_DR_OE              0x00000800  // UART Overrrun Error 
#define UART_DR_OE_M            0x00000800
#define UART_DR_OE_S            11
#define UART_DR_BE              0x00000400  // UART Break Error 
#define UART_DR_BE_M            0x00000400
#define UART_DR_BE_S            10
#define UART_DR_PE              0x00000200  // UART Parity Error 
#define UART_DR_PE_M            0x00000200
#define UART_DR_PE_S            9
#define UART_DR_FE              0x00000100  // UART Framing Error 
#define UART_DR_FE_M            0x00000100
#define UART_DR_FE_S            8
#define UART_DR_DATA_M          0x000000FF  // Data transmitted or received 
#define UART_DR_DATA_S          0
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_RSR register.
//
//*****************************************************************************
#define UART_RSR_OE             0x00000008  // UART Overrrun Error 
#define UART_RSR_OE_M           0x00000008
#define UART_RSR_OE_S           3
#define UART_RSR_BE             0x00000004  // UART Break Error 
#define UART_RSR_BE_M           0x00000004
#define UART_RSR_BE_S           2
#define UART_RSR_PE             0x00000002  // UART Parity Error 
#define UART_RSR_PE_M           0x00000002
#define UART_RSR_PE_S           1
#define UART_RSR_FE             0x00000001  // UART Framing Error 
#define UART_RSR_FE_M           0x00000001
#define UART_RSR_FE_S           0
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_ECR register.
//
//*****************************************************************************
#define UART_ECR_OE             0x00000008  // Overrun error. This bit is set 
                                            // to 1 if data is received and the 
                                            // FIFO is already full. This bit 
                                            // is cleared to 0 by a write to 
                                            // ECR. The FIFO contents remain 
                                            // valid because no more data is 
                                            // written when the FIFO is full, 
                                            // only the contents of the shift 
                                            // register are overwritten. The 
                                            // CPU must now read the data, to 
                                            // empty the FIFO. 
#define UART_ECR_OE_M           0x00000008
#define UART_ECR_OE_S           3
#define UART_ECR_BE             0x00000004  // Break error. This bit is set to 
                                            // 1 if a break condition was 
                                            // detected, indicating that the 
                                            // received data input was held LOW 
                                            // for longer than a full-word 
                                            // transmission time (defined as 
                                            // start, data, parity, and stop 
                                            // bits). This bit is cleared to 0 
                                            // after a write to ECR. In FIFO 
                                            // mode, this error is associated 
                                            // with the character at the top of 
                                            // the FIFO. When a break occurs, 
                                            // only one 0 character is loaded 
                                            // into the FIFO. The next 
                                            // character is only enabled after 
                                            // the receive data input goes to a 
                                            // 1 (marking state) and the next 
                                            // valid start bit is received. 
#define UART_ECR_BE_M           0x00000004
#define UART_ECR_BE_S           2
#define UART_ECR_PE             0x00000002  // Parity error. When set to 1, it 
                                            // indicates that the parity of the 
                                            // received data character does not 
                                            // match the parity that the EPS 
                                            // and SPS bits in the Line Control 
                                            // Register, LCR_H on page 3-12 
                                            // select. This bit is cleared to 0 
                                            // by a write to ECR. In FIFO mode, 
                                            // this error is associated with 
                                            // the character at the top of the 
                                            // FIFO. 
#define UART_ECR_PE_M           0x00000002
#define UART_ECR_PE_S           1
#define UART_ECR_FE             0x00000001  // Framing error. When set to 1, 
                                            // it indicates that the received 
                                            // character did not have a valid 
                                            // stop bit (a valid stop bit is 
                                            // 1). This bit is cleared to 0 by 
                                            // a write to ECR. In FIFO mode, 
                                            // this error is associated with 
                                            // the character at the top of the 
                                            // FIFO. 
#define UART_ECR_FE_M           0x00000001
#define UART_ECR_FE_S           0
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_FR register.
//
//*****************************************************************************
#define UART_FR_TXFE            0x00000080  // UART Transmit FIFO Empty 
#define UART_FR_TXFE_M          0x00000080
#define UART_FR_TXFE_S          7
#define UART_FR_RXFF            0x00000040  // UART Receive FIFO Full 
#define UART_FR_RXFF_M          0x00000040
#define UART_FR_RXFF_S          6
#define UART_FR_TXFF            0x00000020  // UART Transmit FIFO Full 
#define UART_FR_TXFF_M          0x00000020
#define UART_FR_TXFF_S          5
#define UART_FR_RXFE            0x00000010  // UART Receive FIFO Empty 
#define UART_FR_RXFE_M          0x00000010
#define UART_FR_RXFE_S          4
#define UART_FR_BUSY            0x00000008  // UART Busy 
#define UART_FR_BUSY_M          0x00000008
#define UART_FR_BUSY_S          3
#define UART_FR_CTS             0x00000001  // Clear To Send 
#define UART_FR_CTS_M           0x00000001
#define UART_FR_CTS_S           0
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_IBRD register.
//
//*****************************************************************************
#define UART_IBRD_DIVINT_M      0x0000FFFF  // The integer baud rate divisor. 
                                            // These bits are cleared to 0 on 
                                            // reset. 
#define UART_IBRD_DIVINT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_FBRD register.
//
//*****************************************************************************
#define UART_FBRD_DIVFRAC_M     0x0000003F  // Fractional Baud-Rate Divisor 
#define UART_FBRD_DIVFRAC_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_LCRH register.
//
//*****************************************************************************
#define UART_LCRH_SPS           0x00000080  // UART Stick Parity Select 
#define UART_LCRH_SPS_M         0x00000080
#define UART_LCRH_SPS_S         7
#define UART_LCRH_WLEN_M        0x00000060  // UART Word Length 
#define UART_LCRH_WLEN_S        5
#define UART_LCRH_WLEN_5        0x00000000  // Word Length 5 bits 
#define UART_LCRH_WLEN_6        0x00000020  // Word Length 6 bits 
#define UART_LCRH_WLEN_7        0x00000040  // Word Length 7 bits 
#define UART_LCRH_WLEN_8        0x00000060  // Word Length 8 bits 
#define UART_LCRH_FEN           0x00000010  // UART Enable FIFOs 
#define UART_LCRH_FEN_M         0x00000010
#define UART_LCRH_FEN_S         4
#define UART_LCRH_STP2          0x00000008  // UART Two Stop Bits Select 
#define UART_LCRH_STP2_M        0x00000008
#define UART_LCRH_STP2_S        3
#define UART_LCRH_EPS           0x00000004  // UART Even Parity Select 
#define UART_LCRH_EPS_M         0x00000004
#define UART_LCRH_EPS_S         2
#define UART_LCRH_PEN           0x00000002  // UART Parity Enable 
#define UART_LCRH_PEN_M         0x00000002
#define UART_LCRH_PEN_S         1
#define UART_LCRH_BRK           0x00000001  // UART Send Break 
#define UART_LCRH_BRK_M         0x00000001
#define UART_LCRH_BRK_S         0
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_CTL register.
//
//*****************************************************************************
#define UART_CTL_CTSEN          0x00008000  // Enable Clear To Send 
#define UART_CTL_CTSEN_M        0x00008000
#define UART_CTL_CTSEN_S        15
#define UART_CTL_RTSEN          0x00004000  // Enable Request To Send 
#define UART_CTL_RTSEN_M        0x00004000
#define UART_CTL_RTSEN_S        14
#define UART_CTL_RTS            0x00000800  // Request to Send 
#define UART_CTL_RTS_M          0x00000800
#define UART_CTL_RTS_S          11
#define UART_CTL_RXE            0x00000200  // UART Receive Enable 
#define UART_CTL_RXE_M          0x00000200
#define UART_CTL_RXE_S          9
#define UART_CTL_TXE            0x00000100  // UART Transmit Enable 
#define UART_CTL_TXE_M          0x00000100
#define UART_CTL_TXE_S          8
#define UART_CTL_LBE            0x00000080  // UART Loop Back Enable 
#define UART_CTL_LBE_M          0x00000080
#define UART_CTL_LBE_S          7
#define UART_CTL_UARTEN         0x00000001  // UART Enable 
#define UART_CTL_UARTEN_M       0x00000001
#define UART_CTL_UARTEN_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_IFLS register.
//
//*****************************************************************************
#define UART_IFLS_RXSEL_M       0x00000038  // Receive interrupt FIFO level 
                                            // select 
#define UART_IFLS_RXSEL_S       3
#define UART_IFLS_RXSEL_1_8     0x00000000  // Receive FIFO becomes >= 1/8 
                                            // full 
#define UART_IFLS_RXSEL_2_8     0x00000008  // Receive FIFO becomes >= 1/4 
                                            // full 
#define UART_IFLS_RXSEL_4_8     0x00000010  // Receive FIFO becomes >= 1/2 
                                            // full 
#define UART_IFLS_RXSEL_6_8     0x00000018  // Receive FIFO becomes >= 3/4 
                                            // full 
#define UART_IFLS_RXSEL_7_8     0x00000020  // Receive FIFO becomes >= 7/8 
                                            // full 
#define UART_IFLS_TXSEL_M       0x00000007  // Transmit interrupt FIFO level 
                                            // select 
#define UART_IFLS_TXSEL_S       0
#define UART_IFLS_TXSEL_1_8     0x00000000  // Transmit FIFO becomes <= 1/8 
                                            // full 
#define UART_IFLS_TXSEL_2_8     0x00000001  // Transmit FIFO becomes <= 1/4 
                                            // full 
#define UART_IFLS_TXSEL_4_8     0x00000002  // Transmit FIFO becomes <= 1/2 
                                            // full 
#define UART_IFLS_TXSEL_6_8     0x00000003  // Transmit FIFO becomes <= 3/4 
                                            // full 
#define UART_IFLS_TXSEL_7_8     0x00000004  // Transmit FIFO becomes <= 7/8 
                                            // full 
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_IMSC register.
//
//*****************************************************************************
#define UART_IMSC_OEIM          0x00000400  // Overrun error interrupt mask. A 
                                            // read returns the current mask 
                                            // for the UARTOEINTR interrupt. On 
                                            // a write of 1, the mask of the 
                                            // UARTOEINTR interrupt is set. A 
                                            // write of 0 clears the mask. 
#define UART_IMSC_OEIM_M        0x00000400
#define UART_IMSC_OEIM_S        10
#define UART_IMSC_BEIM          0x00000200  // Break error interrupt mask. A 
                                            // read returns the current mask 
                                            // for the UARTBEINTR interrupt. On 
                                            // a write of 1, the mask of the 
                                            // UARTBEINTR interrupt is set. A 
                                            // write of 0 clears the mask. 
#define UART_IMSC_BEIM_M        0x00000200
#define UART_IMSC_BEIM_S        9
#define UART_IMSC_PEIM          0x00000100  // Parity error interrupt mask. A 
                                            // read returns the current mask 
                                            // for the UARTPEINTR interrupt. On 
                                            // a write of 1, the mask of the 
                                            // UARTPEINTR interrupt is set. A 
                                            // write of 0 clears the mask. 
#define UART_IMSC_PEIM_M        0x00000100
#define UART_IMSC_PEIM_S        8
#define UART_IMSC_FEIM          0x00000080  // Framing error interrupt mask. A 
                                            // read returns the current mask 
                                            // for the UARTFEINTR interrupt. On 
                                            // a write of 1, the mask of the 
                                            // UARTFEINTR interrupt is set. A 
                                            // write of 0 clears the mask. 
#define UART_IMSC_FEIM_M        0x00000080
#define UART_IMSC_FEIM_S        7
#define UART_IMSC_RTIM          0x00000040  // Receive timeout interrupt mask. 
                                            // A read returns the current mask 
                                            // for the UARTRTINTR interrupt. On 
                                            // a write of 1, the mask of the 
                                            // UARTRTINTR interrupt is set. A 
                                            // write of 0 clears the mask. 
#define UART_IMSC_RTIM_M        0x00000040
#define UART_IMSC_RTIM_S        6
#define UART_IMSC_TXIM          0x00000020  // Transmit interrupt mask. A read 
                                            // returns the current mask for the 
                                            // UARTTXINTR interrupt. On a write 
                                            // of 1, the mask of the UARTTXINTR 
                                            // interrupt is set. A write of 0 
                                            // clears the mask. 
#define UART_IMSC_TXIM_M        0x00000020
#define UART_IMSC_TXIM_S        5
#define UART_IMSC_RXIM          0x00000010  // Receive interrupt mask. A read 
                                            // returns the current mask for the 
                                            // UARTRXINTR interrupt. On a write 
                                            // of 1, the mask of the UARTRXINTR 
                                            // interrupt is set. A write of 0 
                                            // clears the mask. 
#define UART_IMSC_RXIM_M        0x00000010
#define UART_IMSC_RXIM_S        4
#define UART_IMSC_CTSMIM        0x00000002  // nUARTCTS modem interrupt mask. 
                                            // A read returns the current mask 
                                            // for the UARTCTSINTR interrupt. 
                                            // On a write of 1, the mask of the 
                                            // UARTCTSINTR interrupt is set. A 
                                            // write of 0 clears the mask. 
#define UART_IMSC_CTSMIM_M      0x00000002
#define UART_IMSC_CTSMIM_S      1
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_RIS register.
//
//*****************************************************************************
#define UART_RIS_OERIS          0x00000400  // Overrun error interrupt status. 
                                            // Returns the raw interrupt state 
                                            // of the UARTOEINTR interrupt. 
#define UART_RIS_OERIS_M        0x00000400
#define UART_RIS_OERIS_S        10
#define UART_RIS_BERIS          0x00000200  // Break error interrupt status. 
                                            // Returns the raw interrupt state 
                                            // of the UARTBEINTR interrupt. 
#define UART_RIS_BERIS_M        0x00000200
#define UART_RIS_BERIS_S        9
#define UART_RIS_PERIS          0x00000100  // Parity error interrupt status. 
                                            // Returns the raw interrupt state 
                                            // of the UARTPEINTR interrupt. 
#define UART_RIS_PERIS_M        0x00000100
#define UART_RIS_PERIS_S        8
#define UART_RIS_FERIS          0x00000080  // Framing error interrupt status. 
                                            // Returns the raw interrupt state 
                                            // of the UARTFEINTR interrupt. 
#define UART_RIS_FERIS_M        0x00000080
#define UART_RIS_FERIS_S        7
#define UART_RIS_RTRIS          0x00000040  // Receive timeout interrupt 
                                            // status. Returns the raw 
                                            // interrupt state of the 
                                            // UARTRTINTR interrupt (In this 
                                            // case the raw interrupt cannot be 
                                            // set unless the mask is set, this 
                                            // is because the mask acts as an 
                                            // enable for power saving. That 
                                            // is, the same status can be read 
                                            // from UARTMIS and UARTRIS for the 
                                            // receive timeout interrupt.) 
#define UART_RIS_RTRIS_M        0x00000040
#define UART_RIS_RTRIS_S        6
#define UART_RIS_TXRIS          0x00000020  // Transmit interrupt status. 
                                            // Returns the raw interrupt state 
                                            // of the UARTTXINTR interrupt. 
#define UART_RIS_TXRIS_M        0x00000020
#define UART_RIS_TXRIS_S        5
#define UART_RIS_RXRIS          0x00000010  // Receive interrupt status. 
                                            // Returns the raw interrupt state 
                                            // of the UARTRXINTR interrupt. 
#define UART_RIS_RXRIS_M        0x00000010
#define UART_RIS_RXRIS_S        4
#define UART_RIS_CTSRMIS        0x00000002  // nUARTCTS modem interrupt 
                                            // status. Returns the raw 
                                            // interrupt state of the 
                                            // UARTCTSINTR interrupt. 
#define UART_RIS_CTSRMIS_M      0x00000002
#define UART_RIS_CTSRMIS_S      1
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_MIS register.
//
//*****************************************************************************
#define UART_MIS_OEMIS          0x00000400  // Overrun error masked interrupt 
                                            // status. Returns the masked 
                                            // interrupt state of the 
                                            // UARTOEINTR interrupt. 
#define UART_MIS_OEMIS_M        0x00000400
#define UART_MIS_OEMIS_S        10
#define UART_MIS_BEMIS          0x00000200  // Break error masked interrupt 
                                            // status. Returns the masked 
                                            // interrupt state of the 
                                            // UARTBEINTR interrupt. 
#define UART_MIS_BEMIS_M        0x00000200
#define UART_MIS_BEMIS_S        9
#define UART_MIS_PEMIS          0x00000100  // Parity error masked interrupt 
                                            // status. Returns the masked 
                                            // interrupt state of the 
                                            // UARTPEINTR interrupt. 
#define UART_MIS_PEMIS_M        0x00000100
#define UART_MIS_PEMIS_S        8
#define UART_MIS_FEMIS          0x00000080  // Framing error masked interrupt 
                                            // status. Returns the masked 
                                            // interrupt state of the 
                                            // UARTFEINTR interrupt 
#define UART_MIS_FEMIS_M        0x00000080
#define UART_MIS_FEMIS_S        7
#define UART_MIS_RTMIS          0x00000040  // Receive timeout masked 
                                            // interrupt status. Returns the 
                                            // masked interrupt state of the 
                                            // UARTRTINTR interrupt. 
#define UART_MIS_RTMIS_M        0x00000040
#define UART_MIS_RTMIS_S        6
#define UART_MIS_TXMIS          0x00000020  // Transmit masked interrupt 
                                            // status. Returns the masked 
                                            // interrupt state of the 
                                            // UARTTXINTR interrupt. 
#define UART_MIS_TXMIS_M        0x00000020
#define UART_MIS_TXMIS_S        5
#define UART_MIS_RXMIS          0x00000010  // Receive masked interrupt 
                                            // status. Returns the masked 
                                            // interrupt state of the 
                                            // UARTRXINTR interrupt. 
#define UART_MIS_RXMIS_M        0x00000010
#define UART_MIS_RXMIS_S        4
#define UART_MIS_CTSMMIS        0x00000002  // nUARTCTS modem masked interrupt 
                                            // status. Returns the masked 
                                            // interrupt state of the 
                                            // UARTCTSINTR interrupt. 
#define UART_MIS_CTSMMIS_M      0x00000002
#define UART_MIS_CTSMMIS_S      1
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_ICR register.
//
//*****************************************************************************
#define UART_ICR_OEIC           0x00000400  // Overrun error interrupt clear. 
                                            // Clears the UARTOEINTR interrupt. 
#define UART_ICR_OEIC_M         0x00000400
#define UART_ICR_OEIC_S         10
#define UART_ICR_BEIC           0x00000200  // Break error interrupt clear. 
                                            // Clears the UARTBEINTR interrupt. 
#define UART_ICR_BEIC_M         0x00000200
#define UART_ICR_BEIC_S         9
#define UART_ICR_PEIC           0x00000100  // Parity error interrupt clear. 
                                            // Clears the UARTPEINTR interrupt. 
#define UART_ICR_PEIC_M         0x00000100
#define UART_ICR_PEIC_S         8
#define UART_ICR_FEIC           0x00000080  // Framing error interrupt clear. 
                                            // Clears the UARTFEINTR interrupt. 
#define UART_ICR_FEIC_M         0x00000080
#define UART_ICR_FEIC_S         7
#define UART_ICR_RTIC           0x00000040  // Receive timeout interrupt 
                                            // clear. Clears the UARTRTINTR 
                                            // interrupt. 
#define UART_ICR_RTIC_M         0x00000040
#define UART_ICR_RTIC_S         6
#define UART_ICR_TXIC           0x00000020  // Transmit interrupt clear. 
                                            // Clears the UARTTXINTR interrupt. 
#define UART_ICR_TXIC_M         0x00000020
#define UART_ICR_TXIC_S         5
#define UART_ICR_RXIC           0x00000010  // Receive interrupt clear. Clears 
                                            // the UARTRXINTR interrupt. 
#define UART_ICR_RXIC_M         0x00000010
#define UART_ICR_RXIC_S         4
#define UART_ICR_CTSMIC         0x00000002  // nUARTCTS modem interrupt clear. 
                                            // Clears the UARTCTSINTR 
                                            // interrupt. 
#define UART_ICR_CTSMIC_M       0x00000002
#define UART_ICR_CTSMIC_S       1
//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_DMACTL register.
//
//*****************************************************************************
#define UART_DMACTL_DMAONERR    0x00000004  // DMA on error. If this bit is 
                                            // set to 1, the DMA receive 
                                            // request outputs, UARTRXDMASREQ 
                                            // or UARTRXDMABREQ, are disabled 
                                            // when the UART error interrupt is 
                                            // asserted. 
#define UART_DMACTL_DMAONERR_M  0x00000004
#define UART_DMACTL_DMAONERR_S  2
#define UART_DMACTL_TXDMAE      0x00000002  // Transmit DMA enable. If this 
                                            // bit is set to 1, DMA for the 
                                            // transmit FIFO is enabled. 
#define UART_DMACTL_TXDMAE_M    0x00000002
#define UART_DMACTL_TXDMAE_S    1
#define UART_DMACTL_RXDMAE      0x00000001  // Receive DMA enable. If this bit 
                                            // is set to 1, DMA for the receive 
                                            // FIFO is enabled. 
#define UART_DMACTL_RXDMAE_M    0x00000001
#define UART_DMACTL_RXDMAE_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UART_O_PERIPHID0 register.
//
//*****************************************************************************
#define UART_PERIPHID0_PARTNUMBER0_M \
                                0x000000FF  // Identifies the peripheral 

#define UART_PERIPHID0_PARTNUMBER0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UART_O_PERIPHID1 register.
//
//*****************************************************************************
#define UART_PERIPHID1_DESIGNER0_M \
                                0x000000F0  // Identifies the designer (ARM) 

#define UART_PERIPHID1_DESIGNER0_S 4
#define UART_PERIPHID1_PARTNUMBER1_M \
                                0x0000000F  // Identifies the peripheral 

#define UART_PERIPHID1_PARTNUMBER1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UART_O_PERIPHID2 register.
//
//*****************************************************************************
#define UART_PERIPHID2_REVISION_M \
                                0x000000F0  // UART revision 

#define UART_PERIPHID2_REVISION_S 4
#define UART_PERIPHID2_DESIGNER1_M \
                                0x0000000F  // Identifies the designer (ARM) 

#define UART_PERIPHID2_DESIGNER1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UART_O_PERIPHID3 register.
//
//*****************************************************************************
#define UART_PERIPHID3_CONFIGURATION_M \
                                0x000000FF  // The configuration option of the 
                                            // UART. 

#define UART_PERIPHID3_CONFIGURATION_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UART_O_PCELLID0 register.
//
//*****************************************************************************
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UART_O_PCELLID1 register.
//
//*****************************************************************************
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UART_O_PCELLID2 register.
//
//*****************************************************************************
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UART_O_PCELLID3 register.
//
//*****************************************************************************


#endif // __HW_UART_H__

