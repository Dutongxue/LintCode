#include "main.h"
#include "String/P55.h"
#include "String/P13.h"
#include "Array/P57.h"
#include "binSearch/P183.h"
#include "Math&BitManipulation/P163.h"
#include "Greedy/P52.h"
#include "linkedList/P98.h"
#include "binaryTree/P93.h"
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

TreeNode *createTreeNode_bfs(string str){
    vector<int> v;
    char *strc = new char[str.length() + 1];

    copy(str.begin(), str.end(), strc);
    char *tmp = strtok(strc, ",");
    while(tmp != NULL){
        v.push_back(atoi(tmp));
        tmp = strtok(NULL, ",");
    }

    TreeNode *root = new TreeNode(0), *p = root;
//    for(auto x : v){
//        p->left
//    }

    return root;
}

void test(){
    map<int, int> m{{1,1}, {2,3}};

    for(auto x:m){
        cout << x.first << x.second << endl;
    }
}


int main() {
     P93();
//    sort_test();
//    test();

    return 0;
}

