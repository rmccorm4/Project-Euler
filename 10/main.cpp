#include <iostream>
#include <cstdint>
using namespace std;

int main() {
	const int NUM_PRIMES = 1000;
	int primes[NUM_PRIMES];
	primes[0] = 2;
	int count = 1;
	int i = 3;
	while (count < NUM_PRIMES) {
		for (int j = 2; j < i; j++) {
			if (j >= 2000000) {
				uint64_t sum = 0;
				for (int i = 0; i < count; i++)
				{
					sum += primes[count];
				}
				cout << sum << endl;
				// Done, found desired sum
				exit(0);
			}
			if (i % j == 0) {
				break;
			}
			if (j == i-1) {
				primes[count] = j+1;
				count++;
			}
		}
		i++;
	}
	cout << primes[count] << endl;
}
