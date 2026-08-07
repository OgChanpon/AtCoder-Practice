package main

import "fmt"

func travel(k int, n int, a []int) int {
	m := 0
	a = append(a, k+a[0])
	for i := 0; i < n; i++ {
		d := a[i+1] - a[i]
		if d > m {
			m = d
		}
	}
	return k - m
}

func main() {
	var k, n int
	fmt.Scan(&k, &n)
	a := make([]int, n, n+1)
	for i := range n {
		fmt.Scan(&a[i])
	}

	fmt.Println(travel(k, n, a))
}
