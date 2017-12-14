#include "ESP8266Wavplay.h"
const int buttonPin = 13;  //D7 on node mcu
bool buttonState = 1;  
bool WHdemand =0;
#define WAVdebug =1;
void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  wavSetup(); 
Serial.begin(115200);
   Serial.println("------------------------ sound testing -----------------");

  //showDir();
  
  wavStartPlaying("/initiated.wav",1);
  Serial.println("------------------------ sound testing -----------------");
  delay(500);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (!buttonState && !WHdemand){WHdemand=true;}
  if(! wavPlaying() &&(WHdemand)){ 
                    wavStartPlaying("/whistle.wav",1);
                    WHdemand=false;
  }
  if(! wavPlaying() ){ ;wavStartPlaying("/chuff.wav",0.75);}
  
 // if (buttonState) { wavStopPlaying();}  // whilst button is down
  wavLoop();
  delay(10);
}
