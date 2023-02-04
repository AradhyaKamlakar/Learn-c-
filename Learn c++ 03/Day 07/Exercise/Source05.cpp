//Write a roots function that computesand returns roots of a quadratic expression through “out parameters”.
//Sample Input :
//Input coefficient ‘a’ : 5
//Input coefficient ‘b’ : 6
//Input constant ‘c’ : 1
//Sample Output :
//Root 1 is : -0.2
//Root 2 is : -1

#include<iostream>
#include<math.h>
using namespace std;
void root(int a, int b, int c, double* x) {
	
	double* e = x;
	int discriminant = b * b - 4 * a * c;

	if (discriminant > 0) {
		e[0] = (-b + sqrt(discriminant)) / (2 * a);
		e[1] = (-b - sqrt(discriminant)) / (2 * a);
	}

}

void operations(int a, int b, int c,double arr[], void(*root)(int, int, int, double*)) {
        root(a, b, c, arr);
}

int main() {
	int a = 0, b = 0, c = 0;
	double arr[2];
	cout << "Enter the coefficient of a " ;
	cin >> a;

	cout << "Enter the coefficient of b ";
	cin >> b;

	cout << "Enter the coefficient of c ";
	cin >> c;

	operations(a, b, c, arr,root);

	cout << "The roots are " << arr[0] << " " << arr[1] << endl;
}