#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int n = 0, max = 0;
	int min = INT_MAX, sum = 0;
	double avg = 0.0;
	for (int i = 1; i < argc; i++) {
		n = atoi(argv[i]);
		sum += n;
		if (n > max) {
			max = n;
		}
		if (n < min) {
			min = n;
		}
	}
	avg = sum / argc;
	cout << max << " " << min << " " << avg << argc << endl;
}
