//
// Created by enheng on 18-6-13.
//

#ifndef LINTCODE_MAIN_H
#define LINTCODE_MAIN_H

#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

template <class T>
void print(vector<T> v){
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
}

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

ListNode *createList(string);
void printList(ListNode *);

#endif //LINTCODE_MAIN_H
