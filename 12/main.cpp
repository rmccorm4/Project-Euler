#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// Generate triangle numbers
	// n-th triangle number is (n)(n+1)/2
	int n = 1;
	int triangle_number;
	vector<int> factors;
	while (factors.size() <= 5)
	{
		factors.clear(); 
		triangle_number = n*(n+1)/2;
		// Brute force
		for (int i = 1; i <= triangle_number; i++)
		{
			if (triangle_number % i == 0)
			{
				factors.push_back(i);
			}
		}
		n++; 
	}
	cout << triangle_number << endl;
	cout << factors.size() << endl;
	for (auto f : factors) { cout << f << " "; }

	return 0;
}
