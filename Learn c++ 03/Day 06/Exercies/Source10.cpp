//Write a program to sort an array using Pointer.
//Sample Output :
//Input 5 number of elements in the array :
//	element - 1 : 25
//	element - 2 : 45
//	element - 3 : 89
//	element - 4 : 15
//	element - 5 : 82
//	The elements in the array after sorting :
//element - 1 : 15
//element - 2 : 25
//element - 3 : 45
//element - 4 : 82
//element - 5 : 89



#include<iostream>
using namespace std;

int max(int a[], int len, int* pf, int* pl) {
	if (pf != pl) {
		if (*pf >= *pl) {
			max(a, len, pf, pl - 1);
		}
		else
		{
			max(a, len, pf + 1, pl);
		}
	}
	else {
		return *pf;
	}
}


int main() {
	int a[5];
	int* pf = a;
	int* pl = a + 5;
	for (int i = 0; i < 5; i++) {
		cout << "element - " << i << " : ";
		cin >> a[i];
	}
	cout << max(a, 5, pf, pl);


}