#include <Arduino.h>

// Project Includes
#include "HelloWorld.h"

void setup() {
  Serial.begin(115200);
  
  // Software setups
  helloWorld.begin();
}

void loop() {
  // Software interrupts
  helloWorld.loop();

  // Your code here
}