/* 
 * File:   display7seg.h
 * Author: DAVIAN
 *
 * Created on 30 de agosto de 2023, 06:10 PM
 */

#ifndef DISPLAY7SEG_H
#define	DISPLAY7SEG_H

#include <xc.h>

#define puertoC TRISC

#define segA1  LATCbits.LATC0
#define segB1  LATCbits.LATC1
#define segC1  LATCbits.LATC2
#define segD1  LATCbits.LATC3
#define segE1  LATCbits.LATC4
#define segF1  LATCbits.LATC5
#define segG1  LATCbits.LATC6

#define OUT 0
#define IN  1

void display_init(void);
void display_ac(char dig);
void display_cc(char dig);

#endif	/* DISPLAY7SEG_H */

