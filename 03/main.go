package main

import (
	"fmt"
	"math"
)

func maxPrimeFactor(n int) int {
	// Initialize retval
	maxPrime := -1

	// Get all 2's out of the way to be left with odd number
	for ; n % 2 == 0; {
		maxPrime = 2
		n /= 2
	}

	// Since we got all 2's, we can only check odd numbers starting from 3
	// Only go up until sqrt(n) because of a Theorem in Number Theory
	for i := 3; i < int(math.Sqrt(float64(n))); i+=2 {
		// While i divides n, maxPrime is i, and divide n by i
		for ; n % i == 0; {
			maxPrime = i
			n /= i
		}
	}

	// In case we have a prime number leftover
	if n > 2 {
		maxPrime = n
	}
	return maxPrime
}

func main() {
	n := 600851475143
	fmt.Println(maxPrimeFactor(n))
}
