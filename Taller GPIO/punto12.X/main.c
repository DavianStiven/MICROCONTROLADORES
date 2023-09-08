#include <xc.h>
#include "config.h"
#include "punto12.h"

char nibble1, nibble2, resultado;

void main(void){
    init_punto12();
    while(1){
        nibble1 = PUERTOB & 0x0F;
        nibble2 = (PUERTOB & 0xF0)>>4;
        if(BT0 == LOW && BT1 == LOW && BT2 == LOW){
            resultado = nibble1 + nibble2;
            PUERTOD = resultado;
        }
        if(BT0 == LOW && BT1 == HIGH && BT2 == LOW){
            if(nibble1 > nibble2){
                resultado = nibble1 - nibble2;
            }else{
                resultado = nibble2 - nibble1;
            }
            PUERTOD = resultado;
        }
        if(BT0 == HIGH && BT1 == LOW && BT2 == LOW){
            resultado = nibble1 * nibble2;
            PUERTOD = resultado;
        }
        if(BT0 == HIGH && BT1 == HIGH && BT2 == LOW){
            if(nibble1 > nibble2){
                resultado = nibble1 / nibble2;
            }else{
                resultado = nibble2 / nibble1;
            }
            PUERTOD = resultado;
            PUERTOD = resultado;
        }
    }
    return;
}

