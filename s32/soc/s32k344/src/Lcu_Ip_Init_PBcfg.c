/*
 * Copyright 2020-2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Lcu_Ip_Cfg.h"

/*==================================================================================================
*                                    SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LCU_IP_PBCFG_MODULE_ID_C                        255
#define LCU_IP_PBCFG_VENDOR_ID_C                        43
#define LCU_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C         4
#define LCU_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C         7
#define LCU_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C      0
#define LCU_IP_PBCFG_SW_MAJOR_VERSION_C                 3
#define LCU_IP_PBCFG_SW_MINOR_VERSION_C                 0
#define LCU_IP_PBCFG_SW_PATCH_VERSION_C                 0
/* Check if Lcu_Ip_Init_PBcfg.c file and Lcu_Ip_Cfg.h file are of the same vendor */
#if (LCU_IP_PBCFG_VENDOR_ID_C != LCU_IP_CFG_VENDOR_ID)
    #error "Lcu_Ip_Init_PBcfg.c and Lcu_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Lcu_Ip_Init_PBcfg.c file and Lcu_Ip_Cfg.h file are of the same Autosar version */
#if ((LCU_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != LCU_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LCU_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != LCU_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LCU_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != LCU_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Lcu_Ip_Init_PBcfg.c and Lcu_Ip_Cfg.h are different"
#endif

