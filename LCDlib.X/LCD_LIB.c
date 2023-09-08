#include <xc.h>
#include "config.h"
#include "LCD_LIB.h"

static void Load_Cmd (char data);
static void Load_Data (char data);

static void Load_Cmd (char data){
    LAT_RS = LOW;
    
    if((data & 1) == LOW) LAT_D4 = LOW; else LAT_D4 = HIGH;
    if((data & 2) == LOW) LAT_D5 = LOW; else LAT_D5 = HIGH;
    if((data & 4) == LOW) LAT_D6 = LOW; else LAT_D6 = HIGH;
    if((data & 8) == LOW) LAT_D7 = LOW; else LAT_D7 = HIGH;
    
    LAT_EN = LOW;
    LAT_EN = HIGH;
    LAT_EN = LOW;
    
    __delay_us(300);
}

static void Load_Data (char data){
    LAT_RS = HIGH;
    
    if((data & 1) == LOW) LAT_D4 = LOW; else LAT_D4 = HIGH;
    if((data & 2) == LOW) LAT_D5 = LOW; else LAT_D5 = HIGH;
    if((data & 4) == LOW) LAT_D6 = LOW; else LAT_D6 = HIGH;
    if((data & 8) == LOW) LAT_D7 = LOW; else LAT_D7 = HIGH;
    
    LAT_EN = LOW;
    LAT_EN = HIGH;
    LAT_EN = LOW;
    
    __delay_us(300);
}

void LCD_init(void){
    //CONFIGURAMOS TODOS LOS PINES DE SALIDA
    DIR_RS = OUT;
    DIR_EN = OUT;
    DIR_D4 = OUT;
    DIR_D5 = OUT;
    DIR_D6 = OUT;
    DIR_D7 = OUT;
    
    //INICIAMOS LOS PINES EN 0
    LAT_EN = LOW;
    LAT_D4 = LOW;
    LAT_D5 = LOW;
    LAT_D6 = LOW;
    LAT_D7 = LOW;
    
    //DESABILITAMOS EL ANSEL
    ANSEL_RS = LOW;
    ANSEL_EN = LOW;
    ANSEL_D4 = LOW;
    ANSEL_D5 = LOW;
    ANSEL_D6 = LOW;
    ANSEL_D7 = LOW;
    
    __delay_ms(15);
    Load_Cmd(0x03);
    __delay_ms(5);
    Load_Cmd(0x03);
    __delay_us(100);
    Load_Cmd(0x03);
    Load_Cmd(0x02);
    
    Load_Cmd(0x02);
    Load_Cmd(0x08);
    
    Load_Cmd(0x00);
    Load_Cmd(0x0F);
    
    Load_Cmd(0x00);
    Load_Cmd(0x01);
    __delay_ms(2);
    
}
void LCD_Write_Cp (char letra){
    char NibbleH, NibbleL;
    NibbleH = letra>>4;
    NibbleL = letra & 0x0F;
    Load_Data(NibbleH);
    Load_Data(NibbleL);
}
void LCD_Write_Text_Cp (char *text){
    while(*text){
        LCD_Write_Cp(*text);
        text++;
    }
}
void LCD_Set_Cursor (char fila, char col){
    char pos;
    switch(fila){
        case 1: pos = 0x80 + (col-1); break;
        case 2: pos = 0xC0 + (col-1); break;
        case 3: pos = 0x94 + (col-1); break;
        case 4: pos = 0xD4 + (col-1); break;
    }
    LCD_Cmd(pos);
}
void LCD_Write(char fila, char col, char letra){
    LCD_Set_Cursor(fila, col);
    LCD_Write_Cp(letra);
}
void LCD_Write_Text (char fila, char col, char *text){
    LCD_Set_Cursor(fila, col);
    LCD_Write_Text_Cp(text);
}
void LCD_Cmd (char cmd){
    char NibbleH, NibbleL;
    NibbleH = cmd>>4;
    NibbleL = cmd & 0x0F;
    Load_Cmd(NibbleH);
    Load_Cmd(NibbleL);
}

