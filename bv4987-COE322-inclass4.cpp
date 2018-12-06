// bryanhvu@utexas.edu
// bv4987
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;


void solveTriangle(int side_A, int side_B, double &hypotenuse, double &angle_a, double &angle_b);

int main() {

// declare values for function arguments
int A = 0, B = 0;
double hyp = 0, a = 0, b = 0;

// call function, sit back and relax
solveTriangle(A, B, hyp, a, b);

return 0;
}

// uses pythagorean theorem and trignometry to solve the triangle
void solveTriangle(int side_A, int side_B, double &hypotenuse, double &angle_a, double &angle_b) {

cout << "Enter the length for A: " << endl;
cout << "Enter the length for B: " << endl;
cin >> side_A >> side_B;

// calculate values
hypotenuse = sqrt((side_A*side_A) + (side_B*side_B));
angle_a = acos(side_B/hypotenuse) * 180/M_PI;
angle_b = acos(side_A/hypotenuse) * 180/M_PI;


cout << "The hypotenuse is: " << hypotenuse << endl;
cout << "The angle a is: " << angle_a << endl;
cout << "The angle b is: " << angle_b << "\n" << endl;
}


