/**
  ******************************************************************************
  * @file    stm32f072b_discovery.c
  * @author  MCD Application Team
  * @brief   This file provides set of firmware functions to manage Leds, 
  *          push-button available on STM32F072B-Discovery Kit from STMicroelectronics.
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
#include "stm32f072b_discovery.h"

/** @addtogroup BSP
  * @{
  */

/** @addtogroup STM32F072B_DISCOVERY
  * @{
  */

/** @addtogroup STM32F072B_DISCOVERY_Common 
  * @brief This file provides firmware functions to manage Leds, push-buttons, 
  *        and temperature sensor (LM75) available on 
  *        STM32F072B-DISCO evaluation board from STMicroelectronics.
  * @{
  */ 

/** @defgroup STM32F072B_DISCOVERY_Private_Constants Private Constants
  * @{
  */ 

/**
  * @brief STM32F072B DISCO BSP Driver version number V2.1.6
  */
#define __STM32F072B_DISCO_BSP_VERSION_MAIN   (0x02) /*!< [31:24] main version */
#define __STM32F072B_DISCO_BSP_VERSION_SUB1   (0x01) /*!< [23:16] sub1 version */
#define __STM32F072B_DISCO_BSP_VERSION_SUB2   (0x06) /*!< [15:8]  sub2 version */
#define __STM32F072B_DISCO_BSP_VERSION_RC     (0x00) /*!< [7:0]  release candidate */ 
#define __STM32F072B_DISCO_BSP_VERSION         ((__STM32F072B_DISCO_BSP_VERSION_MAIN << 24)\
                                               |(__STM32F072B_DISCO_BSP_VERSION_SUB1 << 16)\
                                               |(__STM32F072B_DISCO_BSP_VERSION_SUB2 << 8 )\
                                               |(__STM32F072B_DISCO_BSP_VERSION_RC))  

/**
  * @}
  */ 

/** @defgroup STM32F072B_DISCOVERY_Private_Variables Private Variables
  * @{
  */ 
GPIO_TypeDef* LED_PORT[LEDn] = {LED3_GPIO_PORT,
                                LED4_GPIO_PORT,
                                LED5_GPIO_PORT,
                                LED6_GPIO_PORT};

const uint16_t LED_PIN[LEDn] = {LED3_PIN,
                                LED4_PIN,
                                LED5_PIN,
                                LED6_PIN};

GPIO_TypeDef* BUTTON_PORT[BUTTONn] = {USER_BUTTON_GPIO_PORT}; 
const uint16_t BUTTON_PIN[BUTTONn] = {USER_BUTTON_PIN}; 
const uint8_t BUTTON_IRQn[BUTTONn] = {USER_BUTTON_EXTI_IRQn};

/**
 * @brief BUS variables
 */
#if defined(HAL_I2C_MODULE_ENABLED)
I2C_HandleTypeDef I2cHandle;
#endif

#if defined(HAL_SPI_MODULE_ENABLED)
uint32_t SpixTimeout = SPIx_TIMEOUT_MAX;    /*<! Value of Timeout when SPI communication fails */
static SPI_HandleTypeDef SpiHandle;
#endif

/**
  * @}
  */ 


/** @defgroup STM32F072B_DISCOVERY_BUS_Operations_Functions Bus Operations functions
  * @{
  */ 
#if defined(HAL_I2C_MODULE_ENABLED)
/* I2Cx bus function */
static void     I2Cx_Init(void);
static uint32_t I2Cx_WriteData(uint8_t Addr, uint16_t Reg, uint8_t Value);
static uint32_t I2Cx_WriteBuffer(uint8_t Addr, uint16_t Reg,  uint8_t *pBuffer, uint16_t Length);
static uint32_t I2Cx_ReadData(uint8_t Addr, uint16_t Reg, uint8_t *Value);
static uint32_t I2Cx_ReadBuffer(uint8_t Addr, uint16_t Reg, uint8_t *pBuffer, uint16_t Length);
static void     I2Cx_Error(uint8_t Addr);
#endif /* HAL_I2C_MODULE_ENABLED */

