//
// Created by 91241 on 2018-10-05.
//

#include "P98.h"
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
     * @return: You should return the head of the sorted linked list, using constant space complexity.
     */
    ListNode * getMid(ListNode *head){
        ListNode *slow = head, *fast = head->next;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode * merge(ListNode *head, ListNode *mid){
        ListNode *left = head;
        ListNode *right = mid;
        ListNode thead(0), *tmp = &thead;

        while(left != NULL && right != NULL){
            if(left->val < right->val){
                tmp->next = left;
                left = left->next;
            }else{
                tmp->next = right;
                right = right->next;
            }
            tmp = tmp->next;
        }
        if(left != NULL){
            tmp->next = left;
        }
        if(right != NULL){
            tmp->next = right;
        }

        return thead.next;
    }

    ListNode * mergeSort(ListNode *head){
        if(head->next == NULL) return head;
        ListNode *mid = getMid(head);
        ListNode *midnext = mid->next;

        mid->next = NULL;   // 摘链，让左右两条链都是NULL尾
        head = mergeSort(head);
        midnext = mergeSort(midnext);
        return merge(head, midnext);
    }

    ListNode * sortList(ListNode * head) {
        // write your code here
        if(head == NULL || head->next == NULL) return head;

        return mergeSort(head);
    }
};

void P98(){
    Solution s;
    ListNode *l = createList("5->3->2->1->null");

    printList(s.sortList(l));
}