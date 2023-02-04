#include<iostream>
using namespace std;


int main() {
	int count = 2;

	int* pn = new int[count];

	for (int i = 0; i < count; i++) {
		cout << "Enter the number ";
		cin >> pn[i];
	}
	cout << "The greater number is " << (pn[0] > pn[1] ? pn[0] : pn[1]);

	

	delete[] pn;
	pn = nullptr;
}