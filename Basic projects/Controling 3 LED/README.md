# Componets to prepare
- Arduino UNO R3
- 3 LED
- 3 Resistor 220ohm
- Breadboard
- Wires

# Circuit diagram


# Code
```
int led[] = {1,2,3};
int num = 3;

void setup(){
  for(int i = 0; i < 3; i++){
    pinMode(led[i], OUTPUT);
  }
}

void loop(){
  for(int i = 0; i < 3; i++){
    digitalWrite(led[i], HIGH);
  }
  delay(500);
  
  for(int i = 0; i < 3; i++){
    digitalWrite(led[i], LOW);
  }
  delay(500);
}
```
