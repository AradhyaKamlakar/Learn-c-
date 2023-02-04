//Write an add function to add two numbers using pass by address.
//Sample Input :
//Input the first number : 7
//Input the second number : 2
//Sample Output :
//The sum of the entered numbers is : 9

#include<iostream>
using namespace std;

void add(int* pa, int* pb) {
	cout << *pa + *pb;
}

int main() {
	int a =0, b =0;
	int* pa = &a;
	int* pb = &b;
	cout << "Enter the numbers";
	cin >> a >> b;
	add(pa, pb);
}
8
