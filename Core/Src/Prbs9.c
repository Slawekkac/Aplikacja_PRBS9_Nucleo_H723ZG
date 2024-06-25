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
  * @brief  generate PRBS9 signal for bode plot system ID
  *         polynomial x^9 + x^5 + 1
  * @param  Prbs_t *p
  * @retval int16_t prbs value
  */
uint16_t prbs(prbs_t *p)
{

	p->newbit = (((p->currreg >> SHIFTR_PRBS9) ^ (p->currreg >> SHIFTR_PRBS5)) & MASK_NEWBIT);
	p->currreg = ((p->currreg << SHIFTL_PRBS1) | p->newbit) & MAX_PRBS9;

	return p->newbit;
}