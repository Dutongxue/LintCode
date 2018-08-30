package problemID

import (
	"fmt"
)

/**
 * @param x: an integer
 * @param y: an integer
 * @return: return an integer, denote the Hamming Distance between two integers
 */
 func hammingDistance (x int, y int) int {
	// write your code here
	n := x ^ y
	ans := 0
	for n != 0 {
		n &= n-1
		ans++
	}

	return ans
}

func P835(){
	fmt.Println(hammingDistance(1, 4))
}