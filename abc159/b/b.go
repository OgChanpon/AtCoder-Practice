package main

import "fmt"

func kaibun(s string) int {
	for i, j := 0, len(s)-1; i < j; i, j = i+1, j-1 {
		if s[i] != s[j] {
			return 0
		}
	}
	return 1
}

func main() {
	var s string
	fmt.Scan(&s)
	judge := 0
	sl := len(s)

	judge += kaibun(s[:(sl-1)/2])
	judge += kaibun(s[(sl+3)/2-1:])
	judge += kaibun(s)

	if judge == 3 {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
