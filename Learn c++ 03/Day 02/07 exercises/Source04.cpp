#include<iostream>
using namespace std;

void main() {
	int a = 0, n = 0, d = 0;
	cout << "Enter the first, number of terms, diff";
	cin >> a >> n >> d;
	int ap = a + (n - 1) * d;
	cout << ap << endl;
};