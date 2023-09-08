 

#ifndef VIAS_H
#define	VIAS_H

#include <xc.h>
#include "config.h"

#define DIR_led TRISCbits.TRISC0
#define DIR_btn0 TRISDbits.TRISD0
#define DIR_btn1 TRISDbits.TRISD1

#define led LATCbits.LATC0
#define btn0 PORTDbits.RD0
#define btn1 PORTDbits.RD1

#define ANS_BTN0 ANSELDbits.ANSD0
#define ANS_BTN1 ANSELDbits.ANSD1


#define HIGH 1
#define LOW 0

#define IN 1
#define OUT 0


void init_punto10(void);



#endif	/* VIAS_H */

