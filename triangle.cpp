// bryanhvu@utexas.edu
// bv4987
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

struct triangle
{
	float A;
	float B;
	// hypotenuse
	float C;
	float theta1;
	float theta2;
};
	
int pythagorean(triangle &myTriangle);
int angles(triangle &myTriangle);

int main() {

triangle triangle1, triangle2;
cout << "Enter four side lengths, two legs for two triangles. " << endl;
cin >> triangle1.A >> triangle1.B >> triangle2.A >> triangle2.B;

pythagorean(triangle1);
pythagorean(triangle2);

angles(triangle1);
angles(triangle2);

cout << "Triangle 1: " << endl;
cout << "The hypotenuse of triangle 1 is: " << triangle1.C << endl;
cout << "Theta 1 is: " << triangle1.theta1 << endl;
cout << "Theta 2 is: " << triangle1.theta2 << endl;

cout << "\nTriangle 2: " << endl;
cout << "The hypotenuse of triangle 2 is: " << triangle2.C << endl;
cout << "Theta 1 is: " << triangle2.theta1 << endl;
cout << "Theta 2 is: " << triangle2.theta2 << endl;
return 0;
}


int pythagorean(triangle &myTriangle) {
	myTriangle.C = sqrt((myTriangle.A*myTriangle.A) + (myTriangle.B*myTriangle.B));

return 0;
}

int angles(triangle &myTriangle) {
	myTriangle.theta1 = acos(myTriangle.A/myTriangle.C) * 180/M_PI;
	myTriangle.theta2 = acos(myTriangle.B/myTriangle.C) * 180/M_PI;

return 0;
} 

