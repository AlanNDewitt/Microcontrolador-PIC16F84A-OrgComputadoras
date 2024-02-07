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

void quinientos(void)
{
    for (int i = 0 ; i < 500; i++)
         {
            PORTB = 0b00000001;
            __delay_us(100);
            PORTB = 0b00000000;
            __delay_us(100);
         }
}

void ochocientos(void)
{
    for (int j = 0 ; j < 800; j++)
         {
            PORTB = 0b00000001;
            __delay_us(625);
            PORTB = 0b00000000;
            __delay_us(625);
         }
}

void sirena(void)
{
    for (int j = 0 ; j < 1000; j++)
         {
            PORTB = 0b00000001;
            __delay_us(21);
            PORTB = 0b00000000;
            __delay_us(21);
            
            PORTB = 0b00000001;
            __delay_us(41);
            PORTB = 0b00000000;
            __delay_us(41);
         }
}

void main(void) {
    
                        //Oscilador 32MHz
    //OSCCON=0B01110000;
    
    TRISA = 1; //Puerto A son todas entradas
    TRISB = 0; //Puerto B todos son salidas
    
    PORTA = 0;
    PORTB = 0; // limpiamos los puertos 
    
    
    
    
    
    
    while (1) 
    {
        
      //quinientos();
        
       sirena();
        __delay_ms(100);
       //ochocientos();
       
       __delay_ms(5000);
       
       PORTB = 0b00000000;
       
       __delay_ms(5000);
        
    }
    
    return;
    
      
 }