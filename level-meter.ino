int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin5 = 5;      // select the pin for the LED
int ledPin6 = 6;
int ledPin9 = 9;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPins as an OUTPUT:
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  // open a 9600-baud serial connection
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // write the sensor value to the serial interface
  Serial.println(sensorValue);
  if(sensorValue >= 0 && sensorValue < 255.75) {
    // turn the ledPin9 off:
    digitalWrite(ledPin9, LOW);
    // turn the ledPin6 off:
    digitalWrite(ledPin6, LOW);
    // turn the ledPin5 off:
    digitalWrite(ledPin5, LOW);
  } else if(sensorValue >= 255.75 && sensorValue < 511.5) {
    // turn the ledPin9 on:
    digitalWrite(ledPin9, HIGH);
    // turn the ledPin6 off:
    digitalWrite(ledPin6, LOW);
    // turn the ledPin5 off:
    digitalWrite(ledPin5, LOW);
  } else if (sensorValue >= 511.5 && sensorValue < 767.25) {
    // turn the ledPin9 on:
    digitalWrite(ledPin9, HIGH);
    // turn the ledPin6 on:
    digitalWrite(ledPin6, HIGH);
    // turn the ledPin5 off:
    digitalWrite(ledPin5, LOW);
  } else if (sensorValue >= 767.25) {
    // turn the ledPin9 on:
    digitalWrite(ledPin9, HIGH);
    // turn the ledPin6 on:
    digitalWrite(ledPin6, HIGH);
    // turn the ledPin5 on:
    digitalWrite(ledPin5, HIGH);
  }
}
