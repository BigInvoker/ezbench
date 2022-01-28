package main

import (
	"fmt"
	"log"
	"time"
)

func main() {
	start := time.Now()

	ti := 5000
	tj := 20
	var p = ti * tj
	var s int
	for i := 0; i < ti; i++ {
		for j := 0; j < tj; j++ {
			var r = s * 100 / p
			fmt.Println(r)
		}
		s = s + tj
	}

	elapsed := time.Since(start)
	log.Printf("Execution time: %s", elapsed)
	fmt.Scanf("h")
}
