//
// Created by enheng on 18-7-5.
//

#include "P112.h"

#include <iostream>

using namespace std;

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
     * @param head: head is the head of the linked list
     * @return: head of linked list
     */
    ListNode * deleteDuplicates(ListNode * head) {
        // write your code here
        if(head == NULL) return head;
        ListNode *last, *q = head;
        int cval = q->val;
        last = q;
        q = q->next;
        while(q != NULL){
            if(q->val == cval){
                last->next = q->next;
            }else{
                cval = q->val;
                last = q;
            }
            q = q->next;
        }

        return head;
    }
};
