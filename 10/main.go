package main

import (
	"fmt"
	"math/big"
	"os"
)

func main() {
	const NUM_PRIMES int = 1000001
	primes := make([]int, NUM_PRIMES);
	primes[0] = 2;
	i := 3
	for count := 1; count < NUM_PRIMES; {
		for j := 2; j < i; j++ {
			// Want sum of all primes < 2,000,000
			if j >= 2000000 {
				sum := big.NewInt(0);
				for prime := range primes {
					sum.Add(sum, big.NewInt(int64(prime)));
				}
				fmt.Println(sum);
				os.Exit(0);
			}
			if i % j == 0 {
				break;
			}
			if j == i-1 {
				primes[count] = j+1;
				count++;
			}
		}
		i++;
	}
	fmt.Println(primes);
}
