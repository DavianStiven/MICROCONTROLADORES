/* 
 * File:   config.h
 * Author: DAVIAN
 *
 * Created on 7 de septiembre de 2023, 08:20 PM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#define _XTAL_FREQ 20000000

#include <xc.h>

#define BOTON0_DIR TRISCbits.TRISC3
#define BOTON1_DIR TRISCbits.TRISC4
#define BOTON2_DIR TRISCbits.TRISC5
#define BOTON3_DIR TRISCbits.TRISC6

#define BOTON0 PORTCbits.RC3
#define BOTON1 PORTCbits.RC4
#define BOTON2 PORTCbits.RC5
#define BOTON3 PORTCbits.RC6

#define LED0_DIR TRISDbits.TRISD0
#define LED1_DIR TRISDbits.TRISD1
#define LED2_DIR TRISDbits.TRISD2

#define LED0 LATDbits.LATD0
#define LED1 LATDbits.LATD1
#define LED2 LATDbits.LATD2

#define OUT 0
#define IN 1

#define LOW 0
#define HIGH 1

void init_punto9(void);

#endif	/* CONFIG_H */

