/*
 * encoder1.c
 *
 *  Created on: 29 сент. 2021 г.
 *      Author: Jul
 *
 * -- 15/10/2021:
 *      Tasks:
 *      1. Поменять ARR, посмотреть соотношение углов
 *      2. check PUPDR
 *
 */

#include "encoder1.h"
#include "stm32f0xx.h"
#include <stdint.h>

uint8_t data;
uint8_t data_tilt;
uint8_t pac_data;
extern uint8_t enc_1_sys[NUM_ELEMENTS];
extern uint8_t ddo1;
extern uint8_t ddo2;

/* Encoder works with TI1FP1 and TI1FP2
 * Its TIM3_CH1 - PA6 and TIM3_CH2 - PA7
 */
void test_trans_data(){
	data = (uint8_t)TIM3->CNT;
	ddo1 = ddo1 << 1;
	data_tilt = (ddo1 + ddo2) << 6; //st on msb bits
	pac_data = enc_1_sys[12] | data_tilt;
}

void gpio_init_encoder_1(){
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN; //clocking
#ifdef ENCODER_KY40
	GPIOA->MODER |= GPIO_MODER_MODER6_1; //alternative
	GPIOA->MODER |= GPIO_MODER_MODER7_1;

	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR6; //сбрасывание подтягивания резисторов
	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR7;

	GPIOA->AFR[0] |= (1UL << GPIO_AFRL_AFSEL6_Pos); //AF
	GPIOA->AFR[0] |= (1UL << GPIO_AFRL_AFSEL7_Pos);
#endif
}

//remove it into tim.h or delete tim.h
void tim3_init_encoder1(){
	RCC->APB1ENR |= RCC_APB1ENR_TIM3EN; //clocking
	/*	01: CC2 channel is configured as input, IC2 is mapped on TI2
		10: CC2 channel is configured as input, IC2 is mapped on TI1	*/
	TIM3->CCMR1 |= (TIM_CCMR1_CC1S_0 | TIM_CCMR1_CC2S_1);
	TIM3->CCMR1 &= ~(TIM_CCMR1_CC1S_1 | TIM_CCMR1_CC2S_0);
	/*	00: noninverted/rising edge
			Circuit is sensitive to TIxFP1 rising edge (capture, trigger in reset, external clock or trigger
			mode), TIxFP1 is not inverted (trigger in gated mode, encoder mode).	*/
	TIM3->CCER &= (~TIM_CCER_CC1P);
	TIM3->CCER &= (~TIM_CCER_CC2P);
	TIM3->CCER &= (~TIM_CCER_CC1NP);
	TIM3->CCER &= (~TIM_CCER_CC2NP);

	/*	001: Encoder mode 1 - Counter counts up/down on TI2FP1 edge depending on TI1FP2
			 level.	*/
	TIM3->SMCR &= ~(TIM_SMCR_SMS);
	TIM3->SMCR |= (TIM_SMCR_SMS_0);
	/*	1111 - 1/32 rate	*/
	TIM3->CCMR1 |= (TIM_CCMR1_IC1F_0 | TIM_CCMR1_IC1F_1 | TIM_CCMR1_IC1F_2 | TIM_CCMR1_IC1F_3);
	TIM3->CCMR1 |= (TIM_CCMR1_IC2F_0 | TIM_CCMR1_IC2F_1 | TIM_CCMR1_IC2F_2 | TIM_CCMR1_IC2F_3);

	TIM3->ARR = 30; //проверить и поставить больше в зависимости от угла
	TIM3->CR1 |= TIM_CR1_CEN;
}

