#include <assert.h>
void convert(int& hh, int& mm, int& ss) {
    hh = ss / 3600;
    ss = ss % 3600;
    mm = ss / 60;
    ss = ss % 60;
}

int main() {
    int hh = 0, mm = 0, ss = 1432;
    convert(hh, mm, ss);
    assert(hh == 0 && mm == 23 && ss == 52);
}
