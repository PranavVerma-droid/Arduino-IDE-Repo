int motor1pin1 = 2;
int motor1pin2 = 3;
int motor2pin1 = 4;
int motor2pin2 = 5;

//Go to 
//https://github.com/PranavVerma-droid/Arduino-IDE-Repo/blob/main/FASTEST_LINE_FOLLOWER/Plan%20till%20Mon%2C%20Aug%208th%202022%20(1).pdf
//to see the plan

void setup() {
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT); pinMode(motor2pin1, OUTPUT); pinMode(motor2pin2, OUTPUT);
  

}

void Forward() {

  
  }
void Backward() {
  
  
  }
void Left() {
  
  
  }
void Right() {
  
  
  }

void loop() {
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin1, LOW);

}
