//
// Created by 91241 on 2018-11-11.
//

#include "P69.h"
#include "../main.h"


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
     * @param root: A Tree
     * @return: Level order a list of lists of integer
     */
    vector<vector<int>> levelOrder(TreeNode * root) {
        // write your code here
        vector<vector<int>> ans;
        if(root == NULL) return ans;

        queue<TreeNode *> que({root});
        int count = 1;

        while(!que.empty()){
            vector<int> *v = new vector<int>;

            int i = count;
            for(; i > 0; i--){
                TreeNode *tmp = que.front();
                if(tmp->left != NULL){
                    que.push(tmp->left);
                }
                if(tmp->right != NULL) {
                    que.push(tmp->right);
                }
                v->push_back(tmp->val);
                que.pop();
            }
            ans.push_back(*v);
            count = (int)que.size();
        }

    }
};

void P69(){
    Solution s;
    TreeNode *root = createTreeNode_bfs("1,2,3");

    s.levelOrder(root);
}