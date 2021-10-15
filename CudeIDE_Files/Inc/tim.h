/*
 * tim.h
 *
 *  Created on: Sep 30, 2021
 *      Author: Jul
 */

#ifndef TIM_H_
#define TIM_H_

#include "stm32f0xx.h"
#include <stdint.h>

#define READ_DELAY() TIM3->CR1 |= TIM_CR1_CEN



#endif /* TIM_H_ */
