/*
 * Prbs9.h
 *
 *  Created on: Jun 25, 2024
 *      Author: Slawek
 */

#ifndef INC_PRBS9_H_
#define INC_PRBS9_H_



/* Includes ------------------------------------------------------------------*/


/* Private includes ----------------------------------------------------------*/


/* Exported types ------------------------------------------------------------*/
typedef struct
{
	uint16_t start; 	// start LFSR value
	uint16_t currreg; 	// current register
	uint16_t newbit; 	// current newbit
} prbs_t;

/* Exported constants --------------------------------------------------------*/
#define MAX_PRBS9			0x1FF	//511

/* Exported macro ------------------------------------------------------------*/


/* Exported functions prototypes ---------------------------------------------*/
uint16_t prbs(prbs_t *p);

/* Private defines -----------------------------------------------------------*/

#endif /* INC_PRBS9_H_ */
