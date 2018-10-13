/**
  ******************************************************************************
  * @file    stm32072b_eval.c
  * @author  MCD Application Team
  * @brief   This file provides: a set of firmware functions to manage Leds,
  *          push-button and COM ports
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

/* Includes ------------------------------------------------------------------*/
#include "stm32072b_eval.h"

/** @addtogroup BSP
  * @{
  */

/** @addtogroup STM32072B_EVAL
  * @{
  */

/** @addtogroup STM32072B_EVAL_Common 
  * @brief This file provides firmware functions to manage Leds, push-buttons, 
  *        COM ports, SD card on SPI and temperature sensor (LM75) available on 
  *        STM32072B-EVAL evaluation board from STMicroelectronics.
  * @{
  */ 

/** @defgroup STM32072B_EVAL_Private_Constants Private Constants
  * @{
  */ 
/* LINK LCD */
#define START_BYTE         0x70
#define SET_INDEX          0x00
#define READ_STATUS        0x01
#define LCD_WRITE_REG      0x02
#define LCD_READ_REG       0x03

/* LINK SD Card */
#define SD_DUMMY_BYTE      0xFF    
#define SD_NO_RESPONSE_EXPECTED  0x80

/**
  * @brief STM32072B EVAL BSP Driver version number V2.1.8
  */
#define __STM32072B_EVAL_BSP_VERSION_MAIN   (0x02) /*!< [31:24] main version */
#define __STM32072B_EVAL_BSP_VERSION_SUB1   (0x01) /*!< [23:16] sub1 version */
#define __STM32072B_EVAL_BSP_VERSION_SUB2   (0x08) /*!< [15:8]  sub2 version */
#define __STM32072B_EVAL_BSP_VERSION_RC     (0x00) /*!< [7:0]  release candidate */ 
#define __STM32072B_EVAL_BSP_VERSION         ((__STM32072B_EVAL_BSP_VERSION_MAIN << 24)\
                                             |(__STM32072B_EVAL_BSP_VERSION_SUB1 << 16)\
                                             |(__STM32072B_EVAL_BSP_VERSION_SUB2 << 8 )\
                                             |(__STM32072B_EVAL_BSP_VERSION_RC))
/**
  * @}
  */ 

/** @defgroup STM32072B_EVAL_Private_Variables Private Variables
  * @{
  */
/**
  * @brief LED variables
  */
GPIO_TypeDef* LED_PORT[LEDn] = {LED1_GPIO_PORT,
                                LED2_GPIO_PORT,
                                LED3_GPIO_PORT,
                                LED4_GPIO_PORT};

const uint16_t LED_PIN[LEDn] = {LED1_PIN,
                                LED2_PIN,
                                LED3_PIN,
                                LED4_PIN};
/**
  * @brief BUTTON variables
  */
GPIO_TypeDef* BUTTON_PORT[BUTTONn] = {TAMPER_BUTTON_GPIO_PORT};
const uint16_t BUTTON_PIN[BUTTONn] = {TAMPER_BUTTON_PIN};
const uint8_t BUTTON_IRQn[BUTTONn] = {TAMPER_BUTTON_EXTI_IRQn};

/**
  * @brief JOYSTICK variables
  */
GPIO_TypeDef* JOY_PORT[JOYn] = {SEL_JOY_GPIO_PORT,
                                DOWN_JOY_GPIO_PORT,
                                LEFT_JOY_GPIO_PORT,
                                RIGHT_JOY_GPIO_PORT,
                                UP_JOY_GPIO_PORT};

const uint16_t JOY_PIN[JOYn] = {SEL_JOY_PIN,
                                DOWN_JOY_PIN,
                                LEFT_JOY_PIN,
                                RIGHT_JOY_PIN,
                                UP_JOY_PIN};

const uint8_t JOY_IRQn[JOYn] = {SEL_JOY_EXTI_IRQn,
                                DOWN_JOY_EXTI_IRQn,
                                LEFT_JOY_EXTI_IRQn,
                                RIGHT_JOY_EXTI_IRQn,
                                UP_JOY_EXTI_IRQn};

/**
  * @brief COM variables
  */
#ifdef HAL_UART_MODULE_ENABLED
USART_TypeDef* COM_USART[COMn]  = {EVAL_COM1}; 

GPIO_TypeDef* COM_TX_PORT[COMn] = {EVAL_COM1_TX_GPIO_PORT};
 
GPIO_TypeDef* COM_RX_PORT[COMn] = {EVAL_COM1_RX_GPIO_PORT};

const uint16_t COM_TX_PIN[COMn] = {EVAL_COM1_TX_PIN};

const uint16_t COM_RX_PIN[COMn] = {EVAL_COM1_RX_PIN};

const uint16_t COM_TX_AF[COMn]  = {EVAL_COM1_TX_AF};

const uint16_t COM_RX_AF[COMn]  = {EVAL_COM1_RX_AF};

#endif /*HAL_UART_MODULE_ENABLED*/

/**
 * @brief BUS variables
 */
#if defined(HAL_I2C_MODULE_ENABLED)
uint32_t I2c1Timeout = EVAL_I2C1_TIMEOUT_MAX;    /*<! Value of Timeout when I2C1 communication fails */
uint32_t I2c2Timeout = EVAL_I2C2_TIMEOUT_MAX;    /*<! Value of Timeout when I2C2 communication fails */
I2C_HandleTypeDef heval_I2c1;
I2C_HandleTypeDef heval_I2c2;
#endif /* HAL_I2C_MODULE_ENABLED */

#if defined(HAL_SPI_MODULE_ENABLED)
uint32_t SpixTimeout = EVAL_SPIx_TIMEOUT_MAX;    /*<! Value of Timeout when SPI communication fails */
static SPI_HandleTypeDef heval_Spi;
#endif /* HAL_SPI_MODULE_ENABLED */

/**
  * @}
  */ 

/** @defgroup STM32072B_EVAL_BUS_Operations_Functions BUS Operations Functions
  * @{
  */
