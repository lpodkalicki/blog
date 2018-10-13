/**
  ******************************************************************************
  * @file    stm32072b_eval.h
  * @author  MCD Application Team
  * @brief   This file contains definitions for STM32072B_EVAL's Leds, push-buttons
  *          and COM port hardware resources.
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
#ifndef __STM32072B_EVAL_H
#define __STM32072B_EVAL_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/** @addtogroup BSP
  * @{
  */

/** @defgroup STM32072B_EVAL STM32072B_EVAL
  * @{
  */

/** @defgroup STM32072B_EVAL_Common STM32072B_EVAL Common
  * @{
  */

/** @defgroup STM32072B_EVAL_Exported_Types Exported Types
  * @{
  */

/**
 * @brief LED Types Definition
 */
typedef enum
{
  LED1 = 0,
  LED2 = 1,
  LED3 = 2,
  LED4 = 3,
  /* Color led aliases */
  LED_GREEN  = LED1,
  LED_ORANGE = LED2,
  LED_RED    = LED3,
  LED_BLUE   = LED4
}Led_TypeDef;

/**
 * @brief BUTTON Types Definition
 */
typedef enum 
{
  BUTTON_TAMPER = 0
}Button_TypeDef;

typedef enum 
{  
  BUTTON_MODE_GPIO = 0,
  BUTTON_MODE_EXTI = 1
}ButtonMode_TypeDef;

/**
 * @brief JOYSTICK Types Definition
 */
typedef enum 
{ 
  JOY_SEL   = 0,
  JOY_DOWN  = 1,
  JOY_LEFT  = 2,
  JOY_RIGHT = 3,
  JOY_UP    = 4,
  JOY_NONE  = 5
}JOYState_TypeDef;

typedef enum 
{  
  JOY_MODE_GPIO = 0,
  JOY_MODE_EXTI = 1
}JOYMode_TypeDef;

/**
 * @brief COM Types Definition
 */
typedef enum 
{
  COM1 = 0
}COM_TypeDef;

/**
  * @}
  */ 

/** @defgroup STM32072B_EVAL_Exported_Constants Exported Constants
  * @{
  */ 

/** 
  * @brief  Define for STM32072B_EVAL board  
  */ 
#if !defined (USE_STM32072B_EVAL)
 #define USE_STM32072B_EVAL
#endif

/** @defgroup STM32072B_EVAL_LED STM32072B_EVAL LED
  * @{
  */
#define LEDn                             4

#define LED1_PIN                         GPIO_PIN_8
#define LED1_GPIO_PORT                   GPIOD
#define LED1_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOD_CLK_ENABLE()
#define LED1_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOD_CLK_DISABLE()
  
#define LED2_PIN                         GPIO_PIN_9
#define LED2_GPIO_PORT                   GPIOD
#define LED2_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOD_CLK_ENABLE()
#define LED2_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOD_CLK_DISABLE()
  
#define LED3_PIN                         GPIO_PIN_10
#define LED3_GPIO_PORT                   GPIOD
#define LED3_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOD_CLK_ENABLE()
#define LED3_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOD_CLK_DISABLE()
  
#define LED4_PIN                         GPIO_PIN_11
#define LED4_GPIO_PORT                   GPIOD
#define LED4_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOD_CLK_ENABLE()
#define LED4_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOD_CLK_DISABLE()

#define LEDx_GPIO_CLK_ENABLE(__LED__)    do { if((__LED__) == LED1) LED1_GPIO_CLK_ENABLE(); else \
                                          if((__LED__) == LED2) LED2_GPIO_CLK_ENABLE(); else \
                                          if((__LED__) == LED3) LED3_GPIO_CLK_ENABLE(); else \
                                          if((__LED__) == LED4) LED4_GPIO_CLK_ENABLE();} while(0)

#define LEDx_GPIO_CLK_DISABLE(__LED__)   (((__LED__) == LED1) ? LED1_GPIO_CLK_DISABLE() :\
                                          ((__LED__) == LED2) ? LED2_GPIO_CLK_DISABLE() :\
                                          ((__LED__) == LED3) ? LED3_GPIO_CLK_DISABLE() :\
                                          ((__LED__) == LED4) ? LED4_GPIO_CLK_DISABLE() : 0 )

/**
  * @}
  */ 

/** @defgroup STM32072B_EVAL_BUTTON STM32072B_EVAL BUTTON
  * @{
  */  
