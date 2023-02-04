#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;

void main() {
	double celcius = 0;
	cout << "enter the temperature in Celcius ";
	cin >> celcius;
	double farhneite = ((celcius * 9) / 5) + 32;
	cout<< setprecision(3) << farhneite << endl;
};