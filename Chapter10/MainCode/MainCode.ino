sensorPin = A0;
buzzerPin = 6;
threshold = 500;

void setup() {
pinMode(sensorPin, INPUT);
pinMode(buzzerPin, OUTPUT);
}
 
void loop() {
  int moisture = analogRead(sensorPin)
  if (moisture > threshold)
  {
    digitalWrite(buzzerPin, HIGH);
  }
  else 
  {
    digitalWrite (buzzerPin, LOW);
  }
}


