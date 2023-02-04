//Write a program to print all permutations of a given string using pointers.
//Sample Output :
//The permutations of the string are :
//abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  cbad  cbda  cabd  cadb  cdab  cdba  dbca  dbac  dcba  dcab  dacb  dabc


#include<iostream>
#include<string>
using namespace std;

void swap(char* a, char* b) {
	char c = *a;
	*a = *b;
	*b = c;
}

void aps(string u, int index) {
	if (index == u.size()) {
		cout << u << " ";
			return;
	}
	for (int i = index; i < u.size(); i++) {
		swap(&u[i], &u[index]);
		aps(u, index + 1);
		swap(&u[i], &u[index]);
	}

}

int main() {
	string str = "abcd";
	int len = sizeof(str) / sizeof(char);
	aps(str, 0);
}