#if defined(HAL_I2C_MODULE_ENABLED)
/* I2Cx bus function */
/* Link function for I2C EEPROM, TSENSOR & HDMI_SOURCE peripherals */
static void               I2C1_Init(void);
static void               I2C1_Error (void);
static void               I2C1_MspInit(I2C_HandleTypeDef *hi2c);  
/* Link function for I2C EEPROM & TSENSOR peripherals */
static HAL_StatusTypeDef  I2C1_WriteBuffer(uint16_t Addr, uint8_t Reg, uint16_t RegSize, uint8_t *pBuffer, uint16_t Length);
static HAL_StatusTypeDef  I2C1_ReadBuffer(uint16_t Addr, uint8_t Reg, uint16_t RegSize, uint8_t *pBuffer, uint16_t Length);
static HAL_StatusTypeDef  I2C1_IsDeviceReady(uint16_t DevAddress, uint32_t Trials);
/* Link function for HDMI_SOURCE peripheral */
static HAL_StatusTypeDef I2C1_TransmitData(uint8_t *pBuffer, uint16_t Length);

/* Link function for I2C HDMI_SINK peripherals */
static void              I2C2_Init(void);
static void              I2C2_Error(void);
static void              I2C2_MspInit(I2C_HandleTypeDef *hi2c);
/* Link function for HDMI_SINK peripheral */
static HAL_StatusTypeDef I2C2_ReceiveData(uint16_t Addr, uint8_t * pBuffer, uint16_t Length);

/**
  * @}
  */

/** @defgroup STM32072B_EVAL_LINK_Operations_Functions LINK Operations Functions
  * @{
  */

/* Link functions for EEPROM peripheral */
void                     EEPROM_IO_Init(void);
HAL_StatusTypeDef        EEPROM_IO_WriteData(uint16_t DevAddress, uint16_t MemAddress, uint8_t* pBuffer, uint32_t BufferSize);
HAL_StatusTypeDef        EEPROM_IO_ReadData(uint16_t DevAddress, uint16_t MemAddress, uint8_t* pBuffer, uint32_t BufferSize);
HAL_StatusTypeDef        EEPROM_IO_IsDeviceReady(uint16_t DevAddress, uint32_t Trials);

/* Link functions for Temperature Sensor peripheral */
void                     TSENSOR_IO_Init(void);
void                     TSENSOR_IO_Write(uint16_t DevAddress, uint8_t* pBuffer, uint8_t WriteAddr, uint16_t Length);
void                     TSENSOR_IO_Read(uint16_t DevAddress, uint8_t* pBuffer, uint8_t ReadAddr, uint16_t Length);
uint16_t                 TSENSOR_IO_IsDeviceReady(uint16_t DevAddress, uint32_t Trials);

/* Link functions for CEC peripheral */
void                     HDMI_CEC_IO_Init(void);
HAL_StatusTypeDef        HDMI_CEC_IO_WriteData(uint8_t * pBuffer, uint16_t BufferSize);
HAL_StatusTypeDef        HDMI_CEC_IO_ReadData(uint16_t DevAddress, uint8_t * pBuffer, uint16_t BufferSize);
#endif /* HAL_I2C_MODULE_ENABLED */
/**
  * @}
  */

/** @addtogroup STM32072B_EVAL_BUS_Operations_Functions
  * @{
  */
  
#if defined(HAL_SPI_MODULE_ENABLED)
/* SPIx bus function */
static void              SPIx_Init(void);
static void              SPIx_Write(uint8_t Value);
static void               SPIx_WriteReadData(const uint8_t *DataIn, uint8_t *DataOut, uint16_t DataLegnth);
static void               SPIx_FlushFifo(void);
static uint32_t          SPIx_Read(void);
static void              SPIx_Error (void);
static void              SPIx_MspInit(SPI_HandleTypeDef *hspi);
/**
  * @}
  */

/** @addtogroup STM32072B_EVAL_LINK_Operations_Functions
  * @{
  */  
/* Link functions for LCD peripheral */
void                     LCD_IO_Init(void);
void                     LCD_IO_WriteMultipleData(uint8_t *pData, uint32_t Size);
void                     LCD_IO_WriteReg(uint8_t Reg);
uint16_t                 LCD_IO_ReadData(uint16_t RegValue);
void                     LCD_Delay(uint32_t delay);

/* Link functions for SD Card peripheral */
void                     SD_IO_Init(void); 
void                     SD_IO_CSState(uint8_t state);
void                     SD_IO_WriteReadData(const uint8_t *DataIn, uint8_t *DataOut, uint16_t DataLength);
uint8_t                  SD_IO_WriteByte(uint8_t Data);
#endif /* HAL_SPI_MODULE_ENABLED */

/**
  * @}
  */ 

/** @addtogroup STM32072B_EVAL_Exported_Functions
  * @{
  */ 

/**
  * @brief  This method returns the STM32F072B EVAL BSP Driver revision
  * @retval version : 0xXYZR (8bits for each decimal, R for RC)
  */
uint32_t BSP_GetVersion(void)
{
  return __STM32072B_EVAL_BSP_VERSION;
}

/**
  * @brief  Configures LED GPIO.
  * @param  Led Specifies the Led to be configured. 
  *   This parameter can be one of following parameters:
  *     @arg LED1
  *     @arg LED2
  *     @arg LED3
  *     @arg LED4
  * @retval None
  */
void BSP_LED_Init(Led_TypeDef Led)
{
  GPIO_InitTypeDef  GPIO_InitStruct;
  
  /* Enable the GPIO_LED clock */
  LEDx_GPIO_CLK_ENABLE(Led);

  /* Configure the GPIO_LED pin */
  GPIO_InitStruct.Pin = LED_PIN[Led];
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  
  HAL_GPIO_Init(LED_PORT[Led], &GPIO_InitStruct);
  
  HAL_GPIO_WritePin(LED_PORT[Led], LED_PIN[Led], GPIO_PIN_SET);
}

/**
  * @brief  Turns selected LED On.
  * @param  Led Specifies the Led to be set on. 
  *   This parameter can be one of following parameters:
  *     @arg LED1
  *     @arg LED2
  *     @arg LED3
  *     @arg LED4  
  * @retval None
  */
void BSP_LED_On(Led_TypeDef Led)
{
  HAL_GPIO_WritePin(LED_PORT[Led], LED_PIN[Led], GPIO_PIN_RESET);
}

/**
  * @brief  Turns selected LED Off.
  * @param  Led Specifies the Led to be set off. 
  *   This parameter can be one of following parameters:
  *     @arg LED1
  *     @arg LED2
  *     @arg LED3
  *     @arg LED4 
  * @retval None
  */
