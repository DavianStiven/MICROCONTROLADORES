/* 
 * File:   carFollow.h
 * Author: DAVIAN
 *
 * Created on 27 de agosto de 2023, 08:14 PM
 */

#ifndef CARFOLLOW_H
#define	CARFOLLOW_H

#include <xc.h>

#define MA1_DIR TRISDbits.TRISD0
#define MA2_DIR TRISDbits.TRISD1
#define MB1_DIR TRISDbits.TRISD2
#define MB2_DIR TRISDbits.TRISD3

#define MA1 LATDbits.LATD0
#define MA2 LATDbits.LATD1
#define MB1 LATDbits.LATD2
#define MB2 LATDbits.LATD3

#define SEN_IZ_DIR TRISAbits.TRISA0
#define SEN_CEN_DIR TRISAbits.TRISA1
#define SEN_DER_DIR TRISAbits.TRISA2

#define SEN_IZ_ANSEL ANSELAbits.ANSA0
#define SEN_CEN_ANSEL ANSELAbits.ANSA1
#define SEN_DER_ANSEL ANSELAbits.ANSA2

#define SEN_IZ PORTAbits.RA0
#define SEN_CEN PORTAbits.RA1
#define SEN_DER PORTAbits.RA2

#define OUT 0
#define IN 1

#define LOW 0
#define HIGH 1


void init_car();
void girar_derecha();
void girar_izquierda();
void avanzar();
void atras();
void quieto();


#endif	/* CARFOLLOW_H */

