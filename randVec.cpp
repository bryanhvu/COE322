// bv4987
// bryanhvu5@gmail.com
#include <iostream>
#include <random>
#include <time.h>

using std::cout;
using std::endl;
using std::vector;
using std::srand;
using std::cin;

vector<float> rand_vector(int n, int max, int min)
{
vector<float> values;

for (int i = 0; i < n; ++i) 
{	// construct vector of random numbers from 1-10
	float r = rand() % max + min ;
	values.push_back(r);              
}

return values;
}

void sort(vector<float> &values)
{

float buffer = 0;
for (int j = 0; j < values.size() - 1; ++j)
{
	for (int i = 0; i < values.size() - 1; ++i)
	{
		if (values[i] > values[i+1]) 
		{	// use buffer to switch index elements
			buffer = values[i+1];
			values[i+1] = values[i];
			values[i] = buffer; 
		} 
	} 
}
}

int main() 
{

int max, min;
cout << "Enter maximum and minimum range for random number: " << endl;
cin >> max >> min;

int length = 10;
srand(time(NULL));
// call random number and sort functions
vector<float> myVec = rand_vector(length, max, min);
sort(myVec);

cout << "Sorted Random Vector: " <<  endl;
// output my vector onto one line
for (auto i : myVec)
{
	cout << i << ", ";
}
cout << endl;

return 0; 
}

