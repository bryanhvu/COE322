// bryanhvu@utexas.edu
// bv4987
#include <iostream>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;

int main() {

srand (time(NULL));
int Heads = 0, Tails = 0, rand();

// Simulate 1000000 coin flips
for (int i = 0; i < 1000000; ++i) {

// Initialize random variable
int randNumber = rand();

	// Even chosen to be heads
	if (randNumber % 2 == 0) {
	++Heads;
	}
	
	// Odd chosen to be tails
	else {
	++Tails;
	}
}

cout << "\nThe Number of Heads: " << Heads << endl;
cout << "\nThe Number of Tails: " << Tails << "\n" << endl;

return 0;
}

