#include <xc.h>
#include "config.h"

char dig;

void main(void){
    init_punto5();
    while(1){
        dig = 0;
        if(pin0_in== HIGH){
            dig = dig + 1;
        }                           //ALTERNATIVA dig = PORTB & 0x0F || dig = (PORTB & 0xF0)>>4 
        if(pin1_in == HIGH){
            dig = dig + 2;
        }
        if(pin2_in == HIGH){
            dig = dig + 4;
        }
        if(pin3_in == HIGH){
            dig = dig + 8;
        } 
        secuencias_p1(dig);
    }
}