void BSP_LED_Off(Led_TypeDef Led)
{
  HAL_GPIO_WritePin(LED_PORT[Led], LED_PIN[Led], GPIO_PIN_SET);
}

/**
  * @brief  Toggles the selected LED.
  * @param  Led Specifies the Led to be toggled. 
  *   This parameter can be one of following parameters:
  *     @arg LED1
  *     @arg LED2
  *     @arg LED3
  *     @arg LED4  
  * @retval None
  */
void BSP_LED_Toggle(Led_TypeDef Led)
{
  HAL_GPIO_TogglePin(LED_PORT[Led], LED_PIN[Led]);
}

/**
  * @brief  Configures Tamper Button GPIO or EXTI Line.
  * @param  Button Button to be configured
  *   This parameter can be one of the following values:
  *     @arg BUTTON_TAMPER: Tamper Push Button 
  * @param  Mode Button mode
  *   This parameter can be one of the following values:
  *     @arg BUTTON_MODE_GPIO: Button will be used as simple IO 
  *     @arg BUTTON_MODE_EXTI: Button will be connected to EXTI line
  *                            with interrupt generation capability
  * @retval None
  */
void BSP_PB_Init(Button_TypeDef Button, ButtonMode_TypeDef Mode)
{
  GPIO_InitTypeDef GPIO_InitStruct;

  /* Enable the Tamper Clock */
  TAMPERx_GPIO_CLK_ENABLE(Button);

  GPIO_InitStruct.Pin = BUTTON_PIN[Button];
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;

  if (Mode == BUTTON_MODE_GPIO)
  {
    /* Configure Button pin as input */
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;

    HAL_GPIO_Init(BUTTON_PORT[Button], &GPIO_InitStruct);
  }

  if (Mode == BUTTON_MODE_EXTI)
  {
    /* Configure Button pin as input with External interrupt */
    GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
    HAL_GPIO_Init(BUTTON_PORT[Button], &GPIO_InitStruct);

    /* Enable and set Button EXTI Interrupt to the lowest priority */
    HAL_NVIC_SetPriority((IRQn_Type)(BUTTON_IRQn[Button]), 0x03, 0x00);
    HAL_NVIC_EnableIRQ((IRQn_Type)(BUTTON_IRQn[Button]));
  }
}

/**
  * @brief  Returns the selected button state.
  * @param  Button Button to be checked.
  *   This parameter can be one of the following values:
  *     @arg BUTTON_TAMPER: Tamper Push Button
  * @retval The Button GPIO pin value
  */
uint32_t BSP_PB_GetState(Button_TypeDef Button)
{
  return HAL_GPIO_ReadPin(BUTTON_PORT[Button], BUTTON_PIN[Button]);
}

/**
  * @brief  Configures joystick GPIO and EXTI modes.
  * @param  Joy_Mode Button mode.
  *    This parameter can be one of the following values:
  *      @arg  JOY_MODE_GPIO: Joystick pins will be used as simple IOs
  *      @arg  JOY_MODE_EXTI: Joystick pins will be connected to EXTI line 
  *                                 with interrupt generation capability  
  * @retval HAL_OK: if all initializations are OK. Other value if error.
  */
uint8_t BSP_JOY_Init(JOYMode_TypeDef Joy_Mode)
{
  JOYState_TypeDef joykey;
  GPIO_InitTypeDef GPIO_InitStruct;

  /* Initialized the Joystick. */
  for(joykey = JOY_SEL; joykey < (JOY_SEL+JOYn) ; joykey++)
  {
    /* Enable the JOY clock */
    JOYx_GPIO_CLK_ENABLE(joykey);

    GPIO_InitStruct.Pin = JOY_PIN[joykey];
    GPIO_InitStruct.Pull = GPIO_PULLDOWN;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;

    if (Joy_Mode == JOY_MODE_GPIO)
    {
      /* Configure Joy pin as input */
      GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
      HAL_GPIO_Init(JOY_PORT[joykey], &GPIO_InitStruct);
    }

    if (Joy_Mode == JOY_MODE_EXTI)
    {
      /* Configure Joy pin as input with External interrupt */
      GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
      HAL_GPIO_Init(JOY_PORT[joykey], &GPIO_InitStruct);

      /* Enable and set Joy EXTI Interrupt to the lowest priority */
      HAL_NVIC_SetPriority((IRQn_Type)(JOY_IRQn[joykey]), 0x03, 0x00);
      HAL_NVIC_EnableIRQ((IRQn_Type)(JOY_IRQn[joykey]));
    }
  }
  
  return HAL_OK;
}

/**
  * @brief  Returns the current joystick status.
  * @retval Code of the joystick key pressed
  *          This code can be one of the following values:
  *            @arg  JOY_NONE
  *            @arg  JOY_SEL
  *            @arg  JOY_DOWN
  *            @arg  JOY_LEFT
  *            @arg  JOY_RIGHT
  *            @arg  JOY_UP
  */
JOYState_TypeDef BSP_JOY_GetState(void)
{
  JOYState_TypeDef joykey;

  for (joykey = JOY_SEL; joykey < (JOY_SEL + JOYn) ; joykey++)
  {
    if (HAL_GPIO_ReadPin(JOY_PORT[joykey], JOY_PIN[joykey]) == GPIO_PIN_SET)
    {
      /* Return Code Joystick key pressed */
      return joykey;
    }
  }
  
  /* No Joystick key pressed */
  return JOY_NONE;
}

#if defined(HAL_UART_MODULE_ENABLED)
/**
  * @brief  Configures COM port.
  * @param  COM Specifies the COM port to be configured.
  *   This parameter can be one of following parameters:    
  *     @arg COM1  
  * @param  huart pointer to a UART_HandleTypeDef structure that
  *   contains the configuration information for the specified UART peripheral.
  * @retval None
  */
