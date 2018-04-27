#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Implementing Michael Stifel's method 
	// (https://en.wikipedia.org/wiki/Formulas_for_generating_Pythagorean_triples)
	int numerator = 1;
	int denominator = 3;
	int sideA, sideB, hypotenuse, sum;

	while (sum < 1000)
	{
		// My own interpretation for easy calculation
		sideA = denominator;
		sideB = numerator + (numerator*denominator);
		// Pythagorean Theorem (Euclidean Distance)
		hypotenuse = sqrt(sideA*sideA + sideB*sideB);

		sum = sideA + sideB + hypotenuse;
		cout << sideA << ' ' << sideB << ' ' << hypotenuse << endl;
	
		// Properties of Stifel's sequence
		numerator += 1;
		denominator += 2;
	}
	cout << sideA << ' ' << sideB << ' ' << hypotenuse << endl;

}
