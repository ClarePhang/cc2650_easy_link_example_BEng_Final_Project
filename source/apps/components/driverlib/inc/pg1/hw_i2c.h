
/******************************************************************************
*  Filename:       hw_i2c.h
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
#ifndef __HW_I2C_H__
#define __HW_I2C_H__

//*****************************************************************************
//
// The following are defines for the I2C register offsets.
//
//*****************************************************************************
#define I2C_O_SOAR              0x00000000  // I2C Slave Own Address This 
                                            // register consists of seven 
                                            // address bits that identify this 
                                            // I2C device on the I2C bus. 
#define I2C_O_SSTAT             0x00000004  // I2C Slave Control/Status This 
                                            // register functions as a control 
                                            // register when written, and a 
                                            // status register when read. 
#define I2C_O_SCTL              0x00000004  
#define I2C_O_SDR               0x00000008  // I2C Slave Data This register 
                                            // contains the data to be 
                                            // transmitted when in the Slave 
                                            // Transmit state, and the data 
                                            // received when in the Slave 
                                            // Receive state. 
#define I2C_O_SIMR              0x0000000C  // I2C Slave Interrupt Mask This 
                                            // register controls whether a raw 
                                            // interrupt is promoted to a 
                                            // controller interrupt. 
#define I2C_O_SRIS              0x00000010  // I2C Slave Raw Interrupt Status 
                                            // This register specifies whether 
                                            // an interrupt is pending. 
#define I2C_O_SMIS              0x00000014  // I2C Slave Masked Interrupt 
                                            // Status This register specifies 
                                            // whether an interrupt was 
                                            // signaled. 
#define I2C_O_SICR              0x00000018  // I2C Slave Interrupt Clear This 
                                            // register clears the raw 
                                            // interrupt. A read of this 
                                            // register returns no meaningful 
                                            // data. 
#define I2C_O_MSA               0x00000800  // This register consists of eight 
                                            // bits: seven address bits 
                                            // (A6-A0), and a Receive/Send bit, 
                                            // which determines if the next 
                                            // operation is a Receive (High), 
                                            // or Transmit (Low). 
#define I2C_O_MSTAT             0x00000804  // I2C Master Control/Status This 
                                            // register accesses status bits 
                                            // when read and control bits when 
                                            // written. When read, the status 
                                            // register indicates the state of 
                                            // the I2C bus controller. When 
                                            // written, the control register 
                                            // configures the I2C controller 
                                            // operation. The START bit 
                                            // generates the START or REPEATED 
                                            // START condition. The STOP bit 
                                            // determines if the cycle stops at 
                                            // the end of the data cycle or 
                                            // continues on to a repeated START 
                                            // condition. To generate a single 
                                            // transmit cycle, the I2C Master 
                                            // Slave Address (I2CMSA) register 
                                            // is written with the desired 
                                            // address, the R/S bit is cleared, 
                                            // and this register is written 
                                            // with ACK=X (0 or 1), STOP=1, 
                                            // START=1, and RUN=1 to perform 
                                            // the operation and stop. When the 
                                            // operation is completed (or 
                                            // aborted due an error), an 
                                            // interrupt becomes active and the 
                                            // data may be read from the I2CMDR 
                                            // register. When the I2C module 
                                            // operates in Master receiver 
                                            // mode, the ACK bit is normally 
                                            // set, causing the I2C bus 
                                            // controller to transmit an 
                                            // acknowledge automatically after 
                                            // each byte. This bit must be 
                                            // cleared when the I2C bus 
                                            // controller requires no further 
                                            // data to be transmitted from the 
                                            // slave transmitter. 
#define I2C_O_MCTRL             0x00000804  
#define I2C_O_MDR               0x00000808  // I2C Master Data This register 
                                            // contains the data to be 
                                            // transmitted when in the Master 
                                            // Transmit state and the data 
                                            // received when in the Master 
                                            // Receive state. 
#define I2C_O_MTPR              0x0000080C  // I2C Master Timer Period This 
                                            // register specifies the period of 
                                            // the SCL clock. 
#define I2C_O_MIMR              0x00000810  // I2C Master Interrupt Mask This 
                                            // register controls whether a raw 
                                            // interrupt is promoted to a 
                                            // controller interrupt. 
#define I2C_O_MRIS              0x00000814  // I2C Master Raw Interrupt Status 
                                            // This register specifies whether 
                                            // an interrupt is pending. 
#define I2C_O_MMIS              0x00000818  // I2C Master Masked Interrupt 
                                            // Status This register specifies 
                                            // whether an interrupt was 
                                            // signaled. 
#define I2C_O_MICR              0x0000081C  // I2C Master Interrupt Clear This 
                                            // register clears the raw and 
                                            // masked interrupts. 
#define I2C_O_MCR               0x00000820  // I2C Master Configuration This 
                                            // register configures the mode 
                                            // (Master or Slave) and sets the 
                                            // interface for test mode 
                                            // loopback. 


//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SOAR register.
//
//*****************************************************************************
#define I2C_SOAR_OAR_M          0x0000007F  // I2C slave own address This 
                                            // field specifies bits A6 through 
                                            // A0 of the slave address. 
#define I2C_SOAR_OAR_S          0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SSTAT register.
//
//*****************************************************************************
#define I2C_SSTAT_FBR           0x00000004  // First byte received 0: The 
                                            // first byte has not been 
                                            // received. 1: The first byte 
                                            // following the slave's own 
                                            // address has been received. This 
                                            // bit is only valid when the RREQ 
                                            // bit is set and is automatically 
                                            // cleared when data has been read 
                                            // from the SDR register. Note: 
                                            // This bit is not used for slave 
                                            // transmit operations. 
#define I2C_SSTAT_FBR_M         0x00000004
#define I2C_SSTAT_FBR_S         2
#define I2C_SSTAT_TREQ          0x00000002  // Transmit request 0: No 
                                            // outstanding transmit request. 1: 
                                            // The I2C controller has been 
                                            // addressed as a slave transmitter 
                                            // and is using clock stretching to 
                                            // delay the master until data has 
                                            // been written to the SDR 
                                            // register. 
#define I2C_SSTAT_TREQ_M        0x00000002
#define I2C_SSTAT_TREQ_S        1
#define I2C_SSTAT_RREQ          0x00000001  // Receive request 0: No 
                                            // outstanding receive data 1: The 
                                            // I2C controller has outstanding 
                                            // receive data from the I2C master 
                                            // and is using clock stretching to 
                                            // delay the master until data has 
                                            // been read from the SDR register. 
#define I2C_SSTAT_RREQ_M        0x00000001
#define I2C_SSTAT_RREQ_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SCTL register.
//
//*****************************************************************************
#define I2C_SCTL_DA             0x00000001  // Device active 0: Disables the 
                                            // I2C slave operation 1: Enables 
                                            // the I2C slave operation 
#define I2C_SCTL_DA_M           0x00000001
#define I2C_SCTL_DA_S           0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SDR register.
//
//*****************************************************************************
#define I2C_SDR_DATA_M          0x000000FF  // Data for transfer This field 
                                            // contains the data for transfer 
                                            // during a slave receive or 
                                            // transmit operation. When written 
                                            // this register is used to 
                                            // transmit data. When read, this 
                                            // address returns the last data 
                                            // received. 
#define I2C_SDR_DATA_S          0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SIMR register.
//
//*****************************************************************************
#define I2C_SIMR_STOPIM         0x00000004  // Stop condition interrupt mask 
                                            // 0: The STOPRIS interrupt is 
                                            // suppressed and not sent to the 
                                            // interrupt controller. 1: The 
                                            // STOP condition interrupt is sent 
                                            // to the interrupt controller when 
                                            // the STOPRIS bit in the SRIS 
                                            // register is set. 
#define I2C_SIMR_STOPIM_M       0x00000004
#define I2C_SIMR_STOPIM_S       2
#define I2C_SIMR_STOPIM_DIS     0x00000000  // Disable Interrupt 
#define I2C_SIMR_STOPIM_EN      0x00000004  // Enable Interrupt 
#define I2C_SIMR_STARTIM        0x00000002  // Start condition interrupt mask 
                                            // 0: The STARTRIS interrupt is 
                                            // suppressed and not sent to the 
                                            // interrupt controller. 1: The 
                                            // START condition interrupt is 
                                            // sent to the interrupt controller 
                                            // when the STARTRIS bit in the 
                                            // I2CSRIS register is set. 
#define I2C_SIMR_STARTIM_M      0x00000002
#define I2C_SIMR_STARTIM_S      1
#define I2C_SIMR_STARTIM_DIS    0x00000000  // Disable Interrupt 
#define I2C_SIMR_STARTIM_EN     0x00000002  // Enable Interrupt 
#define I2C_SIMR_DATAIM         0x00000001  // Data interrupt mask 0: The 
                                            // DATARIS interrupt is suppressed 
                                            // and not sent to the interrupt 
                                            // controller. 1: The data received 
                                            // or data requested interrupt is 
                                            // sent to the interrupt controller 
                                            // when the DATARIS bit in the 
                                            // I2CSRIS register is set. 
#define I2C_SIMR_DATAIM_M       0x00000001
#define I2C_SIMR_DATAIM_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SRIS register.
//
//*****************************************************************************
#define I2C_SRIS_STOPRIS        0x00000004  // Stop condition raw interrupt 
                                            // status 0: No interrupt This bit 
                                            // is cleared by writing a 1 to the 
                                            // STOPIC bit in the SICR register. 
                                            // 1: A STOP condition interrupt is 
                                            // pending. 
#define I2C_SRIS_STOPRIS_M      0x00000004
#define I2C_SRIS_STOPRIS_S      2
#define I2C_SRIS_STARTRIS       0x00000002  // Start condition raw interrupt 
                                            // status 0: No interrupt 1: A 
                                            // START condition interrupt is 
                                            // pending. This bit is cleared by 
                                            // writing a 1 to the STARTIC bit 
                                            // in the SICR register. 
#define I2C_SRIS_STARTRIS_M     0x00000002
#define I2C_SRIS_STARTRIS_S     1
#define I2C_SRIS_DATARIS        0x00000001  // Data raw interrupt status 0: No 
                                            // interrupt 1: A data received or 
                                            // data requested interrupt is 
                                            // pending. This bit is cleared by 
                                            // writing a 1 to the DATAIC bit in 
                                            // the SICR register. 
#define I2C_SRIS_DATARIS_M      0x00000001
#define I2C_SRIS_DATARIS_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SMIS register.
//
//*****************************************************************************
#define I2C_SMIS_STOPMIS        0x00000004  // Stop condition masked interrupt 
                                            // status 0: An interrupt has not 
                                            // occurred or is masked. 1: An 
                                            // unmasked STOP condition 
                                            // interrupt is pending. This bit 
                                            // is cleared by writing a 1 to the 
                                            // STOPIC bit in the SICR register. 
#define I2C_SMIS_STOPMIS_M      0x00000004
#define I2C_SMIS_STOPMIS_S      2
#define I2C_SMIS_STARTMIS       0x00000002  // Start condition masked 
                                            // interrupt status 0: An interrupt 
                                            // has not occurred or is masked. 
                                            // 1: An unmasked START condition 
                                            // interrupt is pending. This bit 
                                            // is cleared by writing a 1 to the 
                                            // STARTIC bit in the SICR 
                                            // register. 
#define I2C_SMIS_STARTMIS_M     0x00000002
#define I2C_SMIS_STARTMIS_S     1
#define I2C_SMIS_DATAMIS        0x00000001  // Data masked interrupt status 0: 
                                            // An interrupt has not occurred or 
                                            // is masked. 1: An unmasked data 
                                            // received or data requested 
                                            // interrupt is pending. This bit 
                                            // is cleared by writing a 1 to the 
                                            // DATAIC bit in the SICR register. 
#define I2C_SMIS_DATAMIS_M      0x00000001
#define I2C_SMIS_DATAMIS_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SICR register.
//
//*****************************************************************************
#define I2C_SICR_STOPIC         0x00000004  // Stop condition interrupt clear 
                                            // Writing 1 to this bit clears the 
                                            // SRIS.STOPRIS bit and the 
                                            // SMIS.STOPMIS bit. A read of this 
                                            // register returns no meaningful 
                                            // data. 
#define I2C_SICR_STOPIC_M       0x00000004
#define I2C_SICR_STOPIC_S       2
#define I2C_SICR_STARTIC        0x00000002  // Start condition interrupt clear 
                                            // Writing 1 to this bit clears the 
                                            // SRIS.STARTRIS bit and the 
                                            // SMIS.STARTMIS. A read of this 
                                            // register returns no meaningful 
                                            // data. 
#define I2C_SICR_STARTIC_M      0x00000002
#define I2C_SICR_STARTIC_S      1
#define I2C_SICR_DATAIC         0x00000001  // Data interrupt clear Writing 1 
                                            // to this bit clears the 
                                            // SRIS.DATARIS bit and the 
                                            // SMIS.DATAMIS bit. A read of this 
                                            // register returns no meaningful 
                                            // data. 
#define I2C_SICR_DATAIC_M       0x00000001
#define I2C_SICR_DATAIC_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MSA register.
//
//*****************************************************************************
#define I2C_MSA_SA_M            0x000000FE  // I2C slave address 
#define I2C_MSA_SA_S            1
#define I2C_MSA_RS              0x00000001  // Receive and send The R/S bit 
                                            // specifies if the next operation 
                                            // is a receive (high) or transmit 
                                            // (low). 0: Transmit 1: Receive 
#define I2C_MSA_RS_M            0x00000001
#define I2C_MSA_RS_S            0
#define I2C_MSA_RS_TX           0x00000000  // Transmit 
#define I2C_MSA_RS_RX           0x00000001  // Receive 
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MSTAT register.
//
//*****************************************************************************
#define I2C_MSTAT_BUSBSY        0x00000040  // Bus busy 0: The I2C bus is 
                                            // idle. 1: The I2C bus is busy. 
                                            // The bit changes based on the 
                                            // START and STOP conditions. 
#define I2C_MSTAT_BUSBSY_M      0x00000040
#define I2C_MSTAT_BUSBSY_S      6
#define I2C_MSTAT_IDLE          0x00000020  // I2C idle 0: The I2C controller 
                                            // is not idle. 1: The I2C 
                                            // controller is idle. 
#define I2C_MSTAT_IDLE_M        0x00000020
#define I2C_MSTAT_IDLE_S        5
#define I2C_MSTAT_ARBLST        0x00000010  // Arbitration lost 0: The I2C 
                                            // controller won arbitration. 1: 
                                            // The I2C controller lost 
                                            // arbitration. 
#define I2C_MSTAT_ARBLST_M      0x00000010
#define I2C_MSTAT_ARBLST_S      4
#define I2C_MSTAT_DATACK        0x00000008  // Acknowledge data 0: The 
                                            // transmited data was 
                                            // acknowledged. 1: The transmited 
                                            // data was not acknowledged. 
#define I2C_MSTAT_DATACK_M      0x00000008
#define I2C_MSTAT_DATACK_S      3
#define I2C_MSTAT_ADRACK        0x00000004  // Acknowledge address 0: The 
                                            // transmited address was 
                                            // acknowledged. 1: The transmited 
                                            // address was not acknowledged. 
#define I2C_MSTAT_ADRACK_M      0x00000004
#define I2C_MSTAT_ADRACK_S      2
#define I2C_MSTAT_ERR           0x00000002  // Error 0: No error was detected 
                                            // on the last operation. 1: An 
                                            // error occurred on the last 
                                            // operation. 
#define I2C_MSTAT_ERR_M         0x00000002
#define I2C_MSTAT_ERR_S         1
#define I2C_MSTAT_BUSY          0x00000001  // I2C busy 0: The controller is 
                                            // idle. 1: The controller is busy. 
                                            // When the BUSY bit is set, the 
                                            // other status bits are not valid. 
#define I2C_MSTAT_BUSY_M        0x00000001
#define I2C_MSTAT_BUSY_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MCTRL register.
//
//*****************************************************************************
#define I2C_MCTRL_ACK           0x00000008  // Data acknowledge enable 0: The 
                                            // received data byte is not 
                                            // acknowledged automatically by 
                                            // the master. 1: The received data 
                                            // byte is acknowledged 
                                            // automatically by the master. 
#define I2C_MCTRL_ACK_M         0x00000008
#define I2C_MCTRL_ACK_S         3
#define I2C_MCTRL_ACK_DIS       0x00000000  // Disable acknowledge 
#define I2C_MCTRL_ACK_EN        0x00000008  // Enable acknowledge 
#define I2C_MCTRL_STOP          0x00000004  // Generate STOP 0: The controller 
                                            // does not generate the STOP 
                                            // condition. 1: The controller 
                                            // generates the STOP condition. 
#define I2C_MCTRL_STOP_M        0x00000004
#define I2C_MCTRL_STOP_S        2
#define I2C_MCTRL_STOP_DIS      0x00000000  // Disable STOP 
#define I2C_MCTRL_STOP_EN       0x00000004  // Enable STOP 
#define I2C_MCTRL_START         0x00000002  // Generate START 0: The 
                                            // controller does not generate the 
                                            // START condition. 1: The 
                                            // controller generates the START 
                                            // condition. 
#define I2C_MCTRL_START_M       0x00000002
#define I2C_MCTRL_START_S       1
#define I2C_MCTRL_START_DIS     0x00000000  // Disable START 
#define I2C_MCTRL_START_EN      0x00000002  // Enable START 
#define I2C_MCTRL_RUN           0x00000001  // I2C master enable 0: The master 
                                            // is disabled. 1: The master is 
                                            // enabled to transmit or receive 
                                            // data. When the BUSY bit is set, 
                                            // the other status bits are not 
                                            // valid. 
#define I2C_MCTRL_RUN_M         0x00000001
#define I2C_MCTRL_RUN_S         0
#define I2C_MCTRL_RUN_DIS       0x00000000  // Disable Master 
#define I2C_MCTRL_RUN_EN        0x00000001  // Enable Master 
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MDR register.
//
//*****************************************************************************
#define I2C_MDR_DATA_M          0x000000FF  // When read: last RX Data is 
                                            // returned When Written: Data is 
                                            // transferred during TX 
                                            // transaction 
#define I2C_MDR_DATA_S          0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MTPR register.
//
//*****************************************************************************
#define I2C_MTPR_TPR_7          0x00000080  // Must be written to '0' to set 
                                            // the TPR field 
#define I2C_MTPR_TPR_7_M        0x00000080
#define I2C_MTPR_TPR_7_S        7
#define I2C_MTPR_TPR_M          0x0000007F  // SCL clock period This field 
                                            // specifies the period of the SCL 
                                            // clock. SCL_PRD = 2 * 
                                            // (1+TPR)*(SCL_LP + 
                                            // SCL_HP)*CLK_PRD where: SCL_PRD 
                                            // is the SCL line period (I2C 
                                            // clock). TPR is the timer period 
                                            // register value (range of 1 to 
                                            // 255) SCL_LP is the SCL low 
                                            // period (fixed at 6). SCL_HP is 
                                            // the SCL high period (fixed at 
                                            // 4). CLK_PRD is the system clock 
                                            // period in ns. 
#define I2C_MTPR_TPR_S          0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MIMR register.
//
//*****************************************************************************
#define I2C_MIMR_IM             0x00000001  // Interrupt mask 0: The RIS 
                                            // interrupt is suppressed and not 
                                            // sent to the interrupt 
                                            // controller. 1: The master 
                                            // interrupt is sent to the 
                                            // interrupt controller when the 
                                            // RIS bit in the I2CMRIS register 
                                            // is set. 
#define I2C_MIMR_IM_M           0x00000001
#define I2C_MIMR_IM_S           0
#define I2C_MIMR_IM_DIS         0x00000000  // Disable Interrupt 
#define I2C_MIMR_IM_EN          0x00000001  // Enable Interrupt 
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MRIS register.
//
//*****************************************************************************
#define I2C_MRIS_RIS            0x00000001  // Raw interrupt status 0: No 
                                            // interrupt 1: A master interrupt 
                                            // is pending. This bit is cleared 
                                            // by writing 1 to the MICR.IC bit 
                                            // . 
#define I2C_MRIS_RIS_M          0x00000001
#define I2C_MRIS_RIS_S          0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MMIS register.
//
//*****************************************************************************
#define I2C_MMIS_MIS            0x00000001  // Masked interrupt status 0: An 
                                            // interrupt has not occurred or is 
                                            // masked. 1: An unmasked master 
                                            // interrupt is pending. This bit 
                                            // is cleared by writing 1 to the 
                                            // MICR.IC bit . 
#define I2C_MMIS_MIS_M          0x00000001
#define I2C_MMIS_MIS_S          0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MICR register.
//
//*****************************************************************************
#define I2C_MICR_IC             0x00000001  // Interrupt clear Writing 1 to 
                                            // this bit clears the RIS bit in 
                                            // the MRIS register and the MIS 
                                            // bit in the I2CMMIS register. 
                                            // Reading this register returns no 
                                            // meaningful data. 
#define I2C_MICR_IC_M           0x00000001
#define I2C_MICR_IC_S           0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MCR register.
//
//*****************************************************************************
#define I2C_MCR_SFE             0x00000020  // I2C slave function enable 
#define I2C_MCR_SFE_M           0x00000020
#define I2C_MCR_SFE_S           5
#define I2C_MCR_SFE_DIS         0x00000000  // Slave mode is disabled. 
#define I2C_MCR_SFE_EN          0x00000020  // Slave mode is enabled. 
#define I2C_MCR_MFE             0x00000010  // I2C master function enable 
#define I2C_MCR_MFE_M           0x00000010
#define I2C_MCR_MFE_S           4
#define I2C_MCR_MFE_DIS         0x00000000  // Master mode is disabled. 
#define I2C_MCR_MFE_EN          0x00000010  // Master mode is enabled. 
#define I2C_MCR_LPBK            0x00000001  // I2C loopback 0: Normal 
                                            // operation 1: The controller in a 
                                            // test mode loopback 
                                            // configuration. 
#define I2C_MCR_LPBK_M          0x00000001
#define I2C_MCR_LPBK_S          0
#define I2C_MCR_LPBK_DIS        0x00000000  // Disable Test Mode 
#define I2C_MCR_LPBK_EN         0x00000001  // Enable Test Mode 


#endif // __HW_I2C_H__

