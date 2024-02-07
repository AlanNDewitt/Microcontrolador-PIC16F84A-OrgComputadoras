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

void diez(void)
{
    for (int i = 0 ; i < 10000; i++)
         {
            PORTB = 0b00000001;
            __delay_us(37);
            PORTB = 0b00000000;
            __delay_us(37);
         }
}

void cinco(void)
{
    for (int j = 0 ; j < 5000; j++)
         {
            PORTB = 0b00000001;
            __delay_us(87);
            PORTB = 0b00000000;
            __delay_us(87);
         }
}

void quice(void)
{
    for (int j = 0 ; j < 15000; j++)
         {
            PORTB = 0b00000001;
            __delay_us(21);
            PORTB = 0b00000000;
            __delay_us(21);
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
        
       if (PORTA == 0b00000)
        {
            cinco();
        }
        else if(PORTA == 0b0001)
        {
            cinco();
        }
        else if(PORTA == 0b0010)
        {
            cinco();
        }
        else if(PORTA == 0b0011)    //3
        {
            diez();
        }
        else if(PORTA == 0b0100)    //4
        {
            diez();
        }
        else if(PORTA == 0b0101)    //5
        {
            diez();
        }
        else if(PORTA == 0b0110)    //6
        {
           quice();
        }
        else if(PORTA == 0b0111)   //7
        {
            quice();
        }
        else if(PORTA == 0b1000)    //8
        {
            quice();
        }
        else if(PORTA == 0b1001)    //9
        {
            quice();
        }
        
        //__delay_ms(3000);
        
        //cuatrocientos();
        
       // PORTB = 0b00000111;
       // __delay_us(46);
       //PORTB = 0b00000000;
      //  __delay_us(46);
        
      
        
    }
    
    return;
    
      
 }