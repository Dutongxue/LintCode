package problemID

import(
    "fmt"
)

/**
 * @param k: An integer
 * @param n: An integer
 * @return: An integer denote the count of digit k in 1..n
 */
func digitCounts (k int, n int) int {
    // write your code here
    var ans, cur, low, hight, tmp int //cur:当前位

    if k == 0 {
        ans = 1
        tmp = -1
    }else{
        ans = 0
        tmp = 0
    }

    for i := 1; n % i != n; i *= 10 {
        cur = (n / i) % 10
        low = n % i
        hight = n / (i * 10)

        if k == 0 && hight == 0 {//k==0时，最高位不用考虑
            break
        }

        if cur > k {
            ans += (hight + tmp + 1) * i
            /*if k == 0{
                ans += hight *i
            }else{
                ans += (hight + 1) * i
            }*/
        }else if cur == k {
            ans += (hight + tmp) * i + low + 1
            /*if k == 0{
                ans += (hight - 1) * i + low + 1
            }else{
                ans += hight * i + low + 1
            }*/
        }else{
            ans += hight * i
        }
    }

    return ans
}

func P3(){
    var k, n int

    fmt.Scanln(&k)
    fmt.Scanln(&n)
    fmt.Println(digitCounts(k, n))
}
