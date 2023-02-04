//Write a program to demonstrate how to handle the pointers in the program.
//Sample Output :
//Address of a : 0x0019fee8
//Value of a : 10
//
//Now pa is assigned the address of a.
//Value of pa : 0x0019fee8
//Value of * pa : 10
//The value of a is changed to 34 now.
//Value of pa : 0x0019fedc
//Value of * pa : 34
//
//The pointer variable pa is assigned with the value 7 now.
//Address of a : 0x0019fee8
//Value of a : 7

#include<iostream>
using namespace std;

int main() {
	int a = 21;

	cout << "Address of a " << &a;
	cout << "value of a" << a;

	int* pa = &a;
	cout << "Value of pa" << pa;
	cout << "Value of  *pa" << *pa;

	a = 34;
	cout << "Value of pa " << &a;
	cout << "Value of *pa " << *pa;

	*pa = 7;
	cout << "Value of a" << *pa;
	cout << "Value of pa" << pa;
 

}