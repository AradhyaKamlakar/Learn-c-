//Write a search function that searches a string in given another string.
//The search function should be configurable to search with ignore caseand whole word.
//Test your search function with the following testing code.

#include <assert.h>
#include "practicedll.h"
int main() {
    int result = 0;
    char s[] = "Your language quality should improve, as you grow in age.";
    result = search(s, "age");
    assert(result == 10);
    result = search(s, "Age");
    assert(result == -1);
    result = search(s, "Age", false);
    assert(result == 10);
    result = search(s, "Age", false, true);
    assert(result == 53);
}
