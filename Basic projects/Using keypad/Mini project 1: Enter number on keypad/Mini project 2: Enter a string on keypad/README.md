# Code
```
#include <Keypad.h>

// Configure number of rows and columns
const byte ROWS = 4;
const byte COLS = 4;

// Key layout (keymap)
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Pin connections to Arduino
byte rowPins[ROWS] = {2, 3, 4, 5};   // R1–R4
byte colPins[COLS] = {6, 7, 8, 9};   // C1–C4

// Create keypad object
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// Buffer to store the input string
String inputString = "";

void setup() {
  Serial.begin(9600);
}

void loop() {
  char key = keypad.getKey();   // Read a key

  // If a key is pressed
  if (key) {
    // If user presses '#', treat it as "end of input"
    if (key == '#') {
      Serial.print("You entered: ");
      Serial.println(inputString);

      inputString = "";         // Clear string for the next input
    } 
    else {
      // Add the character to the string
      inputString += key;

      Serial.print("Added: ");
      Serial.println(key);
    }
  }
}

```
