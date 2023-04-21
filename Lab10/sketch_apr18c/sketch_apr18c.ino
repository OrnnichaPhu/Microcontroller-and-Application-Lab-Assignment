const float pi =3.14;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  printmenu();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    char menu = Serial.read();
    if(menu!='\n'){
      switch (menu){
        case '1':
        Serial.println("I chose Coke.");break;
        case '2':
        Serial.println("I chose Pepsi.");break;
        case '3':
        Serial.println("I chose Tea.");break;
        case '4':
        Serial.println("I chose Coffee.");break;
        default:
        Serial.println("Not in the list. Please select again.");
      }
      printmenu();
    }
  }
}

void printmenu(){
  Serial.println("=============================");
  Serial.println("Menu");
  Serial.println("1.Coke");
  Serial.println("2.Pepsi");
  Serial.println("3.Tea");
  Serial.println("4.Coffee");
  Serial.println("Please select the preferred item: ");
  
}
