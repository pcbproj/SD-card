#include "main.h"

/* Проект для SD-card: 
что должно выполняться на SD-карте? Что будет делать этот проект?
	- можно создать файловую систему и текстовый файл, который можно редактировать?
	- SD-карта удобна тем, что ее можно в КП подключить и считать и анализоровать большие массивы данных.
	С чем у МК возникают сложности.
	- Какая чатота записи данных на SD_карту с алиэкспресса? Лучше писать массивами, чем каждую выборку отдельно.


*/


uint16_t BTN_ms_counter;



void SysTick_Handler(void){		// прерывание от Systick таймера, выполняющееся с периодом 1 мкс
	timer_counter( &BTN_ms_counter );
}




int main(void) {
	
	RCC_Init();

	GPIO_Init();

	SD_Card_Init();

	USART1_Init();	// USART1 for debug terminal use only. baud rate = 115200

	SysTick_Config( SYSTICK_TIMER_CONST );

	
	// Иницилизация карты
    //SD_Card_Init();
    
    // Получаем информацию о карте
    //SD_GetCardInfo(&SDCardInfo);

	// Выбор карты и настройка режима работы
    //SD_SelectDeselect((uint32_t) (SDCardInfo.RCA << 16));
    //SD_SetDeviceMode(SD_POLLING_MODE);
    
    // И вот наконец-то запись и чтение
    //SD_WriteBlock(0x00, writeBuffer, 512);
    //SD_ReadBlock(0x00, readBuffer, 512);

	


	printf("--- System Started ---- \n");
	
	LED1_OFF();
	LED2_OFF();
	LED3_OFF();

	while (1){

		if (!SD_CD_CHECK()) LED1_ON();
		else LED1_OFF();



	}	// while(1)
}	// main()

/*************************** End of file ****************************/
