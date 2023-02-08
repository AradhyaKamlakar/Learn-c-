struct Dummy {};

int main() {
	Dummy dummy;
}

/*
- Can C program have empty structure?
No. Atleast one member must be present in the C struct.
- Can c++ program have empty struct?
- Yes. The size of empty struct is 1 byte.
- Note this byte cannot be accessed.
- It is there to indicate presense of an object.
*/
