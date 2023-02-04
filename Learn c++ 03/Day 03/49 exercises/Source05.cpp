//Write a program to change every letter in a given string with the letter following it in the alphabet(ie.a becomes b, p becomes q, z becomes a).
//Sample Input : Hello, World
//Sample Output : Ifmmp, Xpsme

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

string ChangeLetter(string str) {

    int char_code = 0;
	for (int i = 0; i < str.length(); i++) {
		char_code = static_cast<int>(str[i]);

		if (char_code == 122) {
			str[i] = static_cast<char>(97);
		}
		else if (char_code == 90) {
			str[i] = static_cast<char>(65);
		}
		else if ((char_code >= 65 && char_code < 90) || (char_code >= 97 && char_code < 122)) {
			str[i] = static_cast<char>(char_code + 1);
		}
	}
	return str;
};

int main() {
	string str = "HelloWorld";
	cout << "The changed string is " << ChangeLetter(str) << endl;
};