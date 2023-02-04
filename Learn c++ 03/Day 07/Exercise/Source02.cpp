//Write a split function to split the fraction from the integer portion of the real numberand return both the values.
//Sample Input :
//Input the number : 5.6
//Sample Output :
//The integer portion is : 5
//The fraction portion is : .6

#include<iostream>
#include<string>
using namespace std;

void split(float f) {
	string str = to_string(f);
	char* ptr = &str[0];
	bool flag = false;
	string integer = "";
	string fraction = "";
	while (*ptr != '\0') {
		if (*ptr == '.') {
			flag = true;
		}
		if (flag == false) {
			integer.push_back(*ptr);
		}
		else {
			fraction.push_back(*ptr);
		}
		ptr++;
	}

	cout << integer << " " << fraction << endl;
};

int main() {
	float f = 0.0;
	cout << "Enter the fraction ";
	cin >> f;
	split(f);
}