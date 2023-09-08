/* 
 * File:   config.h
 * Author: DAVIAN
 *
 * Created on 7 de septiembre de 2023, 06:12 PM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#define _XTAL_FREQ 20000000UL

#include <xc.h>

#define entrada TRISBbits.TRISB0
#define analogic_en ANSELBbits.ANSB0
#define salida TRISBbits.TRISB7

#define button PORTBbits.RB0
#define led LATBbits.LATB7



#define OUT 0
#define IN 1

#define LOW 0
#define HIGH 1

void init_punto4(void);


#endif	/* CONFIG_H */

