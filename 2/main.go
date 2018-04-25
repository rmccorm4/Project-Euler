package main

import "fmt"

func main() {
	f1 := 1
	f2 := 1
	even_sum  := 0

	for current_fib := f1+f2; current_fib < 4000000; current_fib = f1+f2 {
		if current_fib % 2 == 0 {
			even_sum += current_fib
		}
		f1 = f2
		f2 = current_fib
	}
	fmt.Println(even_sum)
}
