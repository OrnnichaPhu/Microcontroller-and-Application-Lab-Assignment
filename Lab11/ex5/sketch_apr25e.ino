#include <Keypad.h>
int LED_1 = 10;
int LED_2 = 11;
int LED_3 = 12;
int LED_4 = 13;
const byte ROWS =4;
const byte COLS =4;
char Layout[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {2,3,4,5};
byte colPins[COLS] = {6,7,8,9};
Keypad customKeypad = Keypad(makeKeymap(Layout), rowPins, colPins, ROWS, COLS);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char Key = customKeypad.getKey();
  if (Key == '1') {
    Serial.println(Key);
    digitalWrite(LED_1, HIGH);
  }
  else if (Key == '2'){
    Serial.println(Key);
    digitalWrite(LED_2, HIGH);
  }
  else if (Key== '3'){
    Serial.println(Key);
    digitalWrite(LED_3, HIGH);
  }
  else if (Key=='4') {
    Serial.println(Key);
    digitalWrite(LED_4, HIGH);
  }
  else if (Key == 'A'){
    Serial.println(Key);
    digitalWrite(LED_1, LOW);
  }
  else if (Key == 'B'){
    Serial.println(Key);
    digitalWrite(LED_2, LOW);
  }
  else if (Key=='C') {
    Serial.println(Key);
    digitalWrite(LED_3, LOW);
  }
  else if (Key == 'D'){
    Serial.println(Key);
    digitalWrite(LED_4, LOW);
  }
  
}
