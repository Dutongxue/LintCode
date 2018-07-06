//
// Created by enheng on 18-7-5.
//

#include "P96.h"
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
     * @param head: The first node of linked list
     * @param x: An integer
     * @return: A ListNode
     */
    ListNode * partition(ListNode * head, int x) {
        // write your code here
        ListNode *l = new ListNode(0), *r = new ListNode(0);
        ListNode *tl = l, *tr = r;
        while(head != NULL){
            if(head->val < x){
                tl->next = head;
                tl = tl->next;
            }else{
                tr->next = head;
                tr = tr->next;
            }
            head = head->next;
        }
        tr->next = NULL;
        tl->next = r->next;
        return l->next;
    }
};

void P96(){
    Solution s;
    ListNode *head = createList("1->4->3->2->5->2->2->null");

    printList(s.partition(head, 3));
}