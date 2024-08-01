/*
 * NOTE: Autogenerated file by gen_soc_headers.py
 * for MKE17Z512VLL9/signal_configuration.xml
 *
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _ZEPHYR_DTS_BINDING_MKE17Z512VLL9_
#define _ZEPHYR_DTS_BINDING_MKE17Z512VLL9_

#define KINETIS_MUX(port, pin, mux)		\
	(((((port) - 'A') & 0xF) << 28) |	\
	(((pin) & 0x3F) << 22) |		\
	(((mux) & 0x7) << 8))

#define ACMP0_IN0_PTA0 KINETIS_MUX('A',0,0) /* PTA0 */
#define TSI1_CH2_PTA0 KINETIS_MUX('A',0,0) /* PTA0 */
#define PTA0 KINETIS_MUX('A',0,1) /* PTA0 */
#define FTM2_CH1_PTA0 KINETIS_MUX('A',0,2) /* PTA0 */
#define LPI2C0_SCLS_PTA0 KINETIS_MUX('A',0,3) /* PTA0 */
#define FXIO_D2_PTA0 KINETIS_MUX('A',0,4) /* PTA0 */
#define LPUART0_CTS_PTA0 KINETIS_MUX('A',0,6) /* PTA0 */
#define TRGMUX_OUT3_PTA0 KINETIS_MUX('A',0,7) /* PTA0 */
#define ACMP0_IN1_PTA1 KINETIS_MUX('A',1,0) /* PTA1 */
#define TSI1_CH3_PTA1 KINETIS_MUX('A',1,0) /* PTA1 */
#define PTA1 KINETIS_MUX('A',1,1) /* PTA1 */
#define FTM1_CH1_PTA1 KINETIS_MUX('A',1,2) /* PTA1 */
#define LPI2C0_SDAS_PTA1 KINETIS_MUX('A',1,3) /* PTA1 */
#define FXIO_D3_PTA1 KINETIS_MUX('A',1,4) /* PTA1 */
#define LPUART0_RTS_PTA1 KINETIS_MUX('A',1,6) /* PTA1 */
#define TRGMUX_OUT0_PTA1 KINETIS_MUX('A',1,7) /* PTA1 */
#define TSI1_CH4_PTA2 KINETIS_MUX('A',2,0) /* PTA2 */
#define PTA2 KINETIS_MUX('A',2,1) /* PTA2 */
#define LPI2C0_SDA_PTA2 KINETIS_MUX('A',2,3) /* PTA2 */
#define EWM_OUT_b_PTA2 KINETIS_MUX('A',2,4) /* PTA2 */
#define LPUART0_RX_PTA2 KINETIS_MUX('A',2,6) /* PTA2 */
#define TSI1_CH5_PTA3 KINETIS_MUX('A',3,0) /* PTA3 */
#define PTA3 KINETIS_MUX('A',3,1) /* PTA3 */
#define LPI2C0_SCL_PTA3 KINETIS_MUX('A',3,3) /* PTA3 */
#define EWM_IN_PTA3 KINETIS_MUX('A',3,4) /* PTA3 */
#define LPUART0_TX_PTA3 KINETIS_MUX('A',3,6) /* PTA3 */
#define PTA4 KINETIS_MUX('A',4,1) /* PTA4 */
#define LPUART1_TX_PTA4 KINETIS_MUX('A',4,3) /* PTA4 */
#define ACMP0_OUT_PTA4 KINETIS_MUX('A',4,4) /* PTA4 */
#define EWM_OUT_b_PTA4 KINETIS_MUX('A',4,5) /* PTA4 */
#define SWD_DIO_PTA4 KINETIS_MUX('A',4,7) /* PTA4 */
#define PTA5 KINETIS_MUX('A',5,1) /* PTA5 */
#define TCLK1_PTA5 KINETIS_MUX('A',5,3) /* PTA5 */
#define RESET_b_PTA5 KINETIS_MUX('A',5,7) /* PTA5 */
#define TSI1_CH11_PTA6 KINETIS_MUX('A',6,0) /* PTA6 */
#define PTA6 KINETIS_MUX('A',6,1) /* PTA6 */
#define FTM0_FLT1_PTA6 KINETIS_MUX('A',6,2) /* PTA6 */
#define LPSPI1_PCS1_PTA6 KINETIS_MUX('A',6,3) /* PTA6 */
#define LPUART1_CTS_PTA6 KINETIS_MUX('A',6,6) /* PTA6 */
#define TSI1_CH12_PTA7 KINETIS_MUX('A',7,0) /* PTA7 */
#define PTA7 KINETIS_MUX('A',7,1) /* PTA7 */
#define FTM0_FLT2_PTA7 KINETIS_MUX('A',7,2) /* PTA7 */
#define LPSPI0_PCS3_PTA7 KINETIS_MUX('A',7,3) /* PTA7 */
#define RTC_CLKIN_PTA7 KINETIS_MUX('A',7,4) /* PTA7 */
#define LPUART1_RTS_PTA7 KINETIS_MUX('A',7,6) /* PTA7 */
#define PTA8 KINETIS_MUX('A',8,1) /* PTA8 */
#define FXIO_D6_PTA8 KINETIS_MUX('A',8,4) /* PTA8 */
#define TRGMUX_OUT0_PTA8 KINETIS_MUX('A',8,7) /* PTA8 */
#define PTA9 KINETIS_MUX('A',9,1) /* PTA9 */
#define FXIO_D7_PTA9 KINETIS_MUX('A',9,4) /* PTA9 */
#define TRGMUX_OUT1_PTA9 KINETIS_MUX('A',9,7) /* PTA9 */
#define TSI0_CH5_PTA10 KINETIS_MUX('A',10,0) /* PTA10 */
#define PTA10 KINETIS_MUX('A',10,1) /* PTA10 */
#define LPUART0_TX_PTA10 KINETIS_MUX('A',10,3) /* PTA10 */
#define FXIO_D0_PTA10 KINETIS_MUX('A',10,4) /* PTA10 */
#define TSI0_CH4_PTA11 KINETIS_MUX('A',11,0) /* PTA11 */
#define PTA11 KINETIS_MUX('A',11,1) /* PTA11 */
#define LPUART0_RX_PTA11 KINETIS_MUX('A',11,3) /* PTA11 */
#define FXIO_D1_PTA11 KINETIS_MUX('A',11,4) /* PTA11 */
#define TSI0_CH3_PTA12 KINETIS_MUX('A',12,0) /* PTA12 */
#define PTA12 KINETIS_MUX('A',12,1) /* PTA12 */
#define LPI2C1_SDAS_PTA12 KINETIS_MUX('A',12,4) /* PTA12 */
#define LPUART0_TX_PTA12 KINETIS_MUX('A',12,5) /* PTA12 */
#define TSI0_CH2_PTA13 KINETIS_MUX('A',13,0) /* PTA13 */
#define PTA13 KINETIS_MUX('A',13,1) /* PTA13 */
#define LPI2C1_SCLS_PTA13 KINETIS_MUX('A',13,4) /* PTA13 */
#define LPUART0_RX_PTA13 KINETIS_MUX('A',13,5) /* PTA13 */
#define PTA14 KINETIS_MUX('A',14,1) /* PTA14 */
#define FTM0_FLT0_PTA14 KINETIS_MUX('A',14,2) /* PTA14 */
#define EWM_IN_PTA14 KINETIS_MUX('A',14,4) /* PTA14 */
#define BUSOUT_PTA14 KINETIS_MUX('A',14,7) /* PTA14 */
#define PTA15 KINETIS_MUX('A',15,1) /* PTA15 */
#define FTM1_CH2_PTA15 KINETIS_MUX('A',15,2) /* PTA15 */
#define LPSPI0_PCS3_PTA15 KINETIS_MUX('A',15,3) /* PTA15 */
#define PTA16 KINETIS_MUX('A',16,1) /* PTA16 */
#define FTM1_CH3_PTA16 KINETIS_MUX('A',16,2) /* PTA16 */
#define LPSPI1_PCS2_PTA16 KINETIS_MUX('A',16,3) /* PTA16 */
#define LPI2C0_SDA_PTA16 KINETIS_MUX('A',16,4) /* PTA16 */
#define PTA17 KINETIS_MUX('A',17,1) /* PTA17 */
#define FTM0_CH6_PTA17 KINETIS_MUX('A',17,2) /* PTA17 */
#define EWM_OUT_b_PTA17 KINETIS_MUX('A',17,4) /* PTA17 */
#define TSI1_CH15_PTB0 KINETIS_MUX('B',0,0) /* PTB0 */
#define ADC0_SE21_PTB0 KINETIS_MUX('B',0,0) /* PTB0 */
#define PTB0 KINETIS_MUX('B',0,1) /* PTB0 */
#define LPUART0_RX_PTB0 KINETIS_MUX('B',0,2) /* PTB0 */
#define LPSPI0_PCS0_PTB0 KINETIS_MUX('B',0,3) /* PTB0 */
#define LPTMR0_ALT3_PTB0 KINETIS_MUX('B',0,4) /* PTB0 */
#define PWT_IN3_PTB0 KINETIS_MUX('B',0,5) /* PTB0 */
#define TSI1_CH16_PTB1 KINETIS_MUX('B',1,0) /* PTB1 */
#define ADC0_SE20_PTB1 KINETIS_MUX('B',1,0) /* PTB1 */
#define PTB1 KINETIS_MUX('B',1,1) /* PTB1 */
#define LPUART0_TX_PTB1 KINETIS_MUX('B',1,2) /* PTB1 */
#define LPSPI0_SOUT_PTB1 KINETIS_MUX('B',1,3) /* PTB1 */
#define TCLK0_PTB1 KINETIS_MUX('B',1,4) /* PTB1 */
#define TSI1_CH17_PTB2 KINETIS_MUX('B',2,0) /* PTB2 */
#define ADC0_SE19_PTB2 KINETIS_MUX('B',2,0) /* PTB2 */
#define PTB2 KINETIS_MUX('B',2,1) /* PTB2 */
#define FTM1_CH0_PTB2 KINETIS_MUX('B',2,2) /* PTB2 */
#define LPSPI0_SCK_PTB2 KINETIS_MUX('B',2,3) /* PTB2 */
#define TRGMUX_IN3_PTB2 KINETIS_MUX('B',2,6) /* PTB2 */
#define ADC0_SE18_PTB3 KINETIS_MUX('B',3,0) /* PTB3 */
#define TSI1_CH18_PTB3 KINETIS_MUX('B',3,0) /* PTB3 */
#define PTB3 KINETIS_MUX('B',3,1) /* PTB3 */
#define FTM1_CH1_PTB3 KINETIS_MUX('B',3,2) /* PTB3 */
#define LPSPI0_SIN_PTB3 KINETIS_MUX('B',3,3) /* PTB3 */
#define TRGMUX_IN2_PTB3 KINETIS_MUX('B',3,6) /* PTB3 */
#define TSI0_CH24_PTB4 KINETIS_MUX('B',4,0) /* PTB4 */
#define ADC0_SE5_PTB4 KINETIS_MUX('B',4,0) /* PTB4 */
#define PTB4 KINETIS_MUX('B',4,1) /* PTB4 */
#define FTM0_CH4_PTB4 KINETIS_MUX('B',4,2) /* PTB4 */
#define LPSPI0_SOUT_PTB4 KINETIS_MUX('B',4,3) /* PTB4 */
#define TRGMUX_IN1_PTB4 KINETIS_MUX('B',4,6) /* PTB4 */
#define ADC0_SE3_PTB5 KINETIS_MUX('B',5,0) /* PTB5 */
#define TSI0_CH23_PTB5 KINETIS_MUX('B',5,0) /* PTB5 */
#define PTB5 KINETIS_MUX('B',5,1) /* PTB5 */
#define FTM0_CH5_PTB5 KINETIS_MUX('B',5,2) /* PTB5 */
#define LPSPI0_PCS1_PTB5 KINETIS_MUX('B',5,3) /* PTB5 */
#define TRGMUX_IN0_PTB5 KINETIS_MUX('B',5,6) /* PTB5 */
#define XTAL_PTB6 KINETIS_MUX('B',6,0) /* PTB6 */
#define PTB6 KINETIS_MUX('B',6,1) /* PTB6 */
#define LPI2C0_SDA_PTB6 KINETIS_MUX('B',6,2) /* PTB6 */
#define LPUART0_RX_PTB6 KINETIS_MUX('B',6,3) /* PTB6 */
#define EXTAL_PTB7 KINETIS_MUX('B',7,0) /* PTB7 */
#define PTB7 KINETIS_MUX('B',7,1) /* PTB7 */
#define LPI2C0_SCL_PTB7 KINETIS_MUX('B',7,2) /* PTB7 */
#define LPUART0_TX_PTB7 KINETIS_MUX('B',7,3) /* PTB7 */
#define PTB8 KINETIS_MUX('B',8,1) /* PTB8 */
#define LPI2C0_SCL_PTB8 KINETIS_MUX('B',8,4) /* PTB8 */
#define FXIO_D4_PTB8 KINETIS_MUX('B',8,6) /* PTB8 */
#define PTB9 KINETIS_MUX('B',9,1) /* PTB9 */
#define LPI2C0_SCLS_PTB9 KINETIS_MUX('B',9,3) /* PTB9 */
#define FXIO_D5_PTB9 KINETIS_MUX('B',9,6) /* PTB9 */
#define PTB10 KINETIS_MUX('B',10,1) /* PTB10 */
#define FTM0_CH0_PTB10 KINETIS_MUX('B',10,2) /* PTB10 */
#define LPI2C0_SDAS_PTB10 KINETIS_MUX('B',10,3) /* PTB10 */
#define FXIO_D0_PTB10 KINETIS_MUX('B',10,6) /* PTB10 */
#define PTB11 KINETIS_MUX('B',11,1) /* PTB11 */
#define FTM0_CH1_PTB11 KINETIS_MUX('B',11,2) /* PTB11 */
#define LPI2C0_HREQ_PTB11 KINETIS_MUX('B',11,3) /* PTB11 */
#define FXIO_D1_PTB11 KINETIS_MUX('B',11,6) /* PTB11 */
#define TSI1_CH8_PTB12 KINETIS_MUX('B',12,0) /* PTB12 */
#define PTB12 KINETIS_MUX('B',12,1) /* PTB12 */
#define FTM0_CH0_PTB12 KINETIS_MUX('B',12,2) /* PTB12 */
#define SCI1_RX_PTB12 KINETIS_MUX('B',12,6) /* PTB12 */
#define TSI1_CH9_PTB13 KINETIS_MUX('B',13,0) /* PTB13 */
#define PTB13 KINETIS_MUX('B',13,1) /* PTB13 */
#define FTM0_CH1_PTB13 KINETIS_MUX('B',13,2) /* PTB13 */
#define SCI1_TX_PTB13 KINETIS_MUX('B',13,6) /* PTB13 */
#define PTB14 KINETIS_MUX('B',14,1) /* PTB14 */
#define FTM0_CH2_PTB14 KINETIS_MUX('B',14,2) /* PTB14 */
#define LPSPI1_SCK_PTB14 KINETIS_MUX('B',14,3) /* PTB14 */
#define PTB15 KINETIS_MUX('B',15,1) /* PTB15 */
#define FTM0_CH3_PTB15 KINETIS_MUX('B',15,2) /* PTB15 */
#define LPSPI1_SIN_PTB15 KINETIS_MUX('B',15,3) /* PTB15 */
#define PTB16 KINETIS_MUX('B',16,1) /* PTB16 */
#define FTM0_CH4_PTB16 KINETIS_MUX('B',16,2) /* PTB16 */
#define LPSPI1_SOUT_PTB16 KINETIS_MUX('B',16,3) /* PTB16 */
#define PTB17 KINETIS_MUX('B',17,1) /* PTB17 */
#define FTM0_CH5_PTB17 KINETIS_MUX('B',17,2) /* PTB17 */
#define LPSPI1_PCS3_PTB17 KINETIS_MUX('B',17,3) /* PTB17 */
#define TSI1_CH23_PTC0 KINETIS_MUX('C',0,0) /* PTC0 */
#define ADC0_SE10_PTC0 KINETIS_MUX('C',0,0) /* PTC0 */
#define PTC0 KINETIS_MUX('C',0,1) /* PTC0 */
#define FTM0_CH0_PTC0 KINETIS_MUX('C',0,2) /* PTC0 */
#define SCI0_RX_PTC0 KINETIS_MUX('C',0,4) /* PTC0 */
#define TSI1_CH24_PTC1 KINETIS_MUX('C',1,0) /* PTC1 */
#define ADC0_SE8_PTC1 KINETIS_MUX('C',1,0) /* PTC1 */
#define PTC1 KINETIS_MUX('C',1,1) /* PTC1 */
#define FTM0_CH1_PTC1 KINETIS_MUX('C',1,2) /* PTC1 */
#define SCI0_TX_PTC1 KINETIS_MUX('C',1,4) /* PTC1 */
#define ACMP0_IN5_PTC2 KINETIS_MUX('C',2,0) /* PTC2 */
#define ADC0_SE15_PTC2 KINETIS_MUX('C',2,0) /* PTC2 */
#define PTC2 KINETIS_MUX('C',2,1) /* PTC2 */
#define FTM0_CH2_PTC2 KINETIS_MUX('C',2,2) /* PTC2 */
#define FXIO_D6_PTC2 KINETIS_MUX('C',2,6) /* PTC2 */
#define ACMP0_IN4_PTC3 KINETIS_MUX('C',3,0) /* PTC3 */
#define ADC0_SE7_PTC3 KINETIS_MUX('C',3,0) /* PTC3 */
#define PTC3 KINETIS_MUX('C',3,1) /* PTC3 */
#define FTM0_CH3_PTC3 KINETIS_MUX('C',3,2) /* PTC3 */
#define FXIO_D7_PTC3 KINETIS_MUX('C',3,6) /* PTC3 */
#define ACMP0_IN2_PTC4 KINETIS_MUX('C',4,0) /* PTC4 */
#define PTC4 KINETIS_MUX('C',4,1) /* PTC4 */
#define FTM1_CH0_PTC4 KINETIS_MUX('C',4,2) /* PTC4 */
#define LPUART1_RX_PTC4 KINETIS_MUX('C',4,3) /* PTC4 */
#define EWM_IN_PTC4 KINETIS_MUX('C',4,5) /* PTC4 */
#define SWD_CLK_PTC4 KINETIS_MUX('C',4,7) /* PTC4 */
#define TSI0_CH8_PTC5 KINETIS_MUX('C',5,0) /* PTC5 */
#define PTC5 KINETIS_MUX('C',5,1) /* PTC5 */
#define FTM2_CH0_PTC5 KINETIS_MUX('C',5,2) /* PTC5 */
#define RTC_CLKOUT_PTC5 KINETIS_MUX('C',5,3) /* PTC5 */
#define LPI2C1_HREQ_PTC5 KINETIS_MUX('C',5,4) /* PTC5 */
#define TSI1_CH0_PTC6 KINETIS_MUX('C',6,0) /* PTC6 */
#define PTC6 KINETIS_MUX('C',6,1) /* PTC6 */
#define LPUART1_RX_PTC6 KINETIS_MUX('C',6,2) /* PTC6 */
#define TSI1_CH1_PTC7 KINETIS_MUX('C',7,0) /* PTC7 */
#define PTC7 KINETIS_MUX('C',7,1) /* PTC7 */
#define LPUART1_TX_PTC7 KINETIS_MUX('C',7,2) /* PTC7 */
#define ADC0_SE24_PTC8 KINETIS_MUX('C',8,0) /* PTC8 */
#define TSI1_CH13_PTC8 KINETIS_MUX('C',8,0) /* PTC8 */
#define PTC8 KINETIS_MUX('C',8,1) /* PTC8 */
#define LPUART1_RX_PTC8 KINETIS_MUX('C',8,2) /* PTC8 */
#define LPUART0_CTS_PTC8 KINETIS_MUX('C',8,6) /* PTC8 */
#define ADC0_SE22_PTC9 KINETIS_MUX('C',9,0) /* PTC9 */
#define TSI1_CH14_PTC9 KINETIS_MUX('C',9,0) /* PTC9 */
#define PTC9 KINETIS_MUX('C',9,1) /* PTC9 */
#define LPUART1_TX_PTC9 KINETIS_MUX('C',9,2) /* PTC9 */
#define LPUART0_RTS_PTC9 KINETIS_MUX('C',9,6) /* PTC9 */
#define PTC10 KINETIS_MUX('C',10,1) /* PTC10 */
#define LPSPI0_SCK_PTC10 KINETIS_MUX('C',10,5) /* PTC10 */
#define PTC11 KINETIS_MUX('C',11,1) /* PTC11 */
#define LPSPI0_SIN_PTC11 KINETIS_MUX('C',11,5) /* PTC11 */
#define PTC12 KINETIS_MUX('C',12,1) /* PTC12 */
#define LPSPI0_SOUT_PTC12 KINETIS_MUX('C',12,5) /* PTC12 */
#define PTC13 KINETIS_MUX('C',13,1) /* PTC13 */
#define LPSPI0_PCS0_PTC13 KINETIS_MUX('C',13,5) /* PTC13 */
#define TSI1_CH19_PTC14 KINETIS_MUX('C',14,0) /* PTC14 */
#define ADC0_SE17_PTC14 KINETIS_MUX('C',14,0) /* PTC14 */
#define PTC14 KINETIS_MUX('C',14,1) /* PTC14 */
#define FTM1_CH2_PTC14 KINETIS_MUX('C',14,2) /* PTC14 */
#define SCI0_RX_PTC14 KINETIS_MUX('C',14,4) /* PTC14 */
#define TSI1_CH20_PTC15 KINETIS_MUX('C',15,0) /* PTC15 */
#define ADC0_SE16_PTC15 KINETIS_MUX('C',15,0) /* PTC15 */
#define PTC15 KINETIS_MUX('C',15,1) /* PTC15 */
#define FTM1_CH3_PTC15 KINETIS_MUX('C',15,2) /* PTC15 */
#define SCI0_TX_PTC15 KINETIS_MUX('C',15,4) /* PTC15 */
#define ADC0_SE14_PTC16 KINETIS_MUX('C',16,0) /* PTC16 */
#define TSI1_CH21_PTC16 KINETIS_MUX('C',16,0) /* PTC16 */
#define PTC16 KINETIS_MUX('C',16,1) /* PTC16 */
#define LPI2C1_SDAS_PTC16 KINETIS_MUX('C',16,4) /* PTC16 */
#define SCI1_RX_PTC16 KINETIS_MUX('C',16,6) /* PTC16 */
#define TSI1_CH22_PTC17 KINETIS_MUX('C',17,0) /* PTC17 */
#define ADC0_SE12_PTC17 KINETIS_MUX('C',17,0) /* PTC17 */
#define PTC17 KINETIS_MUX('C',17,1) /* PTC17 */
#define LPI2C1_SCLS_PTC17 KINETIS_MUX('C',17,4) /* PTC17 */
#define SCI1_TX_PTC17 KINETIS_MUX('C',17,6) /* PTC17 */
#define TSI0_CH12_PTD0 KINETIS_MUX('D',0,0) /* PTD0 */
#define PTD0 KINETIS_MUX('D',0,1) /* PTD0 */
#define FTM0_CH2_PTD0 KINETIS_MUX('D',0,2) /* PTD0 */
#define LPSPI1_SCK_PTD0 KINETIS_MUX('D',0,3) /* PTD0 */
#define FTM2_CH0_PTD0 KINETIS_MUX('D',0,4) /* PTD0 */
#define FXIO_D0_PTD0 KINETIS_MUX('D',0,6) /* PTD0 */
#define TRGMUX_OUT1_PTD0 KINETIS_MUX('D',0,7) /* PTD0 */
#define TSI0_CH11_PTD1 KINETIS_MUX('D',1,0) /* PTD1 */
#define PTD1 KINETIS_MUX('D',1,1) /* PTD1 */
#define FTM0_CH3_PTD1 KINETIS_MUX('D',1,2) /* PTD1 */
#define LPSPI1_SIN_PTD1 KINETIS_MUX('D',1,3) /* PTD1 */
#define FTM2_CH1_PTD1 KINETIS_MUX('D',1,4) /* PTD1 */
#define FXIO_D1_PTD1 KINETIS_MUX('D',1,6) /* PTD1 */
#define TRGMUX_OUT2_PTD1 KINETIS_MUX('D',1,7) /* PTD1 */
#define TSI1_CH6_PTD2 KINETIS_MUX('D',2,0) /* PTD2 */
#define PTD2 KINETIS_MUX('D',2,1) /* PTD2 */
#define LPSPI1_SOUT_PTD2 KINETIS_MUX('D',2,3) /* PTD2 */
#define FXIO_D4_PTD2 KINETIS_MUX('D',2,4) /* PTD2 */
#define LPI2C0_SDA_PTD2 KINETIS_MUX('D',2,5) /* PTD2 */
#define TRGMUX_IN5_PTD2 KINETIS_MUX('D',2,6) /* PTD2 */
#define PTD3 KINETIS_MUX('D',3,1) /* PTD3 */
#define LPSPI1_PCS0_PTD3 KINETIS_MUX('D',3,3) /* PTD3 */
#define FXIO_D5_PTD3 KINETIS_MUX('D',3,4) /* PTD3 */
#define LPI2C0_SCL_PTD3 KINETIS_MUX('D',3,5) /* PTD3 */
#define TRGMUX_IN4_PTD3 KINETIS_MUX('D',3,6) /* PTD3 */
#define NMI_b_PTD3 KINETIS_MUX('D',3,7) /* PTD3 */
#define TSI1_CH7_PTD4 KINETIS_MUX('D',4,0) /* PTD4 */
#define PTD4 KINETIS_MUX('D',4,1) /* PTD4 */
#define FTM0_FLT3_PTD4 KINETIS_MUX('D',4,2) /* PTD4 */
#define ADC0_SE9_PTD5 KINETIS_MUX('D',5,0) /* PTD5 */
#define PTD5 KINETIS_MUX('D',5,1) /* PTD5 */
#define FTM2_CH3_PTD5 KINETIS_MUX('D',5,2) /* PTD5 */
#define LPTMR0_ALT2_PTD5 KINETIS_MUX('D',5,3) /* PTD5 */
#define FXIO_D3_PTD5 KINETIS_MUX('D',5,4) /* PTD5 */
#define PWT_IN2_PTD5 KINETIS_MUX('D',5,5) /* PTD5 */
#define TRGMUX_IN7_PTD5 KINETIS_MUX('D',5,6) /* PTD5 */
#define LPUART2_CTS_PTD5 KINETIS_MUX('D',5,7) /* PTD5 */
#define ADC0_SE11_PTD6 KINETIS_MUX('D',6,0) /* PTD6 */
#define PTD6 KINETIS_MUX('D',6,1) /* PTD6 */
#define LPUART2_RX_PTD6 KINETIS_MUX('D',6,2) /* PTD6 */
#define ADC0_SE13_PTD7 KINETIS_MUX('D',7,0) /* PTD7 */
#define PTD7 KINETIS_MUX('D',7,1) /* PTD7 */
#define LPUART2_TX_PTD7 KINETIS_MUX('D',7,2) /* PTD7 */
#define PTD8 KINETIS_MUX('D',8,1) /* PTD8 */
#define FTM0_CH7_PTD8 KINETIS_MUX('D',8,2) /* PTD8 */
#define LPI2C1_SDA_PTD8 KINETIS_MUX('D',8,3) /* PTD8 */
#define LPSPI0_PCS1_PTD8 KINETIS_MUX('D',8,5) /* PTD8 */
#define PTD9 KINETIS_MUX('D',9,1) /* PTD9 */
#define LPI2C1_SCL_PTD9 KINETIS_MUX('D',9,3) /* PTD9 */
#define FXIO_D2_PTD9 KINETIS_MUX('D',9,6) /* PTD9 */
#define PTD10 KINETIS_MUX('D',10,1) /* PTD10 */
#define FTM2_CH0_PTD10 KINETIS_MUX('D',10,2) /* PTD10 */
#define PTD11 KINETIS_MUX('D',11,1) /* PTD11 */
#define FTM2_CH1_PTD11 KINETIS_MUX('D',11,2) /* PTD11 */
#define LPUART2_CTS_PTD11 KINETIS_MUX('D',11,6) /* PTD11 */
#define PTD12 KINETIS_MUX('D',12,1) /* PTD12 */
#define FTM2_CH2_PTD12 KINETIS_MUX('D',12,2) /* PTD12 */
#define LPI2C1_HREQ_PTD12 KINETIS_MUX('D',12,3) /* PTD12 */
#define LPUART2_RTS_PTD12 KINETIS_MUX('D',12,6) /* PTD12 */
#define PTD13 KINETIS_MUX('D',13,1) /* PTD13 */
#define LPUART1_RX_PTD13 KINETIS_MUX('D',13,3) /* PTD13 */
#define RTC_CLKOUT_PTD13 KINETIS_MUX('D',13,7) /* PTD13 */
#define PTD14 KINETIS_MUX('D',14,1) /* PTD14 */
#define LPUART1_TX_PTD14 KINETIS_MUX('D',14,3) /* PTD14 */
#define CLKOUT_PTD14 KINETIS_MUX('D',14,7) /* PTD14 */
#define TSI0_CH20_PTD15 KINETIS_MUX('D',15,0) /* PTD15 */
#define ADC0_SE2_PTD15 KINETIS_MUX('D',15,0) /* PTD15 */
#define PTD15 KINETIS_MUX('D',15,1) /* PTD15 */
#define FTM0_CH0_PTD15 KINETIS_MUX('D',15,2) /* PTD15 */
#define TSI0_CH19_PTD16 KINETIS_MUX('D',16,0) /* PTD16 */
#define ADC0_SE4_PTD16 KINETIS_MUX('D',16,0) /* PTD16 */
#define PTD16 KINETIS_MUX('D',16,1) /* PTD16 */
#define FTM0_CH1_PTD16 KINETIS_MUX('D',16,2) /* PTD16 */
#define PTD17 KINETIS_MUX('D',17,1) /* PTD17 */
#define FTM0_FLT2_PTD17 KINETIS_MUX('D',17,2) /* PTD17 */
#define LPUART2_RX_PTD17 KINETIS_MUX('D',17,3) /* PTD17 */
#define TRGMUX_OUT2_PTD17 KINETIS_MUX('D',17,7) /* PTD17 */
#define TSI0_CH7_PTE0 KINETIS_MUX('E',0,0) /* PTE0 */
#define PTE0 KINETIS_MUX('E',0,1) /* PTE0 */
#define LPSPI0_SCK_PTE0 KINETIS_MUX('E',0,2) /* PTE0 */
#define TCLK1_PTE0 KINETIS_MUX('E',0,3) /* PTE0 */
#define LPI2C1_SDA_PTE0 KINETIS_MUX('E',0,4) /* PTE0 */
#define TSI0_CH6_PTE1 KINETIS_MUX('E',1,0) /* PTE1 */
#define PTE1 KINETIS_MUX('E',1,1) /* PTE1 */
#define LPSPI0_SIN_PTE1 KINETIS_MUX('E',1,2) /* PTE1 */
#define LPI2C0_HREQ_PTE1 KINETIS_MUX('E',1,3) /* PTE1 */
#define LPI2C1_SCL_PTE1 KINETIS_MUX('E',1,4) /* PTE1 */
#define TSI0_CH1_PTE2 KINETIS_MUX('E',2,0) /* PTE2 */
#define PTE2 KINETIS_MUX('E',2,1) /* PTE2 */
#define LPSPI0_SOUT_PTE2 KINETIS_MUX('E',2,2) /* PTE2 */
#define LPTMR0_ALT3_PTE2 KINETIS_MUX('E',2,3) /* PTE2 */
#define PWT_IN3_PTE2 KINETIS_MUX('E',2,5) /* PTE2 */
#define LPUART1_CTS_PTE2 KINETIS_MUX('E',2,6) /* PTE2 */
#define TSI0_CH18_PTE3 KINETIS_MUX('E',3,0) /* PTE3 */
#define ADC0_SE6_PTE3 KINETIS_MUX('E',3,0) /* PTE3 */
#define PTE3 KINETIS_MUX('E',3,1) /* PTE3 */
#define FTM0_FLT0_PTE3 KINETIS_MUX('E',3,2) /* PTE3 */
#define LPUART2_RTS_PTE3 KINETIS_MUX('E',3,3) /* PTE3 */
#define TRGMUX_IN6_PTE3 KINETIS_MUX('E',3,6) /* PTE3 */
#define TSI0_CH17_PTE4 KINETIS_MUX('E',4,0) /* PTE4 */
#define PTE4 KINETIS_MUX('E',4,1) /* PTE4 */
#define BUSOUT_PTE4 KINETIS_MUX('E',4,2) /* PTE4 */
#define FTM2_CH2_PTE4 KINETIS_MUX('E',4,4) /* PTE4 */
#define FXIO_D6_PTE4 KINETIS_MUX('E',4,6) /* PTE4 */
#define EWM_OUT_b_PTE4 KINETIS_MUX('E',4,7) /* PTE4 */
#define TSI0_CH16_PTE5 KINETIS_MUX('E',5,0) /* PTE5 */
#define PTE5 KINETIS_MUX('E',5,1) /* PTE5 */
#define TCLK2_PTE5 KINETIS_MUX('E',5,2) /* PTE5 */
#define FTM2_CH3_PTE5 KINETIS_MUX('E',5,4) /* PTE5 */
#define FXIO_D7_PTE5 KINETIS_MUX('E',5,6) /* PTE5 */
#define EWM_IN_PTE5 KINETIS_MUX('E',5,7) /* PTE5 */
#define TSI0_CH0_PTE6 KINETIS_MUX('E',6,0) /* PTE6 */
#define PTE6 KINETIS_MUX('E',6,1) /* PTE6 */
#define LPSPI0_PCS2_PTE6 KINETIS_MUX('E',6,2) /* PTE6 */
#define LPUART1_RTS_PTE6 KINETIS_MUX('E',6,6) /* PTE6 */
#define TSI1_CH10_PTE7 KINETIS_MUX('E',7,0) /* PTE7 */
#define PTE7 KINETIS_MUX('E',7,1) /* PTE7 */
#define FTM0_CH7_PTE7 KINETIS_MUX('E',7,2) /* PTE7 */
#define TSI0_CH22_PTE8 KINETIS_MUX('E',8,0) /* PTE8 */
#define ACMP0_IN3_PTE8 KINETIS_MUX('E',8,0) /* PTE8 */
#define ADC0_SE1_PTE8 KINETIS_MUX('E',8,0) /* PTE8 */
#define PTE8 KINETIS_MUX('E',8,1) /* PTE8 */
#define FTM0_CH6_PTE8 KINETIS_MUX('E',8,2) /* PTE8 */
#define TSI0_CH21_PTE9 KINETIS_MUX('E',9,0) /* PTE9 */
#define ADC0_SE0_PTE9 KINETIS_MUX('E',9,0) /* PTE9 */
#define PTE9 KINETIS_MUX('E',9,1) /* PTE9 */
#define FTM0_CH7_PTE9 KINETIS_MUX('E',9,2) /* PTE9 */
#define LPUART2_CTS_PTE9 KINETIS_MUX('E',9,3) /* PTE9 */
#define TSI0_CH10_PTE10 KINETIS_MUX('E',10,0) /* PTE10 */
#define PTE10 KINETIS_MUX('E',10,1) /* PTE10 */
#define CLKOUT_PTE10 KINETIS_MUX('E',10,2) /* PTE10 */
#define FXIO_D4_PTE10 KINETIS_MUX('E',10,6) /* PTE10 */
#define TRGMUX_OUT4_PTE10 KINETIS_MUX('E',10,7) /* PTE10 */
#define TSI0_CH9_PTE11 KINETIS_MUX('E',11,0) /* PTE11 */
#define PTE11 KINETIS_MUX('E',11,1) /* PTE11 */
#define PWT_IN1_PTE11 KINETIS_MUX('E',11,2) /* PTE11 */
#define LPTMR0_ALT1_PTE11 KINETIS_MUX('E',11,3) /* PTE11 */
#define FXIO_D5_PTE11 KINETIS_MUX('E',11,6) /* PTE11 */
#define TRGMUX_OUT5_PTE11 KINETIS_MUX('E',11,7) /* PTE11 */
#define PTE12 KINETIS_MUX('E',12,1) /* PTE12 */
#define FTM0_FLT3_PTE12 KINETIS_MUX('E',12,2) /* PTE12 */
#define LPUART2_TX_PTE12 KINETIS_MUX('E',12,3) /* PTE12 */
#define TRGMUX_OUT3_PTE12 KINETIS_MUX('E',12,7) /* PTE12 */
#define TSI0_CH15_PTE13 KINETIS_MUX('E',13,0) /* PTE13 */
#define PTE13 KINETIS_MUX('E',13,1) /* PTE13 */
#define TRGMUX_OUT5_PTE13 KINETIS_MUX('E',13,7) /* PTE13 */
#define PTE14 KINETIS_MUX('E',14,1) /* PTE14 */
#define FTM0_FLT1_PTE14 KINETIS_MUX('E',14,2) /* PTE14 */
#define TRGMUX_OUT4_PTE14 KINETIS_MUX('E',14,7) /* PTE14 */
#define TSI0_CH14_PTE15 KINETIS_MUX('E',15,0) /* PTE15 */
#define PTE15 KINETIS_MUX('E',15,1) /* PTE15 */
#define FXIO_D2_PTE15 KINETIS_MUX('E',15,6) /* PTE15 */
#define TRGMUX_OUT6_PTE15 KINETIS_MUX('E',15,7) /* PTE15 */
#define TSI0_CH13_PTE16 KINETIS_MUX('E',16,0) /* PTE16 */
#define PTE16 KINETIS_MUX('E',16,1) /* PTE16 */
#define FXIO_D3_PTE16 KINETIS_MUX('E',16,6) /* PTE16 */
#define TRGMUX_OUT7_PTE16 KINETIS_MUX('E',16,7) /* PTE16 */
#endif