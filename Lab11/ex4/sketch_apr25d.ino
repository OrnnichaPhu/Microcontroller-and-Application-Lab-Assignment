void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  digitalWrite(8, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  int inValue = analogRead(A0);
  Serial.println(inValue);
  if (inValue > 750){
    digitalWrite(0, HIGH);
  }
  else {
    digitalWrite(8, LOW);
  }
  delay(1000);
}
