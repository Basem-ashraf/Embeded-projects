/*
 * LCD.c
 *
 * Created: 12/20/2023 3:12:48 AM
 *  Author: BASEM
 */ 
#include "Lcd.h"
void H_Lcd_Init(void)
{
  #if  LCD_MODE == _8_BIT_BIT
  M_Dio_PinMode(LCD_DATA0_PIN,OUTPUT);
  M_Dio_PinMode(LCD_DATA1_PIN,OUTPUT);
  M_Dio_PinMode(LCD_DATA3_PIN,OUTPUT);
  M_Dio_PinMode(LCD_DATA4_PIN,OUTPUT);
  M_Dio_PinMode(LCD_DATA5_PIN,OUTPUT);
  M_Dio_PinMode(LCD_DATA6_PIN,OUTPUT);
  M_Dio_PinMode(LCD_DATA7_PIN,OUTPUT);
  
  M_Dio_PinMode(LCD_RS_PIN,OUTPUT);
  M_Dio_PinMode(LCD_RW_PIN,OUTPUT);
  M_Dio_PinMode(LCD_EN_PIN,OUTPUT);
  M_Dio_PinWrite(LCD_RW_PIN,LOW);
  _delay_ms(1000); // due to slow of LCD MC
  H_Lcd_WriteCommand(LCD_8_BIT_MODE); // to read from 4-bit
  H_Lcd_WriteCommand(DISPLAY_ON_CURSOT_OFF); //to display on, cursor off
  H_Lcd_WriteCommand(LCD_CLEAR); // to flash code start from
  H_Lcd_WriteCommand(LCD_RETURN_HOME);
  
  #elif LCD_MODE == _4_BIT_BIT
  M_Dio_PinMode(LCD_DATA4_PIN,OUTPUT);
  M_Dio_PinMode(LCD_DATA5_PIN,OUTPUT);
  M_Dio_PinMode(LCD_DATA6_PIN,OUTPUT);
  M_Dio_PinMode(LCD_DATA7_PIN,OUTPUT);
  
  M_Dio_PinMode(LCD_RS_PIN,OUTPUT);
  M_Dio_PinMode(LCD_RW_PIN,OUTPUT);
  M_Dio_PinMode(LCD_EN_PIN,OUTPUT);
  M_Dio_PinWrite(LCD_RW_PIN,LOW);
  _delay_ms(1000); // due to slow of LCD MC
  H_Lcd_WriteCommand(LCD_4_BIT_MODE_1); // to read from 4-bit
  H_Lcd_WriteCommand(LCD_4_BIT_MODE_2);
  H_Lcd_WriteCommand(LCD_4_BIT_MODE_3);
  
  H_Lcd_WriteCommand(DISPLAY_ON_CURSOT_OFF); //to display on, cursor off
  H_Lcd_WriteCommand(LCD_CLEAR); // to flash code start from
  H_Lcd_WriteCommand(LCD_RETURN_HOME);
  #endif
}
void H_Lcd_WriteCharacter(u8 Local_u8_Character)
{
  #if LCD_MODE ==  _8_BIT_BIT
  M_Dio_PinWrite(LCD_RS_PIN,HIGH);
  LCD_DATA_PORT = Local_u8_Character;
  M_Dio_PinWrite(LCD_EN_PIN,HIGH);
  _delay_ms(1);
  M_Dio_PinWrite(LCD_EN_PIN,LOW);
  _delay_ms(5); // MC of  LCD very slow
  #elif LCD_MODE == _4_BIT_BIT
  
  M_Dio_PinWrite(LCD_RS_PIN,HIGH);
  LCD_DATA_PORT = (Local_u8_Character & 0xF0) | (LCD_DATA_PORT & 0x0F);
  M_Dio_PinWrite(LCD_EN_PIN,HIGH);
  _delay_ms(1);
  M_Dio_PinWrite(LCD_EN_PIN,LOW);
  _delay_ms(1);
  
  LCD_DATA_PORT = (Local_u8_Character << 4) | (LCD_DATA_PORT & 0x0F);
  M_Dio_PinWrite(LCD_EN_PIN,HIGH);
  _delay_ms(1);
  M_Dio_PinWrite(LCD_EN_PIN,LOW);
  _delay_ms(5);
  #endif
}
void H_Lcd_WriteCommand(u8 Local_u8_Command)
{
  #if LCD_MODE ==  _8_BIT_BIT
  M_Dio_PinWrite(LCD_RS_PIN,HIGH);
  LCD_DATA_PORT = Local_u8_Command;
  M_Dio_PinWrite(LCD_EN_PIN,HIGH);
  _delay_ms(1);
  M_Dio_PinWrite(LCD_EN_PIN,LOW);
  _delay_ms(5); // MC of  LCD very slow
  #elif LCD_MODE == _4_BIT_BIT
  
  M_Dio_PinWrite(LCD_RS_PIN,LOW);
  LCD_DATA_PORT = (Local_u8_Command & 0xF0)| (LCD_DATA_PORT & 0x0F);
  M_Dio_PinWrite(LCD_EN_PIN,HIGH);
  _delay_ms(1);
  M_Dio_PinWrite(LCD_EN_PIN,LOW);
  _delay_ms(1);
  
  LCD_DATA_PORT = (Local_u8_Command << 4) | (LCD_DATA_PORT & 0x0F);
  M_Dio_PinWrite(LCD_EN_PIN,HIGH);
  _delay_ms(1);
  M_Dio_PinWrite(LCD_EN_PIN,LOW);
  _delay_ms(5);
  #endif

}
void H_Lcd_WriteString(u8* Local_u8_Ptr)
{
  u8 Local_u8_Counter=0;
  while (Local_u8_Ptr[Local_u8_Counter] != NULL_)
  {
    H_Lcd_WriteCharacter(Local_u8_Ptr[Local_u8_Counter]);
    Local_u8_Counter++;
  }
  
  
}
void H_Lcd_WriteNumber(s32 Local_s32_Number)
{
  u8 Local_u8_Arr[10]={0};
  s8 Local_s8_Counter=0;
  u8 Local_u8_Digit=0;
  
  if (Local_s32_Number==0){
    H_Lcd_WriteCharacter('0');
  }
  else{
    if (Local_s32_Number < 0)
    {
      H_Lcd_WriteCharacter('-');
      Local_s32_Number=Local_s32_Number * -1;
    }
    while (Local_s32_Number !=0)
    {
      Local_u8_Digit=Local_s32_Number % 10;
      Local_u8_Arr[Local_s8_Counter] =Local_u8_Digit;
      Local_s8_Counter++;
      Local_s32_Number=Local_s32_Number/10;
      //H_Lcd_WriteCharacter(Local_u8_Digit+48);
    }
    Local_s8_Counter--;
    while (Local_s8_Counter>=0)
    {
      H_Lcd_WriteCharacter(Local_u8_Arr[Local_s8_Counter]+48);
      Local_s8_Counter--;
    }
  }
}
void H_Lcd_WriteClear(void)
{
  H_Lcd_WriteCommand(LCD_CLEAR);
}
void H_Lcd_GoTo(u8 Local_u8_Row,u8 Local_u8_Column)
{
  u8 Local_u8_Arr[2]= {0x80,0xC0};
  H_Lcd_WriteCommand(Local_u8_Arr[Local_u8_Row]+Local_u8_Column);
}
void H_Lcd_ShiftRight(void)
{
  H_Lcd_WriteCommand(LCD_SHIFT_RIGHT);
}
void H_Lcd_ShiftLeft(void)
{
  H_Lcd_WriteCommand(LCD_SHIFT_LEFT);
}