int lightPin = A0;  //define a pin for Photo resistor

void setup()
{
    Serial.begin(9600);  //Begin serial communication
}

void loop()
{
   int level = analogRead(lightPin);
   Serial.println(level);//Write the value of the photoresistor to the serial monitor.
   delay(10); //short delay
}

