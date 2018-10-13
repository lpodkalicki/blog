/**
  ******************************************************************************
  * @file    stm32f072b_discovery.h
  * @author  MCD Application Team
  * @brief   This file contains definitions for STM32F072B-Discovery's Leds, push-
  *          buttons hardware resources.
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
#ifndef __STM32F072B_DISCOVERY_H
#define __STM32F072B_DISCOVERY_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/** @addtogroup BSP
  * @{
  */

/** @defgroup STM32F072B_DISCOVERY STM32F072B_DISCOVERY
  * @{
  */
      
/** @defgroup STM32F072B_DISCOVERY_Common STM32F072B_DISCOVERY Common
  * @{
  */ 

/** @defgroup STM32F072B_DISCOVERY_Exported_Types Exported Types
  * @{
  */

/**
 * @brief LED Types Definition
 */
typedef enum 
{
  LED3 = 0,
  LED4 = 1,
  LED5 = 2,
  LED6 = 3,
  /* Color led aliases */
  LED_RED    = LED3,
  LED_ORANGE = LED4,
  LED_GREEN  = LED5,
  LED_BLUE   = LED6
}Led_TypeDef;

/**
 * @brief BUTTON Types Definition
 */
typedef enum 
{
  BUTTON_USER = 0
}Button_TypeDef;

typedef enum 
{  
  BUTTON_MODE_GPIO = 0,
  BUTTON_MODE_EXTI = 1
}ButtonMode_TypeDef;

/**
  * @}
  */ 

/** @defgroup STM32F072B_DISCOVERY_Exported_Constants Exported Constants
  * @{
  */ 
/**
  * @brief  Define for STM32F072B_DISCOVERY board  
  */ 
#if !defined (USE_STM32072B_DISCO)
 #define USE_STM32072B_DISCO
#endif
/** @defgroup STM32F072B_DISCOVERY_LED STM32F072B_DISCOVERY LED
  * @{
  */
#define LEDn                             4

#define LED3_PIN                         GPIO_PIN_6
#define LED3_GPIO_PORT                   GPIOC
#define LED3_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOC_CLK_ENABLE()  
#define LED3_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOC_CLK_DISABLE() 

#define LED4_PIN                         GPIO_PIN_8
#define LED4_GPIO_PORT                   GPIOC
#define LED4_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOC_CLK_ENABLE()  
#define LED4_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOC_CLK_DISABLE() 
  
#define LED5_PIN                         GPIO_PIN_9
#define LED5_GPIO_PORT                   GPIOC
#define LED5_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOC_CLK_ENABLE()  
#define LED5_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOC_CLK_DISABLE()  

#define LED6_PIN                         GPIO_PIN_7
#define LED6_GPIO_PORT                   GPIOC
#define LED6_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOC_CLK_ENABLE()  
#define LED6_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOC_CLK_DISABLE() 

#define LEDx_GPIO_CLK_ENABLE(__LED__) do { if((__LED__) == LED3) LED3_GPIO_CLK_ENABLE(); else \
                                           if((__LED__) == LED4) LED4_GPIO_CLK_ENABLE(); else \
                                           if((__LED__) == LED5) LED5_GPIO_CLK_ENABLE(); else \
                                           if((__LED__) == LED6) LED6_GPIO_CLK_ENABLE();} while(0)

#define LEDx_GPIO_CLK_DISABLE(__LED__)  (((__LED__) == LED3) ? LED3_GPIO_CLK_DISABLE() :\
                                         ((__LED__) == LED4) ? LED4_GPIO_CLK_DISABLE() :\
                                         ((__LED__) == LED5) ? LED5_GPIO_CLK_DISABLE() : \
                                         ((__LED__) == LED6) ? LED6_GPIO_CLK_DISABLE() : 0 )
/**
  * @}
  */ 

/** @defgroup STM32F072B_DISCOVERY_BUTTON STM32F072B_DISCOVERY BUTTON
  * @{
  */  
#define BUTTONn                          1

/**
 * @brief USER push-button
 */
