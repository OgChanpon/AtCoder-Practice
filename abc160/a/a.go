package main

import "fmt"

func coffee(n string) bool {
	return n[2] == n[3] && n[4] == n[5]
}

func main() {
	var s string
	fmt.Scan(&s)

	if coffee(s) {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
