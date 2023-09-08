#include <xc.h>
#include "config.h"
#include "punto_13.h"


char nibble1, nibble2, resultado;
char decoCC[10]={191, 134, 219,207, 230, 237,253, 135, 255, 231}; 
char decoCAC[10]={64, 121, 36, 48, 25, 18,2 , 120, 0, 24};

int   unidad, decena, centena;
const int te = 200;

void main(void){
    init_punto12();
    while(1){
         nibble1 = PUERTO_C & 0x0F;
         nibble2 = (PUERTO_C & 0xF0)>>4;
         
         if(BTN0 == LOW && BTN1== LOW && BTN2== LOW){
             resultado= nibble1 + nibble2;
             
             centena = resultado/100;
             decena = (resultado%100)/10;
             unidad = (resultado % 100)%10;
             
             LATAbits.LATA3 = 1;
             LATAbits.LATA4 = 1;
             LATAbits.LATA5 = 1;
             LATDbits.LATD0 = 0;
             LATB = decoCC[unidad];
             __delay_ms(te);
             
             LATAbits.LATA3 = 1;
             LATAbits.LATA4 = 1;
             LATAbits.LATA5 = 0;
             LATDbits.LATD0 = 1;
             LATB = decoCC[decena];
             __delay_ms(te);
             
             LATAbits.LATA3 = 1;
             LATAbits.LATA4 = 0;
             LATAbits.LATA5 = 1;
             LATDbits.LATD0 = 1;
             LATB = decoCC[centena];
             __delay_ms(te);
             
         }
         if(BTN0 == HIGH && BTN1== LOW && BTN2== LOW){
             if(nibble1 >= nibble2){
                resultado = nibble1 - nibble2;
             
                centena = resultado/100;
                decena = (resultado%100)/10;
                unidad = (resultado % 100)%10;
             
                LATAbits.LATA3 = 1;
                LATAbits.LATA4 = 1;
                LATAbits.LATA5 = 1;
                LATDbits.LATD0 = 0;
                LATB = decoCC[unidad];
                __delay_ms(te);
             
                LATAbits.LATA3 = 1;
                LATAbits.LATA4 = 1;
                LATAbits.LATA5 = 0;
                LATDbits.LATD0 = 1;
                LATB = decoCC[decena];
                __delay_ms(te);
             
                LATAbits.LATA3 = 1;
                LATAbits.LATA4 = 0;
                LATAbits.LATA5 = 1;
                LATDbits.LATD0 = 1;
                LATB = decoCC[centena];
                __delay_ms(te);
             
            }
            if(nibble2 >= nibble1){
                resultado = nibble2 - nibble1;
             
                centena = resultado/100;
                decena = (resultado%100)/10;
                unidad = (resultado % 100)%10;
             
                LATAbits.LATA3 = 1;
                LATAbits.LATA4 = 1;
                LATAbits.LATA5 = 1;
                LATDbits.LATD0 = 0;
                LATB = decoCC[unidad];
                __delay_ms(te);
             
                LATAbits.LATA3 = 1;
                LATAbits.LATA4 = 1;
                LATAbits.LATA5 = 0;
                LATDbits.LATD0 = 1;
                LATB = decoCC[decena];
                __delay_ms(te);
             
                LATAbits.LATA3 = 1;
                LATAbits.LATA4 = 0;
                LATAbits.LATA5 = 1;
                LATDbits.LATD0 = 1;
                LATB = decoCC[centena];
                __delay_ms(te);
            }
         }
          if(BTN0 == LOW && BTN1== HIGH && BTN2== LOW){
             resultado= nibble1 * nibble2;
             centena = resultado/100;
             unidad = (resultado % 100)%10;
             decena = (resultado%100)/10;
             
             LATAbits.LATA3 = 1;
             LATAbits.LATA4 = 1;
             LATAbits.LATA5 = 1;
             LATDbits.LATD0 = 0;
             LATB = decoCC[unidad];
             __delay_ms(te);
             
             LATAbits.LATA3 = 1;
             LATAbits.LATA4 = 1;
             LATAbits.LATA5 = 0;
             LATDbits.LATD0 = 1;
             LATB = decoCC[decena];
             __delay_ms(te);
             
             LATAbits.LATA3 = 1;
             LATAbits.LATA4 = 0;
             LATAbits.LATA5 = 1;
             LATDbits.LATD0 = 1;
             LATB = decoCC[centena];
             __delay_ms(te);
         }
          if(BTN0 == HIGH && BTN1== HIGH && BTN2== LOW){
              if(nibble1>=nibble2){
                resultado= nibble1 / nibble2;
                
                centena = resultado/100;
                unidad = (resultado % 100)%10;
                decena = (resultado%100)/10;
             
                LATAbits.LATA3 = 1;
                LATAbits.LATA4 = 1;
                LATAbits.LATA5 = 1;
                LATDbits.LATD0 = 0;
                LATB = decoCC[unidad];
                __delay_ms(te);
             
                LATAbits.LATA3 = 1;
                LATAbits.LATA4 = 1;
                LATAbits.LATA5 = 0;
                LATDbits.LATD0 = 1;
                LATB = decoCC[decena];
                __delay_ms(te);
             
                LATAbits.LATA3 = 1;
                LATAbits.LATA4 = 0;
                LATAbits.LATA5 = 1;
                LATDbits.LATD0 = 1;
                LATB = decoCC[centena];
                __delay_ms(te);
             }
             if(nibble2 >= nibble1){
                resultado= nibble2 / nibble1;
                
                centena = resultado/100;
                unidad = (resultado % 100)%10;
                decena = (resultado%100)/10;
             
                LATAbits.LATA3 = 1;
                LATAbits.LATA4 = 1;
                LATAbits.LATA5 = 1;
                LATDbits.LATD0 = 0;
                LATB = decoCC[unidad];
                __delay_ms(te);
             
                LATAbits.LATA3 = 1;
                LATAbits.LATA4 = 1;
                LATAbits.LATA5 = 0;
                LATDbits.LATD0 = 1;
                LATB = decoCC[decena];
                __delay_ms(te);
             
                LATAbits.LATA3 = 1;
                LATAbits.LATA4 = 0;
                LATAbits.LATA5 = 1;
                LATDbits.LATD0 = 1;
                LATB = decoCC[centena];
                __delay_ms(te);
             }
         }
    }
    return;
}


