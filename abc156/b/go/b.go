package main

import (
	"fmt"
)

func main() {
	var n, k int
	cnt := 0
	fmt.Scan(&n, &k)

	for n > 0 {
		cnt++
		n /= k
	}

	fmt.Println(cnt)
}
