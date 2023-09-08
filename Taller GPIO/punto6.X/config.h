/* 
 * File:   config.h
 * Author: DAVIAN
 *
 * Created on 7 de septiembre de 2023, 06:40 PM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#define _XTAL_FREQ 20000000

#include <xc.h>

#define puertoC TRISC
#define puertoD TRISD

#define rojo1 LATCbits.LATC0
#define rojo2 LATCbits.LATC4
#define rojo3 LATDbits.LATD0

#define amarillo1 LATCbits.LATC1
#define amarillo2 LATCbits.LATC5
#define amarillo3 LATDbits.LATD1

#define verde1 LATCbits.LATC3
#define verde2 LATCbits.LATC6
#define verde3 LATDbits.LATD3


#define LOW 0
#define HIGH 1

#define tiempo_espera 5000
#define tiempo_cambio 1000
#define tiempo_transicion 500

void init_punto6(void);

#endif	/* CONFIG_H */

