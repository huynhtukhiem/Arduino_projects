int seg[] = {2,3,4,5,6,7,8}; // pin a,b,c,d,e,f,g
int button_1 = 13;
int button_2 = 12;
int button_3 = 11;

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

// display each number function
void display(int number){
  for(int i = 0; i < 7; i++){
    digitalWrite(seg[i], digit[number][i]);
  }
}

int current_number = 0; // always start with number 0

void setup(){
  pinMode(button_1, INPUT_PULLUP);
  pinMode(button_2, INPUT_PULLUP);
  pinMode(button_3, INPUT_PULLUP);
  for(int i = 0; i < 7; i++){
    pinMode(seg[i], OUTPUT);
  }
  display(current_number);
}

void loop(){
  int state_button_1 = digitalRead(button_1);
  int state_button_2 = digitalRead(button_2);
  int state_button_3 = digitalRead(button_3);
  if(state_button_1 == LOW){
      current_number++;
      // If current number is 9 so move to 0
      if(current_number > 9){
        current_number = 0;
      }
      display(current_number);
      delay(250);
  }
  if(state_button_2 == LOW){
    current_number--;
    // If current number is 0 so move to 9
    if(current_number < 0){
      current_number = 9;
    }
    display(current_number);
    delay(250);
  }
  if(state_button_3 == LOW){
    display(0);
  }
}
