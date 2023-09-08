#include <xc.h>
#include "config.h"
#include "display7seg.h"


void display_init(void){
    puertoC = 0x00;
    puertoD = 0x00;
}
void display_ac(char dig){
    switch(dig){
        case 0: segA1 = 0;
                segB1 = 0;
                segC1 = 0;
                segD1 = 0;
                segE1 = 0;
                segF1 = 0;
                segG1 = 1;
                break;
                
        case 1: segA1 = 1;
                segB1 = 0;
                segC1 = 0;
                segD1 = 1;
                segE1 = 1;
                segF1 = 1;
                segG1 = 1;
                break;
         
        case 2: segA1 = 0;
                segB1 = 0;
                segC1 = 1;
                segD1 = 0;
                segE1 = 0;
                segF1 = 1;
                segG1 = 0;
                break;
                
        case 3: segA1 = 0;
                segB1 = 0;
                segC1 = 0;
                segD1 = 0;
                segE1 = 1;
                segF1 = 1;
                segG1 = 0;
                break;
        
        case 4: segA1 = 1;
                segB1 = 0;
                segC1 = 0;
                segD1 = 1;
                segE1 = 1;
                segF1 = 0;
                segG1 = 0;
                break;
                
        case 5: segA1 = 0;
                segB1 = 1;
                segC1 = 0;
                segD1 = 0;
                segE1 = 1;
                segF1 = 0;
                segG1 = 0;
                break;
                
        case 6: segA1 = 0;
                segB1 = 1;
                segC1 = 0;
                segD1 = 0;
                segE1 = 0;
                segF1 = 0;
                segG1 = 0;
                break;
         
        case 7: segA1 = 0;
                segB1 = 0;
                segC1 = 0;
                segD1 = 1;
                segE1 = 1;
                segF1 = 0;
                segG1 = 1;
                break;
                
        case 8: segA1 = 0;
                segB1 = 0;
                segC1 = 0;
                segD1 = 0;
                segE1 = 0;
                segF1 = 0;
                segG1 = 0;
                break;
        
        case 9: segA1 = 0;
                segB1 = 0;
                segC1 = 0;
                segD1 = 0;
                segE1 = 1;
                segF1 = 0;
                segG1 = 0;
                break;
    }
}

void display_cc1(int dig){
    switch(dig){
        case 0: segA1 = 1;
                segB1 = 1;
                segC1 = 1;
                segD1 = 1;
                segE1 = 1;
                segF1 = 1;
                segG1 = 0;
                break;
                
        case 1: segA1 = 0;
                segB1 = 1;
                segC1 = 1;
                segD1 = 0;
                segE1 = 0;
                segF1 = 0;
                segG1 = 0;
                break;
         
        case 2: segA1 = 1;
                segB1 = 1;
                segC1 = 0;
                segD1 = 1;
                segE1 = 1;
                segF1 = 0;
                segG1 = 1;
                break;
                
        case 3: segA1 = 1;
                segB1 = 1;
                segC1 = 1;
                segD1 = 1;
                segE1 = 0;
                segF1 = 0;
                segG1 = 1;
                break;
        
        case 4: segA1 = 0;
                segB1 = 1;
                segC1 = 1;
                segD1 = 0;
                segE1 = 0;
                segF1 = 1;
                segG1 = 1;
                break;
                
        case 5: segA1 = 1;
                segB1 = 0;
                segC1 = 1;
                segD1 = 1;
                segE1 = 0;
                segF1 = 1;
                segG1 = 1;
                break;
                
        case 6: segA1 = 1;
                segB1 = 0;
                segC1 = 1;
                segD1 = 1;
                segE1= 1;
                segF1 = 1;
                segG1= 1;
                break;
         
        case 7: segA1 = 1;
                segB1 = 1;
                segC1 = 1;
                segD1 = 0;
                segE1 = 0;
                segF1 = 1;
                segG1 = 0;
                break;
                
        case 8: segA1 = 1;
                segB1 = 1;
                segC1 = 1;
                segD1 = 1;
                segE1 = 1;
                segF1 = 1;
                segG1 = 1;
                break;
        
        case 9: segA1 = 1;
                segB1 = 1;
                segC1 = 1;
                segD1 = 1;
                segE1 = 0;
                segF1 = 1;
                segG1 = 1;
                break;
    }
}

void display_cc2(int dig2){
    switch(dig2){
        case 0: segA2 = 1;
                segB2 = 1;
                segC2 = 1;
                segD2 = 1;
                segE2 = 1;
                segF2 = 1;
                segG2 = 0;
                break;
                
        case 1: segA2 = 0;
                segB2 = 1;
                segC2 = 1;
                segD2 = 0;
                segE2 = 0;
                segF2 = 0;
                segG2 = 0;
                break;
         
        case 2: segA2 = 1;
                segB2 = 1;
                segC2 = 0;
                segD2 = 1;
                segE2 = 1;
                segF2 = 0;
                segG2 = 1;
                break;
                
        case 3: segA2 = 1;
                segB2 = 1;
                segC2 = 1;
                segD2 = 1;
                segE2 = 0;
                segF2 = 0;
                segG2 = 1;
                break;
        
        case 4: segA2 = 0;
                segB2 = 1;
                segC2 = 1;
                segD2 = 0;
                segE2 = 0;
                segF2 = 1;
                segG2 = 1;
                break;
                
        case 5: segA2 = 1;
                segB2 = 0;
                segC2 = 1;
                segD2 = 1;
                segE2 = 0;
                segF2 = 1;
                segG2 = 1;
                break;
                
        case 6: segA2 = 1;
                segB2 = 0;
                segC2 = 1;
                segD2 = 1;
                segE2= 1;
                segF2 = 1;
                segG2= 1;
                break;
         
        case 7: segA2 = 1;
                segB2 = 1;
                segC2 = 1;
                segD2 = 0;
                segE2 = 0;
                segF2 = 1;
                segG2 = 0;
                break;
                
        case 8: segA2 = 1;
                segB2 = 1;
                segC2 = 1;
                segD2 = 1;
                segE2 = 1;
                segF2 = 1;
                segG2 = 1;
                break;
        
        case 9: segA2 = 1;
                segB2 = 1;
                segC2 = 1;
                segD2 = 1;
                segE2 = 0;
                segF2 = 1;
                segG2 = 1;
                break;
    }
}
