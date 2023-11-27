/*
 *  	Created on: 22/11/2023
 *      LAYER : MCAL
 *      Author: Mohamed sarary
 *      File  : RCC_Interface.h
 */

/************************************* FILE GUARD *************************************/
#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

#include "../01_LIB/StdTypes.h"

/*********************************** ARM CORTEX M3 BUSES ***********************************/
typedef enum
{
	AHB,
	APB1,
	APB2,

}SysBuses_t;


/*********************************** AHB BUS PERIPHERALS ***********************************/
typedef enum
{
	DMA1,
	DMA2,
	SRAM,
	FLITF = 4,
	CRCE  = 6,
	FSMC  = 8,
	SDIO  = 10,

}AHBPeripherals_t;


/*********************************** APB1 BUS PERIPHERALS ***********************************/
typedef enum
{
	TIM2,
	TIM3,
	TIM4,
	TIM5,
	TIM6,
	TIM7,
	TIM12,
	TIM13,
	TIM14,
	RTC,
	WWDG = 11,
	SPI2 = 14,
	SPI3,
	USART2 = 17,
	USART3,
	UART4,
	UART5,
	I2C1,
	I2C2,
	USB,
	BxCAN = 25,
	BKP,
	PWR,
	DAC,
	IWDG,
}APB1Peripherals_t;


/*********************************** APB2 BUS PERIPHERALS ***********************************/
typedef enum
{
	AFIO,
	GPIOA = 2,
	GPIOB,
	GPIOC,
	GPIOD,
	GPIOE,
	GPIOF,
	GPIOG,
	ADC1,
	ADC2,
	TIM1,
	SPI1,
	TIM8,
	USART1,
	ADC3,
	TIM9 = 19,
	TIM10,
	TIM11,

}APB2Peripherals_t;

/*********************************************************************************************************/
/**************************************** RCC FUNCTIONS PROTOTYPE ****************************************/
/*********************************************************************************************************/

/*
 * Function : RCC_voidClockInit
 * I/P : void
 * O/P : void
 * DESCRIPTION : FUNCTION TO INITIALIZE THE CLOCK OF THE MICROCONTROLLER
 */
void RCC_voidClockInit(void);

/*
 * Function : RCC_u8PeriheralEnable
 * I/P : BUS_ID (AHB,APB1,APB2) - PERIPHERAL_ID (0:31)
 * O/P : (u8) ERROR STATE
 * DESCRIPTION : FUNCTION TO ENABLE THE PERIPHERAL BY ENABLE THE CLOCK OF THE PERIHPERAL
 */
u8 RCC_u8PeriheralEnable( SysBuses_t Copy_u8BusID , u8 Copy_u8PeriheralID);

/*
 * Function : RCC_u8PeriheralEnable
 * I/P : BUS_ID (AHB,APB1,APB2) - PERIPHERAL_ID (0:31)
 * O/P : ERROR_STATE (FuncNOK,FuncOK,NullPointer,OutOfRange)
 * DESCRIPTION : FUNCTION TO DISABLE THE PERIPHERAL BY DISABLE THE CLOCK OF THE PERIHPERAL
 */
u8 RCC_u8PeriheralDisable( SysBuses_t Copy_u8BusID , u8 Copy_u8PeriheralID);


/*********************************************************************************************************/
/************************************ END OF RCC FUNCTIONS PROTOTYPE *************************************/
/*********************************************************************************************************/
#endif /* RCC_INTERFACE_H_ */
