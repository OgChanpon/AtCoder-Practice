package main

import "fmt"

func repi(n int64, k int64) int64 {
	mod := n % k
	ans := min(mod, k-mod)
	return ans
}

func main() {
	var n, k int64
	fmt.Scan(&n, &k)
	fmt.Println(repi(n, k))
}