#define USER_BUTTON_PIN                GPIO_PIN_0                       /* PA0 */
#define USER_BUTTON_GPIO_PORT          GPIOA
#define USER_BUTTON_GPIO_CLK_ENABLE()  __HAL_RCC_GPIOA_CLK_ENABLE()
#define USER_BUTTON_GPIO_CLK_DISABLE() __HAL_RCC_GPIOA_CLK_DISABLE()
#define USER_BUTTON_EXTI_IRQn          EXTI0_1_IRQn

#define BUTTONx_GPIO_CLK_ENABLE(__BUTTON__)    do { if((__BUTTON__) == BUTTON_USER) USER_BUTTON_GPIO_CLK_ENABLE();} while(0)

#define BUTTONx_GPIO_CLK_DISABLE(__BUTTON__)   (((__BUTTON__) == BUTTON_USER) ? USER_BUTTON_GPIO_CLK_DISABLE() : 0 )
/**
  * @}
  */

/** @defgroup STM32F072B_DISCOVERY_BUS STM32F072B_DISCOVERY BUS
  * @{
  */  
#if defined(HAL_SPI_MODULE_ENABLED)
/*##################### SPI1 ###################################*/
#define DISCOVERY_SPIx                        SPI2
#define DISCOVERY_SPIx_CLOCK_ENABLE()         __HAL_RCC_SPI2_CLK_ENABLE()
#define DISCOVERY_SPIx_GPIO_PORT              GPIOB                      /* GPIOB */
#define DISCOVERY_SPIx_AF                     GPIO_AF0_SPI2
#define DISCOVERY_SPIx_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOB_CLK_ENABLE()
#define DISCOVERY_SPIx_GPIO_CLK_DISABLE()     __HAL_RCC_GPIOB_CLK_DISABLE()
#define DISCOVERY_SPIx_SCK_PIN                GPIO_PIN_13                 /* PB.13 */
#define DISCOVERY_SPIx_MISO_PIN               GPIO_PIN_14                 /* PB.14 */
#define DISCOVERY_SPIx_MOSI_PIN               GPIO_PIN_15                 /* PB.15 */
/* Maximum Timeout values for flags waiting loops. These timeouts are not based
   on accurate values, they just guarantee that the application will not remain
   stuck if the SPI communication is corrupted.
   You may modify these timeout values depending on CPU frequency and application
   conditions (interrupts routines ...). */   
#define SPIx_TIMEOUT_MAX                      ((uint32_t)0x1000)
#endif /* HAL_SPI_MODULE_ENABLED */

#if defined(HAL_I2C_MODULE_ENABLED)
/*##################### I2C2 ###################################*/
/**
  * @brief  Definition for I2C Interface pins (I2C2 used)
  */
#define DISCOVERY_I2Cx                              I2C2
#define DISCOVERY_I2Cx_CLK_ENABLE()                 __HAL_RCC_I2C2_CLK_ENABLE()
#define DISCOVERY_I2Cx_CLK_DISABLE()                __HAL_RCC_I2C2_CLK_DISABLE()
#define DISCOVERY_I2Cx_FORCE_RESET()                __HAL_RCC_I2C2_FORCE_RESET()
#define DISCOVERY_I2Cx_RELEASE_RESET()              __HAL_RCC_I2C2_RELEASE_RESET()

#define DISCOVERY_I2Cx_SCL_PIN                      GPIO_PIN_10                 /* PB.10 */
#define DISCOVERY_I2Cx_SDA_PIN                      GPIO_PIN_11                 /* PB.11 */

#define DISCOVERY_I2Cx_GPIO_PORT                    GPIOB                       /* GPIOB */
#define DISCOVERY_I2Cx_GPIO_CLK_ENABLE()            __HAL_RCC_GPIOB_CLK_ENABLE()
#define DISCOVERY_I2Cx_GPIO_CLK_DISABLE()           __HAL_RCC_GPIOB_CLK_DISABLE()
#define DISCOVERY_I2Cx_AF                           GPIO_AF1_I2C2

/* Maximum Timeout values for flags waiting loops. These timeouts are not based
   on accurate values, they just guarantee that the application will not remain
   stuck if the I2C communication is corrupted.
   You may modify these timeout values depending on CPU frequency and application
   conditions (interrupts routines ...). */   
//#define I2Cx_TIMEOUT_MAX                  ((uint32_t)0xFFFF)
#define I2Cx_TIMEOUT_MAX                  ((uint32_t)0x10000)

