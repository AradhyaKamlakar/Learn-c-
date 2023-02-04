//Write a program to add two numbers using pointers.
//Sample Output :
//Input the first number : 7
//Input the second number : 2
//The sum of the entered numbers is : 9

#include<iostream>
using namespace std;

int add(int* u, int* v) {
	return *u + *v;
}

int main() {
	int a = 0; int b = 0;
	int* pa = &a;
	int* pb = &b;
	cout << "Enter the numbers";
	cin >> a >> b;

	cout << "The addition is " << add(pa, pb);
}