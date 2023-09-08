#include <xc.h>
#include "config.h"

void main(void){
    init_punto6();
    while(1){
        __delay_ms(tiempo_espera);
        verde1 = LOW;
        amarillo1 = HIGH;
        __delay_ms(tiempo_transicion);
        amarillo1 = LOW;
        rojo1 = HIGH;
        __delay_ms(tiempo_cambio);
        amarillo2 = HIGH;
        __delay_ms(tiempo_transicion);
        rojo2 = LOW;
        amarillo2 = LOW;
        verde2 = HIGH;
        __delay_ms(tiempo_espera);
        
        verde2 = LOW;
        amarillo2 = HIGH;
        __delay_ms(tiempo_transicion);
        amarillo2 = LOW;
        rojo2 = HIGH;
        __delay_ms(tiempo_cambio);
        amarillo3 = HIGH;
        __delay_ms(tiempo_transicion);
        rojo3 = LOW;
        amarillo3 = LOW;
        verde3 = HIGH;
        __delay_ms(tiempo_espera);
        
        verde3 = LOW;
        amarillo3 = HIGH;
        __delay_ms(tiempo_transicion);
        amarillo3 = LOW;
        rojo3 = HIGH;
        __delay_ms(tiempo_cambio);
        amarillo1 = HIGH;
        __delay_ms(tiempo_transicion);
        rojo1 = LOW;
        amarillo1 = LOW;
        verde1 = HIGH;
        __delay_ms(tiempo_espera);
    }
}
