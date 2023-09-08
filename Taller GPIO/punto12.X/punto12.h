/* 
 * File:   punto12.h
 * Author: DAVIAN
 *
 * Created on 30 de agosto de 2023, 07:23 PM
 */

#ifndef PUNTO12_H
#define	PUNTO12_H

#include <xc.h>

#define PUERTOB_DIR TRISB
#define PUERTOB_ANSEL ANSELB
#define PUERTOB PORTB

#define PUERTOD_DIR TRISD
#define PUERTOD LATD

#define BT0_DIR TRISAbits.TRISA0
#define BT1_DIR TRISAbits.TRISA1
#define BT2_DIR TRISAbits.TRISA2

#define BT0_ANSEL ANSELAbits.ANSA0
#define BT1_ANSEL ANSELAbits.ANSA1
#define BT2_ANSEL ANSELAbits.ANSA2

#define BT0 PORTAbits.RA0
#define BT1 PORTAbits.RA1
#define BT2 PORTAbits.RA2

#define OUT 0
#define IN 1

#define LOW 0
#define HIGH 1

void init_punto12();

#endif	/* PUNTO12_H */

