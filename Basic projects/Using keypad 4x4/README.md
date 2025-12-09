# Video demo
Video on my youtube channel: [https://youtube.com/shorts/qgmRXPH44CU?feature=share](https://youtube.com/shorts/qgmRXPH44CU?feature=share)

# Circuit diagram
```
HX-543
Keypad pin 1 <-> pin 2 Arduino
Keypad pin 2 <-> pin 3 Arduino
Keypad pin 3 <-> pin 4 Arduino
Keypad pin 4 <-> pin 5 Arduino
Keypad pin 5 <-> pin 6 Arduino
Keypad pin 6 <-> pin 7 Arduino
Keypad pin 7 <-> pin 8 Arduino
Keypad pin 8 <-> pin 9 Arduino
```
# Code
```
#include <Keypad.h>
const byte ROWS = 4; // row
const byte COLS = 4; // coulumb
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
void setup() {
  Serial.begin(9600);
}
void loop() {
  char key = keypad.getKey();
  if (key) { 
    Serial.print("You pressed: ");
    Serial.println(key);
  }
}
```
