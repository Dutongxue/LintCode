package main

import (
    "bufio"
    "fmt"
    "os"
)

func solution(line string) string {
    // 在此处理单行数据
	
    // 返回处理后的结果
    // return ans
}

func main() {
    r := bufio.NewReaderSize(os.Stdin, 20480)
    for line, _, err := r.ReadLine(); err == nil; line, _, err = r.ReadLine() {
        fmt.Println(solution(string(line)))
    }
}