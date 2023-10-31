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
#include "Trgmux_Ip_Cfg.h"

/*==================================================================================================
*                                    SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define TRGMUX_IP_Init_PBCFG_MODULE_ID_C                     255
#define TRGMUX_IP_Init_PBCFG_VENDOR_ID_C                     43
#define TRGMUX_IP_Init_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define TRGMUX_IP_Init_PBCFG_AR_RELEASE_MINOR_VERSION_C      7
#define TRGMUX_IP_Init_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define TRGMUX_IP_Init_PBCFG_SW_MAJOR_VERSION_C              3
#define TRGMUX_IP_Init_PBCFG_SW_MINOR_VERSION_C              0
#define TRGMUX_IP_Init_PBCFG_SW_PATCH_VERSION_C              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Trgmux_Ip_Init_PBcfg.c file and Trgmux_Ip_Cfg.h file are of the same vendor */
#if (TRGMUX_IP_Init_PBCFG_VENDOR_ID_C != TRGMUX_IP_CFG_VENDOR_ID)
    #error "Trgmux_Ip_Init_PBcfg.c and Trgmux_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Trgmux_Ip_Init_PBcfg.c file and Trgmux_Ip_Cfg.h file are of the same Autosar version */
#if ((TRGMUX_IP_Init_PBCFG_AR_RELEASE_MAJOR_VERSION_C != TRGMUX_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (TRGMUX_IP_Init_PBCFG_AR_RELEASE_MINOR_VERSION_C != TRGMUX_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (TRGMUX_IP_Init_PBCFG_AR_RELEASE_REVISION_VERSION_C != TRGMUX_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Trgmux_Ip_Init_PBcfg.c and Trgmux_Ip_Cfg.h are different"
#endif

/* Check if Trgmux_Ip_Init_PBcfg.c file and Trgmux_Ip_Cfg.h file are of the same Software version */
#if ((TRGMUX_IP_Init_PBCFG_SW_MAJOR_VERSION_C != TRGMUX_IP_CFG_SW_MAJOR_VERSION) || \
     (TRGMUX_IP_Init_PBCFG_SW_MINOR_VERSION_C != TRGMUX_IP_CFG_SW_MINOR_VERSION) || \
     (TRGMUX_IP_Init_PBCFG_SW_PATCH_VERSION_C != TRGMUX_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Trgmux_Ip_Init_PBcfg.c and Trgmux_Ip_Cfg.h are different"
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
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/* TRGMUX Logic Trigger Configuration */

const Trgmux_Ip_LogicTriggerType Trgmux_Ip_LogicTrigger0ConfigPB =
{
    /* uint8 LogicChannel; */   TRGMUX_LOGIC_GROUP_0_TRIGGER_0,
    /* uint8 Output; */         TRGMUX_IP_OUTPUT_EMIOS0_CH5_9_IPP_IND_CH6,//TRGMUX_IP_OUTPUT_EMIOS0_CH5_9_IPP_IND_CH5,//TRGMUX_IP_OUTPUT_SIUL2_8_11_OUT8,
    /* uint8 Input; */          TRGMUX_IP_INPUT_LCU1_LC0_OUT_I2,
    /* uint8 HwInstId; */       TRGMUX_IP_HW_INST_0,
    /* boolean Lock; */         (boolean)FALSE,
};

const Trgmux_Ip_LogicTriggerType Trgmux_Ip_LogicTrigger1ConfigPB =
{
    /* uint8 LogicChannel; */   TRGMUX_LOGIC_GROUP_0_TRIGGER_1,
    /* uint8 Output; */         TRGMUX_IP_OUTPUT_EMIOS0_CH5_9_IPP_IND_CH7,//TRGMUX_IP_OUTPUT_EMIOS0_CH5_9_IPP_IND_CH6,//TRGMUX_IP_OUTPUT_SIUL2_8_11_OUT8
    /* uint8 Input; */          TRGMUX_IP_INPUT_LCU1_LC0_OUT_I3,
    /* uint8 HwInstId; */       TRGMUX_IP_HW_INST_0,
    /* boolean Lock; */         (boolean)FALSE,
};

const Trgmux_Ip_LogicTriggerType Trgmux_Ip_LogicTrigger2ConfigPB =
{
    /* uint8 LogicChannel; */   TRGMUX_LOGIC_GROUP_1_TRIGGER_0,
    /* uint8 Output; */         TRGMUX_IP_OUTPUT_LCU1_0_INP_I0,
    /* uint8 Input; */          TRGMUX_IP_INPUT_SIUL2_IN2,
    /* uint8 HwInstId; */       TRGMUX_IP_HW_INST_0,
    /* boolean Lock; */         (boolean)FALSE,
};

const Trgmux_Ip_LogicTriggerType Trgmux_Ip_LogicTrigger3ConfigPB =
{
    /* uint8 LogicChannel; */   TRGMUX_LOGIC_GROUP_1_TRIGGER_1,
    /* uint8 Output; */         TRGMUX_IP_OUTPUT_LCU1_0_INP_I1,
    /* uint8 Input; */          TRGMUX_IP_INPUT_SIUL2_IN3,
    /* uint8 HwInstId; */       TRGMUX_IP_HW_INST_0,
    /* boolean Lock; */         (boolean)FALSE,
};

/* TRGMUX Initialization Structure */
const Trgmux_Ip_InitType Trgmux_Ip_xTrgmuxInitPB =
{
    /* Trgmux_Ip_LogicTriggerType * paxLogicTrigger[]; */
    {
		&Trgmux_Ip_LogicTrigger0ConfigPB,
		&Trgmux_Ip_LogicTrigger1ConfigPB,
		&Trgmux_Ip_LogicTrigger2ConfigPB,
		&Trgmux_Ip_LogicTrigger3ConfigPB,
    },
};

#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#ifdef __cplusplus
}
#endif

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
