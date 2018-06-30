package problemID

import "fmt"

/**
 * @param a: An integer
 * @param b: An integer
 * @return: An integer
 */
func bitSwapRequired (a int, b int) int {
    // write your code here
    ans := 0
    n := int32(a) ^ int32(b)
    for n != 0 {
        n &= n - 1
        ans++
    }

    return ans
}

func P181(){
    fmt.Println(bitSwapRequired(-1, 1))
}