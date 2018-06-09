package problemID

import (
    "fmt"
    "strconv"
)

/**
 * Fizz Buzz 问题
 * @param n: An integer
 * @return: A list of strings.
 */
func fizzBuzz (n int) []string {
    // write your code here
    ans := []string{}
    x := 0
    for i := 1; i <= n; i++ {
        x = 0
        if i % 3 == 0 {
            x += 1
        }
        if i % 5 == 0 {
            x += 2
        }

        switch x {
            case 0:
                ans = append(ans, strconv.Itoa(i))
            case 1:
                ans = append(ans, "fizz")
            case 2:
                ans = append(ans, "buzz")
            case 3:
                ans = append(ans, "fizz buzz")
        }
    }

    return ans
}

func P9(){
    fmt.Print(fizzBuzz(0))
}