#include<LiquidCrystal.h>

LiquidCrystal lcd(0,1,2,3,4,5);
int keypadout[] = {9,10,11,12} ;
int keypadin[] = {8,7,6};
char stringbuffer[] = {'1','2','3','4','5','6','7','8','9','*','0','#'};
char data;
bool first_time = true;
const int led = 14, button = 15, counter = 16;
bool buttonState = false;
int number = 0;

void read_keypad(){
  int i = 0;
  
    digitalWrite(keypadout[i],LOW);
    if(digitalRead(keypadin[0])==LOW){ 
      data = stringbuffer[0];
      first_time = false;
    }
    if(digitalRead(keypadin[1])==LOW){ 
      data = stringbuffer[1];
      first_time = false;
    }
    if(digitalRead(keypadin[2])==LOW){ 
      data = stringbuffer[2];
      first_time = false;
    }
    digitalWrite(keypadout[i],HIGH);

    i++;
    digitalWrite(keypadout[i],LOW);
    if(digitalRead(keypadin[0])==LOW){ 
      data = stringbuffer[3];
      first_time = false;
    }
    if(digitalRead(keypadin[1])==LOW){ 
      data = stringbuffer[4];
      first_time = false;
    }
    if(digitalRead(keypadin[2])==LOW){ 
      data = stringbuffer[5];
      first_time = false;
    }
    digitalWrite(keypadout[i],HIGH);

    i++;
    digitalWrite(keypadout[i],LOW);
    if(digitalRead(keypadin[0])==LOW){ 
      data = stringbuffer[6];
      first_time = false;
    }
    if(digitalRead(keypadin[1])==LOW){ 
      data = stringbuffer[7];
      first_time = false;
    }
    if(digitalRead(keypadin[2])==LOW){ 
      data = stringbuffer[8];
      first_time = false;
    }
    digitalWrite(keypadout[i],HIGH);

    i++;
    digitalWrite(keypadout[i],LOW);
    if(digitalRead(keypadin[0])==LOW){ 
      data = stringbuffer[9];
      first_time = false;
    }
    if(digitalRead(keypadin[1])==LOW){ 
      data = stringbuffer[10];
      first_time = false;
    }
    if(digitalRead(keypadin[2])==LOW){ 
      data = stringbuffer[11];
      first_time = false;
    }
    digitalWrite(keypadout[i],HIGH);
   
}

void write_lcd(){
   switch(data){
    case '1' :{
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.write("Key Pressed: ");
       lcd.setCursor(0,1);
       lcd.write(stringbuffer[0]);
       float dt = millis();
       while(millis()<dt+1000)
        read_keypad();
    }
    break;
    case '2' :{
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.write("Key Pressed: ");
       lcd.setCursor(0,1);
       lcd.write(stringbuffer[1]);
       float dt = millis();
       while(millis()<dt+1000)
        read_keypad();
    }
    break;
    case '3' :{
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.write("Key Pressed: ");
       lcd.setCursor(0,1);
       lcd.write(stringbuffer[2]);
       float dt = millis();
       while(millis()<dt+1000)
        read_keypad();
    }
    break;
    case '4' :{
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.write("Key Pressed: ");
       lcd.setCursor(0,1);
       lcd.write(stringbuffer[3]);
       float dt = millis();
       while(millis()<dt+1000)
        read_keypad();
    }
    break;
    case '5' :{
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.write("Key Pressed: ");
       lcd.setCursor(0,1);
       lcd.write(stringbuffer[4]);
       float dt = millis();
       while(millis()<dt+1000)
        read_keypad();
    }
    break;
    case '6' :{
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.write("Key Pressed: ");
       lcd.setCursor(0,1);
       lcd.write(stringbuffer[5]);
       float dt = millis();
       while(millis()<dt+1000)
        read_keypad();
    }
    break;
    case '7' :{
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.write("Key Pressed: ");
       lcd.setCursor(0,1);
       lcd.write(stringbuffer[6]);
       float dt = millis();
       while(millis()<dt+1000)
        read_keypad();
    }
    break;
    case '8' :{
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.write("Key Pressed: ");
       lcd.setCursor(0,1);
       lcd.write(stringbuffer[7]);
       float dt = millis();
       while(millis()<dt+1000)
        read_keypad();
    }
    break;
    case '9' :{
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.write("Key Pressed: ");
       lcd.setCursor(0,1);
       lcd.write(stringbuffer[8]);
       float dt = millis();
       while(millis()<dt+1000)
        read_keypad();
    }
    break;
    case '*' :{
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.write("Key Pressed: ");
       lcd.setCursor(0,1);
       lcd.write(stringbuffer[9]);
       float dt = millis();
       while(millis()<dt+1000)
        read_keypad();
    }
    break;
    case '0' :{
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.write("Key Pressed: ");
       lcd.setCursor(0,1);
       lcd.write(stringbuffer[10]);
       float dt = millis();
       while(millis()<dt+1000)
        read_keypad();
    }
    break;
    case '#' :{
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.write("Key Pressed: ");
       lcd.setCursor(0,1);
       lcd.write(stringbuffer[11]);
       float dt = millis();
       while(millis()<dt+1000)
        read_keypad();
    }
    break;
  }
}

void setup() {
  pinMode(counter,INPUT);
  digitalWrite(counter,HIGH);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  pinMode(button,INPUT);
  digitalWrite(button,HIGH);
  lcd.begin(16,2);
  //Serial.begin(9600);
  //Serial.println("Initialize..");
  for(int i = 0; i<4; i++){
    pinMode(keypadout[i],OUTPUT);
    digitalWrite(keypadout[i],HIGH);
  }
  for(int i = 0; i<3; i++){
    pinMode(keypadin[i],INPUT);
    digitalWrite(keypadin[i],HIGH);
  }
  lcd.setCursor(0,0);
  lcd.write("Initialize...");
  delay(1000);
  for(int i=0; i<101; i++){
    lcd.clear();
    lcd.write("Loading...");
    lcd.print(i);
    lcd.write("%");
    delay(15);
  }
  lcd.clear();
  lcd.write("Loading Complete");
  delay(500);

}

void loop() {


switch(buttonState){
  case true:{
    while(true){
  if(first_time){
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("KEYPAD TEST");
  float dt = millis();
  while(millis()<dt+1000)
    read_keypad();
  }

  read_keypad();

  write_lcd();
  if(digitalRead(button)==LOW) {
    buttonState = !buttonState;
    break;
  }
    }
  }
break;
 case false:{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("LED TEST");
  delay(1000);
  while(true){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("Counter: ");
  lcd.setCursor(0,1);
  lcd.print(number);
  delay(100);

  if(digitalRead(counter)==LOW) {
    number++;
    delay(100);
  }
  if(number%4==0) digitalWrite(led,HIGH);
  else digitalWrite(led,LOW);
    
  if(digitalRead(button)==LOW) {
    buttonState = !buttonState;
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.write("KEYPAD TEST");
    delay(500);
    break;
  }
  
  }
 }
 break;
 }
 
}

