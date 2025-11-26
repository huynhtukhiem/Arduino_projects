# Controlling 7 segment LED run from 0 to 9
Watch video demo here: https://www.youtube.com/shorts/a6PXKHLLvQA

---
![Demo](Screenshot2025-11-26113312.png)

# Components to prepare
- Arduino Uno R3
- LED 7 segment
- 7 Resistor
- Breadboard
- Wires

# Circuit diagram 
![Demo](Screenshot2025-11-25010837.png)

# Code
```
int seg[] = {2,3,4,5,6,7,8}; // a,b,c,d,e,f,g

// Array 2D: each row is a number 0 -> 9
// 0 = LOW (on), 1 = HIGH (off) 
byte num[10][7] = {
  {0,0,0,0,0,0,1}, //0
  {1,0,0,1,1,1,1}, //1
  {0,0,1,0,0,1,0}, //2
  {0,0,0,0,1,1,0}, //3
  {1,0,0,1,1,0,0}, //4
  {0,1,0,0,1,0,0}, //5
  {0,1,0,0,0,0,0}, //6
  {0,0,0,1,1,1,1}, //7
  {0,0,0,0,0,0,0}, //8
  {0,0,0,0,1,0,0}  //9
};

void setup() {
  for (int i = 0; i < 7; i++) pinMode(seg[i], OUTPUT);
}
```
void displayDigit(int d) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(seg[i], num[d][i]);
  }
}

void loop() {
  for (int i = 0; i <= 9; i++) {
    displayDigit(i); // display number i
    delay(1000);     // giữ số hiển thị 1 giây
  }
}