#define JOYn                             5
#define BUTTONn                          1

/**
 * @brief Tamper push-button
 */
#define TAMPER_BUTTON_PIN                GPIO_PIN_13
#define TAMPER_BUTTON_GPIO_PORT          GPIOC
#define TAMPER_BUTTON_GPIO_CLK_ENABLE()  __HAL_RCC_GPIOC_CLK_ENABLE()
#define TAMPER_BUTTON_GPIO_CLK_DISABLE() __HAL_RCC_GPIOC_CLK_DISABLE()
#define TAMPER_BUTTON_EXTI_IRQn          EXTI4_15_IRQn

#define TAMPERx_GPIO_CLK_ENABLE(__BUTTON__)    do { if((__BUTTON__) == BUTTON_TAMPER) TAMPER_BUTTON_GPIO_CLK_ENABLE();} while(0)

#define TAMPERx_GPIO_CLK_DISABLE(__BUTTON__)   (((__BUTTON__) == BUTTON_TAMPER) ? TAMPER_BUTTON_GPIO_CLK_DISABLE(): 0 )

/**
 * @brief Joystick Right push-button
 */
#define RIGHT_JOY_PIN                    GPIO_PIN_3
#define RIGHT_JOY_GPIO_PORT              GPIOE
#define RIGHT_JOY_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOE_CLK_ENABLE()
#define RIGHT_JOY_GPIO_CLK_DISABLE()     __HAL_RCC_GPIOE_CLK_DISABLE()
#define RIGHT_JOY_EXTI_IRQn              EXTI2_3_IRQn

/**
 * @brief Joystick Left push-button
 */
#define LEFT_JOY_PIN                     GPIO_PIN_2
#define LEFT_JOY_GPIO_PORT               GPIOE
#define LEFT_JOY_GPIO_CLK_ENABLE()       __HAL_RCC_GPIOE_CLK_ENABLE()
#define LEFT_JOY_GPIO_CLK_DISABLE()      __HAL_RCC_GPIOE_CLK_DISABLE()
#define LEFT_JOY_EXTI_IRQn               EXTI2_3_IRQn  

/**
 * @brief Joystick Up push-button
 */
#define UP_JOY_PIN                       GPIO_PIN_9
#define UP_JOY_GPIO_PORT                 GPIOF
#define UP_JOY_GPIO_CLK_ENABLE()         __HAL_RCC_GPIOF_CLK_ENABLE()
#define UP_JOY_GPIO_CLK_DISABLE()        __HAL_RCC_GPIOF_CLK_DISABLE()
#define UP_JOY_EXTI_IRQn                 EXTI4_15_IRQn

/**
 * @brief Joystick Down push-button
 */  
#define DOWN_JOY_PIN                     GPIO_PIN_10
#define DOWN_JOY_GPIO_PORT               GPIOF
#define DOWN_JOY_GPIO_CLK_ENABLE()       __HAL_RCC_GPIOF_CLK_ENABLE()
#define DOWN_JOY_GPIO_CLK_DISABLE()      __HAL_RCC_GPIOF_CLK_DISABLE()
#define DOWN_JOY_EXTI_IRQn               EXTI4_15_IRQn

/**
 * @brief Joystick Sel push-button
 */
#define SEL_JOY_PIN                      GPIO_PIN_0
#define SEL_JOY_GPIO_PORT                GPIOA
#define SEL_JOY_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOA_CLK_ENABLE()
#define SEL_JOY_GPIO_CLK_DISABLE()       __HAL_RCC_GPIOA_CLK_DISABLE()
#define SEL_JOY_EXTI_IRQn                EXTI0_1_IRQn 

#define JOYx_GPIO_CLK_ENABLE(__JOY__)    do { if((__JOY__) == JOY_SEL) SEL_JOY_GPIO_CLK_ENABLE(); else \
                                          if((__JOY__) == JOY_DOWN) DOWN_JOY_GPIO_CLK_ENABLE(); else \
                                          if((__JOY__) == JOY_LEFT) LEFT_JOY_GPIO_CLK_ENABLE(); else \
                                          if((__JOY__) == JOY_RIGHT) RIGHT_JOY_GPIO_CLK_ENABLE(); else \
                                          if((__JOY__) == JOY_UP) UP_JOY_GPIO_CLK_ENABLE();} while(0)

