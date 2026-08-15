package main

import "fmt"

func vmax(wa float64) float64 {
	return wa / 3.0 * wa / 3.0 * wa / 3.0
}

func main() {
	var l float64
	fmt.Scan(&l)

	fmt.Printf("%f\n", vmax(l))
}
