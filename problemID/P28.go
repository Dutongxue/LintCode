package problemID

import (
    "fmt"
)

/**
 * 搜索二维矩阵
 * @param matrix: matrix, a list of lists of integers
 * @param target: An integer
 * @return: a boolean, indicate whether matrix contains target
 */
func searchMatrix (matrix [][]int, target int) bool {
    // write your code here
    var f, m, b int

    b = len(matrix) - 1
    if b == -1 { return false }
    if target < matrix[0][0] || target > matrix[b][len(matrix[b]) - 1] { return false }
    if target == matrix[b][0] {
        return true
    }else if target > matrix[b][0] {
        return binarySearch2(matrix[b], target)
    }
    for f != b {
        m = (b + f) / 2
        if target > matrix[m][0] {
            f = m + 1
        }else if target == matrix[m][0] {
            return true
        }else{
            b = m - 1
        }
    }

    if target < matrix[b][0] {
        return binarySearch2(matrix[b - 1], target)
    }else {
        return binarySearch2(matrix[f], target)
    }
}

func binarySearch2 (nums []int, target int) bool {
    // write your code here
    var f, m, b int

    b = len(nums) - 1
    for f <= b{
        m = (b + f) / 2
        if target > nums[m] {
            f = m + 1
        }else if target == nums[m] {
            return true
        }else{
            b = m - 1
        }
    }

    return false
}

func P28(){
    fmt.Println(searchMatrix([][]int{}, 15))
}