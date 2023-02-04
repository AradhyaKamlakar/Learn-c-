//Write a program to get the largest element of an array using recursion.
//Sample Input :
//Input 5 elements in the array :
//	element - 0 : 5
//	element - 1 : 10
//	element - 2 : 15
//	element - 3 : 20
//	element - 4 : 25
//	Sample Output :
//Largest element of an array is : 25


#include<iostream>
using namespace std;

int max(int a[], int len, int i, int j) {
	if (i != j) {
		if (a[i] >= a[j]) {
			max(a, len, i, j - 1);
		}
		else
		{
			max(a, len, i + 1, j);
		}
	}
	else {
		return a[i];
	}
}


int main() {
	int a[5];
	for (int i = 0; i < 5; i++) {
		cout << "element - " << i << " : ";
		cin >> a[i];
	}
	cout << max(a, 5, 0, 4);


}