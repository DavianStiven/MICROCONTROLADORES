#include <xc.h>
#include "config.h"
#include "vias.h"


void init_punto10(){
    DIR_btn0= IN;
    DIR_btn1= IN;
    DIR_led = OUT;
    
    ANS_BTN0 = LOW;
    ANS_BTN1 = LOW;
    led= LOW;
}

void main(void){
    init_punto10();
   
   
    while(1){
        
        if(btn0 == LOW ){
            while(btn0 == LOW);
            led = ~led;
        }
        if(btn1 == LOW ){
            while(btn1 == LOW);
            led = ~led;
        }
         
    }
    return;
}

