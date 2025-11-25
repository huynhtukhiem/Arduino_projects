- Because this is a common anode 7-segment LED, to light up the digitalWrite is LOW.
  
  
# Light up each number
- Number 1:
  Method 1:
```
int seg[] = {2,3,4,5,6,7,8}; // a,b,c,d,e,f,g
void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(seg[i], OUTPUT);
  }
}
void loop() {
  digitalWrite(seg[0], HIGH); // a off
  digitalWrite(seg[1], LOW);  // b on
  digitalWrite(seg[2], LOW);  // c on
  digitalWrite(seg[3], HIGH); // d off
  digitalWrite(seg[4], HIGH); // e off
  digitalWrite(seg[5], HIGH); // f off
  digitalWrite(seg[6], HIGH); // g off
}
```
