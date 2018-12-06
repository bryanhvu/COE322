// bv4987
// bryanhvu5@gmail.com
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

class Triangle{
private:
	float sA, sB, t1, t2, h
public:
	Triangle() {
}
	Triangle( float sideA, float sideB ) {
	sA = sideA; sB = sideB
};
	
	// Triangle methods
	float hypotenuse { return sqrt(sA*sA + sB*sB); };
	float theta1 { return acos(sB/h * 180/M_PI); };
	float theta2 { return acos(sA/h * 180/M_PI); };
		
};	

int main() 
{
// construct triangle objects
Triangle Triangle1(3,4), Triangle2(5,12);


// calculating hyptonesuses
hypotenuse1 = Triangle1.hypotenuse(); 
hypotenuse2 = Triangle2.hypotenuse();

cout << "Triangle 1's hypotenuse is: " << Triangle.h << endl;
cout << "Triangle 2's hypotenuse is: " << hypotenuse2 << endl;

// calculate corresponding angles
// set theta1 in between sideA and the hypotenuse
Triangle1.theta1();
Triangle1.theta2();

Triangle2.theta1();
Triangle2.theta2();
 
cout << "\nTriangle 1 theta1, theta2, respectively: " << Triangle1.t1 << " " << Triangle1.t2  << endl;
cout << "Triangle 2 theta1, theta2, and right angle, respectively: " << Triangle2.t1 << " " << Triangle2.t2 <<  endl;

return 0;
}
