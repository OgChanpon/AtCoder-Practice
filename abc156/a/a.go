package main

import (
	"fmt"
)

func main() {
	var n, r int
	fmt.Scan(&n, &r)

	fmt.Println(r + 100*max(0, 10-n))
}
