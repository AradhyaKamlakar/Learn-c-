#include "add.h"

int main() {
	int result = 0;
	result = 3 + 5; // inline
	result = add(1, 2); // not inline
}

/*
* If function is inline then its Both declaration and definition must be stored in header file.
  Not keeping inline function in header file resutls in linking error.
* If the function is non-inline then only declaration must be stored in header file.
  Definition must be stored in seperate implementation file. 
  Keeping definition in header file will result into linking error.
*/