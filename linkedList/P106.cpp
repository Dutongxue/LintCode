//
// Created by 91241 on 2018-09-14.
//

#include "P106.h"
#include "../main.h"

/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param head: The first node of linked list.
     * @return: a tree node
     */
    TreeNode * sortedListToBST(ListNode * head) {
        // write your code here
        if(head == NULL){
            return NULL;
        }
        ListNode h = ListNode(0);
        h.next = head;
        ListNode *fast = head, *slow = &h;
        TreeNode *tree = new TreeNode(0);

        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        // 增加了头结点，中间节点是 slow->next;
        tree->val = slow->next->val;
        auto tmp = slow->next->next;
        slow->next = NULL;  // 摘链
        tree->left = sortedListToBST(h.next);
        tree->right = sortedListToBST(tmp);

        return tree;
    }
};

void P106(){
    auto list = createList("1->2->3");
    Solution s;

    printList(list);
    auto tree = s.sortedListToBST(list);
    printTree(tree);
}


