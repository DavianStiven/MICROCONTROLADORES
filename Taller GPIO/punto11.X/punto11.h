/* 
 * File:   punto9.h
 * Author: DAVIAN
 *
 * Created on 30 de agosto de 2023, 06:15 PM
 */

#ifndef PUNTO9_H
#define	PUNTO9_H

#define BT_OFF_DIR TRISBbits.TRISB4
#define BT_ON_DIR TRISBbits.TRISB5
#define BT_PLUS_DIR TRISBbits.TRISB6
#define BT_MINUS_DIR TRISBbits.TRISB7

#define BT_OFF_ANSEL ANSELBbits.ANSB4
#define BT_ON_ANSEL ANSELBbits.ANSB5

#define BT_OFF PORTBbits.RB4
#define BT_ON PORTBbits.RB5
#define BT_PLUS PORTBbits.RB6
#define BT_MINUS PORTBbits.RB7

#define PUERTOD_DIR TRISD
#define PUERTOD_LAT LATD

#define OUT 0
#define IN 1

#define LOW 0
#define HIGH 1

void init_punto11(void);

#endif	/* PUNTO9_H */

