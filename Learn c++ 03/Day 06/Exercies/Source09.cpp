//Write a program to count the number of vowelsand consonants in a string using a pointer.
//Sample Output :
//Input a string : Hello, World
//Number of vowels : 3
//Number of consonants : 7

#include<iostream>
#include<string>
using namespace std;

void consonants(char* p) {
	int count = 0, length = 0;
	while (*p != '\0') {
		length++;
		p++;
	}
	int temp = 0;
	for (int i = 0; i < length; i++) {
		--p;
		if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u') {
			count++;
		}
		else if(*p == ' '|| *p == '?' || *p == '-' || *p ==',' || *p =='.' || *p == '!' || *p =='@') {
			temp++;
		}

	}
	cout << "The consonants are: " << (length - count - temp) << " The vowels are: " << count << endl;
	
}

int main() {
	string str = "Hello, World";
	consonants(&str[0]);

}