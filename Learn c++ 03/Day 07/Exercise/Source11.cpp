//A developer wants to sort the contents of an array.Usually, 
//when sorted the original order of inputted data is lost.
//So the developer is wondering if there is any method such that the original order 
//is not lost at the same time she has sorted data.[Hint:use array of pointers.]



#include <iostream>
using namespace std;

void swap(int* ps[], int i,int j) {
	int *temp = ps[i];
	ps[i] = ps[j];
	ps[j] = temp;

}

void sort(int* ps[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if ( *ps[j] > *ps[j + 1] ) {
				swap(ps, j, j + 1);
			}
		}
	}

}

int main() {
	int ptr[5];
	int* ptr2[5];
	for (int i = 0; i < 5; i++) {
		ptr[i] = 5 - i;
	}
	for (int i = 0; i < 5; i++) {
		ptr2[i] = &ptr[i];
	}
	
	sort(ptr2, 5);
	for (int i = 0; i < 5; i++) {
		cout << *ptr2[i];
	}
	

}