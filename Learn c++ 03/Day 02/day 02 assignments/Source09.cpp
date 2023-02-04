//Write a program to calculate the sum of the firstand last digit of a number.
//Sample Input :
//Input any number : 12345
//
//Sample Output :
//The first digit of 12345 is : 1
//The last digit of 12345 is : 5
//The sum of first and last digit of 12345 is : 6


#include<iostream>
using namespace std;

int First(int num) {
	while (num >= 10) {
		num /= 10;
	}
	return num;
};

int Last(int num) {
	return num % 10;
};

int main() {
	int num = 0;

	cout << "Enter number here ";
	cin >> num;
	
	int sum = 0;
	
	sum = First(num) + Last(num);

	cout << "The addition is " << sum << endl;
	return 0;

}