#define JOYx_GPIO_CLK_DISABLE(__JOY__)   (((__JOY__) == JOY_SEL) ? SEL_JOY_GPIO_CLK_DISABLE() :\
                                          ((__JOY__) == JOY_DOWN) ? DOWN_JOY_GPIO_CLK_DISABLE() :\
                                          ((__JOY__) == JOY_LEFT) ? LEFT_JOY_GPIO_CLK_DISABLE() :\
                                          ((__JOY__) == JOY_RIGHT) ? RIGHT_JOY_GPIO_CLK_DISABLE() :\
                                          ((__JOY__) == JOY_UP) ? UP_JOY_GPIO_CLK_DISABLE() : 0 )

/**
  * @}
  */

/** @defgroup STM32072B_EVAL_COM STM32072B_EVAL COM
  * @{
  */
#define COMn                            1

/**
 * @brief Definition for COM port1, connected to USART2
 */ 
#define EVAL_COM1                       USART2
#define EVAL_COM1_CLK_ENABLE()          __HAL_RCC_USART2_CLK_ENABLE()
#define EVAL_COM1_CLK_DISABLE()         __HAL_RCC_USART2_CLK_DISABLE()

#define EVAL_COM1_TX_PIN                GPIO_PIN_5
#define EVAL_COM1_TX_GPIO_PORT          GPIOD
#define EVAL_COM1_TX_GPIO_CLK_ENABLE()  __HAL_RCC_GPIOD_CLK_ENABLE()
#define EVAL_COM1_TX_GPIO_CLK_DISABLE() __HAL_RCC_GPIOD_CLK_DISABLE()
#define EVAL_COM1_TX_AF                 GPIO_AF0_USART2

#define EVAL_COM1_RX_PIN                GPIO_PIN_6
#define EVAL_COM1_RX_GPIO_PORT          GPIOD
#define EVAL_COM1_RX_GPIO_CLK_ENABLE()  __HAL_RCC_GPIOD_CLK_ENABLE()
#define EVAL_COM1_RX_GPIO_CLK_DISABLE() __HAL_RCC_GPIOD_CLK_DISABLE()
#define EVAL_COM1_RX_AF                 GPIO_AF0_USART2

#define EVAL_COM1_CTS_PIN               GPIO_PIN_3
#define EVAL_COM1_CTS_GPIO_PORT         GPIOD
#define EVAL_COM1_CTS_GPIO_CLK_ENABLE() __HAL_RCC_GPIOD_CLK_ENABLE()
#define EVAL_COM1_CTS_GPIO_CLK_DISABLE() __HAL_RCC_GPIOD_CLK_DISABLE()
#define EVAL_COM1_CTS_AF                GPIO_AF0_USART2

#define EVAL_COM1_RTS_PIN               GPIO_PIN_4
#define EVAL_COM1_RTS_GPIO_PORT         GPIOD
#define EVAL_COM1_RTS_GPIO_CLK_ENABLE() __HAL_RCC_GPIOD_CLK_ENABLE()
#define EVAL_COM1_RTS_GPIO_CLK_DISABLE() __HAL_RCC_GPIOD_CLK_DISABLE()
#define EVAL_COM1_RTS_AF                GPIO_AF0_USART2
   
#define EVAL_COM1_IRQn                  USART2_IRQn

#define COMx_CLK_ENABLE(__COM__)        do { if((__COM__) == COM1) EVAL_COM1_CLK_ENABLE();} while(0)
#define COMx_CLK_DISABLE(__COM__)       (((__COM__) == COM1) ? EVAL_COM1_CLK_DISABLE() : 0)

#define COMx_TX_GPIO_CLK_ENABLE(__COM__) do { if((__COM__) == COM1) EVAL_COM1_TX_GPIO_CLK_ENABLE();} while(0)
#define COMx_TX_GPIO_CLK_DISABLE(__COM__) (((__COM__) == COM1) ? EVAL_COM1_TX_GPIO_CLK_DISABLE() : 0)

#define COMx_RX_GPIO_CLK_ENABLE(__COM__) do { if((__COM__) == COM1) EVAL_COM1_RX_GPIO_CLK_ENABLE();} while(0)
#define COMx_RX_GPIO_CLK_DISABLE(__COM__) (((__COM__) == COM1) ? EVAL_COM1_RX_GPIO_CLK_DISABLE() : 0)

