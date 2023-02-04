#include <assert.h>
#include<iostream>
using namespace std;

bool is_positive(int n) {
    return n >= 0;
}

int copy_if(int a[], int lena,int b[], int lenb, bool(*operations)(int)) {
    int c = 0;
    for (int i = 0; i < lena; i++)
        if (is_positive(a[i])) {
            b[c] = a[i];
            c++;
        }
    return c;
}

int main() {
    int a[5]{ -3, 1, -2, 6, 9 };
    int b[5]{ 0 };
    int count = copy_if(b, 5, a, 5, is_positive);
    for (int i = 0; i < count; ++i) {
        assert(b[i] >= 0);
    }
}
