#include "Arduino.h"

class HelloWorld {

private:
    bool m_requestRun = true;
public:
    void begin();
    void loop();
};

extern HelloWorld helloWorld;