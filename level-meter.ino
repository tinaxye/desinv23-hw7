/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting (LED) connected to digital pin 13.
  The amount of time the LED will be on diodeand off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInput
*/

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
