/**
  ******************************************************************************
  * @file    tsl_check_config.h
  * @author  MCD Application Team
  * @version V2.2.0
  * @date    01-february-2016
  * @brief   This file contains the check of all parameters defined in the
  *          common configuration file.
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
#ifndef __TSL_CHECK_CONFIG_H
#define __TSL_CHECK_CONFIG_H

//==============================================================================
// Common parameters check
//==============================================================================

//------------------------------------------------------------------------------

#ifndef TSLPRM_TOTAL_CHANNELS
#error "TSLPRM_TOTAL_CHANNELS is not defined."
#endif

#ifndef TSLPRM_TOTAL_BANKS
#error "TSLPRM_TOTAL_BANKS is not defined."
#endif

#ifndef TSLPRM_TOTAL_TOUCHKEYS
#error "TSLPRM_TOTAL_TOUCHKEYS is not defined."
#endif

#ifndef TSLPRM_TOTAL_TOUCHKEYS_B
#error "TSLPRM_TOTAL_TOUCHKEYS_B is not defined."
#endif

#ifndef TSLPRM_TOTAL_LINROTS
#error "TSLPRM_TOTAL_LINROTS is not defined."
#endif

#ifndef TSLPRM_TOTAL_LINROTS_B
#error "TSLPRM_TOTAL_LINROTS_B is not defined."
#endif

#ifndef TSLPRM_TOTAL_OBJECTS
#error "TSLPRM_TOTAL_OBJECTS is not defined."
#endif

#define TSLPRM_TOTAL_TKEYS (TSLPRM_TOTAL_TOUCHKEYS + TSLPRM_TOTAL_TOUCHKEYS_B)
#define TSLPRM_TOTAL_LNRTS (TSLPRM_TOTAL_LINROTS + TSLPRM_TOTAL_LINROTS_B)

#if ((TSLPRM_TOTAL_TKEYS == 0) && (TSLPRM_TOTAL_LNRTS == 0))
#error "No TouchKey and No Linear/Rotary sensors are defined."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_CALIB_SAMPLES
#error "TSLPRM_CALIB_SAMPLES is not defined."
#endif

#if ((TSLPRM_CALIB_SAMPLES != 4) && (TSLPRM_CALIB_SAMPLES != 8) && (TSLPRM_CALIB_SAMPLES != 16))
#error "TSLPRM_CALIB_SAMPLES is out of range (4, 8, 16)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_CALIB_DELAY
#error "TSLPRM_CALIB_DELAY is not defined."
#endif

#if ((TSLPRM_CALIB_DELAY < 0) || (TSLPRM_CALIB_DELAY > 40))
#error "TSLPRM_CALIB_DELAY is out of range (0..40)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_ACQ_MIN
#error "TSLPRM_ACQ_MIN is not defined."
#endif

#ifndef TSLPRM_ACQ_MAX
#error "TSLPRM_ACQ_MAX is not defined."
#endif

#if ((TSLPRM_ACQ_MIN < 1) || (TSLPRM_ACQ_MIN > (TSLPRM_ACQ_MAX-1)))
#error "TSLPRM_ACQ_MIN is out of range (1 .. ACQ_MAX-1)."
#endif

#if ((TSLPRM_ACQ_MAX < (TSLPRM_ACQ_MIN+1)) || (TSLPRM_ACQ_MAX > 50000))
#error "TSLPRM_ACQ_MAX is out of range (ACQ_MIN+1 .. 50000)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_TKEY_PROX_IN_TH
#error "TSLPRM_TKEY_PROX_IN_TH is not defined."
#endif

#ifndef TSLPRM_TKEY_PROX_OUT_TH
#error "TSLPRM_TKEY_PROX_OUT_TH is not defined."
#endif

#if ((TSLPRM_TKEY_PROX_OUT_TH < 0) || (TSLPRM_TKEY_PROX_OUT_TH > (TSLPRM_TKEY_PROX_IN_TH-1)))
#error "TSLPRM_TKEY_PROX_OUT_TH is out of range (0 .. TSLPRM_TKEY_PROX_IN_TH-1)."
#endif

#if TSLPRM_COEFF_TH == 0
#if ((TSLPRM_TKEY_PROX_IN_TH < (TSLPRM_TKEY_PROX_OUT_TH+1)) || (TSLPRM_TKEY_PROX_IN_TH > (TSLPRM_TKEY_DETECT_OUT_TH-1)))
#error "TSLPRM_TKEY_PROX_IN_TH is out of range (TSLPRM_TKEY_PROX_OUT_TH+1 .. TSLPRM_TKEY_DETECT_OUT_TH-1)."
#endif
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_LINROT_PROX_IN_TH
#error "TSLPRM_LINROT_PROX_IN_TH is not defined."
#endif

#ifndef TSLPRM_LINROT_PROX_OUT_TH
#error "TSLPRM_LINROT_PROX_OUT_TH is not defined."
#endif

#if ((TSLPRM_LINROT_PROX_OUT_TH < 0) || (TSLPRM_LINROT_PROX_OUT_TH > (TSLPRM_LINROT_PROX_IN_TH-1)))
#error "TSLPRM_LINROT_PROX_OUT_TH is out of range (0 .. TSLPRM_LINROT_PROX_IN_TH-1)."
#endif

#if TSLPRM_COEFF_TH == 0
#if ((TSLPRM_LINROT_PROX_IN_TH < (TSLPRM_LINROT_PROX_OUT_TH+1)) || (TSLPRM_LINROT_PROX_IN_TH > (TSLPRM_LINROT_DETECT_OUT_TH-1)))
#error "TSLPRM_LINROT_PROX_IN_TH is out of range (TSLPRM_LINROT_PROX_OUT_TH+1 .. TSLPRM_LINROT_DETECT_OUT_TH-1)."
#endif
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_TKEY_DETECT_IN_TH
#error "TSLPRM_TKEY_DETECT_IN_TH is not defined."
#endif

#ifndef TSLPRM_TKEY_DETECT_OUT_TH
#error "TSLPRM_TKEY_DETECT_OUT_TH is not defined."
#endif

#if TSLPRM_COEFF_TH == 0
#if ((TSLPRM_TKEY_DETECT_OUT_TH < (TSLPRM_TKEY_PROX_IN_TH+1)) || (TSLPRM_TKEY_DETECT_OUT_TH > (TSLPRM_TKEY_DETECT_IN_TH-1)))
#error "TSLPRM_TKEY_DETECT_OUT_TH is out of range (TSLPRM_TKEY_PROX_IN_TH+1 .. TSLPRM_TKEY_DETECT_IN_TH-1)."
#endif
#endif

#if ((TSLPRM_TKEY_DETECT_IN_TH < (TSLPRM_TKEY_DETECT_OUT_TH+1)) || (TSLPRM_TKEY_DETECT_IN_TH > 255))
#error "TSLPRM_TKEY_DETECT_IN_TH is out of range (TSLPRM_TKEY_DETECT_OUT_TH+1 .. 255)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_LINROT_DETECT_IN_TH
#error "TSLPRM_LINROT_DETECT_IN_TH is not defined."
#endif

#ifndef TSLPRM_LINROT_DETECT_OUT_TH
#error "TSLPRM_LINROT_DETECT_OUT_TH is not defined."
#endif

#if TSLPRM_COEFF_TH == 0
#if ((TSLPRM_LINROT_DETECT_OUT_TH < (TSLPRM_LINROT_PROX_IN_TH+1)) || (TSLPRM_LINROT_DETECT_OUT_TH > (TSLPRM_LINROT_DETECT_IN_TH-1)))
#error "TSLPRM_LINROT_DETECT_OUT_TH is out of range (TSLPRM_LINROT_PROX_IN_TH+1 .. TSLPRM_LINROT_DETECT_IN_TH-1)."
#endif
#endif

#if ((TSLPRM_LINROT_DETECT_IN_TH < (TSLPRM_LINROT_DETECT_OUT_TH+1)) || (TSLPRM_LINROT_DETECT_IN_TH > 255))
#error "TSLPRM_LINROT_DETECT_IN_TH is out of range (TSLPRM_LINROT_DETECT_OUT_TH+1 .. 255)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_TKEY_CALIB_TH
#error "TSLPRM_TKEY_CALIB_TH is not defined."
#endif

#if ((TSLPRM_TKEY_CALIB_TH < 0) || (TSLPRM_TKEY_CALIB_TH > 255))
#error "TSLPRM_TKEY_CALIB_TH is out of range (0 .. 255)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_LINROT_CALIB_TH
#error "TSLPRM_LINROT_CALIB_TH is not defined."
#endif

#if ((TSLPRM_LINROT_CALIB_TH < 0) || (TSLPRM_LINROT_CALIB_TH > 255))
#error "TSLPRM_LINROT_CALIB_TH is out of range (0 .. 255)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_LINROT_USE_NORMDELTA
#error "TSLPRM_LINROT_USE_NORMDELTA is not defined."
#endif

#if ((TSLPRM_LINROT_USE_NORMDELTA < 0) || (TSLPRM_LINROT_USE_NORMDELTA > 1))
#error "TSLPRM_LINROT_USE_NORMDELTA is out of range (0 .. 1)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_COEFF_TH
#error "TSLPRM_COEFF_TH is not defined."
#endif

#if ((TSLPRM_COEFF_TH < 0) || (TSLPRM_COEFF_TH > 4))
#error "TSLPRM_COEFF_TH is out of range (0 .. 4)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_LINROT_DIR_CHG_POS
#error "TSLPRM_LINROT_DIR_CHG_POS is not defined."
#endif

#if ((TSLPRM_LINROT_DIR_CHG_POS < 0) || (TSLPRM_LINROT_DIR_CHG_POS > 255))
#error "TSLPRM_LINROT_DIR_CHG_POS is out of range (0 .. 255)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_LINROT_RESOLUTION
#error "TSLPRM_LINROT_RESOLUTION is not defined."
#endif

#if ((TSLPRM_LINROT_RESOLUTION < 1) || (TSLPRM_LINROT_RESOLUTION > 8))
#error "TSLPRM_LINROT_RESOLUTION is out of range (1 .. 8)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_DEBOUNCE_PROX
#error "TSLPRM_DEBOUNCE_PROX is not defined."
#endif

#if ((TSLPRM_DEBOUNCE_PROX < 0) || (TSLPRM_DEBOUNCE_PROX > 63))
#error "TSLPRM_DEBOUNCE_PROX is out of range (0 .. 63)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_DEBOUNCE_DETECT
#error "TSLPRM_DEBOUNCE_DETECT is not defined."
#endif

#if ((TSLPRM_DEBOUNCE_DETECT < 0) || (TSLPRM_DEBOUNCE_DETECT > 63))
#error "TSLPRM_DEBOUNCE_DETECT is out of range (0 .. 63)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_DEBOUNCE_RELEASE
#error "TSLPRM_DEBOUNCE_RELEASE is not defined."
#endif

#if ((TSLPRM_DEBOUNCE_RELEASE < 0) || (TSLPRM_DEBOUNCE_RELEASE > 63))
#error "TSLPRM_DEBOUNCE_RELEASE is out of range (0 .. 63)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_DEBOUNCE_CALIB
#error "TSLPRM_DEBOUNCE_CALIB is not defined."
#endif

#if ((TSLPRM_DEBOUNCE_CALIB < 0) || (TSLPRM_DEBOUNCE_CALIB > 63))
#error "TSLPRM_DEBOUNCE_CALIB is out of range (0 .. 63)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_DEBOUNCE_ERROR
#error "TSLPRM_DEBOUNCE_ERROR is not defined."
#endif

#if ((TSLPRM_DEBOUNCE_ERROR < 0) || (TSLPRM_DEBOUNCE_ERROR > 63))
#error "TSLPRM_DEBOUNCE_ERROR is out of range (0 .. 63)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_LINROT_DIR_CHG_DEB
#error "TSLPRM_LINROT_DIR_CHG_DEB is not defined."
#endif

#if ((TSLPRM_LINROT_DIR_CHG_DEB < 0) || (TSLPRM_LINROT_DIR_CHG_DEB > 63))
#error "TSLPRM_LINROT_DIR_CHG_DEB is out of range (0 .. 63)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_ECS_K_SLOW
#error "TSLPRM_ECS_K_SLOW is not defined."
#endif

#if ((TSLPRM_ECS_K_SLOW < 0) || (TSLPRM_ECS_K_SLOW > 255))
#error "TSLPRM_ECS_K_SLOW is out of range (0 .. 255)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_ECS_K_FAST
#error "TSLPRM_ECS_K_FAST is not defined."
#endif

#if ((TSLPRM_ECS_K_FAST < 0) || (TSLPRM_ECS_K_FAST > 255))
#error "TSLPRM_ECS_K_FAST is out of range (0 .. 255)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_ECS_DELAY
#error "TSLPRM_ECS_DELAY is not defined."
#endif

#if ((TSLPRM_ECS_DELAY < 0) || (TSLPRM_ECS_DELAY > 5000))
#error "TSLPRM_ECS_DELAY is out of range (0 .. 5000)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_USE_MEAS
#error "TSLPRM_USE_MEAS is not defined."
#endif

#if ((TSLPRM_USE_MEAS != 0) && (TSLPRM_USE_MEAS != 1))
#error "TSLPRM_USE_MEAS is out of range (0 .. 1)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_USE_PROX
#error "TSLPRM_USE_PROX is not defined."
#endif

#if ((TSLPRM_USE_PROX != 0) && (TSLPRM_USE_PROX != 1))
#error "TSLPRM_USE_PROX is out of range (0 .. 1)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_DTO
#error "TSLPRM_DTO is not defined."
#endif

#if ((TSLPRM_DTO < 0) || (TSLPRM_DTO > 63))
#error "TSLPRM_DTO is out of range (0 .. 63)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_USE_DXS
#error "TSLPRM_USE_DXS is not defined."
#endif

#if ((TSLPRM_USE_DXS < 0) || (TSLPRM_USE_DXS > 1))
#error "TSLPRM_USE_DXS is out of range (0 .. 1)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_TICK_FREQ
#error "TSLPRM_TICK_FREQ is not defined."
#endif

#if ((TSLPRM_TICK_FREQ != 125) && (TSLPRM_TICK_FREQ != 250) && (TSLPRM_TICK_FREQ != 500) &&\
     (TSLPRM_TICK_FREQ != 1000) && (TSLPRM_TICK_FREQ != 2000))
#error "TSLPRM_TICK_FREQ is out of range (125, 250, 500, 1000, 2000)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_DELAY_DISCHARGE_ALL
#error "TSLPRM_DELAY_DISCHARGE_ALL is not defined."
#endif

#if ((TSLPRM_DELAY_DISCHARGE_ALL < 0) || (TSLPRM_DELAY_DISCHARGE_ALL > 65535))
#error "TSLPRM_DELAY_DISCHARGE_ALL is out of range (0 .. 65535)."
#endif

//------------------------------------------------------------------------------

#ifndef TSLPRM_IODEF
#error "TSLPRM_IODEF is not defined."
#endif

#if ((TSLPRM_IODEF < 0) || (TSLPRM_IODEF > 1))
#error "TSLPRM_IODEF is out of range (0 .. 1)."
#endif

#endif /* __TSL_CHECK_CONFIG_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
