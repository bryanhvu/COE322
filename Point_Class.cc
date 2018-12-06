#include <iostream>
#include<random>

using std::cout;
using std::endl;

class Rectangle {
	protected: // This is only viewable within the object!
		double l, h;
		int index = 0;
	public:    // This is available to public - anything outside of this class! 
		Rectangle(){  // default constructor
		}
		Rectangle( double length, double height ) { // secondary constructor
			l = length; h = height;
		};
		double getlength() { return l; }; // accessor
		double getheight() { return h; }; 
		void setlength(double length) { l = length; }
		void setheight(double height) { h = height; }

		double area() { return l*h; }
		double perimeter() { return 2*(l+h); }
		
		int Scale(double factor)
		{
			l = l*factor;
			h = h*factor;
		}
		
		int Counter()
		{
			index++;
			return index;
		}

		int printSummary()
		{
			cout << "\nRectangle Summary::" << endl;
			cout << "Length:" << l << endl;
			cout << "Height:" << h << endl;
			cout << "Area:" << area() << endl;
			cout << "Perimeter:" << perimeter() << "\n" <<  endl;
			
		}
};

class Square : public Rectangle
{
	public:
		Square() {};
		Square(double side) : Rectangle(side, side){};
		void setlength(double side)
		{ 
			l = side;
			h = side;
		}
};

int main()
{
	Rectangle myR(100,50);
	myR.printSummary();
	
	Rectangle mySquare(100,100);
	mySquare.printSummary();
	
	Square myS1(100);
	myS1.printSummary();
	
	Square myS2;
	myS2.setlength(100);
	myS2.printSummary();

	cout << myS2.Counter() << endl;
	cout << myS2.Counter() << endl;

return 0;
}

