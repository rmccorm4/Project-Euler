#include <iostream>
#include <cstdint>
using namespace std;

#define BOUND 2000000

bool isPrime(int n)
{
	int range = n;
	for (int i = 2; i < range; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
		range = n / i;
	}
	return true;
}

int main() 
{
	uint64_t sum = 0;
	for (int i = 2; i < BOUND; i++)
	{
		if(isPrime(i))
			sum += i;
	}
	cout << sum << endl;
	return 0;
}
