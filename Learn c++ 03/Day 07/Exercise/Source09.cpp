#include <assert.h>
#include<string>
using namespace std;

bool pred(char c) {
    return c == 'd';
}

char* find_if(char s[], bool(*function)(char)) {
    char* ptr = &s[0];
	bool flag = false;
	string yesreturn = "";
	while (*ptr != '\0') {
		flag = pred(*ptr);
		if (flag == true) {
			return ptr;
		}
		ptr++;
	}
	return nullptr;
}


int main() {
    char s[] = "the lazy dog jumped over the brown fox";
    char* t = find_if(s, pred);
    assert(strcmp(t, "dog jumped over the brown fox") == 0);
}
