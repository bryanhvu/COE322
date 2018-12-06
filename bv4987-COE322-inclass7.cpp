// bv4987
// bryanhvu5@gmail.com
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

struct rightTriangle{
	float sideA;
	float sideB;
	float hypotenuse;
	float theta1;
	float theta2;
	float rightAngle;
};

int main() 
{
// declare triangles of type rightTriangle
rightTriangle Triangle1, Triangle2;
// side lengths and right angle of triangle's 1 and 2
Triangle1.sideA = 3;
Triangle1.sideB = 4;
Triangle1.rightAngle = 90;

Triangle2.sideA = 5;
Triangle2.sideB = 12;
Triangle2.rightAngle = 90;

// calculating hyptonesuses
Triangle1.hypotenuse = sqrt(pow(Triangle1.sideA,2) + pow(Triangle1.sideB,2));
Triangle2.hypotenuse = sqrt(pow(Triangle2.sideA,2) + pow(Triangle2.sideB,2));

cout << "Triangle 1's hypotenuse is: " << Triangle1.hypotenuse << endl;
cout << "Triangle 2's hypotenuse is: " << Triangle2.hypotenuse << endl;

// calculate corresponding angles
// set theta1 in between sideA and the hypotenuse
Triangle1.theta1 = acos(Triangle1.sideA/Triangle1.hypotenuse)*180/M_PI;
Triangle1.theta2 = acos(Triangle1.sideB/Triangle1.hypotenuse)*180/M_PI;
Triangle1.rightAngle = Triangle1.theta1 + Triangle1.theta2;

Triangle2.theta1 = acos(Triangle2.sideA/Triangle2.hypotenuse)*180/M_PI;
Triangle2.theta2 = acos(Triangle2.sideB/Triangle2.hypotenuse)*180/M_PI;
Triangle2.rightAngle = Triangle2.theta1 + Triangle2.theta2;
 
cout << "\nTriangle 1 theta1, theta2, and right angle, respectively: " << Triangle1.theta1 << " " << Triangle1.theta2 << " " << Triangle1.rightAngle << endl;
cout << "Triangle 2 theta1, theta2, and right angle, respectively: " << Triangle2.theta1 << " " << Triangle2.theta2 << " " << Triangle2.rightAngle << endl;

return 0;
}
