#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

class Line {
private:
	float px1, px2, py1, py2;
public:
	Line() {
	px1 = 0; px2 = 1; py1 = 0; py2 = 1;
	};
	