#if defined(HAL_SPI_MODULE_ENABLED)
/* SPIx bus function */
static void     SPIx_Init(void);
static uint8_t  SPIx_WriteRead(uint8_t byte);
static void     SPIx_Error (void);
static void     SPIx_MspInit(SPI_HandleTypeDef *hspi);

/**
  * @}
  */ 

/** @defgroup STM32F072B_DISCOVERY_LINK_Operations_Functions Link Operations functions
  * @{
  */
  
/* Link function for GYRO peripheral */
void      GYRO_IO_Init(void);
void      GYRO_IO_Write(uint8_t* pBuffer, uint8_t WriteAddr, uint16_t NumByteToWrite);
void      GYRO_IO_Read(uint8_t* pBuffer, uint8_t ReadAddr, uint16_t NumByteToRead);
#endif

#if defined(HAL_I2C_MODULE_ENABLED)
/* Link function for I2C EEPROM peripheral */
void                      EEPROM_IO_Init(void);
uint32_t                  EEPROM_IO_WriteData(uint16_t DevAddress, uint16_t MemAddress, uint32_t pBuffer, uint32_t BufferSize);
uint32_t                  EEPROM_IO_ReadData(uint16_t DevAddress, uint16_t MemAddress, uint32_t pBuffer, uint32_t BufferSize);
HAL_StatusTypeDef         EEPROM_IO_IsDeviceReady(uint16_t DevAddress, uint32_t Trials);
#endif /* HAL_I2C_MODULE_ENABLED */

/**
  * @}
  */ 

/** @addtogroup STM32F072B_DISCOVERY_Exported_Functions
  * @{
  */ 

/**
  * @brief  This method returns the STM32F072B DISCO BSP Driver revision
  * @retval version : 0xXYZR (8bits for each decimal, R for RC)
  */
uint32_t BSP_GetVersion(void)
{
  return __STM32F072B_DISCO_BSP_VERSION;
}

/**
  * @brief  Configures LED GPIO.
  * @param  Led Specifies the Led to be configured. 
  *   This parameter can be one of following parameters:
  *     @arg LED3
  *     @arg LED4
  *     @arg LED5
  *     @arg LED6
  * @retval None
  */
void BSP_LED_Init(Led_TypeDef Led)
{
  GPIO_InitTypeDef  GPIO_InitStruct;
  
  /* Enable the GPIO_LED Clock */
  LEDx_GPIO_CLK_ENABLE(Led);

  /* Configure the GPIO_LED pin */
  GPIO_InitStruct.Pin = LED_PIN[Led];
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP; /* GPIO_PuPd_DOWN */
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  
  HAL_GPIO_Init(LED_PORT[Led], &GPIO_InitStruct);
  
  HAL_GPIO_WritePin(LED_PORT[Led], LED_PIN[Led], GPIO_PIN_RESET); 
}

/**
  * @brief  Turns selected LED On.
  * @param  Led Specifies the Led to be set on. 
  *   This parameter can be one of following parameters:
  *     @arg LED3
  *     @arg LED4
  *     @arg LED5
  *     @arg LED6
  * @retval None
  */
void BSP_LED_On(Led_TypeDef Led)
{
  HAL_GPIO_WritePin(LED_PORT[Led], LED_PIN[Led], GPIO_PIN_SET); 
}

/**
  * @brief  Turns selected LED Off.
  * @param  Led Specifies the Led to be set off. 
  *   This parameter can be one of following parameters:
  *     @arg LED3
  *     @arg LED4
  *     @arg LED5
  *     @arg LED6
  * @retval None
  */
void BSP_LED_Off(Led_TypeDef Led)
{
  HAL_GPIO_WritePin(LED_PORT[Led], LED_PIN[Led], GPIO_PIN_RESET); 
}

/**
  * @brief  Toggles the selected LED.
  * @param  Led Specifies the Led to be toggled. 
  *   This parameter can be one of following parameters:
  *     @arg LED3
  *     @arg LED4
  *     @arg LED5
  *     @arg LED6
  * @retval None
  */
void BSP_LED_Toggle(Led_TypeDef Led)
{
  HAL_GPIO_TogglePin(LED_PORT[Led], LED_PIN[Led]);
}

