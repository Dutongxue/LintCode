//
// Created by 91241 on 2018-10-14.
//

#include "P93.h"
#include "../main.h"

#include <utility>

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: True if this Binary tree is Balanced, or false.
     */
    int maxDepth(TreeNode * root) {
        if(root == NULL) return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }

    bool isBalanced(TreeNode * root) {
        // write your code here
        if(root == NULL) return true;
        if(abs(maxDepth(root->left) - maxDepth(root->right)) > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};

// {1,2,3,4,#,5,6,7,8,9,10,11,12}
char s[105] = {"1247NN8NNN359NN1NN61NN2NN"};
int i = 0;

TreeNode * createNode(){
    TreeNode * p;

    if(s[i] == 'N'){
        i++;
        return NULL;
    }
    p = new TreeNode(0);
    p->val = s[i++] - '0';
    p->left = createNode();
    p->right = createNode();

    return p;
}

void P93(){
    Solution s;
    TreeNode *treeNode = createNode();

    cout << boolalpha << s.isBalanced(treeNode);
}