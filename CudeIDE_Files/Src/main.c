
#include <stdint.h>
#include "main.h"
/* -- 15/10/2021:
 *      Tasks:
 *      1. USART!!!!!!!!!!!!!!!!!!!!!!!!!
*/
uint8_t current_enc;
uint16_t enc_1_sys[NUM_ELEMENTS];
uint8_t enc_2_sys[NUM_ELEMENTS];
uint8_t enc_3_sys[NUM_ELEMENTS];
uint8_t ddo1;
uint8_t ddo2;
extern uint8_t data;

int i;

void data_collection(){ //empty now

}

int main(void)
{
#ifdef TRANS_MODE
	gpio_diodes_init();
	usart1_init();
#endif

#ifdef ENCODER_MODE
	gpio_init_encoder_1();
	tim3_init_encoder1();
#endif
   while(1){
	   position_tilt_data();
	   test_trans_data();
#ifdef BASIC_TRANS_TEST
	   for (int i = 0; i < 25; i++){
		   USART1->TDR = i;
		   while(!(USART_ISR_TXE));
	   }
#endif
   }
}
