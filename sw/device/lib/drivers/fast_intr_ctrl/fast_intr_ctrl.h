/*
                              *******************
******************************* H SOURCE FILE *******************************
**                            *******************                          **
**                                                                         **
** project  : X_HEEP                                                       **
** filename : fast_intr_ctrl.h  
** version  : 1                                             **
** date     : 27/03/23                                                   **
**                                                                         **
*****************************************************************************
** 
** Copyright (c) EPFL contributors.                                     
** All rights reserved.                                                                   
**                                                                         
*****************************************************************************
*/

/***************************************************************************/
/***************************************************************************/
/**
* @file   fast_intr_ctrl.h
* @date   27/03/23
* @brief  The fast interrupt controller peripheral driver 
*/

#ifndef _FAST_INTR_CTRL_H_
#define _FAST_INTR_CTRL_H_

#ifdef __cplusplus
extern "C" {
#endif

/****************************************************************************/
/**                                                                        **/
/**                            MODULES USED                                **/
/**                                                                        **/
/****************************************************************************/

#include <stddef.h>
#include <stdint.h>
#include "mmio.h"

/****************************************************************************/
/**                                                                        **/
/**                       DEFINITIONS AND MACROS                           **/
/**                                                                        **/
/****************************************************************************/

/****************************************************************************/
/**                                                                        **/
/**                       TYPEDEFS AND STRUCTURES                          **/
/**                                                                        **/
/****************************************************************************/

/**
 * Results.
 */
typedef enum fast_intr_ctrl_result {
  kFastIntrCtrlOk_e    = 0,
  kFastIntrCtrlError_e = 1,
} fast_intr_ctrl_result_t;

/**
 * Fast interrupts.
 */
typedef enum fast_intr_ctrl_fast_interrupt {
  kTimer_1_fic_e  = 0,
  kTimer_2_fic_e  = 1,
  kTimer_3_fic_e  = 2,
  kDma_fic_e      = 3,
  kSpi_fic_e      = 4,
  kSpiFlash_fic_e = 5,
  kGpio_0_fic_e   = 6,
  kGpio_1_fic_e   = 7,
  kGpio_2_fic_e   = 8,
  kGpio_3_fic_e   = 9,
  kGpio_4_fic_e   = 10,
  kGpio_5_fic_e   = 11,
  kGpio_6_fic_e   = 12,
  kGpio_7_fic_e   = 13,
} fast_intr_ctrl_fast_interrupt_t;

/****************************************************************************/
/**                                                                        **/
/**                          EXPORTED VARIABLES                            **/
/**                                                                        **/
/****************************************************************************/

/****************************************************************************/
/**                                                                        **/
/**                          EXPORTED FUNCTIONS                            **/
/**                                                                        **/
/****************************************************************************/

fast_intr_ctrl_result_t clear_fast_interrupt(fast_intr_ctrl_fast_interrupt_t fast_interrupt);

/****************************************************************************/
/**                                                                        **/
/**                          INLINE FUNCTIONS                              **/
/**                                                                        **/
/****************************************************************************/

/****************************************************************************/
/**                                                                        **/
/**                                EOF                                     **/
/**                                                                        **/
/****************************************************************************/
#ifdef __cplusplus
}
#endif

#endif  // _FAST_INTR_CTRL_H_
