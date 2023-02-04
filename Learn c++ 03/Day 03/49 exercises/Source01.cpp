//Write a program to find the second largest element in a given array of integers.
//Sample Input : -4 3 6 2 - 3 - 1 7 9
//Sample Output : 7


#include<iostream>
#include<algorithm>
using namespace std;

void swap(int a, int b) {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
};

int main() {
	const int n = 5;
	int a[n];
	
	cout << "Enter the 5 elements ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
	cout << "The second largest number is: " << a[1] << endl;

	
};
