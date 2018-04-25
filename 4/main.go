package main

import (
	"fmt"
	"math"
	"strconv"
)

func max_palindrome(num_digits int) {
	max_n_digit_number := int(math.Pow(10.0, float64(num_digits)) - 1)
	for i := max_n_digit_number; i > 1; i++ {
		for j := max_n_digit_number; j > 1; j++ {
			product := i*j
			// Convert int to string using (Integer to Ascii)
			str_product := strconv.Itoa(product)
			fmt.Println(str_product)
		}
	}
}

func main() {
	max_palindrome(2)
}
