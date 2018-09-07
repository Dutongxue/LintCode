package main

import (
    "bufio"
    "fmt"
	"os"
	"strings"
	"strconv"
)

func solution(line string) string {
	m := map[int64]int{}
	tmp, ans := 0, 0

	l := strings.Split(line, ",")
	for _, v := range l {
		num, _ := strconv.ParseInt(v, 10, 32)
		if m[num] == 0 {
			m[num] = 1
			tmp = 1
			if m[num - 1] != 0 {
				tmp = m[num - 1] + 1
				m[num] = tmp
				m[num - int64(m[num] - 1)] = tmp
			}
			if m[num + 1] != 0 {
				if m[num] == 1 {
					tmp = m[num + 1] + 1
					m[num] = tmp
					m[num + int64(m[num] - 1)] = tmp
				}else{
					tmp = m[num] + m[num + 1]
					m[num - int64(m[num] - 1)] = tmp 
					m[num + int64(m[num + 1])] = tmp
				}
			}
			if ans < tmp {
				ans = tmp
			}
		}
	}
	
	return strconv.FormatInt(int64(ans), 10)
}

func main() {
    r := bufio.NewReaderSize(os.Stdin, 20480)
    for line, _, err := r.ReadLine(); err == nil; line, _, err = r.ReadLine() {
        fmt.Println(solution(string(line)))
    }
}