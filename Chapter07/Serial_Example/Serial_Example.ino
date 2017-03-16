#include <NewPing.h>
 

NewPing sonar(8, 9);
 
void setup() {
 Serial.begin(115200);
}
 
void loop() {
  delay(50);
  int dist = sonar.ping_cm();
  Serial.print("Distance: ");
  Serial.print(dist);
  Serial.println("cm");
}

