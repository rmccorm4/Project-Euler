#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// Generate triangle numbers
	// n-th triangle number is (n)(n+1)/2
	int n = 1;
	int bound;
	int triangle_number = 1;
	vector<int> factors;
	while (factors.size() <= 500)
	{
		factors.clear();
		triangle_number = n*(n+1)/2;
		bound = triangle_number;
		// Brute force
		for (int i = 1; i < bound; i++)
		{
			if (triangle_number % i == 0)
			{
				bound = triangle_number / i;
				factors.push_back(i);
				factors.push_back(triangle_number / i);
			}
		}
		n++;
	}
	cout << triangle_number << endl;
	cout << factors.size() << endl;
	return 0;
}
