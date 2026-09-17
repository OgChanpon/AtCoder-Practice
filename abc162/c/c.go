package main

import "fmt"

func gcd(a int, b int) int {
	if b == 0 {
		return a
	}
	return gcd(b, a%b)
}

func main() {
	var n int
	fmt.Scan(&n)

	res := 0
	for i := 1; i <= n; i++ {
		for j := 1; j <= n; j++ {
			for k := 1; k <= n; k++ {
				res += gcd(gcd(i, j), k)
			}
		}
	}
	fmt.Println(res)
}
