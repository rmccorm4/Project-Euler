// Solution inspired by 
// https://www.geeksforgeeks.org/generate-pythagorean-triplets/

// Algorith idea
/*
	   a = m2 - n2
       b = 2 * m * n
       c  = m2 + n2
because,
       a2 = m4 + n4 – 2 * m2 * n2
       b2 = 4 * m2 * n2
       c2 = m4 + n4 + 2* m2 * n2
*/

#include <iostream>
 
// Generates pythagorean triplets smaller than limit
void pythagoreanTriplets(int limit)
{
     
    // triplet: a^2 + b^2 = c^2
    int a, b, c = 0;
 
    // loop from 2 to max_limit
    int m = 2;
 
 	// Place limit on c since c is the hypotenuse (largest side)
    while (c < limit)
    {
        // now loop on j from 1 to i-1
        for (int n = 1; n < m; ++n)
        {
			// Using these values, we get [a^2 + b^2 = c^2]
            a = m*m - n*n;
            b = 2*m*n;
            c = m*m + n*n;
 
            if (c > limit)
                break;
 
 			if(a+b+c == 1000)
			{
            	printf("%d %d %d\n", a, b, c);
				printf("Product = %d\n", a*b*c);
			}
        }
        m++;
    }
}

int main()
{
	int limit = 1000;
	pythagoreanTriplets(limit);
	return 0;
}
