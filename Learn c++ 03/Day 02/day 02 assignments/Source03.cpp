//Write a program to find the sum of digits of a given number.
//Sample Input :
//Input a number : 1234

#include<iostream>
using namespace std;

int main() {
	int num = 0;

	cout << "Enter the num ";
	cin >> num;

	int sum = 0, r = 0;

	while (num > 0) {
		r = num % 10;
		num = num / 10;
		sum += r;
	}

	cout << "The sum of digits is " << sum << endl;

};