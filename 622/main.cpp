#include <iostream>
#include <assert.h>

#define MAX 100'000'00
#define SHUFFLES 60
#define PARALLEL 1

long euclids_gcd_algorithm(long a, long b) {
	long remainder;
	while(b != 0)
	{
		remainder = a % b;
		a = b;
		b = remainder;
	}
	return a;
}

// Find smallest k such that A^k (mod N) = 1
long multiplicative_order(int num_cards)
{
	int A = 2;
	int N = num_cards - 1;
    //if (euclids_gcd_algorithm(A, N) != 1)
    //    return -1;
 
    unsigned int result = 1;
 
    int K = 1 ;
    while (K < N)
    {
        // modular arithmetic
        result = (result * A) % N ;
 
        // return smallest positive integer
        if (result == 1)
            return K;
 
        // increment power
        K++;
    }
 
    return -1 ;
}

int main()
{
	int* results = (int*) malloc(sizeof(int) * MAX);
	#pragma omp parallel for if(PARALLEL)
	for (int i = 0; i < MAX; i++)
	{
		results[i] = multiplicative_order(i);
		assert(results[i] < MAX);
	}

	unsigned int sum = 0;
	for (int i = 0; i < MAX; i++)
	{
		if (results[i] == SHUFFLES)
		{
			std::cout << i << std::endl;
			sum += i;
		}
	}
	std::cout << sum << std::endl;
	delete[] results;
	return 0;
}
