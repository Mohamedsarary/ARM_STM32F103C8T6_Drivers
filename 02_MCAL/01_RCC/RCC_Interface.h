/*
 *  	Created on: 22/11/2023
 *      LAYER : MCAL
 *      Author: Mohamed sarary
 *      File  : RCC_Interface.h
 */

/************************************* FILE GUARD *************************************/
#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

#include "StdTypes.h"

/*********************************** ARM CORTEX M3 BUSES ***********************************/
#define AHB				0
#define APB1			1
#define APB2			2

/*********************************** AHB BUS PERIPHERALS ***********************************/
#define DMA1			0
#define DMA2			1
#define SRAM			2
#define FLITF			4
#define CRCE			6
#define FSMC			8
#define SDIO			10

/*********************************** APB1 BUS PERIPHERALS ***********************************/
#define TIM2			0
#define	TIM3			1
#define TIM4			2
#define TIM5			3
#define TIM6			4
#define TIM7			5
#define TIM12			6
#define TIM13			7
#define TIM14			8
#define RTC				9
#define WWDG			11
#define SPI2			14
#define SPI3			15
#define USART2			17
#define USART3			18
#define UART4			19
#define UART5			20
#define I2C1			21
#define I2C2			22
#define USB				23
#define BxCAN			25
#define BKP				26
#define PWR				27
#define DAC				28
#define IWDG			29

/*********************************** APB2 BUS PERIPHERALS ***********************************/
#define	AFIO			0
#define	GPIOA			2
#define	GPIOB			3
#define	GPIOC			4
#define	GPIOD			5
#define	GPIOE			6
#define	GPIOF			7
#define GPIOG			8
#define ADC1			9
#define ADC2			10
#define TIM1			11
#define SPI1			12
#define TIM8			13
#define USART1			14
#define ADC3			15
#define TIM9			19
#define TIM10			20
#define TIME11			21


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
u8 RCC_u8PeriheralEnable( u8 Copy_u8BusID , u8 Copy_u8PeriheralID);

/*
 * Function : RCC_u8PeriheralEnable
 * I/P : BUS_ID (AHB,APB1,APB2) - PERIPHERAL_ID (0:31)
 * O/P : ERROR_STATE (FuncNOK,FuncOK,NullPointer,OutOfRange)
 * DESCRIPTION : FUNCTION TO DISABLE THE PERIPHERAL BY DISABLE THE CLOCK OF THE PERIHPERAL
 */
u8 RCC_u8PeriheralDisable( u8 Copy_u8BusID , u8 Copy_u8PeriheralID);


/*********************************************************************************************************/
/************************************ END OF RCC FUNCTIONS PROTOTYPE *************************************/
/*********************************************************************************************************/
#endif /* RCC_INTERFACE_H_ */