#define DISCOVERY_I2Cx_TIMING                       0x40B32537

#define DISCOVERY_EEPROM_I2C_ADDRESS_A01           0xA0  

#endif /* HAL_I2C_MODULE_ENABLED */

/**
  * @}
  */

/** @defgroup STM32F072B_DISCOVERY_COMPONENT STM32F072B_DISCOVERY COMPONENT
  * @{
  */
/*##################### GYRO ##########################*/
/* Read/Write command */
#define READWRITE_CMD                         ((uint8_t)0x80) 
/* Multiple byte read/write command */ 
#define MULTIPLEBYTE_CMD                      ((uint8_t)0x40)
/* Dummy Byte Send by the SPI Master device in order to generate the Clock to the Slave device */
#define DUMMY_BYTE                            ((uint8_t)0x00)

/* Chip Select macro definition */
#define GYRO_CS_LOW()       HAL_GPIO_WritePin(GYRO_CS_GPIO_PORT, GYRO_CS_PIN, GPIO_PIN_RESET)
#define GYRO_CS_HIGH()      HAL_GPIO_WritePin(GYRO_CS_GPIO_PORT, GYRO_CS_PIN, GPIO_PIN_SET)

/**
  * @brief  GYRO SPI Interface pins
  */
#define GYRO_CS_GPIO_PORT            GPIOC                       /* GPIOC */
#define GYRO_CS_GPIO_CLK_ENABLE()    __HAL_RCC_GPIOC_CLK_ENABLE()
#define GYRO_CS_GPIO_CLK_DISABLE()   __HAL_RCC_GPIOC_CLK_DISABLE()
#define GYRO_CS_PIN                  GPIO_PIN_0                  /* PC.00 */

#define GYRO_INT_GPIO_PORT               GPIOC                       /* GPIOC */
#define GYRO_INT_GPIO_CLK_ENABLE()       __HAL_RCC_GPIOC_CLK_ENABLE()
#define GYRO_INT_GPIO_CLK_DISABLE()      __HAL_RCC_GPIOC_CLK_DISABLE()
#define GYRO_INT1_PIN                    GPIO_PIN_1                  /* PC.01 */
#define GYRO_INT1_EXTI_IRQn              EXTI0_1_IRQn 
#define GYRO_INT2_PIN                    GPIO_PIN_2                  /* PC.02 */
#define GYRO_INT2_EXTI_IRQn              EXTI2_3_IRQn 

/*##################### EEPROM ##########################*/
/**
  * @brief  I2C EEPROM Interface pins
  */
#define DISCOVERY_EEPROM_DMA                       DMA1   
#define DISCOVERY_EEPROM_DMA_CHANNEL_TX            DMA1_Channel4
#define DISCOVERY_EEPROM_DMA_CHANNEL_RX            DMA1_Channel5
#define DISCOVERY_EEPROM_DMA_CLK_ENABLE()          __HAL_RCC_DMA1_CLK_ENABLE()
#define DISCOVERY_EEPROM_DMA_CLK_DISABLE()         __HAL_RCC_DMA1_CLK_DISABLE()
   
#define DISCOVERY_EEPROM_DMA_TX_IRQn               DMA1_Channel4_5_6_7_IRQn
#define DISCOVERY_EEPROM_DMA_RX_IRQn               DMA1_Channel4_5_6_7_IRQn
#define DISCOVERY_EEPROM_DMA_PREPRIO               0
#define DISCOVERY_EEPROM_DMA_SUBPRIO               0

/**
  * @}
  */  

/**
  * @}
  */  

/** @defgroup STM32F072B_DISCOVERY_Exported_Functions Exported Functions
  * @{
  */
uint32_t BSP_GetVersion(void);
void     BSP_LED_Init(Led_TypeDef Led);
void     BSP_LED_On(Led_TypeDef Led);
void     BSP_LED_Off(Led_TypeDef Led);
void     BSP_LED_Toggle(Led_TypeDef Led);
void     BSP_PB_Init(Button_TypeDef Button, ButtonMode_TypeDef Mode);
uint32_t BSP_PB_GetState(Button_TypeDef Button);
/**
  * @}
  */

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

#endif /* __STM32F072B_DISCOVERY_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
