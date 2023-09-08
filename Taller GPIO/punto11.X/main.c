#include <xc.h>
#include "config.h"
#include "display7seg.h"
#include "punto11.h"

signed char dig;

void main(void){
    init_punto11();
    display_init();
    dig = 0;
    while(1){
        display_ac(dig);
        if(BT_OFF == LOW){
            while(BT_OFF == LOW);
            PUERTOD_LAT &= ~(1<<dig);
        }
        if(BT_ON == LOW){
            while(BT_ON == LOW);
            PUERTOD_LAT |= (1<<dig);
        }
        if(BT_PLUS == LOW){
            while(BT_PLUS == LOW);
            dig++;
            if(dig > 7){
                dig = 7;
            }
        }
        if(BT_MINUS == LOW){
            while(BT_MINUS == LOW);
            dig--;
            if(dig < 0){
                dig = 0;
            }
        }
        
    }
    
    return;
}
