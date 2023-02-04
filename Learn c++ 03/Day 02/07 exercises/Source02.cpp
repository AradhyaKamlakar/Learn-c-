#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;

void main() {
	double r1= 0, r2 =0, r3 =0;
	cout << "enter the resistance ";
	cin >> r1 >> r2 >> r3;
	double fr = 1 / ((1 / r1) + (1 / r2) + (1 / r3));
	cout <<setprecision(2) << fr << endl;
};