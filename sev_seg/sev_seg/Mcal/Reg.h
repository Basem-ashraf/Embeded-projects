/*
 * Reg.h
 *
 * Created: 12/3/2023 9:47:15 PM
 *  Author: BASEM
 */ 


#ifndef REG_H_
#define REG_H_

#include "STDtype.h"

#define PINA   *(volatile u8*)0x39
#define DDRA   *(volatile u8*)0x3A
#define PORTA   *(volatile u8*)0x3B

#define PINB   *(volatile u8*)0x36
#define DDRB   *(volatile u8*)0x37
#define PORTB   *(volatile u8*)0x38

#define PINC   *(volatile u8*)0x33
#define DDRC   *(volatile u8*)0x34
#define PORTC   *(volatile u8*)0x35

#define PIND   *(volatile u8*)0x30
#define DDRD   *(volatile u8*)0x31
#define PORTD   *(volatile u8*)0x32




#endif /* REG_H_ */