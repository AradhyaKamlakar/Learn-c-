#include <iostream>
using namespace std;

struct Circle {
	int m_radius;

	void Print() {
		cout << m_radius << endl;
	}
};

int main() {
	Circle a = { 5 };
	cout << sizeof(Circle) << endl;
	cout << sizeof(a) << endl;

}

//- Member functions are stored in code segment.
//- Object space contains only data members. It doesn't contain member function definitions.
//-Hence the size of structure is 4 bytes