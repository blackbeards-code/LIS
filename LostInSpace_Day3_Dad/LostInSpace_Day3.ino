#include "Arduino.h"

#define CABIN_LIGHTS_PIN 12
#define CABIN_LIGHTS_SWITCH_PIN 2
void setup() {
  // put your setup code here, to run once:
pinMode(CABIN_LIGHTS_PIN,OUTPUT);
pinMode (CABIN_LIGHTS_SWITCH_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(CABIN_LIGHTS_SWITCH_PIN) ==HIGH) {
  digitalWrite(CABIN_LIGHTS_PIN, HIGH);
  } else{
  digitalWrite(CABIN_LIGHTS_PIN,LOW);
  }
 
  }