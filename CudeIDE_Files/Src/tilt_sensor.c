/*
 * tilt_sensor.c
 *
 *  Created on: 15 окт. 2021 г.
 *      Author: Jul
 */

#include "tilt_sensor.h"

extern uint32_t ddo1;
extern uint32_t ddo2;

void gpio_init_tilt(){
	GPIOA->MODER &= ~GPIO_MODER_MODER12; //input mode
	GPIOA->MODER &= ~GPIO_MODER_MODER11;

	#ifdef PUPDR_ON
		GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR12_0; //pull down
		GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR11_0;
		GPIOA->PUPDR |= GPIO_PUPDR_PUPDR12_1; //pull down
		GPIOA->PUPDR |= GPIO_PUPDR_PUPDR11_1;
	#endif
}

void position_tilt_data(){
	//ddo1 and ddo2 names of the ports SW-520D
    /*
     * ddo1 - 1, ddo2 - 1 : down and neutral positions
     * ddo1 - 0, ddo2 - 0 : up position
     * ddo1 - 1, ddo2 - 0 : right position
     * ddo1 - 0, ddo2 - 1 : left position
     */
	ddo1 = (GPIOA->IDR & GPIO_IDR_12) >> 12; //inversion for convenience
	ddo2 = (GPIOA->IDR & GPIO_IDR_11) >> 11;
}
