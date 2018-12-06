// bryanhvu@utexas.edu
// bv4987
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

double pythagorean(int side_A, int side_B);
double degree_a(int side_A, double hypotenuse);
double degree_b(int side_B, double hypotenuse);


int main() {

int A, B;	
cout << "Enter the length for A: " << endl;
cout << "Enter the length for B: " << "\n" << endl;
cin >> A >> B;

// call function to calculate hypotenuse
double hypotenuse = pythagorean(A, B);
cout << "The hypotenuse is: " << hypotenuse << endl;

// call functions that calculate angles
cout << "The angle a is: " << degree_a(A, hypotenuse) << endl;
cout << "The angle b is: " << degree_b(B, hypotenuse) << "\n" << endl;

return 0;
}

// uses pythagorean theorem
double pythagorean(int side_A, int side_B) {
	return sqrt((side_A*side_A) + (side_B*side_B));
}

// finds degrees with inverse cosine
double degree_a(int side_A, double hypotenuse) {
	return acos(side_A / hypotenuse) * 180/M_PI; // converts rads to deg
}

double degree_b(int side_B,double hypotenuse) {
	return acos(side_B / hypotenuse) * 180/M_PI;
}


