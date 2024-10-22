#include "sdcard.h"


void SDIO_Init(void){
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;


}