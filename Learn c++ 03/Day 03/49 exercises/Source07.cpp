//Write a C++ program to change the case (lower to upper and upper to lower cases) of each character of a given string.
//Sample Input : Python
//Sample Output : pYTHON

#include<iostream>
#include <string>
using namespace std;

//string UpLower(string str) {
//
//	for (int i = 0; i < str.length(); i++) {
//		if (isupper(str[i])) {
//			tolower(str[i]);
//		}
//		else {
//			toupper(str[i]);
//		}
//		
//	}
//	return str;
//};

int main() {
	string str = "pYTHON";

	for (int i = 0; i < str.length(); i++) {
		if (isupper(str[i])) {
			str[i] = static_cast<char>(tolower(str[i]));
		}
		else {
			str[i] = static_cast<char>(toupper(str[i]));
		}
	}

	cout << "The string is " << str << endl;
}