#include "sdcard.h"


void SD_GPIO_Init(void){
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;


}