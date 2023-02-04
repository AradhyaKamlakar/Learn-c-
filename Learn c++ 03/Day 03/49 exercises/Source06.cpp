//Write a program to capitalize the first letter of each word of a given string.Words must be separated by only one space.
//Sample Input : hello, world
//Sample Output : Hello, World

#include<iostream>
#include<string>
using namespace std;

string Change(string str) {
	int char_code = 0;
	int space_code = static_cast<int>(' ');

	for (int i = 0; i < str.length(); i++) {
		char_code = static_cast<int>(str[i]);
		if (i == 0 && (char_code < 65 || char_code > 90)) {
			str[i] = static_cast<char>(char_code - 32);
		}
		else if (char_code == space_code){
			int code = static_cast<int>(str[i + 1]);
			str[i + 1] = static_cast<char>(code - 32);
		}
	}
	return str;
};

int main() {
	string str = "hello world";

	cout << "The string is " << Change(str) << endl;
};