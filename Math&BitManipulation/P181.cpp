//
// Created by enheng on 18-6-29.
//

#include "P181.h"

#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: An integer
     */
    int bitSwapRequired(int a, int b) {
        // write your code here
        int ans = 0;
        int n = a ^ b;
        while(n){
            n &= n - 1;
            ans++;
        }

        return ans;
    }
};

void P181(){
    Solution s;

    cout << s.bitSwapRequired(14, 31);
}