//Write a recursive function that, given a number  n, returns the sum of the digits of the number n.

#include<iostream>
using namespace std;

int sum(int num) {
	int r =0;
	if (num == 0) {
		return 0;
	}
	else {
		r = num % 10;
		num = num / 10;
		return r + sum(num);
	}
	
}

int main() {
	int num = 0;

	cout << "Enter the number";
	cin >> num;

	cout << sum(num);

}
