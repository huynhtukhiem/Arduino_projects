# Demo
- Video demo in my youtube channel: [https://youtube.com/shorts/4qbBX-nBDGs?feature=share
](https://youtube.com/shorts/4qbBX-nBDGs?feature=share)

# Circuit diagram
![picture](picture.png)

# Code
```
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int button = 2;
int led = 3;
void setup(){
 lcd.init();
 lcd.backlight();
 pinMode(led, OUTPUT);
 pinMode(button, INPUT_PULLUP);
}
void loop(){
int state_button = digitalRead(button);
if(state_button == LOW){
  digitalWrite(led, HIGH);
  lcd.setCursor(0,0);
  lcd.print("LED is "); // xóa chữ cũ
  lcd.setCursor(0,1);
  lcd.print("working ");
}
else{
  digitalWrite(led, LOW);
  lcd.setCursor(0,0);
  lcd.print("LED is not "); // xóa chữ cũ
  lcd.setCursor(0,1);
  lcd.print("working ");
}
delay(100); // chống rung và giảm nhấp nháy
}
```
