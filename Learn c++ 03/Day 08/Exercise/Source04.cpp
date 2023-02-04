//Write the matrix transpose program using dynamic memory allocation.

#include<iostream>
using namespace std;

int main() {
	int row = 0, col = 0;
	cout << "Enter the row and colums number of 1st array ";
	cin >> row >> col;

	int** ptr1 = new int* [row];
	for (int i = 0; i < row; i++) {
		ptr1[i] = new int[col];
		for (int j = 0; j < col; j++) {
			cout << "Enter the ele for row" << i + 1 << " col" << j + 1;
			cin >> ptr1[i][j];
		}
	}
	
	int** ptr = new int* [col];
	for (int i = 0; i < col; i++) {
		ptr[i] = new int[row];
		for (int j = 0; j < row; j++) {
			ptr[i][j] = ptr1[j][i];
		}
	}

	for (int i = 0; i < col; ++i)
		for (int j = 0; j < row; ++j)
		{
			cout << " " << ptr[i][j];
			if (j == row - 1)
				cout << endl;
		}

}