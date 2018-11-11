#include "main.h"
#include "String/P55.h"
#include "String/P13.h"
#include "Array/P57.h"
#include "binSearch/P183.h"
#include "Math&BitManipulation/P163.h"
#include "Greedy/P52.h"
#include "linkedList/P98.h"
#include "binaryTree/P69.h"
#include "sort/sort_test.h"


void printList(ListNode *head){
    while(head != NULL){
        cout << head->val << "->";
        head = head->next;
    }
    cout << "null" << endl;
}

ListNode *createList(string str){
    vector<int> v;
    int b = 0, e;

    char *strc = new char[str.length() + 1];
    copy(str.begin(), str.end(), strc);
    char *tmp = strtok(strc, "->");
    while(tmp != NULL){
        if(tmp[0] != 'n'){
            v.push_back(atoi(tmp));
        }
        tmp = strtok(NULL, "->");
    }

    delete[] strc;

//    print(v);
    ListNode *head = new ListNode(0), *p = head;

    for(auto x : v){
        p->next = new ListNode(x);
        p = p->next;
    }
    p->next = NULL;

    return head->next;
}

void printTree(TreeNode *head){
    if(head != NULL){
        cout << head->val << ' ';
        printTree(head->left);
        printTree(head->right);
    }else{
        cout << "# ";
    }
}

TreeNode *createTN(){
    TreeNode *root = new TreeNode(0);

    return root;
}

TreeNode *createTreeNode_bfs(string str){   // 按层次序列创建二叉树
    vector<int> v;
    char *strc = new char[str.length() + 1];

    copy(str.begin(), str.end(), strc);
    char *tmp = strtok(strc, ",");
    while(tmp != NULL){
        if(*tmp == '#'){
            v.push_back(-1);
        } else {
            v.push_back(atoi(tmp));
        }
        tmp = strtok(NULL, ",");
    }

    TreeNode *root = new TreeNode(v[0]), *p;
    TreeNode *que[100] = {root};

    int front = 0, tail = 1;
    vector<int>::iterator it = v.begin() + 1;
    while(front != tail){
        if(it == v.end()) break;
        if(que[front] == NULL){
            front++;
            continue;
        }

        p = que[front];
        if(*it == -1){ // 接着两个节点入队
            que[tail++] = NULL;
        } else {
            que[tail++] = new TreeNode(*it);
        }
        it++;
        if(*it == -1){
            que[tail++] = NULL;
        } else{
            que[tail++] = new TreeNode(*it);
        }
        it++;
        p->left = que[tail - 2];
        p->right = que[tail - 1];
        front++;
    }

    return root;
}

void test(){
    map<int, int> m{{1,1}, {2,3}};

    for(auto x:m){
        cout << x.first << x.second << endl;
    }
}


int main() {
     P69();
//    sort_test();
//    test();

    return 0;
}

