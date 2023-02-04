#include <assert.h>
#include<cmath>
void cartesian_to_polar(double x, double y, double& r, double& theta) {
    r = (sqrt(pow(x, 2) + pow(y, 2)));
    theta = atan(y/x)*(180/3.146);
}

int main() {
    double x = 3.0, y = 4.0;
    double r = 0.0, theta = 0.0;
    cartesian_to_polar(x, y, r, theta);
    assert(r == 5 && static_cast<int>(theta * 10000) == 531301);
}
