// bv4987
// bryanhvu@gmail.com
#include <iostream>
#include <vector>
#include <time.h>
using std::vector;
using std::cin;
using std::cout;
using std::endl;


int main() {

srand(time(NULL));

vector<int> myVector;

int randN;

// keep pushing the random number until it equals 42
while(randN = rand() % 100, randN != 42) 
{ 
	myVector.push_back(randN);
}

// push back the 42
myVector.push_back(randN);
cout << myVector.size() << endl;	

return 0;
}
