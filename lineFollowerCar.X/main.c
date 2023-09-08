#include <xc.h>
#include "config.h"
#include "carFollow.h"

void main(void){
    init_car();
    while(1){
        if(SEN_CEN == HIGH){
            avanzar();
        }
        if(SEN_IZ == HIGH){
            girar_izquierda();
        }
        if(SEN_DER == HIGH){
            girar_derecha();
        }
        if(SEN_IZ == LOW && SEN_CEN == LOW && SEN_DER == LOW){
            atras();
        }
    }
    return;
}
