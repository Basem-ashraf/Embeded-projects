/*
 * main.c
 *
 * Created: 12/20/2023 3:08:56 AM
 *  Author: BASEM
 */ 
#include "BitMath.h"
#include "STDType.h"
#include "Reg.h"
#include "Dio.h"
#include "LCD.h"
#define F_CPU 16000000UL
#include <util/delay.h>


int main(void)
{
  H_Lcd_Init();
  M_Dio_PinMode(PB7,OUTPUT); 
  M_Dio_PinMode(PC0,OUTPUT);
  M_Dio_PinMode(PC1,OUTPUT);
  M_Dio_PinMode(PC2,OUTPUT);
  u8 GREEN[]="GREEN";
  u8 Yellow[]= "YELLOW";
  u8 Red[]="RED";
    while(1)
    {
     M_Dio_PinWrite(PC0,HIGH);
	 H_Lcd_WriteString(GREEN);
	 _delay_ms(40);
	 M_Dio_PinWrite(PC0,LOW);
	 H_Lcd_WriteClear();
	 _delay_ms(5);
	 
	 
	 M_Dio_PinWrite(PC1,HIGH);
	 M_Dio_PinWrite(PB7,HIGH);
	 H_Lcd_WriteString(Yellow);
	  _delay_ms(40);
	 M_Dio_PinWrite(PC1,LOW);
	 M_Dio_PinWrite(PB7,LOW);
	 H_Lcd_WriteClear();
	   _delay_ms(5);
	   
	   
	 M_Dio_PinWrite(PC2,HIGH);
	 H_Lcd_WriteString(Red);
	   _delay_ms(30); 
	  M_Dio_PinWrite(PC2,LOW);
	  H_Lcd_WriteClear();
	    _delay_ms(5);  
    }
}