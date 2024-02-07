// CONFIG
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = ON        // Watchdog Timer (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.


//#include <avr/io.h>
#include <xc.h> 
#define _XTAL_FREQ 4000000 // definimos que el reloj del pic es de 4ghz
#include "flex-lcd.h"

void main(void) {
    
    TRISB = 0B00010000; // ese bit es de entrada
    //TRISAbits.TRISA4 = 1; //es lo mismo que lo de arriba
    
    //ANSELB=0B00010000 ;//esa entrada es digital 
    //ANSELAbits.ANSA4 = 1;
    
    
    
    //LCD -----------------------------
    
    Lcd_Init();//Inicializa la LCD
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    __delay_ms(100);
    
    //LCD -----------------------------
    
    
    while (1) 
    {        
        
        Lcd_Out(1,1,"Hola Equipo 5 ");
        Lcd_Out(2,1,"*****IPN*****");
         
         __delay_ms(300);
 
    }
    return;
    
      
 }