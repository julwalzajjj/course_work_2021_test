/*
 * encoder1.h
 *
 *  Created on: 29 сент. 2021 г.
 *      Author: Jul
 */

#ifndef ENCODER1_H_
#define ENCODER1_H_

#include "stm32f0xx.h"
#include <stdint.h>
#include "main.h"

void position_data();
void gpio_init_encoder_1();
void tim3_init_encoder1();

#endif /* ENCODER1_H_ */
