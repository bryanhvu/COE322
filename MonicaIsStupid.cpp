#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	
string durh;
do {

cout << "Dummy says what? " << endl;
getline(cin,durh);

if (durh == "what") {
	cout << "HaHa stupid." << endl;
}
if (durh != "what") {
	for (int i = 0; i < durh.size(); ++i) {
		if (i%2 == 0) {
			durh[i] -= 32;
		}
	}
cout << durh << endl;
}

}while(durh != "what");

return 0;
}

