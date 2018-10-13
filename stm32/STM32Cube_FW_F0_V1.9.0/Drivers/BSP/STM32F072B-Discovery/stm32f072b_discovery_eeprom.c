/**
  ******************************************************************************
  * @file    stm32f072b_discovery_eeprom.c
  * @author  MCD Application Team
  * @brief   This file provides a set of functions needed to manage an I2C M24LR64 
  *          EEPROM memory.
  *          
  *          =================================================================== 
  *          Notes:
  *           - This driver is intended for stm32F0xx families devices only.
  *           - The I2C EEPROM memory (M24LR64) is available on RF EEPROM daughter 
  *             board (ANT7-M24LR-A) provided with the STM32F072B-Discovery board.
  *             To use this driver you have to connect the ANT7-M24LR-A to CN3 connector.
  *          ===================================================================
  *              
  *          It implements a high level communication layer for read and write 
  *          from/to this memory. The needed STM32F0xx hardware resources (I2C and 
  *          GPIO) are defined in stm32f072b_discovery.h file, and the initialization is 
  *          performed in EEPROM_IO_Init() function declared in stm32f072b_discovery.c 
  *          file.
  *          You can easily tailor this driver to any other development board, 
  *          by just adapting the defines for hardware resources and 
  *          EEPROM_IO_Init() function. 
  *        
  *          @note In this driver, basic read and write functions (EEPROM_ReadBuffer() 
  *                and EEPROM_WritePage()) use Polling mode to perform the data transfer 
  *                to/from EEPROM memory.
  *             
  *     +-----------------------------------------------------------------+
  *     |               Pin assignment for M24LR64 EEPROM                 |
  *     +---------------------------------------+-----------+-------------+
  *     |  STM32F0xx I2C Pins                   |   EEPROM     |   Pin       |
  *     +---------------------------------------+-----------+-------------+
  *     | .                                     |   E0(GND) |    1  (0V)  |
  *     | .                                     |   AC0     |    2        |
  *     | .                                     |   AC1     |    3        |
  *     | .                                     |   VSS     |    4  (0V)  |
  *     | EEPROM_I2Cx_SDA_PIN/ SDA              |   SDA     |    5        |
  *     | EEPROM_I2Cx_SCL_PIN/ SCL              |   SCL     |    6        |
  *     | .                                     |   E1(GND) |    7  (0V)  |
  *     | .                                     |   VDD     |    8 (3.3V) |
  *     +---------------------------------------+-----------+-------------+
  *
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
#include "stm32f072b_discovery_eeprom.h"

/** @addtogroup BSP
  * @{
  */

/** @addtogroup STM32F072B_DISCOVERY
  * @{
  */
  
/** @addtogroup STM32F072B_DISCOVERY_EEPROM
  * @brief      This file includes the I2C EEPROM driver of STM32072B-EVAL board.
  * @{
  */ 

/** @defgroup STM32072B_DISCOVERY_EEPROM_Private_Variables Private Variables
  * @{
  */
__IO uint16_t  EEPROMAddress = 0;
__IO uint32_t  EEPROMTimeout = EEPROM_LONG_TIMEOUT;
__IO uint16_t  EEPROMDataRead;
__IO uint8_t*  EEPROMDataWritePointer;
__IO uint8_t   EEPROMDataNum;
/**
  * @}
  */ 

/** @addtogroup STM32F072B_DISCOVERY_EEPROM_Exported_Functions
  * @{
  */

/**
  * @brief  Initializes peripherals used by the I2C EEPROM driver.
  * 
  * @note There are 2 different versions of M24LR64 (A01 & A02).
  *             Then try to connect on 1st one (EEPROM_I2C_ADDRESS_A01) 
  *             and if problem, check the 2nd one (EEPROM_I2C_ADDRESS_A02)
  * @retval EEPROM_OK (0) if operation is correctly performed, else return value 
  *         different from EEPROM_OK (0)
  */
