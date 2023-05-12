#include<avr/io.h>
#include<avr/interrupt.h>

/*Quiz1 Morning Section*/
int check=o; unsigned char y = 200; unsigned charz=2; intarm=0;

unit8_i segment[] = {
0b01111101, //6
0b01001111, //3
0b01011011, //2
0b01011011, //2
0b00000111, //7
0b00000111, //7
0b01011011, //2
0b01111101, //6
0b01111111, //8
0b00111111, //8
  };

void PIN_SETUP(){
  DDRB = 0xFF; //output
  PORTB = 0x00;
  DDRD = 0x00; //input
  PORTD = 0xFF;
}

void TIMER0_SETUP() {
  TCNTO =0xB2;
  TCCROA=0x00;
  TCCROB =0x05;
}

int mains(){
  PIN_SETUP();
  TIMER0_SETUP();
  //INT1 interupt setup
  EIMSK =(1 << INT1);
  EICRA = 0x08 //falling-edge trigger
  //PD5 Pin change interrupt
  PCICR = (1<<PCIE2) // Enable PORTD Pin change interrupt
  PCMSK2 = 0x20 // Enable interrupt from PD5

  // Timero overflow Interrupt
  TIMSK0 = (1<<TOIE0); // Enable Timero overflow interrupt
  sei();
  While (1) {
    PORTB = segment[num];
  }
  Return (0);
}

ISR(INT1_vect) {
  check = 0;
}

ISR(PCINT2_vect){
  z--;
  if (z ==0) {
    z = 2;
    Check=1;
  }
}

ISR(TIMER0_OVF_vect){
  y --;
  if (y == 0){
    y = 200;
    if (check ==0 ){
      num++;
      PORTB = segment[num];
    }
    else if(check == 1){
      num--;
      PORTB = segment[num];
    }
  }
  TCNT0 =0xB2;
}



//****************************************************************************************************
/*Quiz1 Afternoon Section*/
int y = 200;
//7 segment digit 0 - 9
char seg_code[] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F}
int count = 0;
int mode = 0;

void pin_setup(int i){
  PORTD = seg_code[i]; //display digit to 7-segment
}

void pin_setup() {
DDRD = 0xFF;
PORTD = 0x00;
DDRB = 0x00;
PORTB = 0xFF;
DDRC = 0x00;
PORTC = 0xFF;
}
void timer_setup() {
TCNT0 = 0xB2;
TCCR0A = 0x00;
TCCR0B = 0X05;
}
int main() {
pin_setup();
timer_setup();
PCICR = (1<<0) || (1<<1);
// enable PORTB and PORTC pin change interrupt
PCMSK0 = (1<<0) ; // enable interrupt from PB0
PCMSK1 = (1<<0) ; // enable interrupt from PC0
TIMSK0 = (1<<TOIE0); // enable timer overflow interrupt
sei();
while(1) {
show(count);
}
return 0;
}

ISR(TIMER0_OVF_vect) { // timer0 overflow interrupt
y––;
if (y==0) { // delay for 1 second
y = 200;
if (mode == 0) {
count++; // count up
} else {
count––; // count down
}
if (count == 10) {
count = 0;
} else if (count == –1) {
count = 9;
}
}
TCNT0 = 0xB2; // reset the timer
}
ISR(PCINT0_vect) { // PORTB pin change interrupt
mode = 0; // count up
}
ISR(PCINT1_vect) { // PORTC pin change interrupt
mode = 1; // count down
}
