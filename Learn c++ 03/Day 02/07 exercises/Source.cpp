#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;

void main() {
	int km = 0;
	cout << "enter the speed in km: ";
	cin >> km;
	double miles = (km * 0.62137);
	cout << setprecision(6) << "the speed in miles is " << miles << endl;
};