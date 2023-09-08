

#include <xc.h>
#include "config.h"
#include "punto_13.h"

void  init_punto12(){
    BTN0_DIR = IN;
    BTN1_DIR = IN;
    BTN2_DIR = IN;
    
    
    PUERTO_C_DIR = 0xFF;
    PUERTO_D_DIR = 0x00;
    
    PUERTO_C = 0x00;
    PUERTO_D = 0x00;
    
    TRISB = 0x00;
    ANSELB = 0x00;
    
    
    ANSELA = 0x00;
    
    RA3= OUT;
    RA4= OUT;
    RA5= OUT;
    
    
}