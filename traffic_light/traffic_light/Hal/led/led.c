/*
 * led.c
 *
 * Created: 11/7/2023 9:49:04 AM
 *  Author: BASEM
 */ 
#include "led.h"


void H_Led_Init(u8 Local_u8_Led)
{
	switch (Local_u8_Led)
	{
		case LED0: M_Dio_PinMode(LED0_PIN,OUTPUT);    break;
		case LED1: M_Dio_PinMode(LED1_PIN,OUTPUT);    break;
		case LED2: M_Dio_PinMode(LED2_PIN,OUTPUT);    break;
		default:                                   break;
	}
}

void H_Led_On(u8 Local_u8_Led)
{
	switch (Local_u8_Led)
	{
		case LED0: M_Dio_PinWrite(LED0_PIN,HIGH);    break;
		case LED1: M_Dio_PinWrite(LED1_PIN,HIGH);    break;
		case LED2: M_Dio_PinWrite(LED2_PIN,HIGH);    break;
		default:                                  break;
	}
}


void H_Led_Off(u8 Local_u8_Led)
{
	switch (Local_u8_Led)
	{
		case LED0: M_Dio_PinWrite(LED0_PIN,LOW);    break;
		case LED1: M_Dio_PinWrite(LED1_PIN,LOW);    break;
		case LED2: M_Dio_PinWrite(LED2_PIN,LOW);    break;
		default:                                 break;
	}
}

void H_Led_Tog(u8 Local_u8_Led)
{
	switch (Local_u8_Led)
	{
		case LED0: M_Dio_PinTog(LED0_PIN);    break;
		case LED1: M_Dio_PinTog(LED1_PIN);    break;
		case LED2: M_Dio_PinTog(LED2_PIN);    break;
		default:                           break;
	}
}

void H_Led_BlinkOnce(u8 Local_u8_Led)
{
	switch (Local_u8_Led)
	{
		case LED0:
		M_Dio_PinWrite(LED0_PIN,HIGH);
		_delay_ms(LED_DELAY_TIME);
		M_Dio_PinWrite(LED0_PIN,LOW);
		break;
		case LED1:
		M_Dio_PinWrite(LED1_PIN,HIGH);
		_delay_ms(LED_DELAY_TIME);
		M_Dio_PinWrite(LED1_PIN,LOW);
		break;
		case LED2: M_Dio_PinTog(LED2_PIN);
		M_Dio_PinWrite(LED2_PIN,HIGH);
		_delay_ms(LED_DELAY_TIME);
		M_Dio_PinWrite(LED2_PIN,LOW);
		break;
		default:                      break;
	}
}