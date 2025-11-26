- Because this is a common anode 7-segment LED, to light up the digitalWrite is LOW.
  
# Light up each number
Method 1: turn on each segment
```
int seg[] = {2,3,4,5,6,7,8}; // a,b,c,d,e,f,g
void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(seg[i], OUTPUT);
    digitalWrite(seg[i], HIGH); // turn off all segment
  }
  digitalWrite(seg[0], LOW); // turn on only segment a = 1
}
void loop() {
  //doing nothing
}

```
Method 2:
- You can get what number you want by calling function of these numbers.
- Code:
```
int seg[] = {2,3,4,5,6,7,8}; // a,b,c,d,e,f,g

// Array 2 D: each row is a number 0 -> 9
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

void displayDigit(int d) {
  // d = 0..9
  for (int i = 0; i < 7; i++) {
    digitalWrite(seg[i], num[d][i]);
  }
}

void loop() {
  displayDigit(1); // display number 1
  displayDigit(2); // display number 2
  displayDigit(3); // display number 3
  displayDigit(4); // display number 4
  displayDigit(5); // display number 5
  displayDigit(6); // display number 6
  displayDigit(7); // display number 7
}

```
# Light up from 0 to 9
Because this 7 segment LED is common anode so 0 LOW means turn on and 1 HIGH means turn off
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

```
