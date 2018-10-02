//
// Created by 91241 on 2018-09-27.
//

#include "P99.h"
#include "../main.h"
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

class Solution {
public:
    /**
     * @param head: The head of linked list.
     * @return: nothing
     */
    void reorderList(ListNode * head) {
        // write your code here
        if(head == NULL) return;

        ListNode *slow = head, *fast = head->next, *last = NULL, *next = NULL;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast != NULL){
            slow = slow->next;
        }
        last = slow;
        slow = slow->next;
        last->next = NULL;
        while(slow != NULL){
            next = slow->next;
            slow->next = last;
            last = slow;
            slow = next;
        }

        ListNode *a = head, *b = last, *tmpa = NULL, *tmpb = NULL;
        while(b->next != NULL && a != NULL){
            tmpa = a->next;
            a->next = b;
            tmpb = b->next;
            b->next = tmpa;
            a = tmpa;
            b = tmpb;
        }
        if(a != b)
            a->next = b;
    }
};

void P99(){
    Solution s;
    ListNode *h = createList("1->2->3->4->5->null");

    s.reorderList(h);
    printList(h);
}