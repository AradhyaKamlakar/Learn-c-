#include<iostream>
#include<assert.h>
using namespace std;

struct Resistor {
    double resistance;
};

double EffectiveSeriesResistance(Resistor* resistors[], int len) {
    double r = 0.0;
    for (int i = 0; i < len; i++) {
        r = r + resistors[i]->resistance;
    }
    return r;
}

double EffectiveParallelResistance(Resistor* resistors[], int len) {
    double r = 0;
    for (int i = 0; i < len; i++) {
        r = r + (1 / resistors[i]->resistance);
    }
    return (1 / r);
}


int main() {
    Resistor r1{ 2.0 }, r2{ 3.0 }, r3{ 0.0 };
    Resistor* resistors[]{ &r1, &r2 };
    double resistance = 0.0;
    resistance = EffectiveSeriesResistance(resistors, 2);
    assert(resistance == 5.0);
    assert(r1.resistance > 0.0 && r2.resistance > 0.0);
    resistance = EffectiveParallelResistance(resistors, 2);
    assert(resistance == 1.2);
}
