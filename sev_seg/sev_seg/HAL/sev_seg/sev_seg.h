/*
 * sev_seg.h
 *
 * Created: 12/3/2023 9:53:06 PM
 *  Author: BASEM
 */ 


#ifndef SEV_SEG_H_
#define SEV_SEG_H_

#include "sev_segCFG.h"
#include "Dio.h"
#include "STDtype.h"

# define F_CPU 1600000UL
#include <util/delay.h>

#define sev_A   0
#define sev_B   1
#define sev_C   2
#define sev_D   3
#define sev_E   4
#define sev_F   5
#define sev_G   6
#define sev_DOT   7

#define sev_dig_1  8
#define sev_dig_2  9



void sev_seg_init(u8);
void sev_seg_num_write(u8);
void sev_seg_en1();
void sev_seg_en2();
void sev_seg_dis1 ();
void sev_seg_dis2();



#endif /* SEV_SEG_H_ */