//Write a replace function that assigns new_value to all elements of an array that compare equal to old_value.
//Test your replace function with following the testing code

#include <assert.h>
#include"practicedll.h"

int main() {
    int a[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
    int len = sizeof(a) / sizeof(int);
    int oldvalue = 20, newvalue = 99;
    replace(a, len, oldvalue, newvalue);
    // post execution of replace function
    // the old value shouldn't exist
    // in an array
    for (int i = 0; i < len; ++i) {
        assert(a[i] != oldvalue);
    }
}
