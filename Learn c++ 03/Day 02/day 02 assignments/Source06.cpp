//Write a program in C++ to find LCM of any two numbers using HCF.
//Sample Input :
//Input 1st number for LCM : 15
//Input 2nd number for LCM : 25
//
//Sample Output :
//The LCM of 15 and 25 is : 75



#include<iostream>
using namespace std;

int Gcd(int a, int b) {
	if (b == 0)
		return a;

	else
		return Gcd(b, a % b);
};

int main() {
	int a = 0;
	int b = 0;

	cout << "The numbers are ";
	cin >> a >> b;

	int Lcm = (a * b) / Gcd(a, b);
	cout << "The gcd of numbers is " << Lcm << endl;

	return 0;
};
