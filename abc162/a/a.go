package main

import "fmt"

func luck(n string) bool {
	for i := 0; i < 3; i++ {
		if n[i] == '7' {
			return true
		}
	}
	return false
}

func main() {
	var n string
	fmt.Scan(&n)

	if luck(n) {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
