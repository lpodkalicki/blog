/**
  ******************************************************************************
  * @file    stm32f0xx_nucleo_32.h
  * @author  MCD Application Team
  * @brief   This file contains definitions for:
  *          - LED available on STM32F0xx-Nucleo_32 Kit from STMicroelectronics
  *          - 7 segment display from Gravitech
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */ 
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F0XX_NUCLEO_32_H
#define __STM32F0XX_NUCLEO_32_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"
   

/** @addtogroup BSP
  * @{
  */

/** @defgroup STM32F0XX_NUCLEO_32 NUCLEO 32
  * @brief This section contains the exported types, contants and functions
  *        required to use the Nucleo 32 board.
  * @{
  */

/** @defgroup STM32F0XX_NUCLEO_32_Exported_Types Exported Types
  * @{
  */ 
   
typedef enum 
{
  LED3 = 0,
  LED_GREEN = LED3
} Led_TypeDef;

/**
  * @}
  */ 

/** @defgroup STM32F0XX_NUCLEO_32_Exported_Constants Exported Constants 
  * @brief Define for STM32F0XX_NUCLEO_32 board  
  * @{
  */ 

#if !defined (USE_STM32F0XX_NUCLEO_32)
 #define USE_STM32F0XX_NUCLEO_32
#endif

/** @defgroup STM32F0XX_NUCLEO_LED LED Constants
  * @{
  */

#define LEDn                               1

#define LED3_PIN                           GPIO_PIN_3
#define LED3_GPIO_PORT                     GPIOB
#define LED3_GPIO_CLK_ENABLE()             __HAL_RCC_GPIOB_CLK_ENABLE()  
#define LED3_GPIO_CLK_DISABLE()            __HAL_RCC_GPIOB_CLK_DISABLE()  

#define LEDx_GPIO_CLK_ENABLE(__INDEX__)    do {LED3_GPIO_CLK_ENABLE(); } while(0)
#define LEDx_GPIO_CLK_DISABLE(__INDEX__)   LED3_GPIO_CLK_DISABLE())

/**
  * @}
  */ 
  
/** @defgroup STM32F0XX_NUCLEO_32_BUS BUS Constants
  * @{
  */ 

#if defined(HAL_I2C_MODULE_ENABLED)
/*##################### I2C2 ###################################*/
/* User can use this section to tailor I2Cx instance used and associated resources */
/* Definition for I2C1 Pins */
#define BSP_I2C1                        I2C1
#define BSP_I2C1_CLK_ENABLE()           __HAL_RCC_I2C1_CLK_ENABLE()
#define BSP_I2C1_CLK_DISABLE()          __HAL_RCC_I2C1_CLK_DISABLE()
#define BSP_I2C1_FORCE_RESET()          __HAL_RCC_I2C1_FORCE_RESET()
#define BSP_I2C1_RELEASE_RESET()        __HAL_RCC_I2C1_RELEASE_RESET()  

#define BSP_I2C1_SCL_PIN                GPIO_PIN_6    /* PB.6 add wire between D5 and A5 */
#define BSP_I2C1_SDA_PIN                GPIO_PIN_7    /* PB.7 add wire between D4 and A4 */

#define BSP_I2C1_GPIO_PORT              GPIOB      /* GPIOB */
#define BSP_I2C1_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOB_CLK_ENABLE()
#define BSP_I2C1_GPIO_CLK_DISABLE()     __HAL_RCC_GPIOB_CLK_DISABLE() 
#define BSP_I2C1_SCL_SDA_AF             GPIO_AF1_I2C1
  
/* Maximum Timeout values for flags waiting loops. These timeouts are not based
   on accurate values, they just guarantee that the application will not remain
   stuck if the I2C communication is corrupted.
   You may modify these timeout values depending on CPU frequency and application
   conditions (interrupts routines ...). */   
#define BSP_I2C1_TIMEOUT_MAX            1000

/* I2C TIMING is calculated in case of the I2C Clock source is the SYSCLK = 32 MHz */
/* Set TIMING to 0x009080B5 to reach 100 KHz speed (Rise time = 50ns, Fall time = 10ns) */
//#define I2C1_TIMING                      0x009080B5
#define I2C1_TIMING                      0xB0420F13

#endif /* HAL_I2C_MODULE_ENABLED */

/**
  * @}
  */

/**
  * @}
  */ 
  
/** @defgroup STM32F0XX_NUCLEO_32_Exported_Functions Exported Functions
  * @{
  */
  
uint32_t         BSP_GetVersion(void);
void             BSP_LED_Init(Led_TypeDef Led);
void             BSP_LED_On(Led_TypeDef Led);
void             BSP_LED_Off(Led_TypeDef Led);
void             BSP_LED_Toggle(Led_TypeDef Led);

/**
  * @}
  */

/**
  * @}
  */
  
/** @defgroup STM32F0XX_NUCLEO_32_GRAVITECH_4DIGITS GRAVITECH 4 DIGITS
  * @brief This section contains the exported functions
  *        required to use Gravitech shield 7 Segment Display
  * @{
  */ 

/** @defgroup STM32_GRAVITECH_4DIGITS_Exported_Constants Exported Constants
  * @{
  */

#define DIGIT4_SEG7_RESET 10000
/**
  * @}
  */

/** @defgroup STM32_GRAVITECH_4DIGITS_Exported_Functions Exported Functions
  * @{
  */   
  
HAL_StatusTypeDef BSP_DIGIT4_SEG7_Init(void);
HAL_StatusTypeDef BSP_DIGIT4_SEG7_Display(uint32_t Value);

/**
  * @}
  */

/**
  * @}
  */ 

/**
  * @}
  */ 
    
#ifdef __cplusplus
}
#endif

#endif /* __STM32F0XX_NUCLEO_32_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

