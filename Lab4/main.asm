;
; AssemblerApplication1.asm
;
; Created: 2/7/2023 1:21:59 PM
; Author : Networklab01
;


; Replace with your application code
/*start:
		SBI DDRD,4
		CBI PORTD,4
		CBI DDRB,0
		SBI PORTB,0
AGAIN:	SBIS PINB,0
		RJMP LED_On
		CBI PORTD,4
		RJMP AGAIN
LED_On:	SBI PORTD, 4
		RJMP AGAIN 
*/



/*LAB_EX2:
		.ORG 0
		LDI		R16, HIGH(RAMEND) ; Initialize SP
		OUT		SPH, R16
		LDI		R16, LOW(RAMEND)
		OUT		SPL, R16

		SBI		DDRD, 4  ; Set pin mode
		CBI		PORTD, 4 ;Initial value
		SBI		DDRD, 5  ;Set pin mode
		CBI		PORTD, 5 ;Initial value

AGAIN:					 ;Loop to on/off 2 LEDs 
		SBI		PORTD, 4
		CBI		PORTD, 5
		CALL	DELAY
		CBI		PORTD, 4
		SBI		PORTD, 5
		CALL	DELAY
		RJMP	AGAIN

DELAY:
		LDI		R20, 128
L1:		LDI		R21, 200
L2:		LDI		R22, 250
L3:		NOP
		NOP
		DEC		R22
		BRNE	L3
		DEC		R21
		BRNE	L2
		DEC		R20
		BRNE	L1
		RET*/

		.ORG 0
		SBI		DDRD, 4  ; Set pin mode
		CBI		PORTD, 4 ;Initial value
		SBI		DDRD, 5  ;Set pin mode
		CBI		PORTD, 5 ;Initial value

		CBI		DDRB, 4
		SBI		PORTB, 4

		CBI		DDRB, 3
		SBI		PORTB, 3
AGAIN_ONE:				
		SBIS PINB,4
		RJMP LED_ONE_On
		CBI PORTD,4
		RJMP AGAIN_TWO

AGAIN_TWO:
		SBIS PINB,3
		RJMP LED_TWO_On
		CBI PORTD,5
		RJMP AGAIN_ONE

LED_ONE_On:
		SBI PORTD, 5
		RJMP AGAIN_TWO

LED_TWO_On:
		SBI PORTD,4
		RJMP AGAIN_ONE