/*
 *  	Created on: 22/11/2023
 *      LAYER : MCAL
 *      Author: Mohamed sarary
 *      File  : RCC_Config.h
 */

/************************************* FILE GUARD *************************************/
#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_

/*
 * SYSTEM CLOCK OPTIONS :
 * 1- HSI
 * 2- HSE_CRYSTAL
 * 3- HSE_RC
 * 4- PLL
 */
#define SYS_CLOCK				HSE_CRYSTAL

/*
 * CLOCK SECURITY SYSTEM OPTIONS :
 * 1- DISABLE
 * 2- ENABLE
 */
#define CCS_STATE 				DISABLE


/*	PLL MULTIPLICATION OPTIONS :
 * 1- PLL_MUL_2,
 * 2- PLL_MUL_3,
 * 3- PLL_MUL_4,
 * 4- PLL_MUL_5,
 * 5- PLL_MUL_6,
 * 6- PLL_MUL_7,
 * 7- PLL_MUL_8,
 * 8- PLL_MUL_9,
 * 9- PLL_MUL_10
 * 10- PLL_MUL_11
 * 11- PLL_MUL_12
 * 12- PLL_MUL_13
 * 13- PLL_MUL_14
 * 14- PLL_MUL_15
 * 15- PLL_MUL_16
 */
#define PLL_MUL_FACTOR				PLL_MUL_6

/*
 * MCO PIN OUTPUT OPTIONS :
 * 1- NoClock
 * 2- SYSCLk_OUTPUT
 * 3- HSI_OUTPUT
 * 4- HSE_OUTPUT
 * 5- PLL_OUTPUT
 */
#define MCO_STATE				PLL_OUTPUT

/*
 * PLL SOURCE OPTIONS :
 * 1- HSI_DIV2
 * 2- HSE
 * 3-
 */
#define PLL_SOURCE				HSE_DIV2


/*
 * RCC AHB BUS PRESCALLER :
 * 1- RCC_PRESCALLER_0,
 * 2- RCC_PRESCALLER_2
 * 3- RCC_PRESCALLER_4
 * 4- RCC_PRESCALLER_8
 * 5- RCC_PRESCALLER_16
 * 6- RCC_PRESCALLER_64
 * 7- RCC_PRESCALLER_128
 * 8- RCC_PRESCALLER_256
 * 9- RCC_PRESCALLER_512
 */
#define RCC_AHB_PRESCALLER				RCC_PRESCALLER_0

/*
 * RCC APB1 BUS PRESCALLER :
 * 1- RCC_PRESCALLER_0,
 * 2- RCC_PRESCALLER_2
 * 3- RCC_PRESCALLER_4
 * 4- RCC_PRESCALLER_8
 * 5- RCC_PRESCALLER_16
 * !! NOTE : Clock Must Not Exceed 36MHZ !!
 */
#define RCC_APB1_PRESCALLER				RCC_PRESCALLER_0

/*
 * RCC APB3 BUS PRESCALLER :
 * 1- RCC_PRESCALLER_0,
 * 2- RCC_PRESCALLER_2
 * 3- RCC_PRESCALLER_4
 * 4- RCC_PRESCALLER_8
 * 5- RCC_PRESCALLER_16
 */
#define RCC_APB2_PRESCALLER				RCC_PRESCALLER_0

/*
 * 	ADC PRESCALLER :
 * 1- RCC_PRESCALLER_2
 * 2- RCC_PRESCALLER_4
 * 3- RCC_PRESCALLER_6
 * 4- RCC_PRESCALLER_8
 */
#define ADC_PRESCALLER					RCC_PRESCALLER_2


/*
 * USB PRESCALLER OPTIONS :
 * 1- USB_PRES_OFF
 * 2- USB_PRES_ON
 * !! NOTE : When USB Prescaller On We Use PLL CLock Divided By 1.5 !!
 */
#define USB_PRESCALLER					 USB_PRES_OFF
#endif /* RCC_CONFIG_H_ */