void BSP_COM_Init(COM_TypeDef COM, UART_HandleTypeDef* huart)
{
  GPIO_InitTypeDef GPIO_InitStruct;

  /* Enable GPIO clock */
  COMx_TX_GPIO_CLK_ENABLE(COM);
  COMx_RX_GPIO_CLK_ENABLE(COM);

  /* Enable USART clock */
  COMx_CLK_ENABLE(COM);

  /* Configure USART Tx as alternate function push-pull */
  GPIO_InitStruct.Pin = COM_TX_PIN[COM];
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Alternate = COM_TX_AF[COM];
  HAL_GPIO_Init(COM_TX_PORT[COM], &GPIO_InitStruct);
    
  /* Configure USART Rx as alternate function push-pull */
  GPIO_InitStruct.Pin = COM_RX_PIN[COM];
  GPIO_InitStruct.Alternate = COM_RX_AF[COM];
  HAL_GPIO_Init(COM_RX_PORT[COM], &GPIO_InitStruct);

  /* USART configuration */
  huart->Instance = COM_USART[COM];
  HAL_UART_Init(huart);
}
#endif /* HAL_UART_MODULE_ENABLED */

/**
  * @}
  */

/** @addtogroup STM32072B_EVAL_BUS_Operations_Functions
  * @{
  */  

/*******************************************************************************
                            BUS OPERATIONS
*******************************************************************************/
#if defined(HAL_I2C_MODULE_ENABLED)
/******************************* I2C Routines *********************************/

/**
  * @brief I2C Bus initialization
  * @retval None
  */
static void I2C1_Init(void)
{
  if(HAL_I2C_GetState(&heval_I2c1) == HAL_I2C_STATE_RESET)
  {
    heval_I2c1.Instance              = EVAL_I2C1;
    heval_I2c1.Init.Timing           = I2C1_TIMING;
    heval_I2c1.Init.OwnAddress1      = 0;
    heval_I2c1.Init.AddressingMode   = I2C_ADDRESSINGMODE_7BIT;
    heval_I2c1.Init.DualAddressMode  = I2C_DUALADDRESS_DISABLE;
    heval_I2c1.Init.OwnAddress2      = 0;
    heval_I2c1.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
    heval_I2c1.Init.GeneralCallMode  = I2C_GENERALCALL_DISABLE;
    heval_I2c1.Init.NoStretchMode    = I2C_NOSTRETCH_DISABLE;  

    /* Init the I2C */
    I2C1_MspInit(&heval_I2c1);
    HAL_I2C_Init(&heval_I2c1);
  }
}

/**
  * @brief  Reads multiple data on the BUS.
  * @param  Addr   I2C Address
  * @param  Reg    Reg Address 
  * @param  RegSize  The target register size (can be 8BIT or 16BIT)
  * @param  pBuffer  pointer to read data buffer
  * @param  Length  length of the data
  * @retval 0 if no problems to read multiple data
  */
static HAL_StatusTypeDef I2C1_ReadBuffer(uint16_t Addr, uint8_t Reg, uint16_t RegSize, uint8_t *pBuffer, uint16_t Length)
{
  HAL_StatusTypeDef status = HAL_OK;
  
  status = HAL_I2C_Mem_Read(&heval_I2c1, Addr, Reg, RegSize, pBuffer, Length, I2c1Timeout);
  
  /* Check the communication status */
  if(status != HAL_OK)
  {
    /* Re-Initiaize the BUS */
    I2C1_Error();
  }
  return status;
}

/**
  * @brief  Checks if target device is ready for communication. 
  * @note   This function is used with Memory devices
  * @param  DevAddress Target device address
  * @param  Trials Number of trials
  * @retval HAL status
  */
static HAL_StatusTypeDef I2C1_IsDeviceReady(uint16_t DevAddress, uint32_t Trials)
{ 
  return (HAL_I2C_IsDeviceReady(&heval_I2c1, DevAddress, Trials, I2c1Timeout));
}

/**
  * @brief  Write a value in a register of the device through BUS.
  * @param  Addr Device address on BUS Bus.  
  * @param  Reg The target register address to write
  * @param  RegSize The target register size (can be 8BIT or 16BIT)
  * @param  pBuffer The target register value to be written 
  * @param  Length buffer size to be written
  * @retval None
  */
static HAL_StatusTypeDef I2C1_WriteBuffer(uint16_t Addr, uint8_t Reg, uint16_t RegSize, uint8_t *pBuffer, uint16_t Length)
{
  HAL_StatusTypeDef status = HAL_OK;
  
  status = HAL_I2C_Mem_Write(&heval_I2c1, Addr, Reg, RegSize, pBuffer, Length, I2c1Timeout); 
  
  /* Check the communication status */
  if(status != HAL_OK)
  {
    /* Re-Initiaize the BUS */
    I2C1_Error();
  }        
  return status;
}

/**
  * @brief  Write buffer through I2C.
  * @param  pBuffer The address of the data to be written 
  * @param  Length buffer size to be written
  * @retval None
  */
static HAL_StatusTypeDef I2C1_TransmitData(uint8_t *pBuffer, uint16_t Length)
{
  HAL_StatusTypeDef status = HAL_OK;
  
  status = HAL_I2C_Slave_Transmit(&heval_I2c1, pBuffer, Length, I2c1Timeout);

  /* Check the communication status */
  if(status != HAL_OK)
  {
    /* Execute user timeout callback */
    I2C1_Error();
    return HAL_ERROR;
  }        
  return HAL_OK;
}

/**
  * @brief  Manages error callback by re-initializing I2C.
  * @retval None
  */
static void I2C1_Error(void)
{
  /* De-initialize the I2C communication BUS */
  HAL_I2C_DeInit(&heval_I2c1);
  
  /* Re-Initiaize the I2C communication BUS */
  I2C1_Init();
}

/**
  * @brief I2C MSP Initialization
  * @param hi2c I2C handle
  * @retval None
  */
