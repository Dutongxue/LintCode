//
// Created by 91241 on 2018-10-28.
//

#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val){
        this->val = val;
        this->left = this->right = NULL;
    }
};

// 按层次序列创建二叉树, 假设没有负数，'#'表示该节点不存在
TreeNode *createTreeNode_bfs_test(string str) {
    vector<int> v;
    char *str_c = new char[str.length() + 1];   // strtok() 只能处理字符数组；

    copy(str.begin(), str.end(), str_c);
    char *tmp = strtok(str_c, ",");     // 分割文本
    while(tmp != NULL){
        if(*tmp == '#'){
            v.push_back(-1);
        } else {
            v.push_back(atoi(tmp));
        }
        tmp = strtok(NULL, ",");
    }

    TreeNode *root = new TreeNode(v[0]), *p;
    TreeNode *que[100] = {root};        // 创建队列

    int front = 0, tail = 1;        // 首尾指针
    vector<int>::iterator it = v.begin() + 1;
    while(front != tail){   // 首尾相等表示队空
        if(it == v.end()) break;
        if(que[front] == NULL){
            front++;
            continue;
        }

        p = que[front];
        if(*it == -1) que[tail++] = NULL;   // 两个子节点入队，-1表示节点不存在
        else que[tail++] = new TreeNode(*it);
        it++;

        if(*it == -1) que[tail++] = NULL;
        else que[tail++] = new TreeNode(*it);
        it++;

        p->left = que[tail - 2];
        p->right = que[tail - 1];
        front++;    // 出队操作
    }

    return root;
}

// 输出先序遍历
//void printTree(TreeNode *root){
//    if(root != NULL){
//        cout << root->val << ' ';
//        printTree(root->left);
//        printTree(root->right);
//    }else{
//        cout << "# ";
//    }
//}

//int main() {
//    TreeNode *root = createTreeNode_bfs_test("1,2,3,4,#,6,#");
//
////    printTree(root);
//
//    return 0;
//}