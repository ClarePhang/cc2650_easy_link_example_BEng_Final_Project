//------------------------------------------------------------------------------
// TI Confidential - NDA Restrictions
//
// Copyright (c) 2011 Texas Instruments, Inc.
//
//    This is an unpublished work created in the year stated above.
//    Texas Instruments owns all rights in and to this work and
//    intends to maintain and protect it as an unpublished copyright.
//    In the event of either inadvertent or deliberate publication,
//    the above stated date shall be treated as the year of first
//    publication. In the event of such publication, Texas Instruments
//    intends to enforce its rights in the work under the copyright
//    laws as a published work.
//
//------------------------------------------------------------------------------
///
/// \file            ble_mailbox.h
/// \brief           Definitions for BLE interface
///
/// \author          Low Power RF Wireless Business Unit
///                  Helge Coward (h.coward@ti.com)
///
/// \date            Thu Nov 24 09:00:42 CET 2011
///
//-----------------------------------------------------------------------------

#ifndef _BLE_MAILBOX_H
#define _BLE_MAILBOX_H

/// \name CPE interrupt definitions for BLE
/// Interrupt masks for the CPE interrupt in RDBELL. These interrupts apply to BLE only and come in
/// addition to the ones defined in mailbox.h.
///@{
#define IRQN_BLE_TX_DONE            4           ///< A packet has been transmitted
#define IRQN_BLE_TX_ACK             5           ///< Acknowledgement received on a transmitted packet
#define IRQN_BLE_TX_CTRL            6           ///< Transmitted LL control packet
#define IRQN_BLE_TX_CTRL_ACK        7           ///< Acknowledgement received on a transmitted LL control
                                                ///< packet 
#define IRQN_BLE_TX_CTRL_ACK_ACK    8           ///< Acknowledgement received on a transmitted LL control
                                                ///< packet, and acknowledgement transmitted for that
                                                ///< packet 
#define IRQN_BLE_TX_RETRANS         9           ///< Packet retransmitted
#define IRQN_BLE_TX_ENTRY_DONE      10          ///< Tx queue data entry state changed to Finished
#define IRQN_BLE_TX_BUFFER_CHANGED  11          ///< Buffer change is complete after CMD_BLE_ADV_PAYLOAD

#define IRQN_BLE_RX_OK              16          ///< Packet received with CRC OK, payload, and not to be
                                                ///< ignored 
#define IRQN_BLE_RX_NOK             17          ///< Packet received with CRC error
#define IRQN_BLE_RX_IGNORED         18          ///< Packet received with CRC OK, but to be ignored
#define IRQN_BLE_RX_EMPTY           19          ///< Packet received with CRC OK, not to be ignored, no
                                                ///< payload 
#define IRQN_BLE_RX_CTRL            20          ///< LL control packet received with CRC OK, not to be
                                                ///< ignored 
#define IRQN_BLE_RX_CTRL_ACK        21          ///< LL control packet received with CRC OK, not to be
                                                ///< ignored, then acknowledgement sent 
#define IRQN_BLE_RX_BUF_FULL        22          ///< Packet received that did not fit in the Rx queue
#define IRQN_BLE_RX_ENTRY_DONE      23          ///< Rx queue data entry changing state to Finished

#define IRQ_BLE_TX_DONE             (1U << IRQN_BLE_TX_DONE)
#define IRQ_BLE_TX_ACK              (1U << IRQN_BLE_TX_ACK)
#define IRQ_BLE_TX_CTRL             (1U << IRQN_BLE_TX_CTRL)
#define IRQ_BLE_TX_CTRL_ACK         (1U << IRQN_BLE_TX_CTRL_ACK)
#define IRQ_BLE_TX_CTRL_ACK_ACK     (1U << IRQN_BLE_TX_CTRL_ACK_ACK)
#define IRQ_BLE_TX_RETRANS          (1U << IRQN_BLE_TX_RETRANS)
#define IRQ_BLE_TX_ENTRY_DONE       (1U << IRQN_BLE_TX_ENTRY_DONE)
#define IRQ_BLE_TX_BUFFER_CHANGED   (1U << IRQN_BLE_TX_BUFFER_CHANGED)
#define IRQ_BLE_RX_OK               (1U << IRQN_BLE_RX_OK)
#define IRQ_BLE_RX_NOK              (1U << IRQN_BLE_RX_NOK)
#define IRQ_BLE_RX_IGNORED          (1U << IRQN_BLE_RX_IGNORED)
#define IRQ_BLE_RX_EMPTY            (1U << IRQN_BLE_RX_EMPTY)
#define IRQ_BLE_RX_CTRL             (1U << IRQN_BLE_RX_CTRL)
#define IRQ_BLE_RX_CTRL_ACK         (1U << IRQN_BLE_RX_CTRL_ACK)
#define IRQ_BLE_RX_BUF_FULL         (1U << IRQN_BLE_RX_BUF_FULL)
#define IRQ_BLE_RX_ENTRY_DONE       (1U << IRQN_BLE_RX_ENTRY_DONE)
///@}



/// \name Radio operation status
/// Radio operation status format:
/// Bits 15:12: Protocol
///             0001: BLE
/// Bits 11:10: Type
///             00: Not finished
///             01: Done successfully
///             10: Done with error
/// Bits 9:0:   Identifier

/// \name Operation finished normally
///@{
#define BLE_DONE_OK             0x1400  ///< Operation ended normally
#define BLE_DONE_RXTIMEOUT      0x1401  ///< Timeout of first Rx of slave operation or end of scan window
#define BLE_DONE_NOSYNC         0x1402  ///< Timeout of subsequent Rx
#define BLE_DONE_RXERR          0x1403  ///< Operation ended because of receive error (CRC or other)
#define BLE_DONE_CONNECT        0x1404  ///< CONNECT_REQ received or transmitted
#define BLE_DONE_MAXNACK        0x1405  ///< Maximum number of retransmissions exceeded
#define BLE_DONE_ENDED          0x1406  ///< Operation stopped after end trigger
#define BLE_DONE_ABORT          0x1407  ///< Operation aborted by command
#define BLE_DONE_STOPPED        0x1408  ///< Operation stopped after stop command
///@}
/// \name Operation finished with error
///@{
#define BLE_ERROR_PAR           0x1800  ///< Illegal parameter
#define BLE_ERROR_RXBUF         0x1801  ///< No available Rx buffer (Advertiser, Scanner, Initiator)
#define BLE_ERROR_NO_SETUP      0x1802  ///< Operation using Rx or Tx attemted when not in BLE mode
#define BLE_ERROR_NO_FS         0x1803  ///< Operation using Rx or Tx attemted without frequency synth configured
#define BLE_ERROR_SYNTH_PROG    0x1804  ///< Synthesizer programming failed to complete on time
#define BLE_ERROR_RXOVF         0x1805  ///< Receiver overflowed during operation
#define BLE_ERROR_TXUNF         0x1806  ///< Transmitter underflowed during operation
///@}
///@}

#endif