static void I2C1_MspInit(I2C_HandleTypeDef *hi2c)
{
  GPIO_InitTypeDef GPIO_InitStruct;
  RCC_PeriphCLKInitTypeDef RCC_PeriphCLKInitStruct;

  /*##-1- Set source clock to SYSCLK for I2C1 ################################################*/  
  RCC_PeriphCLKInitStruct.PeriphClockSelection = RCC_PERIPHCLK_I2C1;
  RCC_PeriphCLKInitStruct.I2c1ClockSelection = RCC_I2C1CLKSOURCE_SYSCLK;
  HAL_RCCEx_PeriphCLKConfig(&RCC_PeriphCLKInitStruct);

  /*##-2- Configure the GPIOs ################################################*/  
  
  /* Enable GPIO clock */
  EVAL_I2C1_GPIO_CLK_ENABLE();

  /* Configure I2C SCL & SDA as alternate function  */
  GPIO_InitStruct.Pin       = (EVAL_I2C1_SCL_PIN| EVAL_I2C1_SDA_PIN);
  GPIO_InitStruct.Mode      = GPIO_MODE_AF_OD;
  GPIO_InitStruct.Pull      = GPIO_NOPULL;
  GPIO_InitStruct.Speed     = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.Alternate = EVAL_I2C1_SCL_SDA_AF;
  HAL_GPIO_Init(EVAL_I2C1_GPIO_PORT, &GPIO_InitStruct);

  /*##-3- Configure the Eval I2C peripheral #######################################*/ 
  /* Enable I2C clock */
  EVAL_I2C1_CLK_ENABLE();

  /* Force the I2C peripheral clock reset */
  EVAL_I2C1_FORCE_RESET();

  /* Release the I2C peripheral clock reset */
  EVAL_I2C1_RELEASE_RESET();
}

/**
  * @brief I2C Bus initialization
  * @retval None
  */
static void I2C2_Init(void)
{
  if(HAL_I2C_GetState(&heval_I2c2) == HAL_I2C_STATE_RESET)
  {
    heval_I2c2.Instance              = EVAL_I2C2;
    heval_I2c2.Init.Timing           = I2C2_TIMING;
    heval_I2c2.Init.OwnAddress1      = 0;
    heval_I2c2.Init.AddressingMode   = I2C_ADDRESSINGMODE_7BIT;
    heval_I2c2.Init.DualAddressMode  = I2C_DUALADDRESS_DISABLE;
    heval_I2c2.Init.OwnAddress2      = 0;
    heval_I2c2.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
    heval_I2c2.Init.GeneralCallMode  = I2C_GENERALCALL_DISABLE;
    heval_I2c2.Init.NoStretchMode    = I2C_NOSTRETCH_DISABLE;  
      
    /* Init the I2C */
    I2C2_MspInit(&heval_I2c2);
    HAL_I2C_Init(&heval_I2c2);
  }
}

/**
  * @brief  Read a register of the device through I2C.
  * @param  Addr Device address on I2C Bus.  
  * @param  pBuffer The address to store the read data 
  * @param  Length buffer size to be read
  * @retval None
  */
static HAL_StatusTypeDef I2C2_ReceiveData(uint16_t Addr, uint8_t * pBuffer, uint16_t Length)
{
  HAL_StatusTypeDef status = HAL_OK;
  
  status = HAL_I2C_Master_Receive(&heval_I2c2, Addr, pBuffer, Length, I2c2Timeout); 
  
  /* Check the communication status */
  if(status != HAL_OK)
  {
    /* Execute user timeout callback */
    I2C2_Error();
  }
  return status;
}

/**
  * @brief Discovery I2C2 error treatment function
  * @retval None
  */
static void I2C2_Error(void)
{
  /* De-initialize the I2C communication BUS */
  HAL_I2C_DeInit(&heval_I2c2);
  
  /* Re-Initiaize the I2C communication BUS */
  I2C2_Init();
}

/**
  * @brief I2C MSP Initialization
  * @param hi2c I2C handle
  * @retval None
  */
static void I2C2_MspInit(I2C_HandleTypeDef *hi2c)
{
  GPIO_InitTypeDef GPIO_InitStruct;
  /* Enable GPIO clock */
  EVAL_I2C2_GPIO_CLK_ENABLE();
  
  /* Configure I2C SCL and SDA as alternate function  */
  GPIO_InitStruct.Pin = (EVAL_I2C2_SCL_PIN | EVAL_I2C2_SDA_PIN);
  GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.Alternate = EVAL_I2C2_AF;
  HAL_GPIO_Init(EVAL_I2C2_GPIO_PORT, &GPIO_InitStruct);

  /* Enable I2C clock */
  EVAL_I2C2_CLK_ENABLE();

  /* Force the I2C peripheral clock reset */
  EVAL_I2C2_FORCE_RESET();

  /* Release the I2C peripheral clock reset */
  EVAL_I2C2_RELEASE_RESET();
}
#endif /*HAL_I2C_MODULE_ENABLED*/

#if defined(HAL_SPI_MODULE_ENABLED)
/******************************* SPI Routines *********************************/

/**
  * @brief SPIx Bus initialization
  * @retval None
  */
static void SPIx_Init(void)
{
  if(HAL_SPI_GetState(&heval_Spi) == HAL_SPI_STATE_RESET)
  {
    /* SPI Config */
    heval_Spi.Instance = EVAL_SPIx;
    /* SPI baudrate is set to 12 MHz (PCLK1/SPI_BaudRatePrescaler = 48/4 = 12 MHz) 
    to verify these constraints:
    HX8347D LCD SPI interface max baudrate is  50MHz for write and 6.66MHz for read
    PCLK1 frequency is set to 48 MHz 
    - SD card SPI interface max baudrate is 25MHz for write/read
    */
    heval_Spi.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_4;
    heval_Spi.Init.Direction = SPI_DIRECTION_2LINES;
    heval_Spi.Init.CLKPhase = SPI_PHASE_2EDGE;
    heval_Spi.Init.CLKPolarity = SPI_POLARITY_HIGH;
    heval_Spi.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
    heval_Spi.Init.CRCPolynomial = 7;
    heval_Spi.Init.DataSize = SPI_DATASIZE_8BIT;
    heval_Spi.Init.FirstBit = SPI_FIRSTBIT_MSB;
    heval_Spi.Init.NSS = SPI_NSS_SOFT;
    heval_Spi.Init.TIMode = SPI_TIMODE_DISABLE;
    heval_Spi.Init.Mode = SPI_MODE_MASTER;
    
    SPIx_MspInit(&heval_Spi);
    HAL_SPI_Init(&heval_Spi);
  }
}

/**
  * @brief SPI Read 4 bytes from device
  * @retval Read data
  */
static uint32_t SPIx_Read(void)
{
  HAL_StatusTypeDef status = HAL_OK;
  uint32_t readvalue = 0x0;
  uint32_t writevalue = 0xFFFFFFFF;
  
  status = HAL_SPI_TransmitReceive(&heval_Spi, (uint8_t*) &writevalue, (uint8_t*) &readvalue, 1, SpixTimeout);

  /* Check the communication status */
  if(status != HAL_OK)
  {
    /* Execute user timeout callback */
    SPIx_Error();
  }

  return readvalue;
}

