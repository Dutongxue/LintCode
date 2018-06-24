package problemID

import(
    "fmt"
)

/**
 * 翻转链表
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

type ListNode struct {
    Val int
    Next *ListNode
}

/**
 * @param head: n
 * @return: The new head of reversed linked list.
 */
func reverse (head *ListNode) *ListNode {
    // write your code here
    var left, LN, right *ListNode = nil, head, head.Next

    for LN != nil {
        right = LN.Next
        LN.Next = left
        left = LN
        LN = right
    }

    return LN
}

func P35(){
    fmt.Println("ok")
}
