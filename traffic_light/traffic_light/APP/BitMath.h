/*
 * BitMath.h
 *
 * Created: 11/7/2023 8:43:21 AM
 *  Author: BASEM
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_


#define SetBit(Reg,Bit)   Reg |=  ( 1  <<  Bit )
#define ClrBit(Reg,Bit)   Reg &= ~( 1  <<  Bit )
#define TogBit(Reg,Bit)   Reg ^=  ( 1  <<  Bit )
#define GetBit(Reg,Bit)     1 &   (Reg <<  Bit )



#endif /* BITMATH_H_ */