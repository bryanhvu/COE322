#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fib(int i)
{
	if (i < 2)
	{
		return 1;
	} 

	return  fib(i-1) + fib(i-2);

}

int main()
{
	int sum = 0;
	sum = fib(10);
	cout << sum << endl;

return 0;
}	
	
