#include <cstring>
#include <assert.h>

#include "Clock.h"
#define SIZE 9

int main() {
    Clock wallClock;
    char timeString[SIZE] = { 0 };
    wallClock.Time(timeString, SIZE);
    assert(strcmp(timeString, "00:00:00") == 0);

    for (int i = 0; i < 10; i++)
        wallClock.Tick();
    wallClock.Time(timeString, SIZE);
    assert(strcmp(timeString, "00:00:10") == 0);

    Clock tableClock(10, 9, 59);
    tableClock.Tick();
    tableClock.Time(timeString, SIZE);
    assert(strcmp(timeString, "10:10:00") == 0);
}
