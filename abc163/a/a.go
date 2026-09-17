package main

import (
	"fmt"
	"math"
)

func cp(r float64) float64 {
	return 2.0 * r * math.Pi
}

func main() {
	var r float64
	fmt.Scan(&r)
	fmt.Println(cp(r))
}
