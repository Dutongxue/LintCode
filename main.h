//
// Created by enheng on 18-6-13.
//

#ifndef LINTCODE_MAIN_H
#define LINTCODE_MAIN_H

#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <map>
#include <queue>

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

class TreeNode {
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val){
        this->val = val;
        this->left = this->right = NULL;
    }
};

ListNode *createList(string);
TreeNode *createTreeNode_bfs(string);
void printList(ListNode *head);
void printTree(TreeNode *head);

#endif //LINTCODE_MAIN_H
