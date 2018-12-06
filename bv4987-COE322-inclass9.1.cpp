#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

class Point {
private: 
	float px, py;
public:
	Point() { // default constructor set to origin
	px = 0; py = 0;
	}
	// secondary conostructor for Point
	Point( float xcoord, float ycoord ) {
	px = xcoord; py = ycoord;
	};
	// accessor and getters
	double xcoord() { return px; };
	double ycoord() { return py; };
	void setx(double new_x) { px = new_x; };
	void sety(double new_y) { py = new_y; };
	
	// methods for calculating distance between origin and other points
	// and method for outputing point
	float distance_to_origin() { return (sqrt(px*px + py*py)); };
	void printout() { cout << "(" << px << ", " << py << ")" << endl; };
	float distance(Point point2) { return sqrt(pow(px -point2.xcoord(),2) + pow(py-point2.ycoord(),2)); };  
};

class Line {
private:
	Point p1, p2;
public:
	Line() {
	}	
	Line( Point point1, Point point2) {
	p1 = point1; p2 = point2;
	};

	// line methods
	void printout() { cout << "(" << p1.xcoord() << ", " << p1.ycoord() << "), " << "(" << p2.xcoord() << ", " << p2.ycoord() << ")" << endl; };
	Point midpoint() { Point pt((p1.xcoord()+p2.xcoord())/2., (p1.ycoord()+p2.ycoord())/2.); return pt; };
};

class Triangle {
private:
	Line l1, l2, l3;
public:
	Triangle() {
}
	Triangle(Line line1, Line line2, Line lin3) {
	l1 = line1; l2 = line2; l3 = line3;
	};

	float hypotenuse() { 
	};
	void printout() {
	};
	float theta1()
	};
	float theta2() {
	};
};

int main() {

Point point1(3., 4.);
Point point2(5., 12.);
Line line1(point1, point2);

cout << "distance of point1 from origin: " << point1.distance_to_origin() << endl;
point1.printout();
cout << "distance from point 1 to point 2: " << point1.distance(point2) << endl;

line1.printout();
// calling point method, 'printout', since midpoint returns an object type point
line1.midpoint().printout();

return 0;
}


