#include <xc.h>
#include "config.h"
#include "punto12.h"

void init_punto12(){
    PUERTOB_DIR = 0xFF;
    PUERTOB_ANSEL = 0x00;
    
    PUERTOD_DIR = 0x00;
    PUERTOD = 0x00;
    
    BT0_DIR = IN;
    BT1_DIR = IN;
    BT2_DIR = IN;
    
    BT0_ANSEL = LOW;
    BT1_ANSEL = LOW;
    BT2_ANSEL = LOW;
}
