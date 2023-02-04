#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int x1= 0 ,x2 =0, y1 =0, y2 =0;
	cout << "Enter the co-ordinates";
	cin >> x1 >> y1 >> x2 >> y2;
	double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "The distance is " << dist << endl;
	return 0;
};