/*
 * Copyright 2020-2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifdef __cplusplus
extern "C"
{
#endif

#include "Lcu_Ip_Cfg.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LCU_IP_CFG_VENDOR_ID_C                       43
#define LCU_IP_CFG_AR_RELEASE_MAJOR_VERSION_C        4
#define LCU_IP_CFG_AR_RELEASE_MINOR_VERSION_C        7
#define LCU_IP_CFG_AR_RELEASE_REVISION_VERSION_C     0
#define LCU_IP_CFG_SW_MAJOR_VERSION_C                3
#define LCU_IP_CFG_SW_MINOR_VERSION_C                0
#define LCU_IP_CFG_SW_PATCH_VERSION_C                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Lcu_Ip_Cfg.c file and Lcu_Ip_Cfg.h file are of the same vendor */
#if (LCU_IP_CFG_VENDOR_ID_C != LCU_IP_CFG_VENDOR_ID)
    #error "Lcu_Ip_Cfg.c and Lcu_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Lcu_Ip_Cfg.c file and Lcu_Ip_Cfg.h file are of the same Autosar version */
#if ((LCU_IP_CFG_AR_RELEASE_MAJOR_VERSION_C != LCU_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LCU_IP_CFG_AR_RELEASE_MINOR_VERSION_C != LCU_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LCU_IP_CFG_AR_RELEASE_REVISION_VERSION_C != LCU_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Lcu_Ip_Cfg.c and Lcu_Ip_Cfg.h are different"
#endif

/* Check if Lcu_Ip_Cfg.c file and Lcu_Ip_Cfg.h file are of the same Software version */
#if ((LCU_IP_CFG_SW_MAJOR_VERSION_C != LCU_IP_CFG_SW_MAJOR_VERSION) || \
     (LCU_IP_CFG_SW_MINOR_VERSION_C != LCU_IP_CFG_SW_MINOR_VERSION) || \
     (LCU_IP_CFG_SW_PATCH_VERSION_C != LCU_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lcu_Ip_Cfg.c and Lcu_Ip_Cfg.h are different"
#endif


/**
* @page misra_violations MISRA-C:2012 violations
**/
#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Lcu_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/* LCU Logic Instance Reset Configuration */
const Lcu_Ip_LogicInputConfigType Lcu_Ip_xLogicInputResetConfig =
{
    /* uint8 MuxSel         */ LCU_IP_MUX_SEL_LOGIC_0,
    /* boolean SwSynMode    */ LCU_IP_SW_SYNC_IMMEDIATE,
    /* uint8 SwValue        */ LCU_IP_SW_OVERRIDE_LOGIC_LOW,
};

const Lcu_Ip_LogicOutputConfigType Lcu_Ip_xLogicOutputResetConfig =
{
    /* boolean EnDebugMode   */ LCU_IP_DEBUG_DISABLE,
    /* uint16 LutControl     */ 0U,
    /* uint16 LutRiseFilt    */ 0U,
    /* uint16 LutFallFilt    */ 0U,
    /* boolean EnLutDma      */ (boolean)FALSE,
    /* boolean EnForceDma    */ (boolean)FALSE,
    /* boolean EnLutInt      */ (boolean)FALSE,
    /* boolean EnForceInt    */ (boolean)FALSE,
    /* boolean InvertOutput  */ (boolean)FALSE,
    /* uint8 ForceSignalSel  */ 0U,
    /* uint8 ClearForceMode  */ LCU_IP_CLEAR_FORCE_SIGNAL_IMMEDIATE,
    /* uint8 ForceSyncSel    */ LCU_IP_SYNC_SEL_INPUT0,
};

#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Lcu_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"


#ifdef __cplusplus
}
#endif

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/