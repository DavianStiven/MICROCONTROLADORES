
#ifndef PUNTO_13_H
#define	PUNTO_13_H

#include <xc.h>

#define BTN0_DIR TRISAbits.TRISA0
#define BTN1_DIR TRISAbits.TRISA1
#define BTN2_DIR TRISAbits.TRISA2

#define BTN0 PORTAbits.RA0
#define BTN1 PORTAbits.RA1
#define BTN2 PORTAbits.RA2

#define RA3 TRISAbits.TRISA3
#define RA4 TRISAbits.TRISA4
#define RA5 TRISAbits.TRISA5


#define PUERTO_D_DIR TRISD
#define PUERTO_D LATD

#define PUERTO_B LATB

#define PUERTO_C_DIR TRISC
#define PUERTO_C PORTC



#define HIGH 1
#define LOW 0

#define IN 1
#define OUT 0

void init_punto12();


#endif	/* PUNTO_12_H */

