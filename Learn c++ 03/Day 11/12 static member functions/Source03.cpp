class A {
public:
	void f() {}
	static void g() {}
public:
	void h() {
		f();
		g();
	}
	static void k() {
		//f();
		g();
	}
};

int main() {
	A a;
	a.h();
	A::k();
}

/*
A non-static member function can access both static and non-static members.
A static member function can access only static member function.
*/