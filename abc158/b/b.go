package main

import (
	"fmt"
)

func main() {
	var n, a, b, ans uint64
	fmt.Scan(&n, &a, &b)

	ans = n/(a+b)*a + min(a, n%(a+b))

	fmt.Println(ans)
}
