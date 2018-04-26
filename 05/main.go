package main

import "fmt"

func main() {
	for i := 2520; ; i++ {
		for div := 1; div < 21; div++ {
			if i % div != 0 {
				break;
			}
			if div == 20 {
				fmt.Println(i);
				return;
			}
		}
	}
}
