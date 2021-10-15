/*
 * usart.c
 *
 *  Created on: Sep 25, 2021
 *      Author: Jul
 */

/*--15/10/2021
 * tasks:
 * uint8_t spi_statusTXE(){ ---------сделать эту функцию-------------, получение данных
	return ((SPI1->SR && SPI_SR_TXE) >> SPI_SR_TXE_Pos & 0x0FF);
---------------------------------------------------------------------------------------
 */
/* 8 bit angle-data (32 dec max) + 2 bit position-data*/

#include "main.h"
#include "usart.h"

uint8_t data;

void USART1_IRQHandler(){
	if((USART1->ISR & USART_CR1_RXNEIE) == USART_CR1_RXNEIE){
		USART1->ISR |= USART_ISR_RXNE;
		data = USART1->RDR;
		switch (data)
		{
		case 1:
			GPIOC->ODR |= GPIO_ODR_8;
			USART1->TDR = 0x18;
		case 2:
			GPIOC->ODR |= GPIO_ODR_9;
			USART1->TDR = 0x15;
		}
	}
}

void gpio_diodes_init()
{
	RCC->AHBENR |= RCC_AHBENR_GPIOCEN;
	GPIOC->MODER |= GPIO_MODER_MODER8_0 | GPIO_MODER_MODER9_0;//output!!!!!!
}

void usart1_gpio_init(){
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;
	//9 - TX, 10 - RX
	GPIOA->MODER |= GPIO_MODER_MODER9_1 | GPIO_MODER_MODER10_1; //AF mode
		//AFRH - for older ports |= (1<<4)|(1<<8) - first AF
	GPIOA->AFR[1] |= (0x01 << GPIO_AFRH_AFSEL9_Pos) | (0x01 << GPIO_AFRH_AFSEL10_Pos); /* (4) */
}

void usart1_init(){
	usart1_gpio_init();
	RCC->APB2ENR |= RCC_APB2ENR_USART1EN;
	USART1->BRR |= 8000000/BAUD;
	USART1->CR3 |= USART_CR3_OVRDIS; //1 - data re- whrite
	USART1->CR1 |= USART_CR1_TE | USART_CR1_RE; //transmitter on
	//USART1->CR1 &= ~(USART_CR1_M1_0 | USART_CR1_M1_1);
	USART1->CR1 |= USART_CR1_TXEIE | USART_CR1_RXNEIE;

	//NVIC_EnableIRQ(USART1_IRQn);
	//NVIC_SetPriority(USART1_IRQn, 2);
	USART1->CR1 |= USART_CR1_UE;
}

//void usart_getData()


