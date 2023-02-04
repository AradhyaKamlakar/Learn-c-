#include<assert.h>
using namespace std;
enum Unit{Celsius, Fahrenheit};

struct Temperature {
    double value;
    Unit unit ;
};

void ChangeTemperatureUnit(Temperature& t, Unit unit) {
        if (unit == Celsius) {
            t.value = (t.value - 32) / 1.8;
        }
        else {
            t.value = (1.8 * t.value) + 32;
        }
    
    t.unit = unit;
}

int main() {
    Temperature t{ 37.5, Celsius };
    ChangeTemperatureUnit(t, Fahrenheit);
    assert(t.value == 99.5 && t.unit == Fahrenheit);
}
