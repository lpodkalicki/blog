/**
  ******************************************************************************
  * @file    tsl_acq_tsc.c
  * @author  MCD Application Team
  * @version V2.2.0
  * @date    01-february-2016
  * @brief   This file contains all functions to manage the TSC acquisition.
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
#include "tsl_acq_tsc.h"
#include "tsl_globals.h"

/* Private typedefs ----------------------------------------------------------*/
/* Private defines -----------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/

/* Private functions prototype -----------------------------------------------*/
static void SoftDelay(uint32_t val);

/**
  * @brief Configures a Bank.
  * @param[in] idx_bk  Index of the Bank to configure
  * @retval Status
  */
TSL_Status_enum_T TSL_acq_BankConfig(TSL_tIndex_T idx_bk)
{
  uint32_t idx_ch;
  uint32_t objs; /* bit field of TSL_ObjStatus_enum_T type */
  uint32_t gx;
  uint32_t ioy;
  CONST TSL_Bank_T *bank;
  CONST TSL_ChannelSrc_T *pchSrc;
  CONST TSL_ChannelDest_T *pchDest;

  // Check bank index
  if (idx_bk >= TSLPRM_TOTAL_BANKS)
  {
    return TSL_STATUS_ERROR;
  }

  // Initialize bank pointers
  bank = &(TSL_Globals.Bank_Array[idx_bk]);
  pchSrc = bank->p_chSrc;
  pchDest = bank->p_chDest;
  
  // Mark the current bank processed
  TSL_Globals.This_Bank = idx_bk;

  //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  // Enable the Gx_IOy used as channels (channels + shield)
  TSC->IOCCR = bank->msk_IOCCR_channels;
  // Enable acquisition on selected Groups
  TSC->IOGCSR = bank->msk_IOGCSR_groups;
  //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

  // For all channels of the bank check if they are OFF or BURST_ONLY
  // and set acquisition status flag
  for (idx_ch = 0; idx_ch < bank->NbChannels; idx_ch++)
  {

    // Check Object status flag
    objs = bank->p_chData[pchDest->IdxDest].Flags.ObjStatus;

    if (objs != TSL_OBJ_STATUS_ON)
    {
      //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      // Get the Channel Group mask
      gx = pchSrc->msk_IOGCSR_group;
      // Stop acquisition of the Group
      TSC->IOGCSR &= (uint32_t)~gx;
      //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

      if (objs == TSL_OBJ_STATUS_OFF)
      {
        //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
        // Get the Channel IO mask
        ioy = pchSrc->msk_IOCCR_channel;
        // Stop Burst of the Channel
        TSC->IOCCR &= (uint32_t)~ioy;
        //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      }
    }

    // Next channel
    pchSrc++;
    pchDest++;
  }

  return TSL_STATUS_OK;
}


/**
  * @brief Start acquisition on a previously configured bank
  * @param None
  * @retval None
  */
void TSL_acq_BankStartAcq(void)
{
  // Clear both EOAIC and MCEIC flags
  TSC->ICR |= 0x03;

  // Wait capacitors discharge
  SoftDelay(TSL_Globals.DelayDischarge);

#if TSLPRM_IODEF > 0 // Default = Input Floating
  // Set IO default in Input Floating
  TSC->CR |= (1 << 4);
#endif

  // Clear both EOA and MCE interrupts
  TSC->IER &= (uint32_t)(~0x03);

  // Start acquisition
  TSC->CR |= 0x02;
}

/**
  * @brief Start acquisition in Interrupt mode on a previously configured bank
  * @param None
  * @retval None
  */
void TSL_acq_BankStartAcq_IT(void)
{
  // Clear both EOAIC and MCEIC flags
  TSC->ICR |= 0x03;

  // Wait capacitors discharge
  SoftDelay(TSL_Globals.DelayDischarge);

#if TSLPRM_IODEF > 0 // Default = Input Floating
  // Set IO default in Input Floating
  TSC->CR |= (1 << 4);
#endif

  // Set both EOA and MCE interrupts
  TSC->IER |= 0x03;
  
  // Start acquisition
  TSC->CR |= 0x02;
}

/**
  * @brief Wait end of acquisition
  * @param None
  * @retval Status
  */
TSL_Status_enum_T TSL_acq_BankWaitEOC(void)
{
  TSL_Status_enum_T retval = TSL_STATUS_BUSY;

  // Check EOAF flag
  if (TSC->ISR & 0x01)
  {

#if TSLPRM_IODEF > 0 // Default = Input Floating
    // Set IO default in Output PP Low to discharge all capacitors
    TSC->CR &= (uint32_t)(~(1 << 4));
#endif

    // Check MCEF flag
    if (TSC->ISR & 0x02)
    {
      retval = TSL_STATUS_ERROR;
    }
    else
    {
      retval = TSL_STATUS_OK;
    }
  }

  return retval;
}


/**
  * @brief Return the current measure
  * @param[in] index Index of the measure source
  * @retval Measure
  */
TSL_tMeas_T TSL_acq_GetMeas(TSL_tIndex_T index)
{
  if (index < TSC_NB_GROUPS_SUPPORTED)
  {
    return((TSL_tMeas_T)(TSC->IOGXCR[index]));
  }
  else
  {
    return((TSL_tMeas_T)0);
  }
}


/**
  * @brief Compute the Delta value
  * @param[in] ref Reference value
  * @param[in] meas Last Measurement value
  * @retval Delta value
  */
TSL_tDelta_T TSL_acq_ComputeDelta(TSL_tRef_T ref, TSL_tMeas_T meas)
{
  return((TSL_tDelta_T)(ref - meas));
}


/**
  * @brief Compute the Measurement value
  * @param[in] ref Reference value
  * @param[in] delta Delta value
  * @retval Measurement value
  */
TSL_tMeas_T TSL_acq_ComputeMeas(TSL_tRef_T ref, TSL_tDelta_T delta)
{
  return((TSL_tMeas_T)(ref - delta));
}


/**
  * @brief  Check noise (not used)
  * @param  None
  * @retval Status
  */
TSL_AcqStatus_enum_T TSL_acq_CheckNoise(void)
{
  return TSL_ACQ_STATUS_OK;
}


/**
  * @brief Check if a filter must be used on the current channel (not used)
  * @param[in] pCh Pointer on the channel data information
  * @retval Result TRUE if a filter can be applied
  */
TSL_Bool_enum_T TSL_acq_UseFilter(TSL_ChannelData_T *pCh)
{
  return TSL_TRUE;
}


/**
  * @brief Test if the Reference is incorrect (not used)
  * @param[in] pCh Pointer on the channel data information
  * @retval Result TRUE if the Reference is out of range
  */
TSL_Bool_enum_T TSL_acq_TestReferenceOutOfRange(TSL_ChannelData_T *pCh)
{
  return TSL_FALSE;
}


/**
  * @brief Test if the measure has crossed the reference target (not used)
  * @param[in] pCh Pointer on the channel data information
  * @param[in] new_meas Measure of the last acquisition on this channel
  * @retval Result TRUE if the Reference is valid
  */
TSL_Bool_enum_T TSL_acq_TestFirstReferenceIsValid(TSL_ChannelData_T *pCh, TSL_tMeas_T new_meas)
{
  return TSL_TRUE;
}


#if defined(__IAR_SYSTEMS_ICC__) // IAR/EWARM
#pragma optimize=low
#elif defined(__CC_ARM) // Keil/MDK-ARM
#pragma O1
#pragma Ospace
#elif defined(__GNUC__) // Atollic/True Studio + Raisonance/RKit
#pragma GCC push_options
#pragma GCC optimize ("O0")
#endif
/**
  * @brief  Software delay (private routine)
  * @param  val Wait delay
  * @retval None
  * @note Measurements done with HCLK=72MHz and Keil/MDK-ARM compiler
  * val =  500: ~ 63µs
  * val = 1000: ~126µs
  * val = 2000: ~251µs
  */
void SoftDelay(uint32_t val)
{
  volatile uint32_t idx;
  for (idx = val; idx > 0; idx--)
  {}
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
