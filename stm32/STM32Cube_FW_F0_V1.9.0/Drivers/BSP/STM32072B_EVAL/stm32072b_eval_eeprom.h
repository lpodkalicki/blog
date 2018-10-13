/**
  ******************************************************************************
  * @file    stm32072b_eval_eeprom.h
  * @author  MCD Application Team
  * @brief   This file contains all the functions prototypes for 
  *          the stm32072b_eval_eeprom.c firmware driver.
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
#ifndef __STM32072B_EVAL_EEPROM_H
#define __STM32072B_EVAL_EEPROM_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32072b_eval.h"

/** @addtogroup BSP
  * @{
  */

/** @addtogroup STM32072B_EVAL
  * @{
  */

/** @defgroup STM32072B_EVAL_EEPROM STM32072B_EVAL EEPROM
  * @{
  */

/** @defgroup STM32072B_EVAL_EEPROM_Exported_Types Exported Types
  * @{
  */ 
typedef struct
{
  uint32_t  (*Init)(void);
  uint32_t  (*ReadBuffer)(uint8_t* , uint16_t , uint32_t* );
  uint32_t  (*WritePage)(uint8_t* , uint16_t , uint32_t* );
}EEPROM_DrvTypeDef;
/**
  * @}
  */

/** @defgroup STM32072B_EVAL_EEPROM_Exported_Constants Exported Constants
  * @{
  */
/* EEPROMs hardware address and page size */ 
#define EEPROM_ADDRESS_M24LR64_A01      0xA0    /* RF EEPROM ANT7-M24LR-A01 used */
#define EEPROM_ADDRESS_M24LR64_A02      0xA6    /* RF EEPROM ANT7-M24LR-A02 used */

#define EEPROM_PAGESIZE_M24LR64         4       /* RF EEPROM ANT7-M24LR-A used */
      
/* EEPROM BSP return values */
#define EEPROM_OK                       0
#define EEPROM_FAIL                     1   
#define EEPROM_TIMEOUT                  2   
 
/* EEPROM BSP devices definition list supported */
#define BSP_EEPROM_M24LR64              1       /* RF I2C EEPROM M24LR64 */

/* Maximum number of trials for EEPROM_I2C_WaitEepromStandbyState() function */
#define EEPROM_MAX_TRIALS               300
/**
  * @}
  */

/** @defgroup STM32072B_EVAL_EEPROM_Exported_Functions Exported Functions
  * @{
  */
uint32_t          BSP_EEPROM_Init(void);
uint32_t          BSP_EEPROM_ReadBuffer(uint8_t* pBuffer, uint16_t ReadAddr, uint32_t* NumByteToRead);
uint32_t          BSP_EEPROM_WriteBuffer(uint8_t* pBuffer, uint16_t WriteAddr, uint32_t NumByteToWrite);

/* USER Callbacks: This function is declared as __weak in EEPROM driver and 
   should be implemented into user application.  
   BSP_EEPROM_TIMEOUT_UserCallback() function is called whenever a timeout condition 
   occure during communication (waiting on an event that doesn't occur, bus 
   errors, busy devices ...). */
void              BSP_EEPROM_TIMEOUT_UserCallback(void);

/**
  * @}
  */
  
/** @defgroup STM32072B_EVAL_EEPROM_LINK_Operations_Functions LINK Operations Functions
  * @{
  */  

/* Link functions for I2C EEPROM peripheral */
void              EEPROM_IO_Init(void);
HAL_StatusTypeDef EEPROM_IO_WriteData(uint16_t DevAddress, uint16_t MemAddress, uint8_t* pBuffer, uint32_t BufferSize);
HAL_StatusTypeDef EEPROM_IO_ReadData(uint16_t DevAddress, uint16_t MemAddress, uint8_t* pBuffer, uint32_t BufferSize);
HAL_StatusTypeDef EEPROM_IO_IsDeviceReady(uint16_t DevAddress, uint32_t Trials);

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

#endif /* __STM32072B_EVAL_EEPROM_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
