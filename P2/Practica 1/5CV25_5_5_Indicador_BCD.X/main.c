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

void sentido_reloj(void)
{
    PORTB = 0b11111110; // mili segundos de retraso  = 0.01 seg
    __delay_ms(1);
    PORTB = 0b11111101;
    __delay_ms(1);
    PORTB = 0b11111011;
    __delay_ms(1);
    PORTB = 0b11110111;
    __delay_ms(1);
    PORTB = 0b11101111;
    __delay_ms(1);
    PORTB = 0b11011111;
    __delay_ms(1);
}

void sentido_inverso_reloj(void)
{
    PORTB = 0b11111110; // mili segundos de retraso  = 0.01 seg
    __delay_ms(1);
    PORTB = 0b11011111;
    __delay_ms(1);
    PORTB = 0b11101111;
    __delay_ms(1);
    PORTB = 0b11110111;
    __delay_ms(1);
    PORTB = 0b11111011;
    __delay_ms(1);
    PORTB = 0b11111101;
    __delay_ms(1);
}

void main(void) {
    
   
    
    TRISA = 1; //Puerto A son todas entradas
    TRISB = 0; //Puerto B todos son salidas
    
    //PORTA = 0;
    //PORTB = 0; // limpiamos los puertos 
    
    
    
    while (1) 
    {
        if (PORTA == 0b0000)
        {
            sentido_reloj();
        }
        else if(PORTA == 0b0001)
        {
            sentido_reloj();
        }
        else if(PORTA == 0b0010)
        {
            sentido_reloj();
        }
        else if(PORTA == 0b0011)
        {
            sentido_reloj();
        }
        else if(PORTA == 0b0100)
        {
            sentido_reloj();
        }
        else if(PORTA == 0b0101)
        {
            sentido_reloj();
        }
        else if(PORTA == 0b0110)
        {
            sentido_reloj();
        }
        else if(PORTA == 0b0111)
        {
            sentido_reloj();
        }
        else if(PORTA == 0b1000)
        {
            sentido_reloj();
        }
        else if(PORTA == 0b1001)
        {
            sentido_reloj();
        }
        else
        {
            sentido_inverso_reloj();
        }
    }
    
    return;
}