/**
  * @brief  Configures Button GPIO and EXTI Line.
  * @param  Button Specifies the Button to be configured.
  *   This parameter should be: BUTTON_USER
  * @param  Mode Specifies Button mode.
  *   This parameter can be one of following parameters:   
  *     @arg BUTTON_MODE_GPIO: Button will be used as simple IO 
  *     @arg BUTTON_MODE_EXTI: Button will be connected to EXTI line with interrupt
  *                            generation capability  
  * @retval None
  */
void BSP_PB_Init(Button_TypeDef Button, ButtonMode_TypeDef Mode)
{
  GPIO_InitTypeDef GPIO_InitStruct;

  /* Enable the BUTTON Clock */
  BUTTONx_GPIO_CLK_ENABLE(Button);
  __HAL_RCC_SYSCFG_CLK_ENABLE();

  GPIO_InitStruct.Pin = BUTTON_PIN[Button];
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;

  if(Mode == BUTTON_MODE_GPIO)
  {
    /* Configure Button pin as input */
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_PULLDOWN;
    HAL_GPIO_Init(BUTTON_PORT[Button], &GPIO_InitStruct);
  }

  if(Mode == BUTTON_MODE_EXTI)
  {
    /* Configure Button pin as input with External interrupt */
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING; 
    HAL_GPIO_Init(BUTTON_PORT[Button], &GPIO_InitStruct);

    /* Enable and set Button EXTI Interrupt to the lowest priority */
    HAL_NVIC_SetPriority((IRQn_Type)(BUTTON_IRQn[Button]), 0x03, 0x00);
    HAL_NVIC_EnableIRQ((IRQn_Type)(BUTTON_IRQn[Button]));
  }
}

/**
  * @brief  Returns the selected Push Button state.
  * @param  Button Specifies the Button to be checked.
  *   This parameter should be: BUTTON_USER  
  * @retval The Button GPIO pin value.
  */
uint32_t BSP_PB_GetState(Button_TypeDef Button)
{
  return HAL_GPIO_ReadPin(BUTTON_PORT[Button], BUTTON_PIN[Button]);
}

/**
  * @}
  */ 

/** @addtogroup STM32F072B_DISCOVERY_BUS_Operations_Functions
  * @{
  */ 
  
/******************************************************************************
                            BUS OPERATIONS
*******************************************************************************/
#if defined(HAL_I2C_MODULE_ENABLED)
/******************************* I2C Routines**********************************/

/**
  * @brief Discovery I2Cx MSP Initialization
  * @param hi2c I2C handle
  * @retval None
  */
