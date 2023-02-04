#include <stdio.h>

extern "C" {
	int add(int u, int v);
	int sub(int a, int b);
}
int main() {
	int a = 1, b = 2, c = 0, d=0;
	c = add(a, b);
	d = sub(a, b);
	printf("%d\n", c);
}