#define COMx_CTS_GPIO_CLK_ENABLE(__COM__) do { if((__COM__) == COM1) EVAL_COM1_CTS_GPIO_CLK_ENABLE();} while(0)
#define COMx_CTS_GPIO_CLK_DISABLE(__COM__) (((__COM__) == COM1) ? EVAL_COM1_CTS_GPIO_CLK_DISABLE() : 0)

#define COMx_RTS_GPIO_CLK_ENABLE(__COM__) do { if((__COM__) == COM1) EVAL_COM1_RTS_GPIO_CLK_ENABLE();} while(0)
#define COMx_RTS_GPIO_CLK_DISABLE(__COM__) (((__COM__) == COM1) ? EVAL_COM1_RTS_GPIO_CLK_DISABLE() : 0)
/**
  * @}
  */

/** @addtogroup STM32072B_EVAL_BUS STM32072B_EVAL BUS
  * @{
  */
#if defined(HAL_I2C_MODULE_ENABLED)
/*##################### I2C2 ###################################*/
/* User can use this section to tailor I2Cx instance used and associated resources */
/* Definition for I2C1 Pins */
#define EVAL_I2C1                        I2C1
#define EVAL_I2C1_CLK_ENABLE()           __HAL_RCC_I2C1_CLK_ENABLE()
#define EVAL_I2C1_CLK_DISABLE()          __HAL_RCC_I2C1_CLK_DISABLE()
#define EVAL_I2C1_FORCE_RESET()          __HAL_RCC_I2C1_FORCE_RESET()
#define EVAL_I2C1_RELEASE_RESET()        __HAL_RCC_I2C1_RELEASE_RESET()  

#define EVAL_I2C1_SCL_PIN                GPIO_PIN_6		/* PB.6 */
#define EVAL_I2C1_SDA_PIN                GPIO_PIN_7		/* PB.7 */

#define EVAL_I2C1_GPIO_PORT		 GPIOB			/* GPIOB */
#define EVAL_I2C1_GPIO_CLK_ENABLE()    	 __HAL_RCC_GPIOB_CLK_ENABLE()
#define EVAL_I2C1_GPIO_CLK_DISABLE()     __HAL_RCC_GPIOB_CLK_DISABLE() 
#define EVAL_I2C1_SCL_SDA_AF		 GPIO_AF1_I2C1

/* Definition for I2C2 Pins */
#define EVAL_I2C2                        I2C2
#define EVAL_I2C2_CLK_ENABLE()           __HAL_RCC_I2C2_CLK_ENABLE()
#define EVAL_I2C2_CLK_DISABLE()          __HAL_RCC_I2C2_CLK_DISABLE()
#define EVAL_I2C2_FORCE_RESET()          __HAL_RCC_I2C2_FORCE_RESET()
#define EVAL_I2C2_RELEASE_RESET()        __HAL_RCC_I2C2_RELEASE_RESET()

#define EVAL_I2C2_SCL_PIN                GPIO_PIN_13		/* PB.13 */
#define EVAL_I2C2_SDA_PIN                GPIO_PIN_14		/* PB.14 */

#define EVAL_I2C2_GPIO_PORT           	 GPIOB                   /* GPIOB */
#define EVAL_I2C2_GPIO_CLK_ENABLE()    	 __HAL_RCC_GPIOB_CLK_ENABLE()
#define EVAL_I2C2_GPIO_CLK_DISABLE()     __HAL_RCC_GPIOB_CLK_DISABLE()
#define EVAL_I2C2_AF                     GPIO_AF5_I2C2

/* Definition for I2C2 NVIC */
#define EVAL_I2C2_IRQn                   I2C2_IRQn
  
/* Maximum Timeout values for flags waiting loops. These timeouts are not based
   on accurate values, they just guarantee that the application will not remain
   stuck if the I2C communication is corrupted.
   You may modify these timeout values depending on CPU frequency and application
   conditions (interrupts routines ...). */   
#define EVAL_I2C1_TIMEOUT_MAX            1000
#define EVAL_I2C2_TIMEOUT_MAX            1000

/* I2C TIMING is calculated in case of the I2C Clock source is the SYSCLK = 48 MHz */
/* Set TIMING to 0x00E0D3FF to reach 100 KHz speed (Rise time = 50ns, Fall time = 10ns) */
#define I2C2_TIMING                      0x00E0D3FF
#define I2C1_TIMING                      0x00E0D3FF

