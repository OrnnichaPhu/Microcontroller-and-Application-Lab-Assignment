void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int inValue = analogRead(A2);
  int outValue = map(inValue, 0, 1023, 0, 255);
  analogWrite(9, outValue);

}
