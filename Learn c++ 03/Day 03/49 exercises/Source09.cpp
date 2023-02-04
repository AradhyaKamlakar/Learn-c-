//Write a program to count all the words in a given string.
//Sample Input : The quick brown fox jumps over the lazy dog
//Sample Output : 9 words'

#include<iostream>
#include<string>
using namespace std;

int main() {
	string str = "The quick brown fox jumps over the lazy dog";
	int count = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ')
			count++;

	}

	cout << "The number of words are " << count + 1 << endl;

};
