//Write a program that rearranges all negative integers before all positive integers in a given array of mixed positiveand negative integers.
//Sample Input : -4 3 6 2 - 3 - 1 7 9

#include <iostream>
using namespace std;

int main() {
	int a[] = { -4,3,6,2,-3,-1,7,9 };

	 const int n = sizeof(a) / sizeof(int);

	int z[n];
	int k = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			z[k] = a[i];
			k++;
			a[i] = 0;
		}
}

	for (int i = 0; i < n; i++) {
		if (a[i] != 0) {
			z[k] = a[i];
			k++;
		}
	}

	for (int i = 0; i < k; i++) {
		cout << z[i] << " ";
	}

};