/**
  * @brief SPI Write a byte to device
  * @param DataIn value to be written
  * @param DataOut read value
  * @param DataLegnth data length
  * @retval None
  */
static void SPIx_WriteReadData(const uint8_t *DataIn, uint8_t *DataOut, uint16_t DataLegnth)
{
  HAL_StatusTypeDef status = HAL_OK;

  status = HAL_SPI_TransmitReceive(&heval_Spi, (uint8_t*) DataIn, DataOut, DataLegnth, SpixTimeout);
    
  /* Check the communication status */
  if(status != HAL_OK)
  {
    /* Execute user timeout callback */
    SPIx_Error();
  }
}

/**
  * @brief SPI Write a byte to device
  * @param Value value to be written
  * @retval None
  */
static void SPIx_Write(uint8_t Value)
{
  HAL_StatusTypeDef status = HAL_OK;
  uint8_t data;

  status = HAL_SPI_TransmitReceive(&heval_Spi, (uint8_t*) &Value, &data, 1, SpixTimeout);

  /* Check the communication status */
  if(status != HAL_OK)
  {
    /* Execute user timeout callback */
    SPIx_Error();
  }
}

/**
  * @brief  SPIx_FlushFifo
  * @retval None
  */
static void SPIx_FlushFifo(void)
{
  HAL_SPIEx_FlushRxFifo(&heval_Spi);
}

/**
  * @brief SPI error treatment function
  * @retval None
  */
static void SPIx_Error (void)
{
  /* De-initialize the SPI communication BUS */
  HAL_SPI_DeInit(&heval_Spi);
  
  /* Re- Initiaize the SPI communication BUS */
  SPIx_Init();
}

/**
  * @brief SPI MSP Init
  * @param hspi SPI handle
  * @retval None
  */
static void SPIx_MspInit(SPI_HandleTypeDef *hspi)
{
  GPIO_InitTypeDef GPIO_InitStruct;

  /* Enable SPI clock  */
  EVAL_SPIx_CLK_ENABLE();
  
  /* enable EVAL_SPI gpio clocks */
  EVAL_SPIx_SCK_GPIO_CLK_ENABLE();
  EVAL_SPIx_MISO_GPIO_CLK_ENABLE();
  EVAL_SPIx_MOSI_GPIO_CLK_ENABLE();
  EVAL_SPIx_MOSI_DIR_GPIO_CLK_ENABLE();  
  
  /* configure SPI SCK */
  GPIO_InitStruct.Pin       = EVAL_SPIx_SCK_PIN;
  GPIO_InitStruct.Mode      = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull      = GPIO_NOPULL;
  GPIO_InitStruct.Speed     = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.Alternate = EVAL_SPIx_SCK_AF;
  HAL_GPIO_Init(EVAL_SPIx_SCK_GPIO_PORT, &GPIO_InitStruct);
  
  /* configure SPI MOSI */
  GPIO_InitStruct.Pin       = EVAL_SPIx_MOSI_PIN;
  GPIO_InitStruct.Alternate = EVAL_SPIx_MOSI_AF;
  HAL_GPIO_Init(EVAL_SPIx_MOSI_GPIO_PORT, &GPIO_InitStruct);
  
  /* configure SPI MISO  */
  GPIO_InitStruct.Pin       = EVAL_SPIx_MISO_PIN;
  GPIO_InitStruct.Alternate = EVAL_SPIx_MISO_AF;
  HAL_GPIO_Init(EVAL_SPIx_MISO_GPIO_PORT, &GPIO_InitStruct);
  
  /* Set PB.2 as Out PP, as direction pin for MOSI */
  GPIO_InitStruct.Pin       = EVAL_SPIx_MOSI_DIR_PIN;
  GPIO_InitStruct.Speed     = GPIO_SPEED_FREQ_MEDIUM;
  GPIO_InitStruct.Mode      = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull      = GPIO_NOPULL;  
  HAL_GPIO_Init(EVAL_SPIx_MOSI_DIR_GPIO_PORT, &GPIO_InitStruct);
  
  /* MOSI DIRECTION as output */
  HAL_GPIO_WritePin(EVAL_SPIx_MOSI_DIR_GPIO_PORT, EVAL_SPIx_MOSI_DIR_PIN, GPIO_PIN_SET);
  
  /* Force the SPI peripheral clock reset */
  EVAL_SPIx_FORCE_RESET();

  /* Release the SPI peripheral clock reset */
  EVAL_SPIx_RELEASE_RESET();
}

#endif /*HAL_SPI_MODULE_ENABLED*/

/**
  * @}
  */

/** @addtogroup STM32072B_EVAL_LINK_Operations_Functions
  * @{
  */  

/******************************************************************************
LINK OPERATIONS
*******************************************************************************/

#if defined(HAL_SPI_MODULE_ENABLED)
/********************************* LINK LCD ***********************************/

/**
  * @brief  Configures the LCD_SPI interface.
  * @retval None
  */
void LCD_IO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct;

  /* Configure the LCD Control pins ------------------------------------------*/
  LCD_NCS_GPIO_CLK_ENABLE();
    
  /* Configure NCS in Output Push-Pull mode */
  GPIO_InitStruct.Pin     = LCD_NCS_PIN;
  GPIO_InitStruct.Mode    = GPIO_MODE_OUTPUT_OD;
  GPIO_InitStruct.Pull    = GPIO_NOPULL;
  GPIO_InitStruct.Speed   = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LCD_NCS_GPIO_PORT, &GPIO_InitStruct);
    
  /* Set or Reset the control line */
  LCD_CS_LOW();
  LCD_CS_HIGH();

  SPIx_Init();
}

/**
  * @brief  Write register value.
  * @param  pData Pointer on the register value
  * @param  Size Size of byte to transmit to the register
  * @retval None
  */
