/**
  ******************************************************************************
  * @file    stm32091c_eval_tsensor.h
  * @author  MCD Application Team
  * @brief   This file contains all the functions prototypes for the 
  *          stm32091c_eval_tsensor.c firmware driver.
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
#ifndef __STM32091C_EVAL_TSENSOR_H
#define __STM32091C_EVAL_TSENSOR_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32091c_eval.h"
#include "../Components/stlm75/stlm75.h"   

/** @addtogroup BSP
  * @{
  */

/** @addtogroup STM32091C_EVAL
  * @{
  */

/** @addtogroup STM32091C_EVAL_TSENSOR STM32091C-EVAL TSENSOR
  * @{
  */

/** @defgroup STM32091C_EVAL_TSENSOR_Private_Variables Private Variables
  * @{
  */
/**
  * @}
  */   
  
/** @defgroup STM32091C_EVAL_TSENSOR_Exported_Types Exported Types
  * @{
  */

/** 
  * @brief  TSENSOR Status  
  */ 
typedef enum
{
  TSENSOR_OK = 0,
  TSENSOR_ERROR
}TSENSOR_Status_TypDef;

/**
  * @}
  */

/** @defgroup STM32091C_EVAL_TSENSOR_Exported_Constants Exported Constants
  * @{
  */
/* Temperature Sensor hardware I2C address */ 
#define TSENSOR_I2C_ADDRESS_A01 0x90
#define TSENSOR_I2C_ADDRESS_A02 0x92

/* Maximum number of trials use for STTS751_IsReady function */
#define TSENSOR_MAX_TRIALS      50

/**
  * @}
  */

/** @defgroup STM32091C_EVAL_I2C_TSENSOR_Exported_Functions Exported Functions
  * @{
  */
uint32_t BSP_TSENSOR_Init(void);
uint8_t  BSP_TSENSOR_ReadStatus(void);
uint16_t BSP_TSENSOR_ReadTemp(void);

/**
  * @}
  */

/** @defgroup STM32091C_EVAL_TSENSOR_Private_Functions Private Functions
  * @{
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

#ifdef __cplusplus
}
#endif

#endif /* __STM32091C_EVAL_TSENSOR_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
