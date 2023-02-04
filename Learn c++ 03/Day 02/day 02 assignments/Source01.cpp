//Write a program to check if a given number is prime or not.
//Sample Input :
//Input a number to check prime or not: 13

#include<iostream>
#include<math.h>
using namespace std;


bool IsPrime(int num) {
	if (num == 0 || num == 1) 
		return false;
	
	for (int i = 2; i < sqrt(num); i++) {
		if (num % i == 0)
			return false;
	}
	return true;
};

void main() {
	int num = 0;

	cout << "Enter the number";
	cin >> num;

	if (IsPrime(num))
		cout << "Is a prime number" << endl;
	else
		cout << "Not a prime number"<< endl;

};
