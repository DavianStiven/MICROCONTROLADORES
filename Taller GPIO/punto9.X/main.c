#include <xc.h>
#include "config.h"

void main(void){
    init_punto9();
    
    while(1){
        if(BOTON0 == LOW){
            if(LED0 == LOW && LED1 == LOW && LED2 == LOW){
                LED0 = HIGH;
            }
        }
        if(BOTON1 == LOW){
            if(LED0 == LOW && LED1 == LOW && LED2 == LOW){
                LED1 = HIGH;
            }
        }
        if(BOTON2 == LOW){
            if(LED0 == LOW && LED1 == LOW && LED2 == LOW){
                LED2 = HIGH;
            }
        }
        if(BOTON3 == LOW){
            LED0 = LOW;
            LED1 = LOW;
            LED2 = LOW;
        }
    }
}
