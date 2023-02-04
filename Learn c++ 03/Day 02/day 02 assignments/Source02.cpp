#include<iostream>
using namespace std;

int Fact(int num) {
	if (num == 0 || num == 1)
		return 1;
	else
		return num * Fact(num - 1);
};

void main() {
	int num = 0;

	cout << "Enter the number ";
	cin >> num;

	cout << "The factorial is " << Fact(num) << endl;
};