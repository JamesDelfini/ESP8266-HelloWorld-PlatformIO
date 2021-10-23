#include "HelloWorld.h"

void HelloWorld::begin() {
    Serial.println("Waiting..");
    delay(2000);
    Serial.println("Ready..");
    delay(500);
}

void HelloWorld::loop() {
    if (m_requestRun) {
        m_requestRun = false;

        Serial.println("");
        Serial.println("Hello World");
    }
}

HelloWorld helloWorld;