//Write a program to find the most occurring element in a given array of integers.
//Sample Input : -4 3 6 2 - 3 - 1 7 9 - 3
//Sample Output : -3

#include <iostream>
using namespace std;

int main() {
	const int n = 10;
	int a[n];

	cout << "Enter the elements ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = 0, k = 0;

	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (a[i] == a[j]) {
				count++;
			}
		}
		if (count > max) {
			max = count;
			k = i;
		}
	}

	cout << "The number occuring most of the time is " << a[k] << " times " << max << endl;
};