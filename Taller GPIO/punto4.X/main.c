#include <xc.h>
#include "config.h"

char cont = 0;

void main(void){
    init_punto4();
    
    while(1){
        if(button == LOW){
            while(button == LOW);
            cont++;
        }
        if(cont == 3 && led == LOW){
            led = HIGH;
            cont = 0;
        }
        if(cont == 3 && led == HIGH){
            led = LOW;
            cont = 0;
        }
    }
}