static void I2Cx_MspInit(I2C_HandleTypeDef *hi2c)
{
  GPIO_InitTypeDef GPIO_InitStruct;
  static DMA_HandleTypeDef hdma_tx;
  static DMA_HandleTypeDef hdma_rx;

  /* Enable GPIO clock */
  DISCOVERY_I2Cx_GPIO_CLK_ENABLE();
      
  /* Configure I2C Tx and Rx as alternate function  */
  GPIO_InitStruct.Pin = (DISCOVERY_I2Cx_SCL_PIN | DISCOVERY_I2Cx_SDA_PIN);
  GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.Alternate = DISCOVERY_I2Cx_AF;
  HAL_GPIO_Init(DISCOVERY_I2Cx_GPIO_PORT, &GPIO_InitStruct);

  /* Enable the DMA clock */
  DISCOVERY_EEPROM_DMA_CLK_ENABLE();
    
  /* Configure the DMA channel for the EEPROM peripheral TX direction */
  /* Configure the DMA channel */
  hdma_tx.Instance                  = DISCOVERY_EEPROM_DMA_CHANNEL_TX;
  /* Set the parameters to be configured */
  hdma_tx.Init.Direction            = DMA_MEMORY_TO_PERIPH;
  hdma_tx.Init.PeriphInc            = DMA_PINC_DISABLE;
  hdma_tx.Init.MemInc               = DMA_MINC_ENABLE;
  hdma_tx.Init.PeriphDataAlignment  = DMA_PDATAALIGN_BYTE;
  hdma_tx.Init.MemDataAlignment     = DMA_MDATAALIGN_BYTE;
  hdma_tx.Init.Mode                 = DMA_NORMAL;
  hdma_tx.Init.Priority             = DMA_PRIORITY_VERY_HIGH;

  /* Associate the initilalized hdma_rx handle to the the husart handle*/
  __HAL_LINKDMA(hi2c, hdmatx, hdma_tx);
    
  /* Configure the DMA Stream */
  HAL_DMA_Init(&hdma_tx);
    
  /* Configure and enable DMA TX Channel interrupt */
  HAL_NVIC_SetPriority((IRQn_Type)(DISCOVERY_EEPROM_DMA_TX_IRQn), DISCOVERY_EEPROM_DMA_PREPRIO, DISCOVERY_EEPROM_DMA_SUBPRIO);
  HAL_NVIC_EnableIRQ((IRQn_Type)(DISCOVERY_EEPROM_DMA_TX_IRQn));
    
  /* Configure the DMA channel for the EEPROM peripheral RX direction */
  /* Configure the DMA channel */
  hdma_rx.Instance                  = DISCOVERY_EEPROM_DMA_CHANNEL_RX;
  /* Set the parameters to be configured */
  hdma_rx.Init.Direction            = DMA_PERIPH_TO_MEMORY;
  hdma_rx.Init.PeriphInc            = DMA_PINC_DISABLE;
  hdma_rx.Init.MemInc               = DMA_MINC_ENABLE;
  hdma_rx.Init.PeriphDataAlignment  = DMA_PDATAALIGN_BYTE;
  hdma_rx.Init.MemDataAlignment     = DMA_MDATAALIGN_BYTE;
  hdma_rx.Init.Mode                 = DMA_NORMAL;
  hdma_rx.Init.Priority             = DMA_PRIORITY_VERY_HIGH;

  /* Associate the initilalized hdma_rx handle to the the husart handle*/
  __HAL_LINKDMA(hi2c, hdmarx, hdma_rx);
    
  /* Configure the DMA Stream */
  HAL_DMA_Init(&hdma_rx);
    
  /* Configure and enable DMA RX Channel interrupt */
  HAL_NVIC_SetPriority((IRQn_Type)(DISCOVERY_EEPROM_DMA_RX_IRQn), DISCOVERY_EEPROM_DMA_PREPRIO, DISCOVERY_EEPROM_DMA_SUBPRIO);
  HAL_NVIC_EnableIRQ((IRQn_Type)(DISCOVERY_EEPROM_DMA_RX_IRQn));

  /* Enable I2C clock */
  DISCOVERY_I2Cx_CLK_ENABLE();
}

/**
  * @brief Discovery I2Cx Bus initialization
  * @retval None
  */
static void I2Cx_Init(void)
{
  if(HAL_I2C_GetState(&I2cHandle) == HAL_I2C_STATE_RESET)
  {
    I2cHandle.Instance              = DISCOVERY_I2Cx;
    I2cHandle.Init.Timing           = DISCOVERY_I2Cx_TIMING;
    I2cHandle.Init.OwnAddress1      = 0;
    I2cHandle.Init.AddressingMode   = I2C_ADDRESSINGMODE_7BIT;
    I2cHandle.Init.DualAddressMode  = I2C_DUALADDRESS_DISABLE;
    I2cHandle.Init.OwnAddress2      = 0;
    I2cHandle.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
    I2cHandle.Init.GeneralCallMode  = I2C_GENERALCALL_DISABLE;
    I2cHandle.Init.NoStretchMode    = I2C_NOSTRETCH_DISABLE;  
      
    /* Init the I2C */
    I2Cx_MspInit(&I2cHandle);
    HAL_I2C_Init(&I2cHandle);
  }
}

/**
  * @brief  Write a value in a register of the device through BUS.
  * @param  Addr Device address on BUS Bus.  
  * @param  Reg The target register address to write
  * @param  Value The target register value to be written 
  * @retval None 
  */
static uint32_t I2Cx_WriteData(uint8_t Addr, uint16_t Reg, uint8_t Value)
  {
  HAL_StatusTypeDef status = HAL_OK;
  
  status = HAL_I2C_Mem_Write(&I2cHandle, Addr, Reg, I2C_MEMADD_SIZE_16BIT, &Value, 1, I2Cx_TIMEOUT_MAX); 

  /* Check the communication status */
  if(status != HAL_OK)
  {
    /* Execute user timeout callback */
    I2Cx_Error(Addr);
    return HAL_ERROR;
  }        
  return HAL_OK;      
}

