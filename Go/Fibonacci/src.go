package main

import (
	"fmt"
	"log"
	"time"
)

func main() {
	var step uint32 = 50
	start := time.Now()

	fmt.Println(recFib(step))

	elapsed := time.Since(start)
	log.Printf("Execution time: %s", elapsed)
	fmt.Scanf("h")
}

func recFib(num uint32) uint64 {
	if num <= 2 {
		return 1
	} else {
		return recFib(num-1) + recFib(num-2)
	}
}
