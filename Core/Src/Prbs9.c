/*
 * Prbs9.c
 *
 *  Created on: Jun 25, 2024
 *      Author: Slawek
 */


/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
/* Private includes ----------------------------------------------------------*/
#include "Prbs9.h"

/* Private typedef -----------------------------------------------------------*/


/* Private define ------------------------------------------------------------*/
#define MASK_NEWBIT			0x01
#define SHIFTR_PRBS9		8
#define SHIFTR_PRBS5		4
#define SHIFTL_PRBS1		1
/* Private macro -------------------------------------------------------------*/


/* Private variables ---------------------------------------------------------*/


/* Global function prototypes ------------------------------------------------*/
uint16_t prbs(prbs_t *p);

/* Private function prototypes -----------------------------------------------*/


/* Private user code ---------------------------------------------------------*/



/* Global user code -----------------------------------------------------------*/
/**
  * @brief  generate PRBS9 signal
  *         polynomial x^9 + x^5 + 1
  * @param  prbs_t *p
  * @retval uint16_t prbs value
  */
uint16_t prbs(prbs_t *p)
{

	p->newbit = (((p->lfsr >> SHIFTR_PRBS9) ^ (p->lfsr >> SHIFTR_PRBS5)) & MASK_NEWBIT);
	p->lfsr = ((p->lfsr << SHIFTL_PRBS1) | p->newbit) & MLS_PRBS9;

	return p->newbit;
}
