package problemID

import (
    "fmt"
)

/**
 * 二分查找
 * @param nums: The integer array.
 * @param target: Target to find.
 * @return: The first position of target. Position starts from 0.
 */
func binarySearch (nums []int, target int) int {
    // write your code here
    var f, m, b int

    b = len(nums) - 1
    for f <= b{
        m = (b + f) / 2
        if target > nums[m] {
            f = m + 1
        }else if target == nums[m] {
            i := m
            for ; target == nums[i] ; i-- {
                if i == 0 {return 0}
            }
            return i + 1
        }else{
            b = m - 1
        }
        //fmt.Println(f, m, b, nums[f], nums[m], nums[b])
    }

    return -1
}

func P14(){
    fmt.Println(binarySearch([]int{4,5,9,9,12,13,14,15,15,18}, 17))
}