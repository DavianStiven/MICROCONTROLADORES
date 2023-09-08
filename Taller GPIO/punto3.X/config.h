/* 
 * File:   config.h
 * Author: DAVIAN
 *
 * Created on 29 de agosto de 2023, 10:02 PM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#define _XTAL_FREQ 20000000UL

#include <xc.h>

#define button1 TRISDbits.TRISD0
#define anlog_in1 ANSELDbits.ANSD0
#define button2 TRISDbits.TRISD1
#define anlog_in2 ANSELDbits.ANSD1
#define motor1 TRISDbits.TRISD2
#define motor2 TRISDbits.TRISD3

#define in_button1 PORTDbits.RD0
#define in_button2 PORTDbits.RD1
#define out_motor1 LATDbits.LATD2
#define out_motor2 LATDbits.LATD3

#define OUT 0
#define IN 1

#define LOW 0
#define HIGH 1

void init_punto3(void);


#endif	/* CONFIG_H */

