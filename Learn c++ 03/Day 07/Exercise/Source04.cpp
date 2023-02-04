//Write a stats function which computesand returns several statistical results through “out parameters” of a given range of values.
//Sample Input :
//Input 5 number of elements in the array :
//	element - 0 : 5
//	element - 1 : 7
//	element - 2 : 2
//	element - 3 : 9
//	element - 4 : 8
//	Sample Output :
//Min: 2
//Max : 9
//Sum : 31
//Avg : 6.2
//Count : 5

#include<iostream>
using namespace std;

float max(int a[], int n) {
	int mx = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > mx) {
			mx = a[i];
		}
	}
	return mx;
}

float min(int a[], int n) {
	int mn = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < mn) {
			mn = a[i];
		}
	}
	return mn;
}
float sum(int a[], int n) {
	int sm = 0;
	for (int i = 0; i < n; i++) {
		sm += a[i];
	}
	return sm;
}

float avg(int a[], int n) {
	float av = (sum(a, n)) / n;
	return av;
}

float count(int a[], int n) {
	return n;
}

float stat(int a[], int n, float(operations)(int*, int)) {
	return operations(a, n);
}
int main() {
	int a[] = { 1,2,3,4 };
	int n = sizeof(a) / sizeof(int);

	cout << "max : " << (int)stat(a, n, max) << endl;
	cout << "min : " << (int)stat(a, n, min) << endl;
	cout << "avg : " << stat(a, n, avg) << endl;
	cout << "count : " << (int)stat(a, n, count) << endl;
}