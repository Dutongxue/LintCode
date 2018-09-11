#include "main.h"
#include "String/P55.h"
#include "String/P13.h"
#include "Array/P57.h"
#include "binSearch/P183.h"
#include "Math&BitManipulation/P163.h"
#include "Greedy/P52.h"
#include "linkedList/P96.h"
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
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '-'){
            e = i;
            v.push_back(stoi(str.substr(b, e)));
        }
        if(str[i] == '>'){
            b = i + 1;
        }
    }
//    print(v);
    ListNode *head = new ListNode(0), *p = head;

    for(auto x : v){
        p->next = new ListNode(x);
        p = p->next;
    }
    p->next = NULL;

    return head->next;
}

int main() {
    // P96();
    sort_test();

    return 0;
}

