#include <xc.h>
#include "config.h"


char cont;

void main(void){
    init_punto1();
    while(1){
        for(char i=0; i<7; i++){
            cont = i+1;
            pines &= ~(1<<i);
            pines |= (1<<cont);
            __delay_ms(time);
        }
        for(char i=7; i>0; i--){
            cont = i-1;
            pines &= ~(1<<i);
            pines |= (1<<cont);
            __delay_ms(time);
        }
    }
    
}
