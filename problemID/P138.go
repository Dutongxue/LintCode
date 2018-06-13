package problemID

import (
    "fmt"
)

func subarraySum (nums []int) []int {
    // write your code here
    ans := make([]int, 2)
    m := make(map[int]int)
    sum := 0

    for i, v := range nums {
        sum += v
        if sum == 0 {
            ans[1] = i
            break
        }
        if m[sum] == 0 {
            m[sum] = i + 1
        }else{
            ans[0] = m[sum]
            ans[1] = i
            break
        }
    }

    return ans
}

func P138(){
    fmt.Println(subarraySum([]int{-4, 1, 2, -3, 4}))
}