//Write a program to calculate the Greatest Common Divisor(GCD) of two numbers.
//Sample Input :
//Input the first number : 25
//Input the second number : 15
//
//Sample Output :
//The Greatest Common Divisor is : 5


#include<iostream>
using namespace std;

int Gcd(int a, int b) {
	if (b == 0)
		return a;

	else
		return Gcd(b, a % b);

};

int main() {
	int a=0 , b=0;
	 
	cout << "Enter the number ";
	cin >> a >> b;

	cout << Gcd(a, b) << endl;

	return 0;
};