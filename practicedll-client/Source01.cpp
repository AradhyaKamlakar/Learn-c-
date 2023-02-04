//Write a copy function to copy contents of one(source) array to another(destination) array.
//Assume the other array has sufficient length to accommodate all elements of the source array.
//Test your copy function with the following testing code.

#include <assert.h>
#include"practicedll.h"

int main() {
    int a[7], b[] = { 10, 20, 30, 40, 50, 60, 70 };
    int len = sizeof(a) / sizeof(int);
    copy(a, b, len);
    for (int i = 0; i < len; ++i) {
        assert(a[i] == b[i]);
    }
}
