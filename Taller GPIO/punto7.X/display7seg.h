/* 
 * File:   display7seg.h
 * Author: DAVIAN
 *
 * Created on 7 de septiembre de 2023, 07:58 PM
 */

#ifndef DISPLAY7SEG_H
#define	DISPLAY7SEG_H

#include <xc.h>

#define puertoC TRISC
#define puertoD TRISD

#define segA1  LATCbits.LATC0
#define segB1  LATCbits.LATC1
#define segC1  LATCbits.LATC2
#define segD1  LATCbits.LATC3
#define segE1  LATCbits.LATC4
#define segF1  LATCbits.LATC5
#define segG1  LATCbits.LATC6

#define segA2  LATDbits.LATD0
#define segB2  LATDbits.LATD1
#define segC2  LATDbits.LATD2
#define segD2  LATDbits.LATD3
#define segE2  LATDbits.LATD4
#define segF2  LATDbits.LATD5
#define segG2  LATDbits.LATD6

#define OUT 0
#define IN  1

void display_init(void);
void display_ac(char dig);
void display_cc1(int dig1);
void display_cc2(int dig2);

#endif	/* DISPLAY7SEG_H */

