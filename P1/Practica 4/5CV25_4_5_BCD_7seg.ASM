#include "P16F84.inc" ;Libreria para el pic
TEMP EQU 0XC
		  
BSF STATUS,5 	   ; IR A LA PÁGINA1 o Bloque de memoria 1
MOVLW b'00001111'
MOVWF TRISA		 ;Definimos los primeros 4 pines del puerto A como entrada

MOVLW b'00000000'
MOVWF TRISB    ;Definimos el puerto B como salida 

BCF STATUS,5 ;IR A PÁGINA 0 o banco de memoria 0



BUCLE
	;CLRF PORTA
	;CLRF PORTB ;INICIO DEL PORTB A CERO
	CLRW
	
	
	MOVLW b'00000000'
	SUBWF PORTA,W  ; Restamos para comparar 
	BTFSC STATUS,2	; si da cero es igual al bcd y esta bien
		GOTO B0
	
	MOVLW b'00000001'
	SUBWF PORTA,W  ; Restamos para comparar 
	BTFSC STATUS,2	; si da cero es igual al bcd y esta bien
		GOTO B1
	
	MOVLW b'00000010'
	SUBWF PORTA,W  ; Restamos para comparar 
	BTFSC STATUS,2	; si da cero es igual al bcd y esta bien
		GOTO B2
		
	MOVLW b'00000011'
	SUBWF PORTA,W  ; Restamos para comparar 
	BTFSC STATUS,2	; si da cero es igual al bcd y esta bien
		GOTO B3
		
	MOVLW b'00000100'
	SUBWF PORTA,W  ; Restamos para comparar 
	BTFSC STATUS,2	; si da cero es igual al bcd y esta bien
		GOTO B4
		
	MOVLW b'00000101'
	SUBWF PORTA,W  ; Restamos para comparar 
	BTFSC STATUS,2	; si da cero es igual al bcd y esta bien
		GOTO B5
	
	MOVLW b'00000110'
	SUBWF PORTA,W  ; Restamos para comparar 
	BTFSC STATUS,2	; si da cero es igual al bcd y esta bien
		GOTO B6
		
	MOVLW b'00000111'
	SUBWF PORTA,W  ; Restamos para comparar 
	BTFSC STATUS,2	; si da cero es igual al bcd y esta bien
		GOTO B7
	
	MOVLW b'00001000'
	SUBWF PORTA,W  ; Restamos para comparar 
	BTFSC STATUS,2	; si da cero es igual al bcd y esta bien
		GOTO B8
		
	MOVLW b'00001001'
	SUBWF PORTA,W  ; Restamos para comparar 
	BTFSC STATUS,2	; si da cero es igual al bcd y esta bien
		GOTO B9
		
	GOTO NOBCD
		
	
B0
	MOVLW b'11000000'
	MOVWF PORTB
	GOTO BUCLE
		 
B1
	MOVLW b'11111001'
	MOVWF PORTB
	GOTO BUCLE

B2
	MOVLW b'10100100'
	MOVWF PORTB
	GOTO BUCLE

B3
	MOVLW b'10110000'
	MOVWF PORTB
	GOTO BUCLE
	
B4
	MOVLW b'10011001'
	        ;gfedcba
	MOVWF PORTB
	GOTO BUCLE
	
B5
	MOVLW b'10010010'
	        ;gfedcba
	MOVWF PORTB
	GOTO BUCLE
	
B6
	MOVLW b'10000010'
	        ;gfedcba
	MOVWF PORTB
	GOTO BUCLE
	
B7
	MOVLW b'11111000'
	        ;gfedcba
	MOVWF PORTB
	GOTO BUCLE
	
B8
	MOVLW b'10000000'
	        ;gfedcba
	MOVWF PORTB
	GOTO BUCLE
	
B9
	MOVLW b'10010000'
	        ;gfedcba
	MOVWF PORTB
	GOTO BUCLE
	
NOBCD
	
	MOVLW b'00000000'
	MOVWF PORTB
	CLRW
	GOTO BUCLE
	
	
END