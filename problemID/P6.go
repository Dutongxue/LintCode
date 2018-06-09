package problemID

import (
    "fmt"
)

/**
 * 合并排序数组II
 * @param A: sorted integer array A
 * @param B: sorted integer array B
 * @return: A new sorted integer array
 */
func mergeSortedArray (A []int, B []int) []int {
    // write your code here
    if len(A) == 0{
        return B
    }
    if len(B) == 0{
            return A
    }

    var ans []int
    var i, j int

    for i != len(A) && j != len(B) {
        if A[i] < B[j] {
            ans = append(ans, A[i])
            i++
        }else if A[i] == B[j]{
            ans = append(ans, A[i], B[j])
            i++
            j++
        }else{
            ans = append(ans, B[j])
            j++
        }
    }
    ans = append(ans, A[i:]...)
    ans = append(ans, B[j:]...)

    return ans
}

func P6(){
    A := []int{1, 3, 5}
    B := []int{4}

    fmt.Println(mergeSortedArray(A, B))
}