#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include "Arduino.h"

class HelloWorld {

private:
    bool m_requestRun = true;
public:
    void begin();
    void loop();
};

extern HelloWorld helloWorld;

#endif