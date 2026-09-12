package main

import "fmt"

func vote(n int, m int, a []int, total int) bool {
	check := 0

	for i := 0; i < n; i++ {
		if a[i]*4*m >= total {
			check++
			if check == m {
				return true
			}
		}
	}
	return false
}

func main() {
	var n, m int
	fmt.Scan(&n, &m)
	a := make([]int, n, n+1)
	total := 0
	for i := range n {
		fmt.Scan(&a[i])
		total += a[i]
	}
	if vote(n, m, a, total) {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
