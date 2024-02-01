/*
 * sev_seg.c
 *
 * Created: 12/3/2023 9:53:20 PM
 *  Author: BASEM
 */ 
#include "sev_seg.h"



void sev_seg_init(u8 local_u8_seg)
{
  switch (local_u8_seg)
  {
    case sev_A: M_Dio_PinMode(seg_A,OUTPUT);    break;
    case sev_B: M_Dio_PinMode(seg_B,OUTPUT);    break;
    case sev_C: M_Dio_PinMode(seg_C,OUTPUT);    break;
    case sev_D: M_Dio_PinMode(seg_D,OUTPUT);    break;
    case sev_E: M_Dio_PinMode(seg_E,OUTPUT);    break;
    case sev_F: M_Dio_PinMode(seg_F,OUTPUT);    break;
    case sev_G: M_Dio_PinMode(seg_G,OUTPUT);    break;
    case sev_DOT: M_Dio_PinMode(seg_dot,OUTPUT);    break;
    
    case sev_dig_1: M_Dio_PinMode(dig_1,OUTPUT);    break;
    case sev_dig_2: M_Dio_PinMode(dig_2,OUTPUT);    break;
    default:                                   break;
  }
}

void sev_seg_en1()
{
  
  M_Dio_PinWrite(dig_1,HIGH);

}

void sev_seg_en2()
{
  
  M_Dio_PinWrite(dig_2,HIGH);

}


void sev_seg_dis1()
{
  
  M_Dio_PinWrite(dig_1,LOW);

}

void sev_seg_dis2()
{
  
  M_Dio_PinWrite(dig_2,LOW);

}


void sev_seg_num_write(u8 local_u8_seg)
{
 switch(local_u8_seg)
 {
    case 0: {
      M_Dio_PinWrite(seg_A , HIGH);
      M_Dio_PinWrite(seg_B ,HIGH);
      M_Dio_PinWrite(seg_C ,HIGH);
      M_Dio_PinWrite(seg_D ,HIGH);
      M_Dio_PinWrite(seg_E ,HIGH);
      M_Dio_PinWrite(seg_F ,HIGH);
      M_Dio_PinWrite(seg_G ,LOW);}    break;
  case 1: {
    M_Dio_PinWrite(seg_A , LOW);
    M_Dio_PinWrite(seg_B ,HIGH);
    M_Dio_PinWrite(seg_C ,HIGH);
    M_Dio_PinWrite(seg_D ,LOW);
    M_Dio_PinWrite(seg_E ,LOW);
    M_Dio_PinWrite(seg_F ,LOW);
  M_Dio_PinWrite(seg_G ,LOW);}    break;
   case 2: {
     M_Dio_PinWrite(seg_A , HIGH);
     M_Dio_PinWrite(seg_B ,HIGH);
     M_Dio_PinWrite(seg_C ,LOW);
     M_Dio_PinWrite(seg_D ,HIGH);
     M_Dio_PinWrite(seg_E ,HIGH);
     M_Dio_PinWrite(seg_F ,LOW);
   M_Dio_PinWrite(seg_G ,HIGH);}    break;
    case 3: {
      M_Dio_PinWrite(seg_A , HIGH);
      M_Dio_PinWrite(seg_B ,HIGH);
      M_Dio_PinWrite(seg_C ,HIGH);
      M_Dio_PinWrite(seg_D ,HIGH);
      M_Dio_PinWrite(seg_E ,LOW);
      M_Dio_PinWrite(seg_F ,LOW);
    M_Dio_PinWrite(seg_G ,HIGH);}    break;
     case 4: {
       M_Dio_PinWrite(seg_A , LOW);
       M_Dio_PinWrite(seg_B ,HIGH);
       M_Dio_PinWrite(seg_C ,HIGH);
       M_Dio_PinWrite(seg_D ,LOW);
       M_Dio_PinWrite(seg_E ,LOW);
       M_Dio_PinWrite(seg_F ,HIGH);
     M_Dio_PinWrite(seg_G ,HIGH);}    break;
      case 5: {
        M_Dio_PinWrite(seg_A , HIGH);
        M_Dio_PinWrite(seg_B ,LOW);
        M_Dio_PinWrite(seg_C ,HIGH);
        M_Dio_PinWrite(seg_D ,HIGH);
        M_Dio_PinWrite(seg_E ,LOW);
        M_Dio_PinWrite(seg_F ,HIGH);
      M_Dio_PinWrite(seg_G ,HIGH);}    break;
       case 6: {
         M_Dio_PinWrite(seg_A , HIGH);
         M_Dio_PinWrite(seg_B ,LOW);
         M_Dio_PinWrite(seg_C ,HIGH);
         M_Dio_PinWrite(seg_D ,HIGH);
         M_Dio_PinWrite(seg_E ,HIGH);
         M_Dio_PinWrite(seg_F ,HIGH);
       M_Dio_PinWrite(seg_G ,HIGH);}    break;
        case 7: {
          M_Dio_PinWrite(seg_A , HIGH);
          M_Dio_PinWrite(seg_B ,HIGH);
          M_Dio_PinWrite(seg_C ,HIGH);
          M_Dio_PinWrite(seg_D ,LOW);
          M_Dio_PinWrite(seg_E ,LOW);
          M_Dio_PinWrite(seg_F ,LOW);
        M_Dio_PinWrite(seg_G ,LOW);}    break;
         case 8: {
           M_Dio_PinWrite(seg_A , HIGH);
           M_Dio_PinWrite(seg_B ,HIGH);
           M_Dio_PinWrite(seg_C ,HIGH);
           M_Dio_PinWrite(seg_D ,HIGH);
           M_Dio_PinWrite(seg_E ,HIGH);
           M_Dio_PinWrite(seg_F ,HIGH);
         M_Dio_PinWrite(seg_G ,HIGH);}    break;
          case 9: {
            M_Dio_PinWrite(seg_A , HIGH);
            M_Dio_PinWrite(seg_B ,HIGH);
            M_Dio_PinWrite(seg_C ,HIGH);
            M_Dio_PinWrite(seg_D ,LOW);
            M_Dio_PinWrite(seg_E ,LOW);
            M_Dio_PinWrite(seg_F ,HIGH);
          M_Dio_PinWrite(seg_G ,HIGH);}    break;
           
   


  }
}
