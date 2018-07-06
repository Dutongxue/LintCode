//
// Created by enheng on 18-7-6.
//

#include "P170.h"
#include "../main.h"

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
     * @param head: the List
     * @param k: rotate to the right k places
     * @return: the list after rotation
     */
    ListNode * rotateRight(ListNode * head, int k) {
        // write your code here
        if(head == NULL) return head;
        if(k == 0) return head;
        vector<ListNode *> v;
        ListNode *q = head;
        while(q != NULL){
            v.push_back(q);
            q = q->next;
        }
        k = k % v.size();
        if(k == v.size()) return head;
        v[v.size() - 1]->next = head;
        head = v[v.size() - k];
        v[v.size() - k - 1]->next = NULL;

        return head;
    }
};
