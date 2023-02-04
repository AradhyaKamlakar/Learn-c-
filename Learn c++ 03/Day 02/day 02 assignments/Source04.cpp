#include<iostream>
using namespace std;


int Fib(int num) {
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else
		return Fib(num - 1) + Fib(num - 2);
};

void main() {
	int num = 0;
	
	cout << "Enter the number";
	cin >> num;

	cout << Fib(num) << endl;

}
