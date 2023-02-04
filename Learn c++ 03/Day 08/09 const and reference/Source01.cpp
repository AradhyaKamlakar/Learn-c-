int main() {
	int a = 1;
	const int b = 1;

	int &ra = a;// a non-const reference can refer to non-const referent  
	int &rb = b;// a non-const reference cannot refer to constant referent  

	const int &cra = a;// a const reference can refer to non-constant referent 
	const int &crb = b;// a const reference can refer to constant referent 
}

/*
- non-const reference can refer to non-const referent only.
- const reference can refer to const as well as non-const referent.
*/