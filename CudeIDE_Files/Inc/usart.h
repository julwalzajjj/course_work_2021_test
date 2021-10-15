/*
 * usart.h
 *
 *  Created on: 30 сент. 2021 г.
 *      Author: user
 */


#ifndef USART_H_
#define USART_H_

#include "stm32f0xx.h"
#include <stdint.h>
#include "main.h"

#define SET() (USART_CR1_TXEIE)

void gpio_diodes_init();
void usart1_init();
void usart1_gpio_init();


#endif /* USART_H_ */
