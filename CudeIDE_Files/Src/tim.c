/*
 * tim.c
 *
 *  Created on: Sep 30, 2021
 *      Author: Jul
 */

#include "tim.h"

void TIM6_DAC_IRQHandler(){
	TIM6->SR &= ~TIM_SR_UIF;
	//функция передачи по usart одного значения энкодера
	TIM6->CR1&=~TIM_CR1_CEN;
}

void tim6_init_delay(){
	RCC->APB1ENR |= RCC_APB1ENR_TIM6EN;
	TIM6->CR1 |= TIM_CR1_OPM; //one pulse mode
	TIM6->PSC = 80-1;
	TIM6->ARR = 10-1;
	TIM6->DIER |= TIM_DIER_UIE;
}
