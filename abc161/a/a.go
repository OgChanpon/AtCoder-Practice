package main

import "fmt"

func swap(x int, y int, z int) {
	fmt.Println(z, x, y)
}

func main() {
	var x, y, z int
	fmt.Scan(&x, &y, &z)
	swap(x, y, z)
}
