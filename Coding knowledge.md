# The main structure of a program
```
// Declaring variables, pins, libraries,.....

void setup(){
  //configure pins, initialize variables,....
}

void loop(){
  // This is a function that runs indefinitely after setup() finishes.
}
```
# Time Functions
```
delay(time); (ms)
```
- Pause program for (ms) 


# Pin configuration Functions
```
pinMode(pin, OUTPUT); 
```
- Signal output pin => HIGH or LOW.
- Used to control LED, relay, motor driver, buzzer…
- Maximum current is about 20–40mA depending on Arduino => Do not plug in strong loads directly.

```
pinMode(pin, INPUT_PULLUP);
```
- INPUT_PULLUP is the mode that activates the 20–50 kΩ pull-up resistor inside the chip.
- When this mode is enabled, the Arduino automatically connects the input pin → Vcc 5V through the internal resistor.
- Use for Button is most popular.
- doing nothing (Ex: Press button)-> HIGH
- doing something (Ex: Press button)-> LOW

# Digital I/O Functions
```
digitalWrite(pin, HIGH);
digitalWrite(pin, LOW);
```
- The function outputs a digital signal to a pin configured as OUTPUT.
- For example: digitalWrite(led, HIGH); // Turn on configured led OUTPUT
               digitalWrite(led, LOW); // Turn off configured led OUTPUT

```
digitalRead(pin);
```
- Function to read digital signal from pin (INPUT or INPUT_PULLUP). See if this pin is HIGH or LOW.
- For example: int state = digitalRead(button); // Xác định trạng thái của nút nhấn