#endif /* HAL_I2C_MODULE_ENABLED */

#if defined(HAL_SPI_MODULE_ENABLED)
/**
  * @brief  Definition for SPI Interface pins (SPI1 used)
  */
#define EVAL_SPIx                        SPI1
#define EVAL_SPIx_CLK_ENABLE()           __HAL_RCC_SPI1_CLK_ENABLE()
#define EVAL_SPIx_CLK_DISABLE()          __HAL_RCC_SPI1_CLK_DISABLE()
#define EVAL_SPIx_FORCE_RESET()          __HAL_RCC_SPI1_FORCE_RESET()
#define EVAL_SPIx_RELEASE_RESET()        __HAL_RCC_SPI1_RELEASE_RESET()

#define EVAL_SPIx_SCK_PIN                GPIO_PIN_3              /* PB.03 */
#define EVAL_SPIx_SCK_GPIO_PORT          GPIOB                   /* GPIOB */
#define EVAL_SPIx_SCK_GPIO_CLK_ENABLE()  __HAL_RCC_GPIOB_CLK_ENABLE()
#define EVAL_SPIx_SCK_GPIO_CLK_DISABLE() __HAL_RCC_GPIOB_CLK_DISABLE()
#define EVAL_SPIx_SCK_AF                 GPIO_AF0_SPI1

#define EVAL_SPIx_MISO_PIN               GPIO_PIN_14             /* PE.14 */
#define EVAL_SPIx_MISO_GPIO_PORT         GPIOE                   /* GPIOE */
#define EVAL_SPIx_MISO_GPIO_CLK_ENABLE() __HAL_RCC_GPIOE_CLK_ENABLE()
#define EVAL_SPIx_MISO_GPIO_CLK_DISABLE() __HAL_RCC_GPIOE_CLK_DISABLE()
#define EVAL_SPIx_MISO_AF                GPIO_AF1_SPI1

#define EVAL_SPIx_MOSI_PIN               GPIO_PIN_15             /* PE.15 */
#define EVAL_SPIx_MOSI_GPIO_PORT         GPIOE                   /* GPIOE */
#define EVAL_SPIx_MOSI_GPIO_CLK_ENABLE() __HAL_RCC_GPIOE_CLK_ENABLE()
#define EVAL_SPIx_MOSI_GPIO_CLK_DISABLE() __HAL_RCC_GPIOE_CLK_DISABLE()
#define EVAL_SPIx_MOSI_AF                GPIO_AF1_SPI1

#define EVAL_SPIx_MOSI_DIR_PIN           GPIO_PIN_2             /* PB.02 */
#define EVAL_SPIx_MOSI_DIR_GPIO_PORT     GPIOB                   /* GPIOB */
#define EVAL_SPIx_MOSI_DIR_GPIO_CLK_ENABLE() __HAL_RCC_GPIOB_CLK_ENABLE()
#define EVAL_SPIx_MOSI_DIR_GPIO_CLK_DISABLE() __HAL_RCC_GPIOB_CLK_DISABLE()

/* Maximum Timeout values for flags waiting loops. These timeouts are not based
   on accurate values, they just guarantee that the application will not remain
   stuck if the SPI communication is corrupted.
   You may modify these timeout values depending on CPU frequency and application
   conditions (interrupts routines ...). */   
#define EVAL_SPIx_TIMEOUT_MAX                 1000

#endif /* HAL_SPI_MODULE_ENABLED */
/**
  * @}
  */

/** @defgroup STM32072B_EVAL_COMPONENT STM32072B_EVAL COMPONENT
  * @{
  */
/*##################### LCD ###################################*/
/* Chip Select macro definition */
#define LCD_CS_LOW()                    HAL_GPIO_WritePin(LCD_NCS_GPIO_PORT, LCD_NCS_PIN, GPIO_PIN_RESET)
#define LCD_CS_HIGH()                   HAL_GPIO_WritePin(LCD_NCS_GPIO_PORT, LCD_NCS_PIN, GPIO_PIN_SET)
/** 
  * @brief  LCD Control pins 
  */ 
#define LCD_NCS_PIN                     GPIO_PIN_6		/* PE. 06*/
#define LCD_NCS_GPIO_PORT               GPIOE			/* GPIOE */
#define LCD_NCS_GPIO_CLK_ENABLE()       __HAL_RCC_GPIOE_CLK_ENABLE()
#define LCD_NCS_GPIO_CLK_DISABLE()      __HAL_RCC_GPIOE_CLK_DISABLE()  


