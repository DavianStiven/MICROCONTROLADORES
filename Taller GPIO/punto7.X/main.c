#include <xc.h>
#include "config.h"
#include "display7seg.h"

int contador, dig1, dig2;
char direccion, numero;

void main(void){
    init_punto7();
    display_init();
    contador = 0;
    direccion = HIGH;
    
    while(1){
        
        numero = entradas & 0x03;
        
        switch(numero){
            case 0: if(direccion == HIGH){
                        if(contador == 98 || contador == 99){
                            contador = 0;
                            dig1 = contador / 10;
                            dig2 = contador % 10;
                
                            display_cc1(dig1);
                            display_cc2(dig2);
                            __delay_ms(200);
                        }
                
                        contador = contador + 2;
                        dig1 = contador / 10;
                        dig2 = contador % 10;
                
                        display_cc1(dig1);
                        display_cc2(dig2);
                        __delay_ms(200);
                    }
                    
            
                    if(direccion == LOW){
                        if(contador == 1 || contador == 0){
                            contador = 99;
                            dig1 = contador / 10;
                            dig2 = contador % 10;
                
                            display_cc1(dig1);
                            display_cc2(dig2);
                            __delay_ms(200);
                        }
                        contador = contador - 2;
                        dig1 = contador / 10;
                        dig2 = contador % 10;
                
                        display_cc1(dig1);
                        display_cc2(dig2);
                        __delay_ms(200);
                    }
                    break;
            case 1: direccion = LOW;
                    if(contador == 0){
                        contador = 99;
                        dig1 = contador / 10;
                        dig2 = contador % 10;
                
                        display_cc1(dig1);
                        display_cc2(dig2);
                        __delay_ms(200);
                    }
                    contador = contador - 1;
                    dig1 = contador / 10;
                    dig2 = contador % 10;
            
                    display_cc1(dig1);
                    display_cc2(dig2);
                    __delay_ms(200);
                    break;
            case 2: direccion = HIGH;
                    if(contador == 99){
                        contador = 0;
                        dig1 = contador / 10;
                        dig2 = contador % 10;
                
                        display_cc1(dig1);
                        display_cc2(dig2);
                        __delay_ms(200);
                    }
            
                    contador = contador + 1;
                    dig1 = contador / 10;
                    dig2 = contador % 10;
            
                    display_cc1(dig1);
                    display_cc2(dig2);
                    __delay_ms(200);
                    break;
            case 3: break;
        }  
    }
}
