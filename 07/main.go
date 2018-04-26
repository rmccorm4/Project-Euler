package main

import "fmt"

func main() {
	const NUM_PRIMES int = 10001
	primes := make([]int, NUM_PRIMES);
	primes[0] = 2;
	i := 3
	for count := 1; count < NUM_PRIMES; {
		for j := 2; j < i; j++ {
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
