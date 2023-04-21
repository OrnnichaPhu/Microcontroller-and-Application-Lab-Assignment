/*
 * GccApplication1.cpp
 *
 * Created: 4/4/2023 12:42:20 PM
 * Author : Networklab01
 */ 
//
//#include <avr/io.h>
//#define F_CPU 16000000UL
//#include <util/delay.h>
//
//void usart_init (void) {
	//UCSR0B=(1<<TXEN0);
	//UCSR0C=(1<<UCSZ01)|(1<<UCSZ00);
	//UBRR0L=103;
//}
//
//void pin_setup (void) {
	//DDRB = 0x00;
	//PORTB = 0xff;
	//DDRD = 0x00;
	//PORTD= 0xff;
//}
//
//int main(void)
//{
	//usart_init();
	//pin_setup();
    ///* Replace with your application code */
    //while (1) 
    //{
		//while (!(UCSR0A&(1<<UDRE0)));
		//UDR0= (PIND & 0xC0)|(PINB & 0b00111111);
		//_delay_ms(5000);
    //}
	//return 0;
//}

//#include <avr/io.h>
//
//void usart_init(void) {
	//UCSR0B = (1<<RXEN0);
	//UCSR0C = (1<<UCSZ01)|(1<<UCSZ00);
	//UBRR0L = 103;
//}
//
//void pin_setup(void){
	//DDRB = 0xff;
	//PORTB= 0x00;
	//DDRD = 0xff;
	//PORTD = 0x00;
//}
//
//int main(void) {
	//pin_setup();
	//usart_init();
	//while (1) {
		//while (!(UCSR0A&(1<<RXC0)));
		//PORTB = (UDR0 & 0x3F);
		//PORTD = (UDR0 & 0b11000000);
	//}
	//return 0;
//}


//#include <avr/io.h>
//
//int main(void) {
	//unsigned char ch;
	//
	//UCSR0B = (1<<TXEN0)|(1<<RXEN0);
	//UCSR0C = (1<<UCSZ01)|(1<<UCSZ00);
	//UBRR0L =103;
	//
	//while (1) {
		//while (!(UCSR0A&(1<<RXC0)));
		//ch =  UDR0;
		//if (ch >= 'a' && ch<='z'){
			//ch+=('A'-'a');
			//while (!(UCSR0A&(1<<UDRE0)));
			//UDR0=ch;
		//}
	//}
	//return 0;
//}


//#include <avr/io.h>
//#define  F_CPU 16000000UL
//#include <util/delay.h>
//
//void pin_setup(void) {
	//DDRC = 0x00;
	//DDRB= 0xff;
	//DDRD= 0xff;
	//PORTB=0x00;
	//PORTD=0x00;
//}
//
//void ADC_setup(void){
	//ADCSRA = 0x87;
	//ADMUX=0x40;
//}
//
//int main(void){
	//pin_setup();
	//ADC_setup();
	//while(1){
		//ADCSRA |= (1<<ADSC);
		//while ((ADCSRA&(1<<ADIF))==0);
		//PORTD = ADCL;
		//PORTB = ADCH;
		//_delay_ms(100);
	//}
	//return 0;
//}




//#include <avr/io.h>
//
//
//void pin_setup(void) {
	//DDRC = 0x00;
	//DDRB= 0xff;
	//PORTB=0x00;
//
//}
//
//void ADC_setup(void){
	//ADCSRA = 0x87;
	//ADMUX=0x42;
//}
//
//int main(void){
	//pin_setup();
	//ADC_setup();
	//while(1){
		//ADCSRA |= (1<<ADSC);
		//while ((ADCSRA&(1<<ADIF))==0);
		//if (ADC <= 308){
			//PORTB=0x01;
		//} 
		//else if((ADC > 308) && (ADC < 615)){
			//PORTB = 0x02;
		//} else{
			//PORTB = 0x04;
		//}
	//}
	//return 0;
//}