/* Check if Lcu_Ip_Init_PBcfg.c file and Lcu_Ip_Cfg.h file are of the same Software version */
#if ((LCU_IP_PBCFG_SW_MAJOR_VERSION_C != LCU_IP_CFG_SW_MAJOR_VERSION) || \
     (LCU_IP_PBCFG_SW_MINOR_VERSION_C != LCU_IP_CFG_SW_MINOR_VERSION) || \
     (LCU_IP_PBCFG_SW_PATCH_VERSION_C != LCU_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lcu_Ip_Init_PBcfg.c and Lcu_Ip_Cfg.h are different"
#endif

/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/


#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref LCU_IP_PBCFG_C_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/* LCU Logic Instance Configuration */
/* LCU Logic Instance 0 Configuration */
const Lcu_Ip_LogicInstanceType LcuLogicInstance0ConfigPB =
{
    /* uint8 HwInstId             */ LCU_IP_HW_INST_1,
    /* uint8 NumLogicCellConfig   */ 0U,
    /* ppxLogicCellConfigArray    */ NULL_PTR,
    /* uint8 OperationMode        */ LCU_IP_INTERRUPT_MODE,
};

/* LCU Logic Instance Array Configuration */
const Lcu_Ip_LogicInstanceType * const Lcu_Ip_ppxLogicInstanceArrayPB[LCU_IP_NOF_CFG_LOGIC_INSTANCES] =
{
    &LcuLogicInstance0ConfigPB,
};


/* LCU Logic Input Configuration */
const Lcu_Ip_LogicInputConfigType LogicInput0CfgPB =
{
    /* uint8 MuxSel         */ LCU_IP_MUX_SEL_LU_IN_0,
    /* boolean SwSynMode    */ LCU_IP_SW_SYNC_IMMEDIATE,
    /* uint8 SwValue        */ LCU_IP_SW_OVERRIDE_LOGIC_LOW,
};

const Lcu_Ip_LogicInputType LogicInput0PB =
{
    {
        /* uint8 HwInstId      */ LCU_IP_HW_INST_1,
        /* uint8 HwLcInputId   */ 0U,
    },
    &LogicInput0CfgPB,
};


/* LCU Logic Input Configuration */
const Lcu_Ip_LogicInputConfigType LogicInput1CfgPB =
{
    /* uint8 MuxSel         */ LCU_IP_MUX_SEL_LU_IN_1,
    /* boolean SwSynMode    */ LCU_IP_SW_SYNC_IMMEDIATE,
    /* uint8 SwValue        */ LCU_IP_SW_OVERRIDE_LOGIC_LOW,
};

const Lcu_Ip_LogicInputType LogicInput1PB =
{
    {
        /* uint8 HwInstId      */ LCU_IP_HW_INST_1,
        /* uint8 HwLcInputId   */ 1U,
    },
    &LogicInput1CfgPB,
};


/* LCU Logic Input Configuration */
const Lcu_Ip_LogicInputConfigType LogicInput2CfgPB =
{
    /* uint8 MuxSel         */ LCU_IP_MUX_SEL_LU_OUT_0,
    /* boolean SwSynMode    */ LCU_IP_SW_SYNC_IMMEDIATE,
    /* uint8 SwValue        */ LCU_IP_SW_OVERRIDE_LOGIC_LOW,
};

const Lcu_Ip_LogicInputType LogicInput2PB =
{
    {
        /* uint8 HwInstId      */ LCU_IP_HW_INST_1,
        /* uint8 HwLcInputId   */ 2U,
    },
    &LogicInput2CfgPB,
};


/* LCU Logic Input Configuration */
const Lcu_Ip_LogicInputConfigType LogicInput3CfgPB =
{
    /* uint8 MuxSel         */ LCU_IP_MUX_SEL_LU_OUT_1,
    /* boolean SwSynMode    */ LCU_IP_SW_SYNC_IMMEDIATE,
    /* uint8 SwValue        */ LCU_IP_SW_OVERRIDE_LOGIC_LOW,
};

const Lcu_Ip_LogicInputType LogicInput3PB =
{
    {
        /* uint8 HwInstId      */ LCU_IP_HW_INST_1,
        /* uint8 HwLcInputId   */ 3U,
    },
    &LogicInput3CfgPB,
};

const Lcu_Ip_LogicInputType * const Lcu_Ip_ppxLogicInputArrayPB[LCU_IP_NOF_CFG_LOGIC_INPUTS] =
{
    &LogicInput0PB,
    &LogicInput1PB,
    &LogicInput2PB,
    &LogicInput3PB,
};

#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref LCU_IP_PBCFG_C_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"



/* LCU Hardware output state */

#define MCL_START_SEC_VAR_CLEARED_UNSPECIFIED
/* @violates @ref LCU_IP_PBCFG_C_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"
Lcu_Ip_HwOutputStateType HwOutput0StatePB;

Lcu_Ip_HwOutputStateType HwOutput1StatePB;

Lcu_Ip_HwOutputStateType HwOutput2StatePB;

Lcu_Ip_HwOutputStateType HwOutput3StatePB;

#define MCL_STOP_SEC_VAR_CLEARED_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"


#define MCL_START_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref LCU_IP_PBCFG_C_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"
Lcu_Ip_HwOutputStateType * Lcu_Ip_ppxHwOutputStateArrayPB[LCU_IP_NOF_CFG_LOGIC_OUTPUTS] =
{
    &HwOutput0StatePB,
    &HwOutput1StatePB,
    &HwOutput2StatePB,
    &HwOutput3StatePB,
};

#define MCL_STOP_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"


#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref LCU_IP_PBCFG_C_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/* LCU Logic Output Configuration */
const Lcu_Ip_LogicOutputConfigType LogicOutput0CfgPB =
{
    /* boolean EnDebugMode   */ (boolean)FALSE,
    /* uint16 LutControl     */ 0XAAAAU,
    /* uint16 LutRiseFilt    */ 5,//1000,//0,//30000U,
    /* uint16 LutFallFilt    */ 5,//1000,//0,//30000U,
    /* boolean EnLutDma      */ (boolean)FALSE,
    /* boolean EnForceDma    */ (boolean)FALSE,
    /* boolean EnLutInt      */ (boolean)FALSE,
    /* boolean EnForceInt    */ (boolean)FALSE,
    /* boolean InvertOutput  */ (boolean)FALSE,
    /* uint8 ForceSignalSel  */ 0U,
    /* uint8 ClearForceMode  */ LCU_IP_CLEAR_FORCE_SIGNAL_IMMEDIATE,
    /* uint8 ForceSyncSel    */ LCU_IP_SYNC_SEL_INPUT0,
};

const Lcu_Ip_LogicOutputType LogicOutput0PB =
{
    {
        /* uint8 HwInstId               */ LCU_IP_HW_INST_1,
        /* uint8 HwLcOutputId           */ 0U,
        /* Lcu_Ip_Callback IntCallback  */ NULL_PTR,
    },
    &LogicOutput0CfgPB,
};


/* LCU Logic Output Configuration */
const Lcu_Ip_LogicOutputConfigType LogicOutput1CfgPB =
{
    /* boolean EnDebugMode   */ (boolean)FALSE,
    /* uint16 LutControl     */ 0XCCCCU,
    /* uint16 LutRiseFilt    */ 5,//1000,//30000U,//5U
    /* uint16 LutFallFilt    */ 5,//1000,//30000U,//5U
    /* boolean EnLutDma      */ (boolean)FALSE,
    /* boolean EnForceDma    */ (boolean)FALSE,
    /* boolean EnLutInt      */ (boolean)FALSE,
    /* boolean EnForceInt    */ (boolean)FALSE,
    /* boolean InvertOutput  */ (boolean)FALSE,
    /* uint8 ForceSignalSel  */ 0U,
    /* uint8 ClearForceMode  */ LCU_IP_CLEAR_FORCE_SIGNAL_IMMEDIATE,
    /* uint8 ForceSyncSel    */ LCU_IP_SYNC_SEL_INPUT0,
};

const Lcu_Ip_LogicOutputType LogicOutput1PB =
{
    {
        /* uint8 HwInstId               */ LCU_IP_HW_INST_1,
        /* uint8 HwLcOutputId           */ 1U,
        /* Lcu_Ip_Callback IntCallback  */ NULL_PTR,
    },
    &LogicOutput1CfgPB,
};


/* LCU Logic Output Configuration */
const Lcu_Ip_LogicOutputConfigType LogicOutput2CfgPB =
{
    /* boolean EnDebugMode   */ (boolean)TRUE,
    /* uint16 LutControl     */ 0X4182U,
    /* uint16 LutRiseFilt    */ 2,//30000U,//4U,
    /* uint16 LutFallFilt    */ 2,//30000U,//4U,
    /* boolean EnLutDma      */ (boolean)FALSE,
    /* boolean EnForceDma    */ (boolean)FALSE,
    /* boolean EnLutInt      */ (boolean)FALSE,
    /* boolean EnForceInt    */ (boolean)FALSE,
    /* boolean InvertOutput  */ (boolean)FALSE,
    /* uint8 ForceSignalSel  */ 0U,
    /* uint8 ClearForceMode  */ LCU_IP_CLEAR_FORCE_SIGNAL_IMMEDIATE,
    /* uint8 ForceSyncSel    */ LCU_IP_SYNC_SEL_INPUT0,
};

const Lcu_Ip_LogicOutputType LogicOutput2PB =
{
    {
        /* uint8 HwInstId               */ LCU_IP_HW_INST_1,
        /* uint8 HwLcOutputId           */ 2U,
        /* Lcu_Ip_Callback IntCallback  */ NULL_PTR,
    },
    &LogicOutput2CfgPB,
};


/* LCU Logic Output Configuration */
const Lcu_Ip_LogicOutputConfigType LogicOutput3CfgPB =
{
    /* boolean EnDebugMode   */ (boolean)TRUE,
    /* uint16 LutControl     */ 0X2814U,
    /* uint16 LutRiseFilt    */ 2,//30000U,//4U,
    /* uint16 LutFallFilt    */ 2,//30000U,//4U,
    /* boolean EnLutDma      */ (boolean)FALSE,
    /* boolean EnForceDma    */ (boolean)FALSE,
    /* boolean EnLutInt      */ (boolean)FALSE,
    /* boolean EnForceInt    */ (boolean)FALSE,
    /* boolean InvertOutput  */ (boolean)FALSE,
    /* uint8 ForceSignalSel  */ 0U,
    /* uint8 ClearForceMode  */ LCU_IP_CLEAR_FORCE_SIGNAL_IMMEDIATE,
    /* uint8 ForceSyncSel    */ LCU_IP_SYNC_SEL_INPUT0,
};

const Lcu_Ip_LogicOutputType LogicOutput3PB =
{
    {
        /* uint8 HwInstId               */ LCU_IP_HW_INST_1,
        /* uint8 HwLcOutputId           */ 3U,
        /* Lcu_Ip_Callback IntCallback  */ NULL_PTR,
    },
    &LogicOutput3CfgPB,
};

const Lcu_Ip_LogicOutputType * const Lcu_Ip_ppxLogicOutputArrayPB[LCU_IP_NOF_CFG_LOGIC_OUTPUTS] =
{
    &LogicOutput0PB,
    &LogicOutput1PB,
    &LogicOutput2PB,
    &LogicOutput3PB,
};


/* LCU InitType Configuration */
const Lcu_Ip_InitType Lcu_Ip_xLcuInitPB =
{
    /* Lcu_Ip_HwOutputStateType ** ppxHwOutputStateArray;                       */ &Lcu_Ip_ppxHwOutputStateArrayPB[0],
    /* const Lcu_Ip_LogicInstanceType * const * ppxLogicInstanceConfigArray     */ &Lcu_Ip_ppxLogicInstanceArrayPB[0],
    /* const Lcu_Ip_LogicOutputConfigType * const pxLogicOutputResetConfigArray */ &Lcu_Ip_xLogicOutputResetConfig,
    /* const Lcu_Ip_LogicInputConfigType * const pxLogicInputResetConfigArray   */ &Lcu_Ip_xLogicInputResetConfig,
    /* const Lcu_Ip_LogicOutputType * const * ppxLogicOutputConfigArray         */ &Lcu_Ip_ppxLogicOutputArrayPB[0],
    /* const Lcu_Ip_LogicInputType * const * ppxLogicInputConfigArray           */ &Lcu_Ip_ppxLogicInputArrayPB[0],
};

#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref LCU_IP_PBCFG_C_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"


#ifdef __cplusplus
}
#endif

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
