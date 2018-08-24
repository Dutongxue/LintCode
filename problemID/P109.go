package problemID

import (
	"fmt"
)

/**
 * 数字三角形
 * @param triangle: a list of lists of integers
 * @return: An integer, minimum path sum
 */
 func minimumTotal (triangle [][]int) int {
	// write your code here
	if len(triangle) == 0{
		return 0
	}
	for i := len(triangle) - 2; i >= 0; i-- {
		for j := len(triangle[i]) - 1; j >= 0 ; j-- {
			triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1])
		}
	}

    return triangle[0][0]
}

func min(a int, b int) int {
	if a < b{
		return a
	}else{
		return b
	}
}

func P109(){
	a := [][]int{{2},{3,4},{6,5,1},{4,1,1,3}}

	fmt.Println(minimumTotal(a))
}