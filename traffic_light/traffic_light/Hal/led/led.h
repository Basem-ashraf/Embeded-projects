/*
 * led.h
 *
 * Created: 11/7/2023 9:48:49 AM
 *  Author: BASEM
 */ 


#ifndef LED_H_
#define LED_H_


/*************_INCLUDES_*************/
#include "LedCfg.h"
#include "Dio.h"
#include "STD_type.h"

# define F_CPU 1600000UL
#include <util/delay.h>

/*************_MACROS_*************/
#define LED0   0
#define LED1   1
#define LED2   2
/*************_PROTOTYPES_*************/
void H_Led_Init(u8);
void H_Led_On(u8);
void H_Led_Off(u8);
void H_Led_Tog(u8);
void H_Led_BlinkOnce(u8);




#endif /* LED_H_ */