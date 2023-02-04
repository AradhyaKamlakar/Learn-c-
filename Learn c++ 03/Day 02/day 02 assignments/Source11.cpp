#include <iostream>
using namespace std;

int main() {
	int num = 0;

	cout << "Enter ";
	cin >> num;

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (i >= j) {
				cout << j+1 << " ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
	
	return 0;
};