/*
 * main.c
 *
 * Created: 11/7/2023 8:37:17 AM
 *  Author: BASEM
 */ 

#include "BitMath.h"
#include "STD_type.h"
#include "Reg.h"
#include "dio.h"
#include "led.h"
# define F_CPU 1600000UL
#include <util/delay.h>

#include <xc.h>


int main(void)
{
	
	H_Led_Init(LED2);
	H_Led_Init(LED1);
	H_Led_Init(LED0);
	
	
	while(1)
	{
		
		
		H_Led_On(LED2);
		_delay_ms(50000);
		H_Led_Off(LED2);
		_delay_ms(5000);
		
		H_Led_BlinkOnce(LED1);
		_delay_ms(500);
		H_Led_BlinkOnce(LED1);
		_delay_ms(500);
		H_Led_BlinkOnce(LED1);
		_delay_ms(500);
		H_Led_BlinkOnce(LED1);
		_delay_ms(500);
		
		
		
		
		
		H_Led_On(LED0);
		_delay_ms(50000);
		H_Led_Off(LED0);
		_delay_ms(5000);
		
	}
	
}