/*##################### SD ###################################*/  
/* Chip Select macro definition */
#define SD_CS_LOW()                     HAL_GPIO_WritePin(SD_CS_GPIO_PORT, SD_CS_PIN, GPIO_PIN_RESET)
#define SD_CS_HIGH()                    HAL_GPIO_WritePin(SD_CS_GPIO_PORT, SD_CS_PIN, GPIO_PIN_SET)  
/**
  * @brief SD card Control pin  
  */
#define SD_CS_PIN                       GPIO_PIN_2              /* PF.2 */
#define SD_CS_GPIO_PORT                 GPIOF                   /* GPIOF */
#define SD_CS_GPIO_CLK_ENABLE()         __HAL_RCC_GPIOF_CLK_ENABLE()
#define SD_CS_GPIO_CLK_DISABLE()        __HAL_RCC_GPIOF_CLK_DISABLE()

/**
  * @brief  SD Detect Interface pins
  */
#define SD_DETECT_PIN                   GPIO_PIN_15             /* PB.15 */
#define SD_DETECT_GPIO_PORT             GPIOB                   /* GPIOB */
#define SD_DETECT_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOB_CLK_ENABLE()
#define SD_DETECT_GPIO_CLK_DISABLE()    __HAL_RCC_GPIOB_CLK_DISABLE()
#define SD_DETECT_EXTI_IRQn             EXTI4_15_IRQn

  
/*##################### HDMI-CEC ###################################*/
/**
  * @brief  I2C HDMI CEC Interface pins
  */
#define HDMI_CEC_HPD_SINK_PIN             GPIO_PIN_15  /* PD.15 */
#define HDMI_CEC_HPD_SINK_GPIO_PORT       GPIOD
#define HDMI_CEC_HPD_SINK_CLK_ENABLE()    __HAL_RCC_GPIOD_CLK_ENABLE()
#define HDMI_CEC_HPD_SINK_CLK_DISABLE()   __HAL_RCC_GPIOD_CLK_DISABLE()
  
#define HDMI_CEC_HPD_SOURCE_PIN           GPIO_PIN_0  /* PE.0 */
#define HDMI_CEC_HPD_SOURCE_GPIO_PORT     GPIOE
#define HDMI_CEC_HPD_SOURCE_CLK_ENABLE()  __HAL_RCC_GPIOE_CLK_ENABLE()
#define HDMI_CEC_HPD_SOURCE_CLK_DISABLE() __HAL_RCC_GPIOE_CLK_DISABLE()

#define HDMI_CEC_LINE_PIN                 GPIO_PIN_8  /* PB.8 */
#define HDMI_CEC_LINE_GPIO_PORT           GPIOB
#define HDMI_CEC_LINE_CLK_ENABLE()        __HAL_RCC_GPIOB_CLK_ENABLE()
#define HDMI_CEC_LINE_CLK_DISABLE()       __HAL_RCC_GPIOB_CLK_DISABLE()
#define HDMI_CEC_LINE_AF                  GPIO_AF0_CEC
#define HDMI_CEC_IRQn                     CEC_CAN_IRQn

/* HDMI-CEC hardware I2C address */ 
#define HDMI_CEC_I2C_ADDRESS              0xA0

/**
  * @}
  */

/**
  * @}
  */

/** @defgroup STM32072B_EVAL_Exported_Functions Exported Functions
  * @{
  */
uint32_t          BSP_GetVersion(void);
void              BSP_LED_Init(Led_TypeDef Led);
void              BSP_LED_On(Led_TypeDef Led);
void              BSP_LED_Off(Led_TypeDef Led);
void              BSP_LED_Toggle(Led_TypeDef Led);
void              BSP_PB_Init(Button_TypeDef Button, ButtonMode_TypeDef Button_Mode);
uint32_t          BSP_PB_GetState(Button_TypeDef Button);
uint8_t           BSP_JOY_Init(JOYMode_TypeDef Joy_Mode);
JOYState_TypeDef  BSP_JOY_GetState(void);
#if defined(HAL_UART_MODULE_ENABLED)
void              BSP_COM_Init(COM_TypeDef COM, UART_HandleTypeDef* huart);
#endif /* HAL_UART_MODULE_ENABLED */

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

#endif /* __STM32072B_EVAL_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
