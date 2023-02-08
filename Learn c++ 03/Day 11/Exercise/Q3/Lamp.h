#pragma once
#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

enum SwitchState {
    OffState,
    OnState
};

class Lamp {
private:
    SwitchState m_state;

public:
    Lamp();

public:
    SwitchState GetState() {};

public:
    void SwitchOn() {};

    void SwitchOff() {};

};
