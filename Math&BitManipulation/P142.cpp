//
// Created by enheng on 18-6-29.
//

#include "P142.h"

#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param n: An integer
     * @return: True or false
     */
    bool checkPowerOf2(int n) {
        // write your code here
        if(n == 0) return false;
        while(n % 2 == 0){
            n /= 2;
        }

        return n == 1;
    }
};

void P142(){
    Solution s;

    cout << s.checkPowerOf2(8);
}