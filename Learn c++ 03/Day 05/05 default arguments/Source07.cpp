int add(int u, int v, int w = 2, int x = 1, int y = 5, int z = 3);

int main() {
	int result = 0;
	result = add(1, 2);
	result = add(1, 2, 2, 1, 5, 4);

}

int add(int u, int v, int w, int x, int y, int z) {
	return u + v, +w + x + y + z;

}