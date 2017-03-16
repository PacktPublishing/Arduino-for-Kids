//Initializing a variable to store the value of the button state
int lidState = 0;
int keyState = 0;
int lidPin = 2;
int keyPin = 3;
int alarmPin = 9;

// the setup function runs once when you press reset or power the board


void setup() {
  // initialize digital I/O pins
  pinMode(lidPin, INPUT);
  pinMode(keyPin, INPUT);
  pinMode(alarmPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  lidState = digitalRead(lidPin);
  if ( lidState == LOW )
  {
    keyState = digitalRead(keyPin);
    if ( keyState == HIGH )
      digitalWrite(alarmPin, LOW);
    else
      digitalWrite(alarmPin, HIGH);
  }
  else
    digitalWrite(alarmPin, LOW);
}

