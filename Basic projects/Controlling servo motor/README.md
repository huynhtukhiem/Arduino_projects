# Dowload libraries
https://github.com/arduino-libraries/Servo/archive/refs/heads/master.zip

# Video demo

# Circuit diagram
- Vcc <-> 5V
- GND <-> GND
- pin <-> pin 9

# Code
```
#include <Servo.h>

Servo myServo;

int buttonPin = 2;      // Button input pin
int servoPin  = 9;      // Servo output pin

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Internal pull-up resistor
  myServo.attach(servoPin);         // Attach servo
  myServo.write(0);                 // Start at 0 degrees
}

void loop() {
  int state = digitalRead(buttonPin);

  // Button pressed (LOW because of INPUT_PULLUP)
  if (state == LOW) {
    myServo.write(180);   // Rotate to 180 degrees
  } else {
    myServo.write(0);     // Return to 0 degrees
  }
}

```
