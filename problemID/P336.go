package problemID

import (
	"fmt"
)

/**
 * @param n: an integer
 * @return: an ineger f(n)
 */
 func fibonacci (n int) int {
	// write your code here
	a := 0
	b := 1
	c := 0

	for i := 1; i < n; i++{
		c = a + b
		a = b
		b = c
	}

	return a
}

func P336(){
	fmt.Println(fibonacci(47))
}