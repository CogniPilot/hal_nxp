/*
 * Copyright 2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
 *   @file    Emios_Icu_Ip_SA_Init_PBCfg.c
 *   @version 3.0.0
 *
 *   @brief   AUTOSAR Icu - contains the data exported by the ICU module.
 *   @details Contains the information that will be exported by the module, as requested by AUTOSAR.
 *
 *   @addtogroup emios_icu_ip EMIOS IPL
 *   @{
 */

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
*================================================================================================*/
#include "Emios_Icu_Ip_Types.h"

#if (STD_ON == EMIOS_ICU_IP_USED)
    #if ((STD_ON == EMIOS_ICU_IP_SIGNALMEASUREMENT_USES_DMA_IPL) || (STD_ON == EMIOS_ICU_IP_TIMESTAMP_USES_DMA_IPL))
        #include "Dma_Ip.h"
    #endif
#endif


/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/
#define EMIOS_ICU_IP_SA_INIT_PBCFG_VENDOR_ID_C                    43
#define EMIOS_ICU_IP_SA_INIT_PBCFG_AR_RELEASE_MAJOR_VERSION_C     4
#define EMIOS_ICU_IP_SA_INIT_PBCFG_AR_RELEASE_MINOR_VERSION_C     7
#define EMIOS_ICU_IP_SA_INIT_PBCFG_AR_RELEASE_REVISION_VERSION_C  0
#define EMIOS_ICU_IP_SA_INIT_PBCFG_SW_MAJOR_VERSION_C             3
#define EMIOS_ICU_IP_SA_INIT_PBCFG_SW_MINOR_VERSION_C             0
#define EMIOS_ICU_IP_SA_INIT_PBCFG_SW_PATCH_VERSION_C             0

/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if (STD_ON == EMIOS_ICU_IP_USED)
        #if ((STD_ON == EMIOS_ICU_IP_SIGNALMEASUREMENT_USES_DMA_IPL) || (STD_ON == EMIOS_ICU_IP_TIMESTAMP_USES_DMA_IPL))
            /* Check if header file and Dma_Ip.h file are of the same Autosar version */
            #if ((EMIOS_ICU_IP_SA_INIT_PBCFG_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_AR_RELEASE_MAJOR_VERSION) || \
                 (EMIOS_ICU_IP_SA_INIT_PBCFG_AR_RELEASE_MINOR_VERSION_C != DMA_IP_AR_RELEASE_MINOR_VERSION))
                #error "AutoSar Version Numbers of Emios_Icu_Ip_SA_Init_PBcfg.c and Dma_Ip.h are different"
            #endif
        #endif
    #endif
#endif

#if (EMIOS_ICU_IP_SA_INIT_PBCFG_VENDOR_ID_C != EMIOS_ICU_IP_TYPES_VENDOR_ID)
    #error "Emios_Icu_Ip_SA_Init_PBcfg.c and Emios_Icu_Ip_Types.h have different vendor ids"
#endif

/* Check if  source file and Emios_Icu_Ip_Types.h file are of the same Autosar version */
#if ((EMIOS_ICU_IP_SA_INIT_PBCFG_AR_RELEASE_MAJOR_VERSION_C != EMIOS_ICU_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (EMIOS_ICU_IP_SA_INIT_PBCFG_AR_RELEASE_MINOR_VERSION_C != EMIOS_ICU_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (EMIOS_ICU_IP_SA_INIT_PBCFG_AR_RELEASE_REVISION_VERSION_C != EMIOS_ICU_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Emios_Icu_Ip_SA_Init_PBcfg.c and Emios_Icu_Ip_Types.h are different"
#endif

