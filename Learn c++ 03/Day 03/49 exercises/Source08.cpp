//Write a program to replace multiple occurrences of spaces with single space between adjacent words of a given sentence.
//Sample Input : The quick       brown fox      jumps over the     lazy dog
//Sample Output : The quick brown fox jumps over the lazy dog

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string str = "The quick       brown fox      jumps over the     lazy dog";
	string str1 = "";
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ' && str[i+1] == ' ') {
			
		}
		else {
			str1.push_back(str[i]);
		}

	}

	cout << str1 << endl;

};