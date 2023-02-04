//Define a type that models a simple pendulum.Use the type to 
//compute the period of the simple pendulum,
//assuming that the angle of deflection is less than 15º

#include<iostream>
#include<math.h>
using namespace std;

struct pendulum{
	double length;
	double gravity;
};

double time_preiod(pendulum p) {
	return 2 * 3.14 * sqrt(p.length / p.gravity);
}

int main() {
	pendulum p;
	cout << "Enter the length ";
	cin >> p.length;
	cout << "Enter the gravity";
	cin >> p.gravity;
	cout << time_preiod(p);
}