#include <NewPing.h>
#include <Servo.h> 
 

NewPing sonar(2, 3);
Servo myservo;
 
void setup() {
myservo.attach(9);
}
 
void loop() {
  int dist = sonar.ping_cm();
  if (dist<15)
  {
    myservo.write(90);
    delay(1000);
  }
  else 
  {
    myservo.write(0);
    delay(1000);
  }
}

