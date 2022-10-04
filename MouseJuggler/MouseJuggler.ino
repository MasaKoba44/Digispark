//Copyright 2021 stardust-news.net Rev.3
#include <DigiMouse.h>
void setup() {
  DigiMouse.begin(); 
}
void loop() {  
for(char k=0;k<22;k++){
  for(char i = 0; i < 26; i++){
    analogWrite(1, i*5);
    DigiMouse.delay(50);
  }
  for(char i = 25; i > 0; i--){
    analogWrite(1, i*5);
    DigiMouse.delay(50);
  }
}
  DigiMouse.moveX(1);
for(char m=0;m<63;m++){
  for(char j = 0; j < 26; j=j+2){
    analogWrite(1, j*5);
    DigiMouse.delay(35);
  }
  for(char j = 25; j > 0; j=j-2){
    analogWrite(1, j*5);
    DigiMouse.delay(35);
  }
}
  DigiMouse.moveX(-1);
}