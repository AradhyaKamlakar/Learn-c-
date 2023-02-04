//Write a program to calculate the length of the string using a pointer.
//Input a string : Hello, World
//Sample Output :
//The length of the given string is : 12


#include<iostream>
#include<string>
using namespace std;

int str_len(char* p) {
	int count = 0;
	while (*p != '\0') {
		count++;
		p++;
	}
	return count;
}

int main() {
	string str = "Hello, World";
	int length = str_len(&str[0]);
	cout << "The Length is " << length;

}