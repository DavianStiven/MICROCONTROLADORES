#include <xc.h>
#include "config.h"
#include "punto11.h"


void init_punto11(){
    BT_OFF_DIR = IN;
    BT_ON_DIR = IN;
    BT_PLUS_DIR = IN;
    BT_MINUS_DIR = IN;
    
    BT_OFF_ANSEL = LOW;
    BT_ON_ANSEL = LOW;
    
    PUERTOD_DIR = 0x00;
    PUERTOD_LAT = 0x00;
    
    OPTION_REGbits.nWPUEN = 0;
    WPUB = 0xF0;
}
