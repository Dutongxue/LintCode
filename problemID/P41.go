package problemID

import(
    "fmt"
)

/**
 * 最大子数组
 * @param nums: A list of integers
 * @return: A integer indicate the sum of max subarray
 */
func maxSubArray (nums []int) int {
    // write your code here
    var sum, minsum int
    maxsum := -0x7FFFFFFF
    for _, v := range nums {
        sum += v
        if maxsum < sum - minsum { maxsum = sum - minsum }
        if minsum > sum { minsum = sum }
    }
    return maxsum
}

func maxSubArraydp (nums []int) int {
    // write your code here
    sum := 0
    maxsum := -0x7FFFFFFF
    for _, v := range nums {
        if sum > 0 {
            sum += v
        } else {
            sum = v
        }
        if maxsum < sum { maxsum = sum }
    }
    return maxsum
}

func P41(){
    fmt.Println(maxSubArray([]int{-1}))
}