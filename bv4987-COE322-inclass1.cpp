#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::acos;
using std::sqrt;
const double pi = 3.14159;

int main() {
	int a, b;
	cout << "Enter side values a and b respectively." << endl;
	cin >> a >> b;

	double c = sqrt(a * a + b * b);
	cout << "The hypotenuse is: " << c << endl;

	double A, B;
	A = acos(b / c) * 360 / ( 2 * pi);
	B = acos(a / c) * 360 / ( 2 * pi);
	cout << "Angle A is: " << A << "degrees" << endl;
	cout << "Angle B is: " << B << "degrees" << endl;

return 0;
}