void LCD_IO_WriteMultipleData(uint8_t *pData, uint32_t Size)
{
  uint32_t counter = 0;

  /* Reset LCD control line(/CS) and Send data */  
  LCD_CS_LOW();

  /* Send Start Byte */
  SPIx_Write(START_BYTE | LCD_WRITE_REG);

  if (Size == 1)
  {
    /* Only 1 byte to be sent to LCD - general interface can be used */
    /* Send Data */
    SPIx_Write(*pData);
  }
  else
  {
    for (counter = Size; counter != 0; counter--)
    {
      while(((heval_Spi.Instance->SR) & SPI_FLAG_TXE) != SPI_FLAG_TXE)
      {
      }  
      /* Need to invert bytes for LCD*/
      *((__IO uint8_t*)&heval_Spi.Instance->DR) = *(pData+1);
    
      while(((heval_Spi.Instance->SR) & SPI_FLAG_TXE) != SPI_FLAG_TXE)
      {
      }  
      *((__IO uint8_t*)&heval_Spi.Instance->DR) = *pData;
      counter--;
      pData += 2;
    }
    
    /* Wait until the bus is ready before releasing Chip select */ 
    while(((heval_Spi.Instance->SR) & SPI_FLAG_BSY) != RESET)
    {
    }
  }

  /* Empty the Rx fifo */
  SPIx_FlushFifo();

  /* Reset LCD control line(/CS) and Send data */  
  LCD_CS_HIGH();
}

/**
* @brief  Writes address on LCD register.
* @param  Reg Register to be written
  * @retval None
  */
void LCD_IO_WriteReg(uint8_t Reg) 
{
  /* Reset LCD control line(/CS) and Send command */
  LCD_CS_LOW();
  
  /* Send Start Byte */
  SPIx_Write(START_BYTE | SET_INDEX);
  
  /* Write 16-bit Reg Index (High Byte is 0) */
  SPIx_Write(0x00);
  SPIx_Write(Reg);
  
  /* Deselect : Chip Select high */
  LCD_CS_HIGH();
}

/**
* @brief  Read data from LCD data register.
* @param  Reg Regsiter to be read
* @retval readvalue
  */
uint16_t LCD_IO_ReadData(uint16_t Reg) 
{
  uint32_t readvalue = 0;

  /* Send Reg value to Read */
  LCD_IO_WriteReg(Reg);

  /* Reset LCD control line(/CS) and Send command */
  LCD_CS_LOW();
  
  /* Send Start Byte */
  SPIx_Write(START_BYTE | LCD_READ_REG);

  /* Read Upper Byte */
  SPIx_Write(0xFF);
  readvalue = SPIx_Read();
  readvalue = readvalue << 8;
  readvalue |= SPIx_Read();
  
  HAL_Delay(10);

  /* Deselect : Chip Select high */
  LCD_CS_HIGH();
  return readvalue;
}

/**
  * @brief  Wait for loop in ms.
  * @param  Delay in ms.
  */
void LCD_Delay (uint32_t Delay)
{
  HAL_Delay(Delay);
}

/******************************** LINK SD Card ********************************/

/**
  * @brief  Initializes the SD Card and put it into StandBy State (Ready for 
  *         data transfer).
  * @retval None
  */
void SD_IO_Init(void)
{
  GPIO_InitTypeDef  GPIO_InitStruct;
  uint8_t counter;

  /* SD_CS_GPIO and SD_DETECT_GPIO Periph clock enable */
  SD_CS_GPIO_CLK_ENABLE();
  SD_DETECT_GPIO_CLK_ENABLE();

  /* Configure SD_CS_PIN pin: SD Card CS pin */
  GPIO_InitStruct.Pin = SD_CS_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_OD;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(SD_CS_GPIO_PORT, &GPIO_InitStruct);

  /* Configure SD_DETECT_PIN pin: SD Card detect pin */
  GPIO_InitStruct.Pin = SD_DETECT_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(SD_DETECT_GPIO_PORT, &GPIO_InitStruct);

  /* Configure LCD_CS_PIN pin: LCD Card CS pin */
  GPIO_InitStruct.Pin   = LCD_NCS_PIN;
  GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull  = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(LCD_NCS_GPIO_PORT, &GPIO_InitStruct);
  LCD_CS_HIGH();

  /* Enable and set SD EXTI Interrupt to the lowest priority */
  HAL_NVIC_SetPriority(SD_DETECT_EXTI_IRQn, 0x03, 0);
  HAL_NVIC_EnableIRQ(SD_DETECT_EXTI_IRQn);

  /*------------Put SD in SPI mode--------------*/
  /* SD SPI Config */
  SPIx_Init();

  /* SD chip select high */
  SD_CS_HIGH();
  
  /* Send dummy byte 0xFF, 10 times with CS high */
  /* Rise CS and MOSI for 80 clocks cycles */
  for (counter = 0; counter <= 9; counter++)
  {
    /* Send dummy byte 0xFF */
    SD_IO_WriteByte(SD_DUMMY_BYTE);
  }
}


void SD_IO_CSState(uint8_t val)
{
  if(val == 1) 
  {
    SD_CS_HIGH();
  }
  else
  {
    SD_CS_LOW();
  }
}

/**
  * @brief  Write a byte on the SD.
  * @param  DataIn byte to send.
  * @param  DataOut read byte.
  * @param  DataLength data length.
  * @retval None
  */
void SD_IO_WriteReadData(const uint8_t *DataIn, uint8_t *DataOut, uint16_t DataLength)
  {
  /* Send the byte */
  SPIx_WriteReadData(DataIn, DataOut, DataLength);
}

/**
  * @brief  Writes a byte on the SD.
  * @param  Data byte to send.
  * @retval None
  */
uint8_t SD_IO_WriteByte(uint8_t Data)
{
  uint8_t tmp;

  /* Send the byte */
  SPIx_WriteReadData(&Data,&tmp,1);
  return tmp;
}

#endif /* HAL_SPI_MODULE_ENABLED */

#if defined(HAL_I2C_MODULE_ENABLED)
/********************************* LINK I2C EEPROM *****************************/
/**
  * @brief  Initializes peripherals used by the I2C EEPROM driver.
  * @retval None
  */
void EEPROM_IO_Init(void)
{
  I2C1_Init();
}

/**
  * @brief  Write data to I2C EEPROM driver
  * @param  DevAddress Target device address
  * @param  MemAddress Internal memory address
  * @param  pBuffer Pointer to data buffer
  * @param  BufferSize Amount of data to be sent
  * @retval HAL status
  */
