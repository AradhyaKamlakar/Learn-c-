#include<assert.h>
#include <crtdbg.h>
enum Configuration {
    None,
    Series,
    Parallel
};

struct Resistor {
    double resistance;
};

struct Circuit {
    Resistor** resistors ;
    int size;
    Configuration configuration;
    Circuit* nextCircuit;

};

double EffectiveCircuitResistance(Circuit* c) {
    double resis = 0.0;
    while (c != nullptr) {
        double r = 0.0;
        if (c->configuration == Series) {
            for (int i = 0; i < c->size; i++) {
                r = r + c->resistors[i]->resistance;
            }
        }
        else {
            for (int i = 0; i < c->size; i++) {
                r = r + (1 / c->resistors[i]->resistance);
            }
            r = (1 / r);
        }
        resis += r;
        c = c->nextCircuit;
    }
    return resis;
}

int main() {
    Resistor r1{ 2.0 }, r2{ 3.0 }, r3{ 4.0 }, r4{ 5.0 };
    Circuit* pc = new Circuit{ nullptr, 0, None, nullptr };
    pc->resistors = new Resistor * [2];
    pc->size = 2;
    pc->resistors[0] = &r1;
    pc->resistors[1] = &r2;
    pc->configuration = Series;
    pc->nextCircuit = new Circuit{ nullptr, 0, None, nullptr };
    Circuit* pc2 = pc->nextCircuit;
    pc2->resistors = new Resistor * [2];
    pc2->size = 2;
    pc2->resistors[0] = &r3;
    pc2->resistors[1] = &r4;
    pc2->configuration = Parallel;
    pc2->nextCircuit = nullptr;
    assert(r1.resistance >= 0 && r2.resistance >= 0);
    assert(r3.resistance >= 0 && r4.resistance >= 0);
    double resistance = EffectiveCircuitResistance(pc);
    // write dynamic object release code here
    // Check if dynamically allocated memory is released
    Circuit* temp = nullptr;
    while (pc != nullptr) {
        delete[] pc->resistors;
        pc->resistors = nullptr;
        temp = pc->nextCircuit;
        delete pc;
        pc = nullptr;

        pc = temp;
    }


    temp = nullptr;
    pc = nullptr;
    
    _CrtDumpMemoryLeaks();
}
