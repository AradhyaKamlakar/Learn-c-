
//Write a program to calculate the third angle of a triangle if two angles are given.
//Sample Input :
//Input first angle : 60
//Input second angle : 30
//Sample Output :
//Third angle is : 90

#include<iostream>
using namespace std;

void main() {

	int a = 0, b = 0;
	
	//Taking the inputs from user
	cout << "Enter the two angles ";
	cin >> a >> b;
	
	//calculating
	a += 180 - (2 * a + b);
	
	cout << "the third sngle is " << a << endl;
};