#include <xc.h>
#include "config.h"

void main(void){
    init_punto3();
    
    while(1){
        if(in_button1 == LOW && in_button2 == LOW){
            out_motor1 = LOW;
            out_motor2 = LOW;
        }
        if(in_button1 == HIGH && in_button2 == LOW){
            out_motor1 = HIGH;
            out_motor2 = LOW;
        }
        if(in_button1 == LOW && in_button2 == HIGH){
            out_motor1 = LOW;
            out_motor2 = HIGH;
        }
        if(in_button1 == HIGH && in_button2 == HIGH){
            out_motor1 = LOW;
            out_motor2 = LOW;
        }
    }
}