/* Check if source file and Emios_Icu_Ip_Types.h file are of the same Software version */
#if ((EMIOS_ICU_IP_SA_INIT_PBCFG_SW_MAJOR_VERSION_C != EMIOS_ICU_IP_TYPES_SW_MAJOR_VERSION) || \
     (EMIOS_ICU_IP_SA_INIT_PBCFG_SW_MINOR_VERSION_C != EMIOS_ICU_IP_TYPES_SW_MINOR_VERSION) || \
     (EMIOS_ICU_IP_SA_INIT_PBCFG_SW_PATCH_VERSION_C != EMIOS_ICU_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Emios_Icu_Ip_SA_Init_PBcfg.c and Emios_Icu_Ip_Types.h are different"
#endif

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 *================================================================================================*/
#if (STD_ON == EMIOS_ICU_IP_USED)

#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"
/*==================================================================================================
 *                                       GLOBAL CONSTANTS
 *================================================================================================*/
#define ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"

/** @brief Variant Init, instance 0 EMIOS Channels Configuration */
const eMios_Icu_Ip_ChannelConfigType eMios_Icu_Ip_0_ChannelConfig_PB_Init[3U] =
{
    /** @brief IcueMios_0_Channel_0 */
    {
        /** @brief EMIOS hardware channel used by the ICU driver. */
        6U,//5U,
        /** @brief Channel DutyCycle measurement mode. */
        EMIOS_ICU_SAIC,
        /** @brief Emios Channel Freeze bit. */
        (boolean)FALSE,
        /** @brief Value of EMIOS channel prescaler. */
        EMIOS_PRESCALER_DIVIDE_1, //EMIOS_PRESCALER_DIVIDE_4, //EMIOS_PRESCALER_DIVIDE_1,
        /** @brief Value of EMIOS channel alternate prescaler. */
        EMIOS_PRESCALER_DIVIDE_1, //EMIOS_PRESCALER_DIVIDE_4, //EMIOS_PRESCALER_DIVIDE_1,
        /** @brief Channel Counter bus selection. */
        EMIOS_ICU_BUS_INTERNAL_COUNTER,
        /** @brief eMios IPL mode of operation */
        EMIOS_ICU_MODE_EDGE_COUNTER,
        /** @brief DMA support for timestamp measurement. */
        EMIOS_ICU_MODE_WITHOUT_DMA,
        /** @brief Measurement mode for signal measurement. */
        EMIOS_ICU_NO_MEASUREMENT,
        /** @brief Edge alignment for signal measurement. */
        EMIOS_ICU_RISING_EDGE, //EMIOS_ICU_BOTH_EDGES, //EMIOS_ICU_RISING_EDGE,
        /** @brief Value of EMIOS channel digital filter. */
        EMIOS_DIGITAL_FILTER_BYPASSED,
        /** @brief Callback function for channels. */
        NULL_PTR,
        /** @brief Callback function for changing channels status */
        NULL_PTR,
        /** @brief Parameters used by callback function. */
        (uint8)255U,
        /** @brief Channel perform measurements without interrupt. */
        (boolean)FALSE,
#if (STD_ON == EMIOS_ICU_IP_TIMESTAMP_API)
        /** @brief Timestamp buffer used. */
        EMIOS_ICU_NO_TIMESTAMP,
#endif
#if ((STD_ON == EMIOS_ICU_IP_SIGNALMEASUREMENT_USES_DMA_IPL) || (STD_ON == EMIOS_ICU_IP_TIMESTAMP_USES_DMA_IPL))
        /** @brief Dma channel Id. */
        255U,
#endif
        /** @brief Channel specific notification */
        NULL_PTR,
        /** @brief Channel overflow notification. */
        NULL_PTR
    },
    /** @brief IcueMios_0_Channel_1 */
    {
        /** @brief EMIOS hardware channel used by the ICU driver. */
        7U,//6U,
        /** @brief Channel DutyCycle measurement mode. */
        EMIOS_ICU_SAIC,
        /** @brief Emios Channel Freeze bit. */
        (boolean)FALSE,
        /** @brief Value of EMIOS channel prescaler. */
        EMIOS_PRESCALER_DIVIDE_1, //EMIOS_PRESCALER_DIVIDE_4, //EMIOS_PRESCALER_DIVIDE_1,
        /** @brief Value of EMIOS channel alternate prescaler. */
        EMIOS_PRESCALER_DIVIDE_1, //EMIOS_PRESCALER_DIVIDE_4, //EMIOS_PRESCALER_DIVIDE_1,
        /** @brief Channel Counter bus selection. */
        EMIOS_ICU_BUS_INTERNAL_COUNTER,
        /** @brief eMios IPL mode of operation */
        EMIOS_ICU_MODE_EDGE_COUNTER,
        /** @brief DMA support for timestamp measurement. */
        EMIOS_ICU_MODE_WITHOUT_DMA,
        /** @brief Measurement mode for signal measurement. */
        EMIOS_ICU_NO_MEASUREMENT,
        /** @brief Edge alignment for signal measurement. */
        EMIOS_ICU_RISING_EDGE, //EMIOS_ICU_BOTH_EDGES, //EMIOS_ICU_RISING_EDGE,
        /** @brief Value of EMIOS channel digital filter. */
        EMIOS_DIGITAL_FILTER_BYPASSED,
        /** @brief Callback function for channels. */
        NULL_PTR,
        /** @brief Callback function for changing channels status */
        NULL_PTR,
        /** @brief Parameters used by callback function. */
        (uint8)255U,
        /** @brief Channel perform measurements without interrupt. */
        (boolean)FALSE,
#if (STD_ON == EMIOS_ICU_IP_TIMESTAMP_API)
        /** @brief Timestamp buffer used. */
        EMIOS_ICU_NO_TIMESTAMP,
#endif
#if ((STD_ON == EMIOS_ICU_IP_SIGNALMEASUREMENT_USES_DMA_IPL) || (STD_ON == EMIOS_ICU_IP_TIMESTAMP_USES_DMA_IPL))
        /** @brief Dma channel Id. */
        255U,
#endif
        /** @brief Channel specific notification */
        NULL_PTR,
        /** @brief Channel overflow notification. */
        NULL_PTR
    },
    /** @brief IcueMios_0_Channel_23 */
    {
        /** @brief EMIOS hardware channel used by the ICU driver. */
        23U,
        /** @brief Channel DutyCycle measurement mode. */
        EMIOS_ICU_SAIC,
        /** @brief Emios Channel Freeze bit. */
        (boolean)FALSE,
        /** @brief Value of EMIOS channel prescaler. */
        EMIOS_PRESCALER_DIVIDE_1, //EMIOS_PRESCALER_DIVIDE_4, //EMIOS_PRESCALER_DIVIDE_1,
        /** @brief Value of EMIOS channel alternate prescaler. */
        EMIOS_PRESCALER_DIVIDE_1, //EMIOS_PRESCALER_DIVIDE_4, //EMIOS_PRESCALER_DIVIDE_1,
        /** @brief Channel Counter bus selection. */
        EMIOS_ICU_BUS_INTERNAL_COUNTER,
        /** @brief eMios IPL mode of operation */
        EMIOS_ICU_MODE_EDGE_COUNTER,
        /** @brief DMA support for timestamp measurement. */
        EMIOS_ICU_MODE_WITHOUT_DMA,
        /** @brief Measurement mode for signal measurement. */
        EMIOS_ICU_NO_MEASUREMENT,
        /** @brief Edge alignment for signal measurement. */
        EMIOS_ICU_RISING_EDGE, //EMIOS_ICU_BOTH_EDGES, //EMIOS_ICU_RISING_EDGE,
        /** @brief Value of EMIOS channel digital filter. */
        EMIOS_DIGITAL_FILTER_BYPASSED,
        /** @brief Callback function for channels. */
        NULL_PTR,
        /** @brief Callback function for changing channels status */
        NULL_PTR,
        /** @brief Parameters used by callback function. */
        (uint8)255U,
        /** @brief Channel perform measurements without interrupt. */
        (boolean)FALSE,
#if (STD_ON == EMIOS_ICU_IP_TIMESTAMP_API)
        /** @brief Timestamp buffer used. */
        EMIOS_ICU_NO_TIMESTAMP,
#endif
#if ((STD_ON == EMIOS_ICU_IP_SIGNALMEASUREMENT_USES_DMA_IPL) || (STD_ON == EMIOS_ICU_IP_TIMESTAMP_USES_DMA_IPL))
        /** @brief Dma channel Id. */
        255U,
#endif
        /** @brief Channel specific notification */
        NULL_PTR,
        /** @brief Channel overflow notification. */
        NULL_PTR
    },
};

/** @brief Emios PB_Init instance 0 IP configuration. */
const eMios_Icu_Ip_ConfigType eMios_Icu_Ip_0_Config_PB_Init =
{
    /** @brief Number of channels in the configuration */
    (uint8) 3U,
    /** @brief Instance Channels Config */
    &eMios_Icu_Ip_0_ChannelConfig_PB_Init
};

#define ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"

#endif  /* EMIOS_ICU_IP_USED */

#ifdef __cplusplus
}
#endif

/** @} */
