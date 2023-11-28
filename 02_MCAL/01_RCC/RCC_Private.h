/*
 *  	Created on: 22/11/2023
 *      LAYER : MCAL
 *      Author: Mohamed sarary
 *      File  : RCC_Private.h
 */

/************************************* FILE GUARD *************************************/
#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

#include "StdTypes.h"

typedef struct
{
	volatile u32 RCC_CR ;
	volatile u32 RCC_CFGR;
	volatile u32 RCC_CIR ;
	volatile u32 RCC_APB2RSTR;
	volatile u32 RCC_APB1RSTR;
	volatile u32 RCC_AHBENR;
	volatile u32 RCC_APB2ENR;
	volatile u32 RCC_APB1ENR;
	volatile u32 RCC_BDCR;
	volatile u32 RCC_CSR;

}RCC_Regs_t;

#define RCC_BaseAddress 				0x40021000

#define MRCC					(( RCC_Regs_t* )(RCC_BaseAddress))


/******************************* RCC CR REGISTER BITS *********************************/
#define CR_HSI_ON                 0
#define	CR_HSI_RDY                1
#define	CR_HSITRIM0               3
#define CR_HSE_ON                 16
#define CR_HSE_RDY                17
#define CR_HSE_BYP                18
#define CR_CSS_ON                 19
#define CR_PLL_ON                 24
#define CR_PLL_RDY                25

/******************************* RCC CFGR REGISTER BITS *********************************/
#define CFGR_SW0                  0
#define CFGR_SW1                  1
#define CFGR_SWS0                 2
#define CFGR_SWS1                 3
#define CFGR_HPRE0                4
#define CFGR_HPRE1                5
#define CFGR_HPRE2                6
#define CFGR_HPRE3                7
#define CFGR_PPRE1_0              8
#define CFGR_PPRE1_1              9
#define CFGR_PPRE1_2              10
#define CFGR_PPRE2_0              11
#define CFGR_PPRE2_1              12
#define CFGR_PPRE2_2              13
#define CFGR_ADCPRE0              14
#define CFGR_ADCPRE1              15
#define CFGR_PLLSRC               16
#define CFGR_PLLXTPRE             17
#define CFGR_PLLMUL0              18
#define CFGR_PLLMUL1              19
#define CFGR_PLLMUL2              20
#define CFGR_PLLMUL3              21
#define CFGR_MCO0                 24
#define CFGR_MCO1                 25
#define CFGR_MCO2                 26


/******************************* ARM CORTEX M3 SYSTEM CLOCKS *********************************/
#define HSI                       0
#define HSE_CRYSTAL               1
#define HSE_RC                    2
#define PLL                       3


/********************************** MCO PIN OUTPUT STATE ************************************/
#define No_Clock                   0
#define SYSCLK_OUTPIT              1
#define HSI_OUTPUT                 2
#define HSE_OUTPUT                 3
#define PLL_OUTPUT                 4


/********************************** PLL CLOCK SOURCE OPTIONS ************************************/
#define HSI_DIV2                   0
#define HSE                        1
#define HSE_DIV2                   2


/************************************** BUSES PRESCALLERS ****************************************/
#define	RCC_PRESCALLER_0			0
#define	RCC_PRESCALLER_2			1
#define	RCC_PRESCALLER_4			2
#define	RCC_PRESCALLER_6			3
#define	RCC_PRESCALLER_8			4
#define	RCC_PRESCALLER_16			5
#define	RCC_PRESCALLER_64			6
#define	RCC_PRESCALLER_128			7
#define	RCC_PRESCALLER_256			8
#define	RCC_PRESCALLER_512			9


/******************************** PLL MULTIPLICATION FACTORS ************************************/
#define	PLL_MUL_2 					2
#define	PLL_MUL_3					3
#define	PLL_MUL_4					4
#define	PLL_MUL_5					5
#define	PLL_MUL_6					6
#define	PLL_MUL_7					7
#define	PLL_MUL_8					8
#define	PLL_MUL_9					9
#define	PLL_MUL_10					10
#define	PLL_MUL_11					11
#define	PLL_MUL_12					12
#define	PLL_MUL_13					13
#define	PLL_MUL_14					14
#define	PLL_MUL_15					15
#define	PLL_MUL_16					16


/*************************************** USB PRESCALLERS *****************************************/
#define USB_PRES_OFF				0
#define USB_PRES_ON					1


/************************************** PERIPHERALS STATE ****************************************/
#define DISABLE						0
#define ENABLE						1

#endif /* RCC_PRIVATE_H_ */
