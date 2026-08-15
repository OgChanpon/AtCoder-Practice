package main

import "fmt"

func coin(n int) int {
	return 1000*(n/500) + 5*((n%500)/5)
}

func main() {
	var x int
	fmt.Scan(&x)
	fmt.Println(coin(x))
}
