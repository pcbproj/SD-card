#ifndef SDCARD_H
#define SDCARD_H


#include "stm32f407xx.h"

//-------- SDIO pinout----------------
// WARNING: if SDIO pinout changed, then SD_GPIO_Init() nust be edit
#define SDIO_PORT			GPIOC
#define SDIO_CMD_PORT		GPIOD

#define SD_CD_PORT			GPIOD

#define SDIO_D0_PIN			8
#define SDIO_D1_PIN			9
#define SDIO_D2_PIN			10
#define SDIO_D3_PIN			11
#define SDIO_CLK_PIN		12
#define SDIO_CMD_PIN		2

#define SD_CD_PIN			3







void SD_GPIO_Init(void);	// SDcard gpio init

// SDIO init, configuration

// SDcard operation functions







#endif