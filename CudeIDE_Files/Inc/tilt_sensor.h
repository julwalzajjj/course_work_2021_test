/*
 * tilt_sensor.h
 *
 *  Created on: 15 окт. 2021 г.
 *      Author: Jul
 */

#ifndef TILT_SENSOR_H_
#define TILT_SENSOR_H_

#include <stdint.h>
#include "main.h"
#include "stm32f0xx.h"

void test_trans_data();
void gpio_init_tilt();
void position_tilt_data();

#endif /* TILT_SENSOR_H_ */
