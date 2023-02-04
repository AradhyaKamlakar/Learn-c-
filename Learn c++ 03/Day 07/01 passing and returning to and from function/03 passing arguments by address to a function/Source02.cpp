void swapi(int* u, int* v);

int main() {
	int a = 1, b = 2;
	swapi(&a, &b);
}

void swapi(int* u, int* v) {
	int t = *u;
	*u = *v;
	*v = t;
}

/*
- Passing arguments by address to 'swap' function results
  into swapping of their values.
*/
