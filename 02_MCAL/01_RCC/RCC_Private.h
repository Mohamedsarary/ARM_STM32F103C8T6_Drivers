/*
 *  	Created on: 22/11/2023
 *      LAYER : MCAL
 *      Author: Mohamed sarary
 *      File  : RCC_Private.h
 */

/************************************* FILE GUARD *************************************/
#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

#include "../01_LIB/StdTypes.h"

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

#define MRCC				(( volatile RCC_Regs_t* )(RCC_BaseAddress))


/******************************* RCC CR REGISTER BITS *********************************/
#define CR_HSI_ON			0
#define	CR_HSI_RDY			1
#define	CR_HSITRIM0 		3
#define CR_HSE_ON			16
#define CR_HSE_RDY			17
#define CR_HSE_BYP			18
#define CR_CSS_ON			19
#define CR_PLL_ON			24
#define CR_PLL_RDY			25

/******************************* RCC CFGR REGISTER BITS *********************************/
#define CFGR_SW0			0
#define CFGR_SW1			1
#define CFGR_SWS0			2
#define CFGR_SWS1			3
#define CFGR_HPRE0			4
#define CFGR_HPRE1			5
#define CFGR_HPRE2			6
#define CFGR_HPRE3			7
#define CFGR_PPRE1_0		8
#define CFGR_PPRE1_1		9
#define CFGR_PPRE1_2		10
#define CFGR_PPRE2_0		11
#define CFGR_PPRE2_1		12
#define CFGR_PPRE2_2		13
#define CFGR_ADCPRE0		14
#define CFGR_ADCPRE1		15
#define CFGR_PLLSRC			16
#define CFGR_PLLXTPRE		17
#define CFGR_PLLMUL0		18
#define CFGR_PLLMUL1		19
#define CFGR_PLLMUL2		20
#define CFGR_PLLMUL3		20
#define CFGR_MCO0			24
#define CFGR_MCO1			25
#define CFGR_MCO2			26


/******************************* ARM CORTEX M3 SYSTEM CLOCKS *********************************/
typedef enum
{
	HSI,
	HSE_CRYSTAL,
	HSE_RC,
	PLL,

}SYSTEM_ClkSrcs_t;


/********************************** MCO PIN OUTPUT STATE ************************************/
typedef enum
{
	NoClock,
	SYSCLk_OUTPUT,
	HSI_OUTPUT,
	HSE_OUTPUT,
	PLL_OUTPUT,

}MCO_State_t;


/********************************** PLL CLOCK SOURCE OPTIONS ************************************/
typedef enum
{
	HSI_DIV2,
	HSE,
	HSE_DIV2,

}PLL_Options_t;


/************************************** BUSES PRESCALLERS ****************************************/
typedef enum
{
	RCC_PRESCALLER_0,
	RCC_PRESCALLER_2,
	RCC_PRESCALLER_4,
	RCC_PRESCALLER_6,
	RCC_PRESCALLER_8,
	RCC_PRESCALLER_16,
	RCC_PRESCALLER_64,
	RCC_PRESCALLER_128,
	RCC_PRESCALLER_256,
	RCC_PRESCALLER_512,

}BUSES_Prescaller_t;

/******************************** PLL MULTIPLICATION FACTORS ************************************/
typedef enum
{
	PLL_MUL_2 = 2,
	PLL_MUL_3,
	PLL_MUL_4,
	PLL_MUL_5,
	PLL_MUL_6,
	PLL_MUL_7,
	PLL_MUL_8,
	PLL_MUL_9,
	PLL_MUL_10,
	PLL_MUL_11,
	PLL_MUL_12,
	PLL_MUL_13,
	PLL_MUL_14,
	PLL_MUL_15,
	PLL_MUL_16,

}PLL_MUL_t;

/*************************************** USB PRESCALLERS *****************************************/
typedef enum
{
	USB_PRES_OFF,
	USB_PRES_ON
}USB_Prescaller_t;

/************************************** PERIPHERALS STATE ****************************************/
typedef enum
{
	DISABLE,
	ENABLE,
}PERIPHERALS_State_t;


#endif /* RCC_PRIVATE_H_ */
