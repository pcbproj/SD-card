#include "main.h"





int main(void) {
	
	RCC_Init();

	GPIO_Init();

	SysTick_Config(SYSTICK_TIMER_CONST);


	while (1){



	}	// while(1)
}	// main()

/*************************** End of file ****************************/
