package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

func main() {
	sc := bufio.NewScanner(os.Stdin)
	sc.Buffer(make([]byte, 1024*1024), bufio.MaxScanTokenSize)
	sc.Split(bufio.ScanWords)
	sc.Scan()
	n, _ := strconv.Atoi(sc.Text())
	a := make([]int, n)
	for i := 0; i < n; i++ {
		sc.Scan()
		a[i], _ = strconv.Atoi(sc.Text())
	}

	sort.Ints(a)

	for i := 0; i < n-1; i++ {
		if a[i] == a[i+1] {
			fmt.Println("NO")
			return
		}
	}
	fmt.Println("YES")
}
