#include <xc.h>
#include "carFollow.h"

void init_car(){
    MA1_DIR = OUT;
    MA2_DIR = OUT;
    MB1_DIR = OUT;
    MB2_DIR = OUT;
    
    SEN_IZ_DIR = IN;
    SEN_CEN_DIR = IN;
    SEN_DER_DIR = IN;
    
    SEN_IZ_ANSEL = LOW;
    SEN_CEN_ANSEL = LOW;
    SEN_DER_ANSEL = LOW;
    
    MA1 = LOW;
    MA2 = LOW;
    MB1 = LOW;
    MB2 = LOW;
    
}
void girar_derecha(){
    MA1 = LOW;
    MA2 = HIGH;
    MB1 = LOW;
    MB2 = LOW;
}
void girar_izquierda(){
    MA1 = LOW;
    MA2 = LOW;
    MB1 = HIGH;
    MB2 = LOW;
}
void avanzar(){
    MA1 = LOW;
    MA2 = HIGH;
    MB1 = HIGH;
    MB2 = LOW;
}
void atras(){
    MA1 = HIGH;
    MA2 = LOW;
    MB1 = LOW;
    MB2 = HIGH;
}
void quieto(){
    MA1 = LOW;
    MA2 = LOW;
    MB1 = LOW;
    MB2 = LOW;
}