HAL_StatusTypeDef EEPROM_IO_WriteData(uint16_t DevAddress, uint16_t MemAddress, uint8_t* pBuffer, uint32_t BufferSize)
{
  return (I2C1_WriteBuffer(DevAddress, MemAddress, I2C_MEMADD_SIZE_16BIT, pBuffer, BufferSize));
}

/**
  * @brief  Read data from I2C EEPROM driver
  * @param  DevAddress Target device address
  * @param  MemAddress Internal memory address
  * @param  pBuffer Pointer to data buffer
  * @param  BufferSize Amount of data to be read
  * @retval HAL status
  */
HAL_StatusTypeDef EEPROM_IO_ReadData(uint16_t DevAddress, uint16_t MemAddress, uint8_t* pBuffer, uint32_t BufferSize)
{
  return (I2C1_ReadBuffer(DevAddress, MemAddress, I2C_MEMADD_SIZE_16BIT, pBuffer, BufferSize));
}

/**
  * @brief  Checks if target device is ready for communication. 
  * @note   This function is used with Memory devices
  * @param  DevAddress Target device address
  * @param  Trials Number of trials
  * @retval HAL status
  */
HAL_StatusTypeDef EEPROM_IO_IsDeviceReady(uint16_t DevAddress, uint32_t Trials)
{ 
  return (I2C1_IsDeviceReady(DevAddress, Trials));
}

/********************************* LINK I2C TEMPERATURE SENSOR *****************************/
/**
  * @brief  Initializes peripherals used by the I2C Temperature Sensor driver.
  * @retval None
  */
void TSENSOR_IO_Init(void)
{
  I2C1_Init();
}

/**
  * @brief  Writes one byte to the TSENSOR.
  * @param  DevAddress Target device address
  * @param  pBuffer Pointer to data buffer
  * @param  WriteAddr TSENSOR's internal address to write to.
  * @param  Length Number of data to write
  * @retval None
  */
void TSENSOR_IO_Write(uint16_t DevAddress, uint8_t* pBuffer, uint8_t WriteAddr, uint16_t Length)
{
  I2C1_WriteBuffer(DevAddress, WriteAddr, I2C_MEMADD_SIZE_8BIT, pBuffer, Length);
}

/**
  * @brief  Reads one byte from the TSENSOR.
  * @param  DevAddress Target device address
  * @param  pBuffer  pointer to the buffer that receives the data read from the TSENSOR.
  * @param  ReadAddr  TSENSOR's internal address to read from.
  * @param  Length Number of data to read
  * @retval None
  */
void TSENSOR_IO_Read(uint16_t DevAddress, uint8_t* pBuffer, uint8_t ReadAddr, uint16_t Length)
{
  I2C1_ReadBuffer(DevAddress, ReadAddr, I2C_MEMADD_SIZE_8BIT, pBuffer, Length);
}

/**
  * @brief  Checks if Temperature Sensor is ready for communication. 
  * @param  DevAddress Target device address
  * @param  Trials Number of trials
  * @retval HAL status
  */
uint16_t TSENSOR_IO_IsDeviceReady(uint16_t DevAddress, uint32_t Trials)
{ 
  return (I2C1_IsDeviceReady(DevAddress, Trials));
}

/****************************** LINK HDMI CEC *********************************/
/**
  * @brief  Initializes CEC low level.
  * @retval None
  */
void HDMI_CEC_IO_Init (void) 
{
  GPIO_InitTypeDef  GPIO_InitStruct;

  /* Enable CEC clock */
  __HAL_RCC_CEC_CLK_ENABLE();
  
  /* Enable CEC LINE GPIO clock */
  HDMI_CEC_LINE_CLK_ENABLE();

  /* Configure CEC LINE GPIO as alternate function open drain */
  GPIO_InitStruct.Pin = HDMI_CEC_LINE_PIN; 
  GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.Pull  = GPIO_NOPULL;
  GPIO_InitStruct.Alternate = HDMI_CEC_LINE_AF;
  HAL_GPIO_Init(HDMI_CEC_LINE_GPIO_PORT, &GPIO_InitStruct);    

  /* CEC IRQ Channel configuration */
  HAL_NVIC_SetPriority((IRQn_Type)HDMI_CEC_IRQn, 0x3, 0x0);
  HAL_NVIC_EnableIRQ((IRQn_Type)HDMI_CEC_IRQn); 

  /* Enable CEC HPD SINK GPIO clock */
  HDMI_CEC_HPD_SINK_CLK_ENABLE();
  
  /* Configure CEC HPD SINK GPIO as output push pull */
  GPIO_InitStruct.Pin = HDMI_CEC_HPD_SINK_PIN; 
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_InitStruct.Pull  = GPIO_PULLDOWN;
  HAL_GPIO_Init(HDMI_CEC_HPD_SINK_GPIO_PORT, &GPIO_InitStruct); 
  
  I2C1_Init();

  /* Enable CEC HPD SOURCE GPIO clock */
  HDMI_CEC_HPD_SOURCE_CLK_ENABLE();

  /* Configure CEC HPD SOURCE GPIO as output push pull */
  GPIO_InitStruct.Pin = HDMI_CEC_HPD_SOURCE_PIN; 
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_InitStruct.Pull  = GPIO_PULLDOWN;
  HAL_GPIO_Init(HDMI_CEC_HPD_SOURCE_GPIO_PORT, &GPIO_InitStruct); 
  
  I2C2_Init();
}

/**
  * @brief  Write data to I2C HDMI CEC driver
  * @param  pBuffer Pointer to data buffer
  * @param  BufferSize Amount of data to be sent
  * @retval HAL status
  */
HAL_StatusTypeDef HDMI_CEC_IO_WriteData(uint8_t * pBuffer, uint16_t BufferSize)
{
  return (I2C1_TransmitData(pBuffer, BufferSize));
}

/**
  * @brief  Read data to I2C HDMI CEC driver
  * @param  DevAddress Target device address
  * @param  pBuffer Pointer to data buffer
  * @param  BufferSize Amount of data to be sent
  * @retval HAL status
  */
HAL_StatusTypeDef HDMI_CEC_IO_ReadData(uint16_t DevAddress, uint8_t * pBuffer, uint16_t BufferSize)
{
  return (I2C2_ReceiveData(DevAddress, pBuffer, BufferSize));
}

#endif /* HAL_I2C_MODULE_ENABLED */

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

/**
  * @}
  */ 
    
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
