#include <xc.h>
#include "config.h"
#include "LCD_LIB.h"

void main(void){
    LCD_init();
    LCD_Write_Text_Cp("01234567890123456789");
    LCD_Write_Text(3, 8, "SAPO Hp");
    while(1){
       
    }
    return;
}
