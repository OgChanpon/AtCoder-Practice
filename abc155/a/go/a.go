package main

import (
	"fmt"
)

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)

	if ((a == b) && (b == c)) || ((a != b) && (b != c) && (a != c)) {
		fmt.Println("No")
	} else {
		fmt.Println("Yes")
	}

	return
}
