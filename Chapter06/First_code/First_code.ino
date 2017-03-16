//Initializing a variable to store the value of the button state
int state = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital I/O pins
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  state = digitalRead(2);
  if ( state == HIGH )
    digitalWrite(13, HIGH);
  else
    digitalWrite(13, LOW);
}

