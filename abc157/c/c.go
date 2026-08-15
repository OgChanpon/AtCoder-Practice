package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n, m int
	flag := true
	var rules [5][2]int
	fmt.Scan(&n, &m)

	for i := 0; i < m; i++ {
		for j := 0; j < 2; j++ {
			fmt.Scan(&rules[i][j])
		}
	}

	for i := 0; i < 1000; i++ {
		str := strconv.Itoa(i)
		if len(str) == n {
			for j := 0; j < m; j++ {
				if (str[rules[j][0]-1] - '0') != uint8(rules[j][1]) {
					flag = false
					break
				} else {
					flag = true
				}
			}
			if flag {
				fmt.Println(i)
				return
			}
		}
	}
	fmt.Println(-1)
}
