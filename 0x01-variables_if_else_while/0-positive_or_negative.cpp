#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		cout << n << "is positive";
	}
	else if (n < 0)
	{
		cout << n << "is negative";
	}
	else
	{
		cout << n << "is zero";
	}
	
	return (0);
}