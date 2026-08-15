package main

import (
	"fmt"
	"sort"
)

func main() {
	var n, max_cnt int
	max_cnt = 0
	var a []string
	var str string
	fmt.Scan(&n)
	s := make(map[string]int)
	for i := 0; i < n; i++ {
		fmt.Scan(&str)
		s[str]++
	}

	for _, v := range s {
		if v > max_cnt {
			max_cnt = v
		}
	}
	for k, v := range s {
		if max_cnt == v {
			a = append(a, k)
		}
	}

	sort.Strings(a)

	for i := 0; i < len(a); i++ {
		fmt.Println(a[i])
	}
}
