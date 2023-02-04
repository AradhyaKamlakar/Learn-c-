//Write the matrix multiplication program using dynamic memory allocation.

#include<iostream>
using namespace std;

int main() {
	int r1 = 0, r2 = 0, c1 = 0, c2 = 0;
	cout << "Enter the row and colums number of 1st array ";
	cin >> r1 >> c1;

	cout << "Enter the row and colums number of 2nd array ";
	cin >> r2 >> c2;

	int** ptr1 = new int* [r1];
	for (int i = 0; i < r1; i++) {
		ptr1[i] = new int[c1];
		for (int j = 0; j < c1; j++) {
			cout << "Enter the ele for row" << i + 1 << " col" << j + 1;
			cin >> ptr1[i][j];
		}
	}

	int** ptr2 = new int* [r2];
	for (int i = 0; i < r2; i++) {
		ptr2[i] = new int[c2];
		for (int j = 0; j < c2; j++) {
			cout << "Enter the ele for row" << i + 1 << " col" << j + 1;
			cin >> ptr2[i][j];
		}
	}
	
	int** mult = new int* [r1];
	for (int i = 0; i < r1; i++) {
		mult[i] = new int[c2];
		for (int j = 0; j < c2; j++) {
		 mult[i][j] = 0;
		}
	}

	

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			for (int k = 0; k < c1; k++) {
				mult[i][j] += ptr1[i][k] * ptr2[k][j];
			}
		}
	}

	for (int i = 0; i < r1; ++i)
		for (int j = 0; j < c2; ++j)
		{
			cout << " " << mult[i][j];
			if (j == c2 - 1)
				cout << endl;
		}

	delete[] ptr1;
	delete[] ptr2;
	delete[] mult;
	ptr1 = nullptr;
	ptr2 = nullptr;
	mult = nullptr;

}