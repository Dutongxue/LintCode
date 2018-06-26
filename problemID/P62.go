package problemID

//import "fmt"

/**
 * @param A: an integer rotated sorted array
 * @param target: an integer to be searched
 * @return: an integer
 */
func search (A []int, target int) int {
    // write your code here
    f, mid, b := 0, 0, len(A) - 1;

    for f <= b {
        mid = f + (b - f) / 2;
        if A[mid] == target {
            return mid;
        }else if A[mid] > target {
            if A[mid] < A[b] {
                b = mid - 1;
            } else {
                if target >= A[f] {
                    b = mid - 1;
                }else {
                    f = mid;
                }
            }

        } else {
            if A[mid] < A[b] {
                if target > A[b] {
                    b = mid;
                } else {
                    f = mid + 1;
                }
            } else {
                f = mid + 1;
            }
        }
    }

    return -1;
}

func P62(){
    print(search([]int{0,1,2,3,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1}, -10))
}