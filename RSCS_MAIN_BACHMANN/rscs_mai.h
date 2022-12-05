/**
********************************************************************************
* @file     rscs_mai.h
* @author   Bachmann electronic GmbH
* @version  $Revision: 3.90 $ $LastChangedBy: BE $
* @date     $LastChangeDate: 2013-06-10 11:00:00 $
*
* @brief    This file contains all definitions and declarations which are
*           exported by the module and can be used by other modules
*           on other CPUs.
*
********************************************************************************
* COPYRIGHT BY BACHMANN ELECTRONIC GmbH 2013
*******************************************************************************/

/* Avoid problems with multiple including */
#ifndef RSCS_MAI__H
#define RSCS_MAI__H


/*--- Defines ---*/

/* Possible SMI's and SVI's (ATTENTION: SMI numbers must be even!) */
#define RSCS_MAI_PROC_APPSTAT    100  /* SVI example */
#define RSCS_MAI_PROC_DEMOCALL   102  /* SMI example */

/* Possible error codes of software module */
#define RSCS_MAI_E_OK            0    /* Everything ok */
#define RSCS_MAI_E_FAILED       -1    /* General error */


/*--- Structures ---*/

/* Structure for SVI-call RSCS_MAI_PROC_APPSTAT */
typedef struct
{
    BOOL8   Stop;                       /* Stop application ? */
}
RSCS_MAI_APPSTAT_C;

/* Structure for SVI-Reply RSCS_MAI_PROC_APPSTAT */
typedef struct
{
    UINT32  RetCode;                    /* Return code */
    UINT32  EventCount;                 /* Event counter */
    UINT32  DelayTime;                  /* Delay for chaser light */
    BOOL8   Stop;                       /* Stop chaser light */
}
RSCS_MAI_APPSTAT_R;

/* Structure for SVI-call RSCS_MAI_DEMOCALL */
typedef struct
{
    UINT32  Spare;                      /* Not used, 0 for now */
}
RSCS_MAI_DEMOCALL_C;

/* Structure for SVI-Reply RSCS_MAI_DEMOCALL */
typedef struct
{
    SINT32  RetCode;                    /* OK or error code */
    UINT32  CallCount;                  /* Number of calls */
    CHAR    String[128];                /* String */
}
RSCS_MAI_DEMOCALL_R;


/*--- Function prototyping ---*/


/*--- Variable definitions ---*/


#endif
