#include "main.h"
#include "String/P55.h"
#include "String/P13.h"
#include "Array/P57.h"
#include "binSearch/P183.h"
#include "Math&BitManipulation/P163.h"
#include "Greedy/P52.h"
#include "linkedList/P99.h"
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

//    for(int i = 0; i < str.length(); i++){
//        if(str[i] == '-'){
//            e = i;
//            v.push_back(stoi(str.substr(b, e)));
//        }
//        if(str[i] == '>'){
//            b = i + 1;
//        }
//    }
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

TreeNode *createTree(string str){

}
void test(){
    map<int, int> m{{1,1}, {2,3}};

    for(auto x:m){
        cout << x.first << x.second << endl;
    }
}



int main() {
     P99();
//    sort_test();
//    test();

    return 0;
}

