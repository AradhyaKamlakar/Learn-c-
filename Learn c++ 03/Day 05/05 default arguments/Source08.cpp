int add(int u, int v);
int add(int u, int v = 0, int w = 0);

int main() {
	int result = 0;
	result = add(2, 3);
}

int add(int u, int v) {
	return u + v;
}
int add(int u, int w) {

}

int add(int u, int v, int w) {
	return u + v + w;
}

/*
* Above code results in ambiguity.
*/kay be zopun rahte uth lavkar