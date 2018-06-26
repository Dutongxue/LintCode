//
// Created by 91241 on 2018-06-26.
//

#include "P74.h"

#include <iostream>

using namespace std;

class SVNRepo {
    public:
    static bool isBadVersion(int k){
        if(k < 3) return false;
        else return true;
    }
};

class Solution {
public:
    /*
     * 第一个错误的代码版本
     * @param n: An integer
     * @return: An integer which is the first bad version.
     */
    int findFirstBadVersion(int n) {
        // write your code here
        int f = 0, mid = 0, b = n;

        while(f != b - 1){
            mid = f + (b - f) / 2;
            if(SVNRepo::isBadVersion(mid)){
                b = mid;
            }else{
                f = mid;
            }
        }

        return b;
    }
};

void P74(){
    Solution s;

    cout << s.findFirstBadVersion(5);
}