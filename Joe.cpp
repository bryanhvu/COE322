// code for disease propagation of one person
#include <iostream>
#include <time.h>
#include <random>

using std::endl;
using std::cin;
using std::cout;
using std::string;

class Person {
private:
	int pStatus;

public:
	// constructors
	Person() {
	pStatus = 0;
	} 
	Person(int status) {
	pStatus = status;
	};
	
	// getters and setters
	int status() { return pStatus; };
	void setStatus(int new_status) { pStatus = new_status; };
	
	// methods
	// arbitrarily chosen integers for statuses
	string status_string() { 
	if (pStatus == 0)  { return "healthy"; }
	else if (pStatus == 1) { return "infected, with n days before recovery"; }
	else if (pStatus == 2) { return "recovered"; }
	else if (pStatus == 3) { return "inocculated"; }
	};
	// void update() { // update status to next day };
	void infect(int n) { pStatus = 1; };
	bool is_stable() { if (pStatus == 2 || pStatus == 3) { return false; } };	
	
 


int main() 
{
// constructing Person object Joe
Person joe();
//
srand(time(NULL));
do {
	int count = 1;
	// joe.update();
	// bad luck is a random number used for infection 
	float bad_luck = (1.*rand())/RAND_MAX;
	// infection parameters
	if (bad_luck > .95) 
	{	// arbitrary infection duration
		joe.infect(5);
	}
	
	cout << "On day " << count << ", Joe is " << joe.status_string() << endl;
	++count;

}while (!joe.is_stable());

return 0;
}
