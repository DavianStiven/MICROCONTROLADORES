
// 'C' source line config statements

// CONFIG1
#pragma config FOSC = HS        // Oscillator Selection (HS Oscillator, High-speed crystal/resonator connected between OSC1 and OSC2 pins)
#pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
#pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Memory Code Protection (Data memory code protection is disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable (Brown-out Reset enabled)
#pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
#pragma config IESO = ON        // Internal/External Switchover (Internal/External Switchover mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is enabled)

// CONFIG2
#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
#pragma config VCAPEN = OFF     // Voltage Regulator Capacitor Enable (All VCAP pin functionality is disabled)
#pragma config PLLEN = OFF      // PLL Enable (4x PLL disabled)
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
#pragma config LVP = ON         // Low-Voltage Programming Enable (Low-voltage programming enabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include "config.h"

void init_punto5(void){
    OSCCON  = 0x38;
    OSCTUNE = 0x00;
    BORCON  = 0x00;
    
    entrada0 = IN;
    entrada1 = IN;
    entrada2 = IN;
    entrada3 = IN;
    
    salidas = 0x00;
    
    analog_en0 = LOW;
    analog_en1 = LOW;
    analog_en2 = LOW;
    analog_en3 = LOW;
    
    ANSELD = 0x00;
    
    pines_out = 0x00;   
}

void secuencias_p1(char dig){
    switch(dig){
        case 0: pines_out = 0x00;
                for(char i=0; i<=7; i++){ //asendente
                    pines_out |= (1<<i);
                    __delay_ms(200);
                    if(pin0_in == HIGH || pin1_in == HIGH || pin2_in == HIGH || pin3_in == HIGH){
                        break;
                    }    
                }
                pines_out = 0x00;
                __delay_ms(200);
                break;
                
        case 1: pines_out = 0x00;
                for(char i=7; i>0; i--){ //desendente
                    pines_out |= (1<<i);
                    __delay_ms(200);
                    if(pin0_in == LOW || pin1_in == HIGH || pin2_in == HIGH || pin3_in == HIGH){
                        break;
                    }
                }
                pines_out |= (1<<0);
                __delay_ms(200);
                pines_out = 0x00;
                __delay_ms(200);
                break;
                
        case 2: pines_out = 0xFF;
                for(char i=0; i<=7; i++){ //asendente apagando
                    pines_out &= ~(1<<i);
                    __delay_ms(200);
                    if(pin0_in == HIGH || pin1_in == LOW || pin2_in == HIGH || pin3_in == HIGH){
                        break;
                    }
                }
                pines_out = 0xFF;
                __delay_ms(200);
                break;
                
        case 3: pines_out = 0x00;
                for(char i=6; i>0; i=i-2){
                    pines_out |= (1<<i);
                    __delay_ms(200);
                    if(pin0_in == LOW || pin1_in == LOW || pin2_in == HIGH || pin3_in == HIGH){
                        break;
                    }
                }
                pines_out |= (1<<0);
                __delay_ms(200);
                pines_out = 0x00;
                __delay_ms(200);
                break;
                
        case 4: pines_out = 0x00;
                for(char i=0; i<7; i=i+2){
                    pines_out |= (1<<i);
                    __delay_ms(200);
                    if(pin0_in == HIGH || pin1_in == HIGH || pin2_in == LOW || pin3_in == HIGH){
                        break;
                    }
                }
                pines_out = 0x00;
                __delay_ms(200);
                break;
                
        case 5: pines_out = 0x00;
                for(char i=1; i<8; i=i+2){
                    pines_out |= (1<<i);
                    __delay_ms(200);
                    if(pin0_in == LOW || pin1_in == HIGH || pin2_in == LOW || pin3_in == HIGH){
                        break;
                    }
                }
                pines_out = 0x00;
                __delay_ms(200);
                break;
                
        case 6: pines_out = 0x00;
                for(char i=7; i>1; i=i-2){
                    pines_out |= (1<<i);
                    __delay_ms(200);
                    if(pin0_in == HIGH || pin1_in == LOW || pin2_in == LOW || pin3_in == HIGH){
                        break;
                    }
                }
                pines_out |= (1<<1);
                __delay_ms(200);
                pines_out = 0x00;
                __delay_ms(200);
                break;
                
        case 7: pines_out = 0x00;
                for(char i=7; i>0; i--){
                    pines_out |= (1<<i);
                    __delay_ms(200);
                    if(pin0_in == LOW || pin1_in == LOW || pin2_in == LOW || pin3_in == HIGH){
                        break;
                    }
                }
                pines_out = 0x00;
                __delay_ms(200);
                break;        
        
        case 8: pines_out = 0xFF;
                for(char i=7; i>0; i--){
                    pines_out &= ~(1<<i);
                    __delay_ms(200);
                    if(pin0_in == HIGH || pin1_in == HIGH || pin2_in == HIGH || pin3_in == LOW){
                        break;
                    }
                }
                pines_out &= ~(1<<0);
                    __delay_ms(200);
                pines_out = 0xFF;
                __delay_ms(200);
                break;
    }
}
