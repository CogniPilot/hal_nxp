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
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Trgmux_Ip_Cfg.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define TRGMUX_IP_CFG_VENDOR_ID_C                       43
#define TRGMUX_IP_CFG_AR_RELEASE_MAJOR_VERSION_C        4
#define TRGMUX_IP_CFG_AR_RELEASE_MINOR_VERSION_C        7
#define TRGMUX_IP_CFG_AR_RELEASE_REVISION_VERSION_C     0
#define TRGMUX_IP_CFG_SW_MAJOR_VERSION_C                3
#define TRGMUX_IP_CFG_SW_MINOR_VERSION_C                0
#define TRGMUX_IP_CFG_SW_PATCH_VERSION_C                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Trgmux_Ip_Cfg.c file and Trgmux_Ip_Cfg.h file are of the same vendor */
#if (TRGMUX_IP_CFG_VENDOR_ID_C != TRGMUX_IP_CFG_VENDOR_ID)
    #error "Trgmux_Ip_Cfg.c and Trgmux_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Trgmux_Ip_Cfg.c file and Trgmux_Ip_Cfg.h file are of the same Autosar version */
#if ((TRGMUX_IP_CFG_AR_RELEASE_MAJOR_VERSION_C != TRGMUX_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (TRGMUX_IP_CFG_AR_RELEASE_MINOR_VERSION_C != TRGMUX_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (TRGMUX_IP_CFG_AR_RELEASE_REVISION_VERSION_C != TRGMUX_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Trgmux_Ip_Cfg.c and Trgmux_Ip_Cfg.h are different"
#endif

/* Check if Trgmux_Ip_Cfg.c file and Trgmux_Ip_Cfg.h file are of the same Software version */
#if ((TRGMUX_IP_CFG_SW_MAJOR_VERSION_C != TRGMUX_IP_CFG_SW_MAJOR_VERSION) || \
     (TRGMUX_IP_CFG_SW_MINOR_VERSION_C != TRGMUX_IP_CFG_SW_MINOR_VERSION) || \
     (TRGMUX_IP_CFG_SW_PATCH_VERSION_C != TRGMUX_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Trgmux_Ip_Cfg.c and Trgmux_Ip_Cfg.h are different"
#endif

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
[!IF "node:value(./MclGeneral/MclTrgMux/MclEnableTrgMux)"!][!//
[!INCLUDE "Trgmux_Ip_RegOperations.m"!][!//
#define MCL_START_SEC_CONST_8
#include "Mcl_MemMap.h"

[!CALL "Trgmux_Ip_InstanceArr"!][!//

#define MCL_STOP_SEC_CONST_8
#include "Mcl_MemMap.h"
[!ENDIF!][!//


#ifdef __cplusplus
}
#endif

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
