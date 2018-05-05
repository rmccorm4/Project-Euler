#include <iostream>
#include <omp.h>

#define N 10000
#define MOD 998244353

long euclids_gcd_algorithm(long a, long b, long** memo) {
	long remainder;
	while(b != 0)
	{
		remainder = a % b;
		a = b;
		b = remainder;
	}
	return a;
}

int main()
{
	long sum, a, b, remainder = 0L;
	long** memo = (long**) malloc(sizeof(long*) * N);
	
	for(int i = 1; i < N+1; i++)
	{
		memo[i] = (long*) malloc(sizeof(long) * N);
		for (int j = 1; j < i+1; j++)
		{
			memo[i][j] = 0;
		}
	}

	#pragma omp parallel for reduction(+:sum)
	for (int i = 1; i < N+1; i++)
	{
		for (int j = 1; j < i+1; j++)
		{
			if (memo[i][j] != 0)
			{
				sum += memo[i][j];
			}
			else
			{
				sum += euclids_gcd_algorithm(i, j, memo);
			}
		}
	}

	for (int i = 1; i < N+1; i++)
	{
		free(memo[i]);
	}
	free(memo);
	std::cout << "G(" << N << ") = " << sum % MOD << std::endl;

	
}
