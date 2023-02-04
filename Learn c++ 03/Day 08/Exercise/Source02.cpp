//Write a program to store n elements in a dynamically allocated array and 
//print the elements using the pointer.
#include<iostream>
using namespace std;

int main() {
	size_t size = 0;
	cout << "Enter the size of array ";
	cin >> size;

	int* ptr = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter the element " << i;
		cin >> ptr[i];
	}

	for (int i = 0; i < size; i++) {
		cout << *(ptr + i);
	}
	delete[]ptr;
	ptr = nullptr;
}