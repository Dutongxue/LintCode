//
// Created by enheng on 18-6-13.
//

#ifndef LINTCODE_MAIN_H
#define LINTCODE_MAIN_H

#include <iostream>
#include <vector>

using namespace std;

template <class T>
void print(vector<T> v){
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
}

#endif //LINTCODE_MAIN_H
