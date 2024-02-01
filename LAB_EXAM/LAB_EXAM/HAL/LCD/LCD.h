/*
 * LCD.h
 *
 * Created: 12/20/2023 3:12:39 AM
 *  Author: BASEM
 */ 


#ifndef LCD_H_
#define LCD_H_

/*************************************************_INCLUDES_********************************************/
#include "LCD_Cfg.h"
#include "Dio.h"
#include "STDType.h"
#define F_CPU 16000000UL
#include <util/delay.h>

/**************************************************_MACROS_*********************************************/
#define _8_BIT_BIT   1
#define _4_BIT_BIT   2
#define  NULL_     '\0'
#define LCD_SHIFT_LEFT  0x07
#define LCD_SHIFT_RIGHT  0x03

#define LCD_4_BIT_MODE_1 0x38
#define LCD_4_BIT_MODE_2 0x33
#define LCD_4_BIT_MODE_3 0x32

#define LCD_8_BIT_MODE  0x28
#define DISPLAY_ON_CURSOT_OFF 0x0C
#define LCD_CLEAR 0x01
#define LCD_RETURN_HOME 0x02
/************************************************_PROTOTYPES_********************************************/

void H_Lcd_Init(void);
void H_Lcd_WriteCharacter(u8);
void H_Lcd_WriteCommand(u8);
void H_Lcd_WriteString(u8*);
void H_Lcd_WriteNumber(s32);
void H_Lcd_WriteClear(void);
void H_Lcd_GoTo(u8,u8);
void H_Lcd_ShiftRight(void);
void H_Lcd_ShiftLeft(void);




#endif /* LCD_H_ */