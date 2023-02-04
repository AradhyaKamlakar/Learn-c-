//Write a program to print all factors of a given number.
//Sample Input :
//Input a number : 63
//
//Sample Output :
//The factors are : 1 3 7 9 21 63


#include<iostream>
using namespace std;

int main() {
	int num = 0;

	cout << "Enter number ";
	cin >> num;

	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0)
			cout << i << " ";
	}
	cout << num << endl;
	
	return 0;

};