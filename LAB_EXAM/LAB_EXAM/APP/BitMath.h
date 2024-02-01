/*
 * BitMath.h
 *
 * Created: 12/20/2023 3:13:17 AM
 *  Author: BASEM
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_



#define SetBit(Reg,Bit)      Reg |=  (1 << Bit)
#define ClrBit(Reg,Bit)      Reg &= ~(1 << Bit)
#define TogBit(Reg,Bit)      Reg ^=  (1 << Bit)
#define GetBit(Reg,Bit)      1 & (Reg >> Bit)


#endif /* BITMATH_H_ */