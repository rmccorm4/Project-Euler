package main

import (
	"fmt"
)

func main() {
	var sum int64 = 0
	var square int64 = 0

	var i int64
	for i = 1; i < 101; i++ {
		sum += i*i
		square += i
	}
	square *= square;

	fmt.Println(sum);
	fmt.Println(square);
	fmt.Println(square - sum);
}