/**
  * @brief  Write a value in a register of the device through BUS.
  * @param  Addr Device address on BUS Bus.  
  * @param  Reg The target register address to write
  * @param  pBuffer The target register value to be written 
  * @param  Length buffer size to be written
  * @retval None
  */
static uint32_t I2Cx_WriteBuffer(uint8_t Addr, uint16_t Reg,  uint8_t *pBuffer, uint16_t Length)
  {
  HAL_StatusTypeDef status = HAL_OK;
  
  status = HAL_I2C_Mem_Write_DMA(&I2cHandle, Addr, Reg, I2C_MEMADD_SIZE_16BIT, pBuffer, Length); 

  /* Check the communication status */
  if(status != HAL_OK)
  {
    /* Execute user timeout callback */
    I2Cx_Error(Addr);
    return HAL_ERROR;
  }        
  return HAL_OK;      
}

/**
  * @brief  Read a register of the device through BUS
  * @param  Addr Device address on BUS
  * @param  Reg The target register address to read
  * @retval Value: read register value
  */
static uint32_t I2Cx_ReadData(uint8_t Addr, uint16_t Reg, uint8_t *Value)
{
  HAL_StatusTypeDef status = HAL_OK;
  
  status = HAL_I2C_Mem_Read(&I2cHandle, Addr, Reg, I2C_MEMADD_SIZE_16BIT, Value, 1, I2Cx_TIMEOUT_MAX);
  
  /* Check the communication status */
  if(status != HAL_OK)
  {
    /* Execute user timeout callback */
    I2Cx_Error(Addr);
    return HAL_ERROR;
  }
  return HAL_OK;
}

/**
  * @brief  Reads multiple data on the BUS.
  * @param  Addr   I2C Address
  * @param  Reg    Reg Address 
  * @param  pBuffer  pointer to read data buffer
  * @param  Length  length of the data
  * @retval 0 if no problems to read multiple data
  */
static uint32_t I2Cx_ReadBuffer(uint8_t Addr, uint16_t Reg, uint8_t *pBuffer, uint16_t Length)
{
  HAL_StatusTypeDef status = HAL_OK;

  status = HAL_I2C_Mem_Read_DMA(&I2cHandle, Addr, Reg, I2C_MEMADD_SIZE_16BIT, pBuffer, Length);
  
  /* Check the communication status */
  if(status != HAL_OK)
  {
    /* Execute user timeout callback */
    I2Cx_Error(Addr);
    return HAL_ERROR;
  }
  return HAL_OK;
}

/**
  * @brief Discovery I2Cx error treatment function
  * @retval None
  */
static void I2Cx_Error (uint8_t Addr)
{
  /* De-initialize the I2C comunication BUS */
  HAL_I2C_DeInit(&I2cHandle);

  /* Re- Initiaize the I2C comunication BUS */
  I2Cx_Init();
}
#endif /* HAL_I2C_MODULE_ENABLED */

#if defined(HAL_SPI_MODULE_ENABLED)
/******************************* SPI Routines**********************************/
/**
  * @brief SPI1 Bus initialization
  * @retval None
  */
static void SPIx_Init(void)
{
  if(HAL_SPI_GetState(&SpiHandle) == HAL_SPI_STATE_RESET)
  {
    /* SPI Config */
    SpiHandle.Instance = DISCOVERY_SPIx;
    /* SPI baudrate is set to 5.6 MHz (PCLK2/SPI_BaudRatePrescaler = 90/16 = 5.625 MHz) 
      to verify these constraints:
      l3gd20 SPI interface max baudrate is 10MHz for write/read
      PCLK2 frequency is set to 90 MHz 
      */
    SpiHandle.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_8;
    SpiHandle.Init.Direction = SPI_DIRECTION_2LINES;
    SpiHandle.Init.CLKPhase = SPI_PHASE_1EDGE;
    SpiHandle.Init.CLKPolarity = SPI_POLARITY_LOW;
    SpiHandle.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
    SpiHandle.Init.CRCPolynomial = 7;
    SpiHandle.Init.DataSize = SPI_DATASIZE_8BIT;
    SpiHandle.Init.FirstBit = SPI_FIRSTBIT_MSB;
    SpiHandle.Init.NSS = SPI_NSS_SOFT;
    SpiHandle.Init.TIMode = SPI_TIMODE_DISABLE;
    SpiHandle.Init.Mode = SPI_MODE_MASTER;

    SPIx_MspInit(&SpiHandle);
    HAL_SPI_Init(&SpiHandle);
  }
}

