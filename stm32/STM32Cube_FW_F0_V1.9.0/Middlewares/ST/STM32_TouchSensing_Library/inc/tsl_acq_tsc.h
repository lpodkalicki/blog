/**
  ******************************************************************************
  * @file    tsl_acq_tsc.h
  * @author  MCD Application Team
  * @version V2.2.0
  * @date    01-february-2016
  * @brief   This file contains all functions prototypes that manage the TSC acquisition.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __TSL_ACQ_TSC_H
#define __TSL_ACQ_TSC_H

/* Includes ------------------------------------------------------------------*/
#include "tsl_conf.h"
#include "tsl_types.h"
#include "tsl_check_config_tsc.h"

/* Defines -------------------------------------------------------------------*/

#ifndef CONST
#define CONST const
#endif

// SysTick enable/disable interrupt macros
#define enableInterrupts()  {SysTick->CTRL |= SysTick_CTRL_TICKINT_Msk;}
#define disableInterrupts() {SysTick->CTRL &= ~SysTick_CTRL_TICKINT_Msk;}

#define TSC_NB_GROUPS_SUPPORTED (8)

/* Exported types ------------------------------------------------------------*/

// For all devices/acquisitions

typedef uint16_t  TSL_tMeas_T; /**< Measurement */
typedef uint16_t  TSL_tRef_T; /**< Reference */
typedef int16_t   TSL_tDelta_T; /**< Delta */

typedef uint8_t   TSL_tIndexSrc_T; /**< Channel source index */
typedef uint16_t  TSL_tIndexDest_T; /**< Channel destination index */

typedef uint8_t   TSL_tRefRest_T; /**< Reference Rest (ECS) */
typedef uint16_t  TSL_tKCoeff_T; /**< K coefficient (ECS) */

typedef uint8_t   TSL_tIndex_T; /**< Generic index */
typedef uint16_t  TSL_tNb_T; /**< Generic number */
typedef uint8_t   TSL_tCounter_T; /**< Generic counter used for debounce */

typedef uint8_t   TSL_tThreshold_T; /**< Delta threshold */

typedef int16_t   TSL_tsignPosition_T; /**< Linear and Rotary sensors position */
typedef uint8_t   TSL_tPosition_T; /**< Linear and Rotary sensors position */

typedef uint16_t  TSL_tTick_ms_T; /**< Time in ms */
typedef uint8_t   TSL_tTick_sec_T; /**< Time in sec */

//------------------------------------------------------------------------------
// Channel
//------------------------------------------------------------------------------

/** Channel destination index
  */
typedef struct
{
  TSL_tIndexDest_T  IdxDest; /**< Index in the Channel data array */
} TSL_ChannelDest_T;

/** Channel Source and Configuration
  */
typedef struct
{
  TSL_tIndexSrc_T  IdxSrc; /**< Index of TSC->IOGXCR[] registers */
  // For TSC acquisition only
  uint32_t         msk_IOCCR_channel; /**< Mask of the Channel IO (electrodes ONLY) */
  uint32_t         msk_IOGCSR_group;  /**< Mask of the Group used (electrodes ONLY) */
} TSL_ChannelSrc_T;

/** Channel flags
  */
typedef struct
{
  unsigned int DataReady : 1; /**< To identify a new measurement (TSL_DataReady_enum_T) */
  unsigned int AcqStatus : 2; /**< Acquisition status (TSL_AcqStatus_enum_T) */
  unsigned int ObjStatus : 2; /**< Object status (TSL_ObjStatus_enum_T) */
} TSL_ChannelFlags_T;

/** Channel Data
  */
typedef struct
{
  TSL_ChannelFlags_T   Flags;   /**< Flags */
  TSL_tRef_T           Ref;     /**< Reference */
  TSL_tRefRest_T       RefRest; /**< Reference rest for ECS */
  TSL_tDelta_T         Delta;   /**< Delta */
#if TSLPRM_USE_MEAS > 0
  TSL_tMeas_T          Meas;    /**< Hold the last acquisition measure */
#endif
} TSL_ChannelData_T;

//------------------------------------------------------------------------------
// Bank
//------------------------------------------------------------------------------

/** Bank
  */
typedef struct
{
  // Common to all acquisitions
  CONST TSL_ChannelSrc_T  *p_chSrc;     /**< Pointer to the Channel Source and Configuration */
  CONST TSL_ChannelDest_T *p_chDest;    /**< Pointer to the Channel Destination */
  TSL_ChannelData_T       *p_chData;    /**< Pointer to the Channel Data */
  TSL_tNb_T               NbChannels;   /**< Number of channels in the bank */
  // For TSC acquisition only
  uint32_t                msk_IOCCR_channels; /**< Mask of all channel IOs (electrodes AND shields) */
  uint32_t                msk_IOGCSR_groups;  /**< Mask of all groups used (electrodes ONLY) */
} TSL_Bank_T;

/* Exported variables --------------------------------------------------------*/
/* Exported macros -----------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

TSL_Status_enum_T TSL_acq_BankConfig(TSL_tIndex_T idx_bk);
TSL_Bool_enum_T TSL_acq_UseFilter(TSL_ChannelData_T *pCh);
TSL_Bool_enum_T TSL_acq_TestReferenceOutOfRange(TSL_ChannelData_T *pCh);
TSL_Bool_enum_T TSL_acq_TestFirstReferenceIsValid(TSL_ChannelData_T *pCh, TSL_tMeas_T new_meas);
void TSL_acq_BankStartAcq(void);
void TSL_acq_BankStartAcq_IT(void);
TSL_Status_enum_T TSL_acq_BankWaitEOC(void);
TSL_AcqStatus_enum_T TSL_acq_CheckNoise(void);
TSL_tMeas_T TSL_acq_GetMeas(TSL_tIndexSrc_T index);
TSL_tDelta_T TSL_acq_ComputeDelta(TSL_tRef_T ref, TSL_tMeas_T meas);
TSL_tMeas_T TSL_acq_ComputeMeas(TSL_tRef_T ref, TSL_tDelta_T delta);

#endif /* __TSL_ACQ_TSC_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
