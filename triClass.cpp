// bv4987
// bryanhvu5@gmail.com
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

class Triangle {
private: // side A, side B, angle 1, angle 2, and hypotenuse
	float sA, sB, a1, a2, h; 
public:
	Triangle() {
}
	Triangle( float sideA, float sideB ) {
	sA = sideA; sB = sideB;
};
	// accesors
	float A() { return sA; };
	float B() { return sB; };
	float hyp() { return h; };
	float ang1() { return a1; };
	float ang2() { return a2; };
	// setters 
	void setA ( float new_A ) { sA = new_A; };
	void setB ( float new_B ) { sB = new_B; };
	void sethyp ( float new_h ) { h = new_h; };
	void setang1 ( float new_a1 ) { a1 = new_a1; };
	void setang2 ( float new_a2 ) { a2 = new_a2; };
	// other Triangle methods
	float hypotenuse() { return sqrt(sA*sA + sB*sB); };
	// angle 1 set between side b and hypotenuse
	// angle 2 between side a and hypotenuse
	float angle1() { return acos(sB/h) * 180/M_PI; };
	float angle2() { return acos(sA/h) * 180/M_PI; };
		
};	

int main() 
{
// construct triangle objects
Triangle Triangle1(3.,4.), Triangle2(5.,12.);


// calculating hyptonesuses and corresponding values
Triangle1.sethyp(Triangle1.hypotenuse()); 
Triangle2.sethyp(Triangle2.hypotenuse());

cout << "Triangle 1 hypotenuse is: " << Triangle1.hyp() << endl;
cout << "Triangle 2 hypotenuse is: " << Triangle2.hyp() << endl;

// calculate and set corresponding angles 
Triangle1.setang1(Triangle1.angle1());
Triangle1.setang2(Triangle1.angle2());

Triangle2.setang1(Triangle2.angle1());
Triangle2.setang2(Triangle2.angle2());
 
cout << "\nTriangle 1 theta1, theta2, respectively: " << Triangle1.ang1() << " " << Triangle1.ang2()  << endl;
cout << "Triangle 2 theta1, theta2, respectively: " << Triangle2.ang1() << " " << Triangle2.ang2() <<  endl;

return 0;
}
