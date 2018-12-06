// bv4987
// bryanhvu@gmail.com
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fibonacci(int n){
	// setting f0 and f1
	if (n < 2) {
		return 1;
	}
	// using recursive equation to find nth fibonacci term
	else {
		return fibonacci(n-1) + fibonacci(n-2); 
	}
}

int main() {
	int input;
	cout << "Enter the nth term: " << endl;
	cin >> input;

	cout << "The corresponding fibonacci number is " << fibonacci(input) <<
endl;

return 0;
}
