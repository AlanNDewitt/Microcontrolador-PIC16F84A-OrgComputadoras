// CONFIG
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = ON        // Watchdog Timer (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.


//#include <avr/io.h>
#include <xc.h> 
#define _XTAL_FREQ 4000000 // definimos que el reloj del pic es de 1hz

void sentido_reloj(void)
{
    __delay_ms(1);
}



void main(void) {
    
                        //Oscilador 32MHz
    //OSCCON=0B01110000;
    
    TRISA = 1; //Puerto A son todas entradas
    TRISB = 0; //Puerto B todos son salidas
    
    //PORTA = 0;
    //PORTB = 0; // limpiamos los puertos 
    
    
    
    while (1) 
    {
        if (PORTA == 0b00000)
        {
            PORTB = 0b00000000;
        }
        else if(PORTA == 0b0001)
        {
            PORTB = 0b00000001;
        }
        else if(PORTA == 0b0010)
        {
            PORTB = 0b00000010;
        }
        else if(PORTA == 0b0011)
        {
            PORTB = 0b00000011;
        }
        else if(PORTA == 0b0100)
        {
            PORTB = 0b00000100;
        }
        else if(PORTA == 0b0101)
        {
            PORTB = 0b00000101;
        }
        else if(PORTA == 0b0110)
        {
            PORTB = 0b00000110;
        }
        else if(PORTA == 0b0111)   //7
        {
            PORTB = 0b00000111;
        }
        else if(PORTA == 0b1000)    //10
        {
            PORTB = 0b00010000;
        }
        else if(PORTA == 0b1001)    //11
        {
            PORTB = 0b00010001;
        }
        else if(PORTA == 0b1010)    //12
        {
            PORTB = 0b00010010;
        }
        else if(PORTA == 0b1011)    //13
        {
            PORTB = 0b00010011;
        }
        else if(PORTA == 0b1100)    //14
        {
            PORTB = 0b00010100;
        }
        else if(PORTA == 0b1101)    //15
        {
            PORTB = 0b00010101;
        }
        else if(PORTA == 0b1110)    //16
        {
            PORTB = 0b00010110;
        }
        else if(PORTA == 0b1111)    //17
        {
            PORTB = 0b00010111;
        }
        else if(PORTA == 0b10000)   //20
        {
            PORTB = 0b00100000;
        }
        else if(PORTA == 0b10001)   //21
        {
            PORTB = 0b00100001;
        }
        else if(PORTA == 0b10010)   //22
        {
            PORTB = 0b00100010;
        }
        else if(PORTA == 0b10011)   //23
        {
            PORTB = 0b00100011;
        }
        else if(PORTA == 0b10100)   //24
        {
            PORTB = 0b00100100;
        }
        else if(PORTA == 0b10101)   //25
        {
            PORTB = 0b00100101;
        }
        else if(PORTA == 0b10110)   //26
        {
            PORTB = 0b00100110;
        }
        else if(PORTA == 0b10111)   //27
        {
            PORTB = 0b00100111;
        }
        else if(PORTA == 0b11000)   //30
        {
            PORTB = 0b00110000;
        }
        else if(PORTA == 0b11001)   //31
        {
            PORTB = 0b00110001;
        }
        else if(PORTA == 0b11010)   //32
        {
            PORTB = 0b00110010;
        }
        else if(PORTA == 0b11011)   //33
        {
            PORTB = 0b00110011;
        }
        else if(PORTA == 0b11100)   //34
        {
            PORTB = 0b00110100;
        }
        else if(PORTA == 0b11101)   //35
        {
            PORTB = 0b00110101;
        }
        else if(PORTA == 0b11110)   //36
        {
            PORTB = 0b00110110;
        }
        else if(PORTA == 0b11111)   //37
        {
            PORTB = 0b00110111;
        }
        
        else
        {
            PORTB = 0b10001000;
        }
    }
    
    return;
}
