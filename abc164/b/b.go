package main

import "fmt"

func battle(a int, b int, c int, d int) string {
	for {
		c -= b
		if c <= 0 {
			return "Yes"
		}
		a -= d
		if a <= 0 {
			return "No"
		}
	}
}

func main() {
	var a, b, c, d int
	fmt.Scan(&a, &b, &c, &d)
	fmt.Println(battle(a, b, c, d))
}
