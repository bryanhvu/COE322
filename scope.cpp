#include <iostream>

using std::cout;
using std::endl;

void f(int i) {
	int j = i;
	if (i<100)
		f(i+1);
}

int main() {
	int i = 2;
	f();
	cout << i << endl;

return 0;
}
