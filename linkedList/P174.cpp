//
// Created by enheng on 18-7-5.
//

#include "P174.h"

#include <iostream>
#include <vector>

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
     * @param head: The first node of linked list.
     * @param n: An integer
     * @return: The head of linked list.
     */
    ListNode * removeNthFromEnd(ListNode * head, int n) {
        // write your code here
        vector<ListNode *> v;
        auto q = head;
        while(q != NULL){
            v.push_back(q);
            q = q->next;
        }
        if(v.size() == n){
            return v[1];
        }
        v[v.size() - n - 1]->next = v[v.size() - n + 1];
        return head;
    }
};


void P174(){
    Solution s;

//    s.removeNthFromEnd();
}