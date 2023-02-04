//Write a program to find the larger number out of two numbers using a pointer.
//Sample Output :
//Input the first number : 7
//Input the second number : 2
//7 is the larger number.


#include<iostream>
using namespace std;

int Max(int* u, int* v) {
	return *u > *v ? *u : *v;
}

int main() {
	int a = 0; int b = 0;
	int* pa = &a;
	int* pb = &b;

	cout << " Enter the numbers";
	cin >> a >> b;

	cout << "The greater number is " << Max(pa, pb);
}