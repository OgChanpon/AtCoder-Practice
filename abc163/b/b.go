package main

import "fmt"

func homework(n int, m int, a []int) int {
	total := 0
	for i := range m {
		total += a[i]
	}
	if total <= n {
		return n - total
	}
	return -1
}

func main() {
	var n, m int
	fmt.Scan(&n, &m)
	a := make([]int, m, m+1)
	for i := range m {
		fmt.Scan(&a[i])
	}

	fmt.Println(homework(n, m, a))
}
