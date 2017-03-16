int sensorPin = A0;            // select the input pin for the ldr
unsigned int sensorValue = 0;  // variable to store the value coming from the ldr

void setup()
{
  pinMode(13, OUTPUT);
  //Start Serial port
  Serial.begin(9600);        // start serial for output - for testing
}

void loop()
{
  // read the value from the ldr:
  sensorValue = analogRead(sensorPin);     
  if(sensorValue<400)
       digitalWrite(13, HIGH);   // set the LED on
  else digitalWrite(13, LOW);   // set the LED off
  
}