/**
  * @brief  Sends a Byte through the SPI interface and return the Byte received 
  *         from the SPI bus.
  * @param  Byte  Byte send.
  * @retval The received byte value
  */
static uint8_t SPIx_WriteRead(uint8_t Byte)
{

  uint8_t receivedbyte = 0;
  
  /* Send a Byte through the SPI peripheral */
  /* Read byte from the SPI bus */
  if(HAL_SPI_TransmitReceive(&SpiHandle, (uint8_t*) &Byte, (uint8_t*) &receivedbyte, 1, SpixTimeout) != HAL_OK)
  {
    SPIx_Error();
  }
  
  return receivedbyte;
}


/**
  * @brief SPI1 error treatment function
  * @retval None
  */
static void SPIx_Error (void)
{
  /* De-initialize the SPI comunication BUS */
  HAL_SPI_DeInit(&SpiHandle);
  
  /* Re- Initiaize the SPI comunication BUS */
  SPIx_Init();
}


/**
  * @brief SPI MSP Init
  * @param hspi SPI handle
  * @retval None
  */
static void SPIx_MspInit(SPI_HandleTypeDef *hspi)
{
  GPIO_InitTypeDef   GPIO_InitStructure;

  /* Enable SPI2 clock  */
  DISCOVERY_SPIx_CLOCK_ENABLE();

  /* enable SPI2 gpio clock */
  DISCOVERY_SPIx_GPIO_CLK_ENABLE();

  /* configure SPI5 SCK, MOSI and MISO */
  GPIO_InitStructure.Pin = (DISCOVERY_SPIx_SCK_PIN | DISCOVERY_SPIx_MOSI_PIN | DISCOVERY_SPIx_MISO_PIN);
  GPIO_InitStructure.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStructure.Pull  = GPIO_NOPULL; /*GPIO_PULLDOWN*/
  GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStructure.Alternate = DISCOVERY_SPIx_AF;
  HAL_GPIO_Init(DISCOVERY_SPIx_GPIO_PORT, &GPIO_InitStructure);
}

/**
  * @}
  */ 

/** @addtogroup STM32F072B_DISCOVERY_LINK_Operations_Functions
  * @{
  */ 

/******************************************************************************
                            LINK OPERATIONS
*******************************************************************************/

/********************************* LINK GYRO *****************************/
/**
  * @brief  Configures the GYRO SPI interface.
  * @retval None
  */
void GYRO_IO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;
  
  /* Configure the Gyroscope Control pins ------------------------------------------*/
  /* Enable CS GPIO clock and  Configure GPIO PIN for Gyroscope Chip select */  
  GYRO_CS_GPIO_CLK_ENABLE();  
  GPIO_InitStructure.Pin = GYRO_CS_PIN;
  GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStructure.Pull  = GPIO_NOPULL;
  GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GYRO_CS_GPIO_PORT, &GPIO_InitStructure);

  /* Deselect : Chip Select high */
  GYRO_CS_HIGH();

  /* Enable INT1, INT2 GPIO clock and Configure GPIO PINs to detect Interrupts */
  GYRO_INT_GPIO_CLK_ENABLE();
  GPIO_InitStructure.Pin = GYRO_INT1_PIN | GYRO_INT2_PIN;
  GPIO_InitStructure.Mode = GPIO_MODE_INPUT;
  GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStructure.Pull= GPIO_NOPULL;
  HAL_GPIO_Init(GYRO_INT_GPIO_PORT, &GPIO_InitStructure);
  
  SPIx_Init();
}

/**
  * @brief  Writes one byte to the GYRO.
  * @param  pBuffer  pointer to the buffer  containing the data to be written to the GYRO.
  * @param  WriteAddr  GYRO's internal address to write to.
  * @param  NumByteToWrite Number of bytes to write.
  * @retval None
  */
