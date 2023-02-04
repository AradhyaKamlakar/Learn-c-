#include <assert.h>
#include"practicedll.h"
enum DayNumber {
    Sun,
    Mon,
    Tue,
    Wed,
    Thr,
    Fri,
    Sat
};

int main() {
    DayNumber result = DayNumber::Sun;
    result = dow(12, 9, 2020);
    assert(result == 6);
}


