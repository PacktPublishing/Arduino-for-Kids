int pin = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
dot();dot();dot();
dash();dash();dash();
dot();dot();dot();
delay(3000);
}

void dot(){
  digitalWrite(pin,HIGH);
  delay(250);
  digitalWrite(pin,LOW);
  delay(250);
  
}

void dash(){
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(250);
  
}
