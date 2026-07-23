package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	for i := range 1001 {
		aa := i * 8 / 100
		bb := i * 10 / 100
		if aa == a && bb == b {
			fmt.Println(i)
			return
		}
	}

	fmt.Println(-1)
}
