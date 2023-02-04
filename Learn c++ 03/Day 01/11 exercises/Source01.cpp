#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;

int main() {
	double radius = 0;
	cout << "Enter the radius:\n";
	cin >> radius;

	double volume = (4 * 22 * radius * radius * radius) / (3 * 7);
	cout << setprecision(5) << "Volume of sphere is " << volume << endl;
	return 0;
};