uint32_t BSP_EEPROM_Init(void)
{ 
  /* I2C Initialization */
  EEPROM_IO_Init();

  /*Select the EEPROM address for A01 and check if OK*/
  EEPROMAddress = DISCOVERY_EEPROM_I2C_ADDRESS_A01;
  if (EEPROM_IO_IsDeviceReady(EEPROMAddress, EEPROM_MAX_TRIALS_NUMBER) != HAL_OK) 
  {
      return EEPROM_FAIL;
  }
  return EEPROM_OK;
}

/**
  * @brief  Reads a block of data from the EEPROM.
  * @param  pBuffer  pointer to the buffer that receives the data read from 
  *         the EEPROM.
  * @param  ReadAddr  EEPROM's internal address to start reading from.
  * @param  NumByteToRead  pointer to the variable holding number of bytes to 
  *         be read from the EEPROM.
  * 
  *        @note The variable pointed by NumByteToRead is reset to 0 when all the 
  *              data are read from the EEPROM. Application should monitor this 
  *              variable in order know when the transfer is complete.
  * 
  * @retval EEPROM_OK (0) if operation is correctly performed, else return value 
  *         different from EEPROM_OK (0) or the timeout user callback.
  */
uint32_t BSP_EEPROM_ReadBuffer(uint8_t* pBuffer, uint16_t ReadAddr, uint16_t* NumByteToRead)
{  
  uint32_t buffersize = *NumByteToRead;
  
  /* Set the pointer to the Number of data to be read. This pointer will be used 
      by the DMA Transfer Completer interrupt Handler in order to reset the 
      variable to 0. User should check on this variable in order to know if the 
      DMA transfer has been complete or not. */
  EEPROMDataRead = *NumByteToRead;
  
  if (EEPROM_IO_ReadData(EEPROMAddress, ReadAddr, (uint32_t) pBuffer, buffersize) != EEPROM_OK)
  {
    return EEPROM_FAIL;
  }
  
  /* Wait transfer through DMA to be complete */
  EEPROMTimeout = HAL_GetTick();
  while (EEPROMDataRead > 0)
  {
    if((HAL_GetTick() - EEPROMTimeout) < EEPROM_LONG_TIMEOUT)
    {      
      BSP_EEPROM_TIMEOUT_UserCallback(); 
      return EEPROM_TIMEOUT;
    }
  }

  /* If all operations OK, return EEPROM_OK (0) */
  return EEPROM_OK;
}

/**
  * @brief  Writes more than one byte to the EEPROM with a single WRITE cycle.
  *
  * @note   The number of bytes (combined to write start address) must not 
  *         cross the EEPROM page boundary. This function can only write into
  *         the boundaries of an EEPROM page.
  *         This function doesn't check on boundaries condition (in this driver 
  *         the function BSP_EEPROM_WriteBuffer() which calls BSP_EEPROM_WritePage() is 
  *         responsible of checking on Page boundaries).
  * 
  * @param  pBuffer  pointer to the buffer containing the data to be written to 
  *         the EEPROM.
  * @param  WriteAddr  EEPROM's internal address to write to.
  * @param  NumByteToWrite  pointer to the variable holding number of bytes to 
  *         be written into the EEPROM. 
  * 
  *        @note The variable pointed by NumByteToWrite is reset to 0 when all the 
  *              data are written to the EEPROM. Application should monitor this 
  *              variable in order know when the transfer is complete.
  * 
  * @note This function just configure the communication and enable the DMA 
  *       channel to transfer data. Meanwhile, the user application may perform 
  *       other tasks in parallel.
  * 
  * @retval EEPROM_OK (0) if operation is correctly performed, else return value 
  *         different from EEPROM_OK (0) or the timeout user callback.
  */
uint32_t BSP_EEPROM_WritePage(uint8_t* pBuffer, uint16_t WriteAddr, uint8_t* NumByteToWrite)
{ 
  uint32_t buffersize = *NumByteToWrite;
  uint32_t status = EEPROM_OK;
  /* Set the pointer to the Number of data to be written. This pointer will be used 
      by the DMA Transfer Completer interrupt Handler in order to reset the 
      variable to 0. User should check on this variable in order to know if the 
      DMA transfer has been complete or not. */
  EEPROMDataWritePointer = NumByteToWrite;  
  
  status = EEPROM_IO_WriteData(EEPROMAddress, WriteAddr, (uint32_t) pBuffer, buffersize);
  
  /* If all operations OK, return EEPROM_OK (0) */
  return status;
}

