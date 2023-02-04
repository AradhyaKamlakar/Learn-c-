//Write a count_vowel function that countsand returns count of each vowel(through “out parameters”) of a given string.Strictly no user input output from count_vowel function.
//Sample Input :
//Input string : Hello, World
//Sample Output :
//Count of ‘a’ is : 0
//Count of ‘e’ is : 1
//Count of ‘i’ is : 0
//Count of ‘o’ is : 2
//Count of ‘u’ is : 0

#include<iostream>
#include<string>
using namespace std;

void count_vowels(string str) {
	char* ptr = &str[0];
	for (int i = 0; i < str.size(); i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
	}
	int counta = 0, counte = 0, counti = 0, counto = 0, countu = 0;
	while (*ptr != '\0') {
		if (*ptr == 'a')
			counta++;
		else if (*ptr == 'e')
			counte++;
		else if (*ptr == 'i')
			counti++;
		else if (*ptr == 'o')
			counto++;
		else if (*ptr == 'u')
			countu++;
		
		
		ptr++;
	}

	cout << "Count of a " << counta << " ";
	cout << "Count of e " << counte << " ";
	cout << "Count of i " << counti << " ";
	cout << "Count of o " << counto << " ";
	cout << "Count of u " << countu << endl;

}

int main() {
	string str = "Hello, World";
	count_vowels(str);
}
