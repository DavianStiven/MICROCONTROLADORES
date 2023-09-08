/* 
 * File:   config.h
 * Author: DAVIAN
 *
 * Created on 7 de septiembre de 2023, 06:48 PM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#define _XTAL_FREQ 20000000

#include <xc.h>

#define entradas PORTB

#define analog_in0 ANSELBbits.ANSB0
#define analog_in1 ANSELBbits.ANSB1

#define boton0 PORTBbits.RB0
#define boton1 PORTBbits.RB1

#define OUT 0
#define IN 1

#define LOW 0
#define HIGH 1

void init_punto7();

#endif	/* CONFIG_H */

