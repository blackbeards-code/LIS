#include "Arduino.h"

const byte CABIN_LIGHTS = 12;
const byte STORAGE_LIGHTS = 10;
const byte COCKPIT_LIGHTS = 8; 

const byte CABIN_SWITCH = 2; 
const byte STORAGE_SWITCH = 4; 
const byte COCKPIT_SWITCH = 6; 
void setup() {
  // put your setup code here, to run once:
pinMode(CABIN_LIGHTS,OUTPUT);
pinMode(STORAGE_LIGHTS,OUTPUT);
pinMode(COCKPIT_LIGHTS,OUTPUT);

pinMode (CABIN_SWITCH, INPUT);
pinMode (STORAGE_SWITCH, INPUT);
pinMode (COCKPIT_SWITCH, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(CABIN_SWITCH) == HIGH) {
      digitalWrite(CABIN_LIGHTS, HIGH);
    } else{
      digitalWrite(CABIN_LIGHTS, LOW);
  }
  if (digitalRead(STORAGE_SWITCH) == HIGH) {
      digitalWrite(STORAGE_LIGHTS, HIGH);
   } else{
      digitalWrite(STORAGE_LIGHTS, LOW);
  }
  if (digitalRead(COCKPIT_SWITCH) == HIGH) {
      digitalWrite(COCKPIT_LIGHTS, HIGH);
    } else{
       digitalWrite(COCKPIT_LIGHTS, LOW);
  }
  }