/**
  ******************************************************************************
  * @file    tsl.c
  * @author  MCD Application Team
  * @version V2.2.0
  * @date    01-february-2016
  * @brief   This file contains the driver main functions.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "tsl.h"

/* Private typedefs ----------------------------------------------------------*/
/* Private defines -----------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private functions prototype -----------------------------------------------*/

/**
  * @brief  Initializes the TS interface.
  * @param  bank  Array holding all the banks
  * @retval Status
  */
TSL_Status_enum_T TSL_Init(CONST TSL_Bank_T *bank)
{
  TSL_Status_enum_T retval;

  // Get banks array
  TSL_Globals.Bank_Array = bank;

  // Initialize the delay that will be used to discharge the capacitors
  TSL_Globals.DelayDischarge = (uint32_t)((TSLPRM_DELAY_DISCHARGE_ALL * (uint32_t)(SystemCoreClock/1000000)) / 72);
  
  // Note: The timing configuration (Systick) must be done in the user code.

  // Initialization of the acquisition module
#ifdef __TSL_ACQ_TSC_H
  // Note: The TSC peripheral initialization must be done in the user code.
  retval = TSL_STATUS_OK;
#else
  retval = TSL_acq_Init();
#endif

  return retval;
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
