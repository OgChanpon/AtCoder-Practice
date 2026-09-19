package main

import "fmt"

func manage(n int, a []int) []int {
	res := make([]int, n+1)
	for _, v := range a {
		res[v] += 1
	}
	return res
}

func main() {
	var n int
	fmt.Scan(&n)
	a := make([]int, n+1)
	for i := range n - 1 {
		fmt.Scan(&a[i])
	}
	ans := manage(n, a)
	for i := 1; i <= n; i++ {
		fmt.Println(ans[i])
	}
}