void GYRO_IO_Write(uint8_t* pBuffer, uint8_t WriteAddr, uint16_t NumByteToWrite)
{
  /* Configure the MS bit: 
       - When 0, the address will remain unchanged in multiple read/write commands.
       - When 1, the address will be auto incremented in multiple read/write commands.
  */
  if(NumByteToWrite > 0x01)
  {
    WriteAddr |= (uint8_t)MULTIPLEBYTE_CMD;
  }
  /* Set chip select Low at the start of the transmission */
  GYRO_CS_LOW();
  
  /* Send the Address of the indexed register */
  SPIx_WriteRead(WriteAddr);
  
  /* Send the data that will be written into the device (MSB First) */
  while(NumByteToWrite >= 0x01)
  {
    SPIx_WriteRead(*pBuffer);
    NumByteToWrite--;
    pBuffer++;
  }
  
  /* Set chip select High at the end of the transmission */ 
  GYRO_CS_HIGH();
}

/**
  * @brief  Reads a block of data from the GYROSCOPE.
  * @param  pBuffer  pointer to the buffer that receives the data read from the GYROSCOPE.
  * @param  ReadAddr  GYROSCOPE's internal address to read from.
  * @param  NumByteToRead  number of bytes to read from the GYROSCOPE.
  * @retval None
  */
void GYRO_IO_Read(uint8_t* pBuffer, uint8_t ReadAddr, uint16_t NumByteToRead)
{  
  if(NumByteToRead > 0x01)
  {
    ReadAddr |= (uint8_t)(READWRITE_CMD | MULTIPLEBYTE_CMD);
  }
  else
  {
    ReadAddr |= (uint8_t)READWRITE_CMD;
  }
  /* Set chip select Low at the start of the transmission */
  GYRO_CS_LOW();
  
  /* Send the Address of the indexed register */
  SPIx_WriteRead(ReadAddr);
  
  /* Receive the data that will be read from the device (MSB First) */
  while(NumByteToRead > 0x00)
  {
    /* Send dummy byte (0x00) to generate the SPI clock to GYROSCOPE (Slave device) */
    *pBuffer = SPIx_WriteRead(DUMMY_BYTE);
    NumByteToRead--;
    pBuffer++;
  }
  
  /* Set chip select High at the end of the transmission */ 
  GYRO_CS_HIGH();
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
  I2Cx_Init();
}

/**
  * @brief  Write data to I2C EEPROM driver in using DMA channel
  * @param  DevAddress Target device address
  * @param  MemAddress Internal memory address
  * @param  pBuffer Pointer to data buffer
  * @param  BufferSize Amount of data to be sent
  * @retval HAL status
  */
uint32_t EEPROM_IO_WriteData(uint16_t DevAddress, uint16_t MemAddress, uint32_t pBuffer, uint32_t BufferSize)
{
  if (BufferSize == 1)
  {
    return (I2Cx_WriteData(DevAddress, MemAddress, *((uint8_t*)pBuffer)));
  }
  else
  {
    return (I2Cx_WriteBuffer(DevAddress, MemAddress, (uint8_t*)pBuffer, (uint32_t)BufferSize));
  }
}

/**
  * @brief  Read data from I2C EEPROM driver in using DMA channel
  * @param  DevAddress Target device address
  * @param  MemAddress Internal memory address
  * @param  pBuffer Pointer to data buffer
  * @param  BufferSize Amount of data to be read
  * @retval HAL status
  */
uint32_t EEPROM_IO_ReadData(uint16_t DevAddress, uint16_t MemAddress, uint32_t pBuffer, uint32_t BufferSize)
{
  if (BufferSize == 1)
  {
    return (I2Cx_ReadData(DevAddress, MemAddress, (uint8_t*)pBuffer));
  }
  else
  {
    return (I2Cx_ReadBuffer(DevAddress, MemAddress, (uint8_t*)pBuffer, (uint32_t)BufferSize));
  }
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
  HAL_Delay(5);
  return (HAL_I2C_IsDeviceReady(&I2cHandle, DevAddress, Trials, I2Cx_TIMEOUT_MAX));
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
