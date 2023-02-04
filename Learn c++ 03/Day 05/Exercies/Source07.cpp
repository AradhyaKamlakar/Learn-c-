//Find length of a given number using a recursive algorithm.
//Test your algorithm using the following testing code.


#include<iostream>
#include<assert.h>
using namespace std;

int len(int num) {
	int count = 1;
	if (num == 0) {
		return 0;
	}
	else {
		num = num / 10;
		count = count + len(num);
	}
}

int main() {
	int result = 0;
	result = len(12345);
	assert(result == 5);
}
