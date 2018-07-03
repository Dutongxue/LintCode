package problemID

import (
	"fmt"
)

/**
 * @param A: A list of integers
 * @return: A boolean
 */
 func canJump (A []int) bool {
	// write your code here
	m := 0
	for i, v := range A {
		if(i <= m){
			if m < i + v {
				m = i + v
			}
		}else{
			return false
		}
	}
	return true
}


func P116(){
	fmt.Println(canJump([]int{0, 1}))
}
