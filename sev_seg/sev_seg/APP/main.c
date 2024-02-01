/*
 * main.c
 *
 * Created: 12/3/2023 9:45:30 PM
 *  Author: BASEM
 */ 

//#include <xc.h>

#include "STDtype.h"
#include "BitMaths.h"
#include "Reg.h"
#include "Dio.h"
#include "sev_seg.h"
# define F_CPU 1600000UL
#include <util/delay.h>
int main(void)
{
  
  sev_seg_init(sev_A);
  sev_seg_init(sev_B);
  sev_seg_init(sev_C);
  sev_seg_init(sev_D);
  sev_seg_init(sev_E);
  sev_seg_init(sev_F);
  sev_seg_init(sev_G);
  sev_seg_en2();
  sev_seg_en1();
  sev_seg_num_write(0);
  _delay_ms(10000);
    sev_seg_num_write(1);
    _delay_ms(10000);
      sev_seg_num_write(2);
      _delay_ms(10000);
        sev_seg_num_write(3);
        _delay_ms(10000);
          sev_seg_num_write(4);
          _delay_ms(10000);
            sev_seg_num_write(5);
            _delay_ms(10000);
              sev_seg_num_write(6);
              _delay_ms(10000);
                sev_seg_num_write(7);
                _delay_ms(10000);
                  sev_seg_num_write(8);
                  _delay_ms(10000);
                    sev_seg_num_write(9);
                    _delay_ms(10000);
    while(1)
    {
         sev_seg_num_write(0);
         _delay_ms(10000);
         sev_seg_num_write(1);
         _delay_ms(10000);
         sev_seg_num_write(2);
         _delay_ms(10000);
         sev_seg_num_write(3);
         _delay_ms(10000);
         sev_seg_num_write(4);
         _delay_ms(10000);
         sev_seg_num_write(5);
         _delay_ms(10000);
         sev_seg_num_write(6);
         _delay_ms(10000);
         sev_seg_num_write(7);
         _delay_ms(10000);
         sev_seg_num_write(8);
         _delay_ms(10000);
         sev_seg_num_write(9);
         _delay_ms(10000); 
    }
}