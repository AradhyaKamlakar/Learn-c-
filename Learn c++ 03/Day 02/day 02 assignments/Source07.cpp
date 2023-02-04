//Write a program to check if a number can be expressed as the sum of two prime numbers.
//Sample Input :
//Input a positive integer : 20


#include<iostream>
using namespace std;

bool IsPrime(int num) {
	if (num == 0 || num == 1)
		return false;

	for (int i = 2; i < sqrt(num); i++) {
		if (num % i == 0)
			return false;
	}
	return true;
};

int main() {
	int num = 0;

	cout << "Enter the number ";
	cin >> num;

	bool flag = false;
	for (int i = 0; i < num / 2; i++) {
		if (IsPrime(i)) {
			if (IsPrime(num - i)) {
				flag = true;
				cout << i << " " << num - i << "\n";
			}
				
        }
	}

	if (!flag) {
		cout << "No pair available" << endl;
	}


	return 0;
};