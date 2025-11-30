# Video
- Video how I distinguish between common anode and common cathode: [https://youtu.be/R3Jh56LrFvM](https://youtu.be/R3Jh56LrFvM)
- Video demo in my youtube channel: [https://youtube.com/shorts/a6PXKHLLvQA?si=NB4lrE-pkt0jSsF8](https://youtube.com/shorts/a6PXKHLLvQA?si=NB4lrE-pkt0jSsF8)
- Full video how to do in my youtube channel: 

# How to do
Components to prepare:
- Arduino UNO R3
- 7 segment LED
- Wires
- Breadboard
- 7 resistors 220 ohm

Circuit diagram:

![picture](Circuit_diagram.png)


How to load code data into arduino:
- Open or dowload Arduino IDE
- Plug the cable into the computer and arduino
- Choose port
- Paste this code and run
```
int seg[] = {2,3,4,5,6,7,8}; // pin a,b,c,d,e,f,g

// use array 2D
int digit[10][7] = {
  {0,0,0,0,0,0,1}, // 0
  {1,0,0,1,1,1,1}, // 1
  {0,0,1,0,0,1,0}, // 2
  {0,0,0,0,1,1,0}, // 3
  {1,0,0,1,1,0,0}, // 4
  {0,1,0,0,1,0,0}, // 5
  {0,1,0,0,0,0,0}, // 6
  {0,0,0,1,1,1,1}, // 7
  {0,0,0,0,0,0,0}, // 8
  {0,0,0,0,1,0,0}  // 9
};

// Display each number function
void display(int number){
  for(int i = 0; i < 7; i++){
    digitalWrite(seg[i], digit[number][i]);
  }
}

void setup(){
  for(int i = 0; i < 7; i++){
    pinMode(seg[i], OUTPUT);
  }
}

void loop(){
  for(int i = 0; i <= 9; i++){
    display(i);
    delay(500); // mỗi số hiển thị 0.5 giây
  }
}
```

