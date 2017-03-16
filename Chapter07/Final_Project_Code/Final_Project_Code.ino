#include <NewPing.h>
 
ledPin=10;
trigPin=8;
echoPin=9;

NewPing sonar(trigPin, echoPin);
 

void setup() {

pinMode(ledPin,OUTPUT);

}

void loop() {
  delay(50);
  int dist = sonar.ping_cm();
  if (dist < 15)
digitalWrite(ledPin,HIGH);
   else
    digitalWrite(ledPin,LOW);
    