/**
  * @brief  Writes buffer of data to the I2C EEPROM.
  * @param  pBuffer  pointer to the buffer  containing the data to be written 
  *         to the EEPROM.
  * @param  WriteAddr  EEPROM's internal address to write to.
  * @param  NumByteToWrite  number of bytes to write to the EEPROM.
  * @retval EEPROM_OK (0) if operation is correctly performed, else return value 
  *         different from EEPROM_OK (0) or the timeout user callback.
  */
uint32_t BSP_EEPROM_WriteBuffer(uint8_t* pBuffer, uint16_t WriteAddr, uint16_t NumByteToWrite)
{
  uint16_t numofpage = 0, numofsingle = 0, count = 0;
  uint16_t addr = 0;

  addr = WriteAddr % EEPROM_PAGESIZE;
  count = EEPROM_PAGESIZE - addr;
  numofpage =  NumByteToWrite / EEPROM_PAGESIZE;
  numofsingle = NumByteToWrite % EEPROM_PAGESIZE;
 
  /*!< If WriteAddr is EEPROM_PAGESIZE aligned  */
  if(addr == 0) 
  {
    /*!< If NumByteToWrite < EEPROM_PAGESIZE */
    if(numofpage == 0) 
    {
      /* Store the number of data to be written */
      EEPROMDataNum = numofsingle;
      /* Start writing data */
      if (BSP_EEPROM_WritePage(pBuffer, WriteAddr, (uint8_t*)(&EEPROMDataNum)) != EEPROM_OK)
      {
        return EEPROM_FAIL;
      }
      /* Wait transfer through DMA to be complete */
      EEPROMTimeout = HAL_GetTick();
      while (EEPROMDataNum > 0)
      {
        if((HAL_GetTick() - EEPROMTimeout) < EEPROM_LONG_TIMEOUT) {
          BSP_EEPROM_TIMEOUT_UserCallback(); 
          return EEPROM_TIMEOUT;
        }
      }
      if (BSP_EEPROM_WaitEepromStandbyState() != EEPROM_OK) return EEPROM_FAIL;
    }
    /*!< If NumByteToWrite > EEPROM_PAGESIZE */
    else  
    {
      while(numofpage--)
      {
        /* Store the number of data to be written */
        EEPROMDataNum = EEPROM_PAGESIZE;        
        if (BSP_EEPROM_WritePage(pBuffer, WriteAddr, (uint8_t*)(&EEPROMDataNum)) != EEPROM_OK) 
        {
          return EEPROM_FAIL;
        }
        /* Wait transfer through DMA to be complete */
        EEPROMTimeout = HAL_GetTick();
        while (EEPROMDataNum > 0)
        {
          if((HAL_GetTick() - EEPROMTimeout) < EEPROM_LONG_TIMEOUT) {
            BSP_EEPROM_TIMEOUT_UserCallback(); 
            return EEPROM_TIMEOUT;
          }
        }
        if (BSP_EEPROM_WaitEepromStandbyState() != EEPROM_OK) return EEPROM_FAIL;
        WriteAddr +=  EEPROM_PAGESIZE;
        pBuffer += EEPROM_PAGESIZE;
      }

      if(numofsingle!=0)
      {
        /* Store the number of data to be written */
        EEPROMDataNum = numofsingle;          
        if (BSP_EEPROM_WritePage(pBuffer, WriteAddr, (uint8_t*)(&EEPROMDataNum)) != EEPROM_OK)
        {
          return EEPROM_FAIL;
        }
        /* Wait transfer through DMA to be complete */
        EEPROMTimeout = HAL_GetTick();
        while (EEPROMDataNum > 0)
        {
          if((HAL_GetTick() - EEPROMTimeout) < EEPROM_LONG_TIMEOUT) {
            BSP_EEPROM_TIMEOUT_UserCallback(); 
            return EEPROM_TIMEOUT;
          }
        }
        if (BSP_EEPROM_WaitEepromStandbyState() != EEPROM_OK) return EEPROM_FAIL;
      }
    }
  }
  /*!< If WriteAddr is not EEPROM_PAGESIZE aligned  */
  else 
  {
    /*!< If NumByteToWrite < EEPROM_PAGESIZE */
    if(numofpage== 0) 
    {
      /*!< If the number of data to be written is more than the remaining space 
      in the current page: */
      if (NumByteToWrite > count)
      {
        /* Store the number of data to be written */
        EEPROMDataNum = count;        
        /*!< Write the data contained in same page */
        if (BSP_EEPROM_WritePage(pBuffer, WriteAddr, (uint8_t*)(&EEPROMDataNum)) != EEPROM_OK)
        {
          return EEPROM_FAIL;
        }
        /* Wait transfer through DMA to be complete */
        EEPROMTimeout = HAL_GetTick();
        while (EEPROMDataNum > 0)
        {
          if((HAL_GetTick() - EEPROMTimeout) < EEPROM_LONG_TIMEOUT) {
            BSP_EEPROM_TIMEOUT_UserCallback(); 
            return EEPROM_TIMEOUT;
          }
          }
        if (BSP_EEPROM_WaitEepromStandbyState() != EEPROM_OK) return EEPROM_FAIL;      
        
        /* Store the number of data to be written */
        EEPROMDataNum = (NumByteToWrite - count);          
        /*!< Write the remaining data in the following page */
        if (BSP_EEPROM_WritePage((uint8_t*)(pBuffer + count), (WriteAddr + count), (uint8_t*)(&EEPROMDataNum)) != EEPROM_OK)
        {
          return EEPROM_FAIL;
        }
        /* Wait transfer through DMA to be complete */
        EEPROMTimeout = HAL_GetTick();
        while (EEPROMDataNum > 0)
        {
          if((HAL_GetTick() - EEPROMTimeout) < EEPROM_LONG_TIMEOUT) {
            BSP_EEPROM_TIMEOUT_UserCallback(); 
            return EEPROM_TIMEOUT;
          }
        }
        if (BSP_EEPROM_WaitEepromStandbyState() != EEPROM_OK) return EEPROM_FAIL;        
      }      
      else      
      {
        /* Store the number of data to be written */
        EEPROMDataNum = numofsingle;         
        if (BSP_EEPROM_WritePage(pBuffer, WriteAddr, (uint8_t*)(&EEPROMDataNum)) != EEPROM_OK)
        {
          return EEPROM_FAIL;
        }
        /* Wait transfer through DMA to be complete */
        EEPROMTimeout = HAL_GetTick();
        while (EEPROMDataNum > 0)
        {
          if((HAL_GetTick() - EEPROMTimeout) < EEPROM_LONG_TIMEOUT) {
            BSP_EEPROM_TIMEOUT_UserCallback(); 
            return EEPROM_TIMEOUT;
          }
        }
        if (BSP_EEPROM_WaitEepromStandbyState() != EEPROM_OK) return EEPROM_FAIL;        
          }
        }
    /*!< If NumByteToWrite > EEPROM_PAGESIZE */
    else
    {
      NumByteToWrite -= count;
      numofpage =  NumByteToWrite / EEPROM_PAGESIZE;
      numofsingle = numofsingle % EEPROM_PAGESIZE;
      
      if(count != 0)
      {  
        /* Store the number of data to be written */
        EEPROMDataNum = count;         
        if (BSP_EEPROM_WritePage(pBuffer, WriteAddr, (uint8_t*)(&EEPROMDataNum)) != EEPROM_OK)
        {
          return EEPROM_FAIL;
        }
        /* Wait transfer through DMA to be complete */
        EEPROMTimeout = HAL_GetTick();
        while (EEPROMDataNum > 0)
        {
          if((HAL_GetTick() - EEPROMTimeout) < EEPROM_LONG_TIMEOUT) {
            BSP_EEPROM_TIMEOUT_UserCallback(); 
            return EEPROM_TIMEOUT;
          }
        }
        if (BSP_EEPROM_WaitEepromStandbyState() != EEPROM_OK) return EEPROM_FAIL;
        WriteAddr += count;
        pBuffer += count;
      } 
      
      while(numofpage--)
      {
        /* Store the number of data to be written */
        EEPROMDataNum = EEPROM_PAGESIZE;          
        if (BSP_EEPROM_WritePage(pBuffer, WriteAddr, (uint8_t*)(&EEPROMDataNum)) != EEPROM_OK)
        {
          return EEPROM_FAIL;
        }
        /* Wait transfer through DMA to be complete */
        EEPROMTimeout = HAL_GetTick();
        while (EEPROMDataNum > 0)
        {
          if((HAL_GetTick() - EEPROMTimeout) < EEPROM_LONG_TIMEOUT) {
            BSP_EEPROM_TIMEOUT_UserCallback();
            return EEPROM_TIMEOUT;
          }
        }
        if (BSP_EEPROM_WaitEepromStandbyState() != EEPROM_OK) return EEPROM_FAIL;
        WriteAddr +=  EEPROM_PAGESIZE;
        pBuffer += EEPROM_PAGESIZE;  
      }
      if(numofsingle != 0)
      {
        /* Store the number of data to be written */
        EEPROMDataNum = numofsingle;           
        if (BSP_EEPROM_WritePage(pBuffer, WriteAddr, (uint8_t*)(&EEPROMDataNum)) != EEPROM_OK) 
        {
          return EEPROM_FAIL;
        }
        /* Wait transfer through DMA to be complete */
        EEPROMTimeout = HAL_GetTick();
        while (EEPROMDataNum > 0)
        {
          if((HAL_GetTick() - EEPROMTimeout) < EEPROM_LONG_TIMEOUT) {
            BSP_EEPROM_TIMEOUT_UserCallback(); 
            return EEPROM_TIMEOUT;
        }
      }
        if (BSP_EEPROM_WaitEepromStandbyState() != EEPROM_OK) return EEPROM_FAIL;
      }
    }
  }  
  
  /* If all operations OK, return EEPROM_OK (0) */
  return EEPROM_OK;
}

