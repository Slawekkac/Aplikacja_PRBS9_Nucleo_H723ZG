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
	uint16_t start; 	// start lfsr value
	uint16_t lfsr; 		// current lfsr register - linear shift feedback register
	uint16_t newbit; 	// current newbit
} prbs_t;

/* Exported constants --------------------------------------------------------*/
#define MLS_PRBS9			0x1FF	//maximum lenght sequence

/* Exported macro ------------------------------------------------------------*/


/* Exported functions prototypes ---------------------------------------------*/
uint16_t prbs(prbs_t *p);

/* Private defines -----------------------------------------------------------*/

#endif /* INC_PRBS9_H_ */
