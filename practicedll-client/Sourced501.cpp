//Write a search function that searchesand returns the position of a number in a given range.
//A range may have numbers repeated several times at different positions,
//so the search function should provide a facility to choose the occurrence.
//Test your search function with the following testing code.

#include <assert.h>
#include"practicedll.h"

int main() {
    int a[]{ 1, 2, 3, 4, 5, 3 }, result = 0;

    result = search(a, 6, 3);
    assert(result == 2);

    result = search(a, 6, 3, 2);
    assert(result == 5);

    result = search(a, 4, 3);
    assert(result == 2);

    result = search(a, 6, 7);
    assert(result == -1);
}
