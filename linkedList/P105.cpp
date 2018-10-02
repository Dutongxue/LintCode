//
// Created by 91241 on 2018-09-14.
//

#include "P105.h"
#include "../main.h"

/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
struct RandomListNode {
    int label;
    RandomListNode *next, *random;

    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

class Solution {
public:
    /**
     * @param head: The head of linked list with a random pointer.
     * @return: A new head of a deep copy of the list.
     */
    RandomListNode *copyRandomList(RandomListNode *head) {
        // write your code here
        RandomListNode *p = head;
        RandomListNode *tmp = NULL;

        while (p != NULL) {
            tmp = new RandomListNode(p->label);
            tmp->next = p->next;
            p->next = tmp;
            p = p->next->next;
        }

        p = head;
        while (p != NULL) {
            if (p->random == NULL) {
                p->next->random = NULL;
            } else {
                p->next->random = p->random->next;
            }
            tmp = p->next;
            p = p->next->next;
            if(p == NULL){
                tmp->next = NULL;
            }else{
                tmp->next = p->next;
            }

        }

        return head->next;
    }
};

