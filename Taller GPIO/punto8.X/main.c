#include <xc.h>
#include "config.h"

char numero, direccion, pasador1, pasador2, velocidad;
int time1=100, time2=500, time3 = 1000;

void main(void){
    init_punto8();
    numero = PORTB & 0x07;
    LATC = numero;
    direccion = LOW;
    velocidad = 1;
    while(1){
        if(direccion == LOW){
            if(velocidad == 1){
                LATC <<= 1;
                LATD <<= 1;
                LATDbits.LATD0 = pasador1;
                LATCbits.LATC0 = pasador2;
                __delay_ms(time1);
                pasador1 = (LATC & 0x80)>>7;
                pasador2 = (LATD & 0x80)>>7;
            
                if(BOTON2 == LOW){
                while(BOTON2 == LOW);
                    direccion = HIGH;
                }
                if(BOTON0 == LOW){
                    while(BOTON0 == LOW);
                    velocidad = 2;
                }
                if(BOTON3 == LOW){
                    while(BOTON3 == LOW);
                    LATD = 0x00;
                    LATC = 0x00;
                    numero = PORTB & 0x07;
                    LATC = numero;
                }
            }
            
            if(velocidad == 2){
                LATC <<= 1;
                LATD <<= 1;
                LATDbits.LATD0 = pasador1;
                LATCbits.LATC0 = pasador2;
                __delay_ms(time2);
                pasador1 = (LATC & 0x80)>>7;
                pasador2 = (LATD & 0x80)>>7;
                if(BOTON2 == LOW){
                    while(BOTON2 == LOW);
                    direccion = HIGH;
                }   
                if(BOTON0 == LOW){
                    while(BOTON0 == LOW);
                    velocidad = 3;
                }
                if(BOTON1 == LOW){
                    while(BOTON1 == LOW);
                    velocidad = 1;
                }
                if(BOTON3 == LOW){
                    while(BOTON3 == LOW);
                    LATD = 0x00;
                    LATC = 0x00;
                    numero = PORTB & 0x07;
                    LATC = numero;
                }
            }
            
            if(velocidad == 3){
                LATC <<= 1;
                LATD <<= 1;
                LATDbits.LATD0 = pasador1;
                LATCbits.LATC0 = pasador2;
                __delay_ms(time3);
                pasador1 = (LATC & 0x80)>>7;
                pasador2 = (LATD & 0x80)>>7;
                if(BOTON2 == LOW){
                    while(BOTON2 == LOW);
                    direccion = HIGH;
                }   
                if(BOTON1 == LOW){
                    while(BOTON1 == LOW);
                    velocidad = 2;
                }
                if(BOTON3 == LOW){
                    while(BOTON3 == LOW);
                    LATD = 0x00;
                    LATC = 0x00;
                    numero = PORTB & 0x07;
                    LATC = numero;
                }
            }
            
        }
        if(direccion == HIGH){
            if(velocidad == 1){
                pasador1 = (LATC & 0x01);
                pasador2 = (LATD & 0x01);
                __delay_ms(time1);
                LATC >>= 1;
                LATD >>= 1;
                LATDbits.LATD7 = pasador1;
                LATCbits.LATC7 = pasador2; 
                if(BOTON2 == LOW){
                    while(BOTON2 == LOW);
                    direccion = LOW;
                }
                if(BOTON0 == LOW){
                    while(BOTON1 == LOW);
                    velocidad = 2;
                }
                if(BOTON3 == LOW){
                    while(BOTON3 == LOW);
                    LATD = 0x00;
                    LATC = 0x00;
                    numero = PORTB & 0x07;
                    LATC = numero;
                }
            }
            if(velocidad == 2){
                pasador1 = (LATC & 0x01);
                pasador2 = (LATD & 0x01);
                __delay_ms(time2);
                LATC >>= 1;
                LATD >>= 1;
                LATDbits.LATD7 = pasador1;
                LATCbits.LATC7 = pasador2; 
                if(BOTON2 == LOW){
                    while(BOTON2 == LOW);
                    direccion = LOW;
                }
                if(BOTON0 == LOW){
                    while(BOTON0 == LOW);
                    velocidad = 3;
                }
                if(BOTON1 == LOW){
                    while(BOTON1 == LOW);
                    velocidad = 1;
                }
                if(BOTON3 == LOW){
                    while(BOTON3 == LOW);
                    LATD = 0x00;
                    LATC = 0x00;
                    numero = PORTB & 0x07;
                    LATC = numero;
                }
            }
            if(velocidad == 3){
                pasador1 = (LATC & 0x01);
                pasador2 = (LATD & 0x01);
                __delay_ms(time3);
                LATC >>= 1;
                LATD >>= 1;
                LATDbits.LATD7 = pasador1;
                LATCbits.LATC7 = pasador2; 
                if(BOTON2 == LOW){
                    while(BOTON2 == LOW);
                    direccion = LOW;
                }
                if(BOTON1 == LOW){
                    while(BOTON1 == LOW);
                    velocidad = 2;
                }
                if(BOTON3 == LOW){
                    while(BOTON3 == LOW);
                    LATD = 0x00;
                    LATC = 0x00;
                    numero = PORTB & 0x07;
                    LATC = numero;
                }
            }
                
        }
        
    }
    return;
}
