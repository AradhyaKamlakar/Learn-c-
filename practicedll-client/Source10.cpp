//Write a rotate_left function to rotate the order of the elements in the range.
//Test your rotate_left function with the following testing code.

#include <assert.h>

#include"practicedll.h"

int main() {
    int index = false;

    int a[] = { 3, 7, 1, 4, 8, 6, 2, 7, 4 };
    rotate_left(a, 9);
    int result[] = { 7, 1, 4, 8, 6, 2, 7, 4, 3 };
    for (int i = 0; i < 9; ++i) {
        assert(a[i] == result[i]);
    }
}