/**
  * @brief  Wait for EEPROM Standby state.
  * 
  * @note  This function allows to wait and check that EEPROM has finished the 
  *        last operation. It is mostly used after Write operation: after receiving
  *        the buffer to be written, the EEPROM may need additional time to actually
  *        perform the write operation. During this time, it doesn't answer to
  *        I2C packets addressed to it. Once the write operation is complete
  *        the EEPROM responds to its address.
  * 
  * @retval EEPROM_OK (0) if operation is correctly performed, else return value 
  *         different from EEPROM_OK (0) or the timeout user callback.
  */
uint32_t BSP_EEPROM_WaitEepromStandbyState(void)      
{
  HAL_StatusTypeDef status;
  
  EEPROMTimeout = HAL_GetTick();

  do
  {
    if((HAL_GetTick() - EEPROMTimeout) < EEPROM_LONG_TIMEOUT)
    {
      BSP_EEPROM_TIMEOUT_UserCallback(); 
      return EEPROM_TIMEOUT;
    }

    status = EEPROM_IO_IsDeviceReady(EEPROMAddress, EEPROM_MAX_TRIALS_NUMBER);
  }while (status == HAL_BUSY);

  /* Check if the maximum allowed number of trials has bee reached */
  if (status != HAL_OK)
  {
    /* If the maximum number of trials has been reached, exit the function */
    BSP_EEPROM_TIMEOUT_UserCallback();
    return EEPROM_FAIL;
  }
  return EEPROM_OK;
}

/**
  * @brief  Memory Tx Transfer completed callbacks.
  * @param  hi2c I2C handle
  * @retval None
  */
void HAL_I2C_MemTxCpltCallback(I2C_HandleTypeDef *hi2c)
{
  *EEPROMDataWritePointer = 0;  
}

/**
  * @brief  Memory Rx Transfer completed callbacks.
  * @param  hi2c I2C handle
  * @retval None
  */
void HAL_I2C_MemRxCpltCallback(I2C_HandleTypeDef *hi2c)
{
  EEPROMDataRead = 0;
}

/**
  * @brief  Basic management of the timeout situation.
  * @retval None
  */
__weak uint32_t BSP_EEPROM_TIMEOUT_UserCallback(void)
{
  /* Block communication and all processes */
  while (1)
  {   
  }
}

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
