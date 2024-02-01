/*
 * BitMaths.h
 *
 * Created: 12/3/2023 9:50:26 PM
 *  Author: BASEM
 */ 


#ifndef BITMATHS_H_
#define BITMATHS_H_


#define SetBit(Reg,Bit)   Reg |=  ( 1  <<  Bit )
#define ClrBit(Reg,Bit)   Reg &= ~( 1  <<  Bit )
#define TogBit(Reg,Bit)   Reg ^=  ( 1  <<  Bit )
#define GetBit(Reg,Bit)     1 &   (Reg <<  Bit )



#endif /* BITMATHS_H_ */