//
// Created by 91241 on 2018-09-18.
//

#include "P102.h"
#include <iostream>

/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class ListNode {
public:
    int val;
    ListNode *next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: True if it has a cycle, or false
     */
    bool hasCycle(ListNode *head) {
        // write your code here
        ListNode *slow, *fast;

        if(head == NULL) return false;
        slow = head;
        fast = head->next;

        while(fast != NULL && fast->next != NULL){
            if(slow == fast) return true;
            slow = slow->next;
            fast = fast->next->next;
        }

        return false;
    }
};
