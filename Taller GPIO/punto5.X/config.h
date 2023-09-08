/* 
 * File:   config.h
 * Author: DAVIAN
 *
 * Created on 7 de septiembre de 2023, 06:21 PM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#define _XTAL_FREQ 20000000

#include <xc.h>

#define entrada0 TRISBbits.TRISB0
#define analog_en0 ANSELBbits.ANSB0
#define entrada1 TRISBbits.TRISB1
#define analog_en1 ANSELBbits.ANSB1
#define entrada2 TRISBbits.TRISB2
#define analog_en2 ANSELBbits.ANSB2
#define entrada3 TRISBbits.TRISB3
#define analog_en3 ANSELBbits.ANSB3

#define pin0_in PORTBbits.RB0
#define pin1_in PORTBbits.RB1
#define pin2_in PORTBbits.RB2
#define pin3_in PORTBbits.RB3

#define salidas TRISD
#define pines_out LATD

#define OUT 0
#define IN 1

#define LOW 0
#define HIGH 1

void init_punto5(void);
void secuencias_p1(char dig);
#endif	/* CONFIG_H */

