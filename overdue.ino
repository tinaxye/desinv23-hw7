//choose your pin
int pin = 9;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 9 as an output.
  pinMode(pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(600);              // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(600);              // wait for a second
}
