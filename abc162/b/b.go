package main

import "fmt"

func fizbuz(n int64) int64 {
	var total int64 = 0
	for i := int64(0); i <= n; i++ {
		if i%3 != 0 && i%5 != 0 {
			total += i
		}
	}
	return total
}

func main() {
	var n int64
	fmt.Scan(&n)
	fmt.Println(fizbuz(n))
}
