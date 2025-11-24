# Components to prepare
- Arduino UNO R3
- 1 LED
- 1 Resistor
- Breadboard
- Wires
- 
# Circuit diagram

![Datasheet](Screenshot 2025-11-24 120513.png)

# Code
```
int led = 1;

void setup(){
  pinMode(led, OUTPUT);
}

void loop(){
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
```
