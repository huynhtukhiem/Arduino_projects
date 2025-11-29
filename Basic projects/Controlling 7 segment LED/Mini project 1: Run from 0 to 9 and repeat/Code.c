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
