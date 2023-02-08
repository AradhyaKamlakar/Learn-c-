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
	a.Print();

	Circle b = { 10 };
	b.Print();
}

/*
- Note 'this' pointer is implicitly added by c++ compiler.
- Hence we can omit mentioning it explicitly.

- The'this' pointer is present in member function.

*/