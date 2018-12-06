#include <iostream>
#include <random>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

vector<int> makeVector(int size, float value)
{
	// one constructor is giving the vector a size
	// another constructor is giving size and value
	vector<float> x(size, value);
	return x; 

}

vector<int> printVector(vector<int> A)
{
	
}
vector<int> combineV(vector<int> A, vector<int> B)
{	
	vector<float> vectorC;
	for (auto i : A)
	{ 
		vectorC.push_back(i);
	}
	for (auto i : B)  
	{ 
		vectorC.push_back(i);
	}

return vectorC
}

vector<float> combineVectorAndEmpty(vector<float> &vectorA, vector<float> &vectorB)
{
	vector<float> vectorC;
	while(!vectorA.empty())
	{
		vectorC.push_back(vectorA.back());
		vectorA.pop_back();
	}
	while(!vectorB.empty())
	{
		vectorC.push_back(vectorB.back());
		vectorB.pop_back();
	}

return vectorC;
}

int main()
{

	/* int n = 5;
	int &q = n;

	cout << n << endl;
	cout << q << endl;

	q = 2000; */

	cout << n << endl;
	vector<float> myVector = makeVector(10, 1.5);
	for (auto i : myVector)
	{
		cout << i << endl;
	}

	for (auto i : makeVector(10,1.5))
	{
		cout << i << endl;
	}


	vector<float> myVector2 = makeVector(10,2);
	vector<float> myVector2 = combineFunction




	 int r = 0;
	while (r != 42)
	{
		// r = rand();
		r = 100. * rand()/RAND_MAX;
		// cout << r << endl;
	}
	
