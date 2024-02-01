/*
 * dio.c
 *
 * Created: 11/7/2023 9:03:57 AM
 *  Author: BASEM
 */ 
#include "Dio.h"


void M_Dio_PinMode(u8 Local_u8_Num, u8 Local_u8_Mode) //Local_u8_Pin to control pins,
{
	u8 Local_u8_Pin=Local_u8_Num % 10;
	u8 Local_u8_Port=Local_u8_Num / 10;
	switch (Local_u8_Mode)
	{
		case OUTPUT:
		switch (Local_u8_Port)
		{
			case 1: SetBit(DDRA,Local_u8_Pin); break;//PD3->OUTPUT
			case 2: SetBit(DDRB,Local_u8_Pin); break;//PD3->OUTPUT
			case 3: SetBit(DDRC,Local_u8_Pin); break;//PD3->OUTPUT
			case 4: SetBit(DDRD,Local_u8_Pin); break;//PD3->OUTPUT
			default:                           break;
		}
		break;
		case INPUT:
		switch (Local_u8_Port)
		{
			case 1: ClrBit(DDRA,Local_u8_Pin); break;//PD3->OUTPUT
			case 2: ClrBit(DDRB,Local_u8_Pin); break;//PD3->OUTPUT
			case 3: ClrBit(DDRC,Local_u8_Pin); break;//PD3->OUTPUT
			case 4: ClrBit(DDRD,Local_u8_Pin); break;//PD3->OUTPUT
			default:                           break;
		}
		break;
		
		default:
		break;
	}
}
void M_Dio_PinWrite(u8 Local_u8_Num, u8 Local_u8_Mode)
{
	//SetBit(PORTD,3); //PD3-> HIGH write 5v
	u8 Local_u8_Pin=Local_u8_Num % 10;
	u8 Local_u8_Port=Local_u8_Num / 10;
	switch (Local_u8_Mode)
	{
		case HIGH:
		switch (Local_u8_Port)
		{
			case 1: SetBit(PORTA,Local_u8_Pin); break;//PD3->OUTPUT
			case 2: SetBit(PORTB,Local_u8_Pin); break;//PD3->OUTPUT
			case 3: SetBit(PORTC,Local_u8_Pin); break;//PD3->OUTPUT
			case 4: SetBit(PORTD,Local_u8_Pin); break;//PD3->OUTPUT
			default:                           break;
		}
		break;
		case LOW:
		switch (Local_u8_Port)
		{
			case 1: ClrBit(PORTA,Local_u8_Pin); break;//PD3->OUTPUT
			case 2: ClrBit(PORTB,Local_u8_Pin); break;//PD3->OUTPUT
			case 3: ClrBit(PORTC,Local_u8_Pin); break;//PD3->OUTPUT
			case 4: ClrBit(PORTD,Local_u8_Pin); break;//PD3->OUTPUT
			default:                           break;
		}
		break;
		
		default:
		break;
	}
}

u8 M_Dio_PinRead(u8 Local_u8_Num)
{
	u8 Local_u8_Pin=Local_u8_Num % 10;
	u8 Local_u8_Port=Local_u8_Num / 10;
	u8 Local_u8_PinReading=0;
	switch (Local_u8_Port)
	{
		case A:Local_u8_PinReading = GetBit(PINA,Local_u8_Pin); break;
		case B:Local_u8_PinReading = GetBit(PINB,Local_u8_Pin); break;
		case C:Local_u8_PinReading = GetBit(PINC,Local_u8_Pin); break;
		case D:Local_u8_PinReading = GetBit(PIND,Local_u8_Pin); break;
		default:                                                break;
	}
	return Local_u8_PinReading;
}

void M_Dio_PinTog(u8 Local_u8_Num)
{
	u8 Local_u8_Pin=Local_u8_Num % 10;
	u8 Local_u8_Port=Local_u8_Num / 10;
	
	switch (Local_u8_Port)
	{
		case 1:TogBit(PORTA,Local_u8_Pin); break;
		case 2:TogBit(PORTB,Local_u8_Pin); break;
		case 3:TogBit(PORTC,Local_u8_Pin); break;
		case 4:TogBit(PORTD,Local_u8_Pin); break;
		default:                                                break;
	}
}