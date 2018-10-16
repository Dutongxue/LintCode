//
// Created by 91241 on 2018-10-07.
//

#include "P97.h"
#include "../main.h"

#include <algorithm>

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
     * @return: An integer
     */
    int max_t = 0;
    void getDepth(TreeNode * root, int flor){
        if(root != NULL){
            flor++;
        }else{
            return ;
        };
        if(max_t < flor) max_t = flor;
        getDepth(root->left, flor);
        getDepth(root->right, flor);
    }

    int maxDepth(TreeNode * root) {
        // write your code here
        if(root == NULL) return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

void P97(){
    Solution s;

}