int test;
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  test =0;
}

void loop() {
  // put your main code here, to run repeatedly:
  test=test+1;
  Serial.print("The value is ");
  Serial.println(test);
  delay(1000);
}
