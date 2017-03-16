int mSensor = 0;
int moinsture = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  moinsture = analogRead(mSensor);
  Serial.print("Value of the sensor is: ");
  Serial.print(moinsture);
  delay(500);
}
