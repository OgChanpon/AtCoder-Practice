package main

import "fmt"

func sheepwolf(s int, w int) bool {
	return s <= w
}

func main() {
	var s, w int
	fmt.Scan(&s, &w)
	if sheepwolf(s, w) {
		fmt.Println("unsafe")
	} else {
		fmt.Println("safe")
	}
}
