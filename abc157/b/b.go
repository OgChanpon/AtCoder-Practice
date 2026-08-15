package main

import (
	"fmt"
)

func main() {
	var a [3][3]int
	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			fmt.Scan(&a[i][j])
		}
	}
	var c [3][3]int
	var n, b int
	var flag bool
	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fmt.Scan(&b)
		for j := 0; j < 3; j++ {
			for k := 0; k < 3; k++ {
				if a[j][k] == b {
					c[j][k] = 1
				}
			}
		}
	}

	for i := 0; i < 3; i++ {
		if c[i][0] == 1 && c[i][1] == 1 && c[i][2] == 1 {
			flag = true
		}
		if c[0][i] == 1 && c[1][i] == 1 && c[2][i] == 1 {
			flag = true
		}
	}
	if c[0][0] == 1 && c[1][1] == 1 && c[2][2] == 1 {
		flag = true
	}
	if c[0][2] == 1 && c[1][1] == 1 && c[2][0] == 1 {
		flag = true
	}

	if flag {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
