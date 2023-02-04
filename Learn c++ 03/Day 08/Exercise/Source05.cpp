//Implement Cramer’s Rule to solve systems of simultaneous equations a1x + b1y = c1 
//and a2x + b2x = c2 using dynamic memory allocation.



#include<iostream>
using namespace std;

int main() {
	
	int a1 = 0, b1 = 0, c1 = 0;
	cout << "Enter value for a1 : ";
	cin >> a1;
	cout << "Enter value for b1 : ";
	cin >> b1;
	cout << "Enter value for c1 : ";
	cin >> c1;

	int* pa1 = new int(a1);
	int* pb1 = new int(b1);
	int* pc1 = new int(c1);

	int a2 = 0, b2 = 0, c2 = 0;
	cout << "Enter value for a1 : ";
	cin >> a2;
	cout << "Enter value for b1 : ";
	cin >> b2;
	cout << "Enter value for c1 : ";
	cin >> c2;

	int* pa2 = new int(a2);
	int* pb2 = new int(b2);
	int* pc2 = new int(c2);

	int D = (a1 * b2) - (b1 * a2);
	int Dx = (c1 * b2) - (b1 * c2);
	int Dy = (a1 * c2) - (c1 * a2);


	cout << "x  : " << Dx / D << endl;
	cout << "y  : " << Dy / D << endl;
	


}