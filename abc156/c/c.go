package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)
	x := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&x[i])
	}
	ans := 1000000000

	for i := 1; i < 101; i++ {
		tmp := 0
		for j := 0; j < n; j++ {
			tmp += (x[j] - i) * (x[j] - i)
		}
		ans = min(ans, tmp)
	}

	fmt.Println(ans)
}
