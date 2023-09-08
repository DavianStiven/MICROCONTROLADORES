/* 
 * File:   config.h
 * Author: DAVIAN
 *
 * Created on 19 de agosto de 2023, 05:25 PM
 */


#ifndef CONFIG_H
#define	CONFIG_H

#define _XTAL_FREQ 20000000UL

#include <xc.h>

#define puerto TRISD
#define pines LATD
#define time 300

void init_punto1(void);

#endif	/* CONFIG_H */


