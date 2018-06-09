package problemID

import(
	"fmt"
)

/**
 * 旋转字符
 * @param str: An array of char
 * @param offset: An integer
 * @return: nothing
 */
func rotateString (str *string, offset int)  {
	// write your code here
	l := len(*str)
	if l == 0 {
		return
	}
	offset = offset % l
	sl := (*str)[:]
	//fmt.Printf("%T", sl)
	sl = sl[l - offset :] + sl[: l - offset]
	*str = string(sl)
}


func P8(){
	str := "abcdefg"
	rotateString(&str, 25)
	fmt.Printf("%s\n", str)
}