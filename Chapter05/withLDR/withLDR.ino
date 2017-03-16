int lightPin = A0; //define a pin for Photo resistor
int ledPin = 13; // We are using the inbuilt LED

void setup() {
  Serial.begin(9600); //Begin serial communication
  pinMode(ledPin, OUTPUT); //Configure the pin 13 as output
}

void loop() {
  Serial.println(analogRead(lightPin)); //Write the value of the photoresistor to the serial monitor.
  if (analogRead(lightPin)<800){ //Darkness Detected by the LDR
    digitalWrite(ledPin,HIGH);
    }
    else{                         //When Light detected outside
      digitalWrite(ledPin,LOW);
      }

     delay(10); //short delay for faster response to light.
}

