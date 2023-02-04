//Write a program in C++ to calculate final velocity at time T given initial velocityand acceleration.
//Sample Input :
//Input Initial Velocity : 30
//Input Acceleration : 8
//Input Time : 10
//Sample Output :
//Final Velocity is 110 m / s

#include<iostream>
using namespace std;

void main() {
	int initial = 0;
	int acc = 0;
	int	time = 0;
	
	// Taking the inputs from user 
	cout << "Enter initial " << endl;
	cin >> initial;
	cout << "Enter the acc " << endl;
	cin >> acc;
	cout << "Enter the time " << endl;
	cin >> time;

	//Calculating using the formula
	initial += acc * time;

	//Printing the answer
	cout << "The final velocity is " << initial << "m/s" << endl;
};