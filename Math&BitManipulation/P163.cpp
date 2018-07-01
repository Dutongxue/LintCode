//
// Created by enheng on 18-7-1.
//

#include "P163.h"

#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * 不同的二叉查找树
     * @param n: An integer
     * @return: An integer
     */
    int numTrees(int n) {
        // write your code here
        int i, j;
        int dp[n + 1] = {0};
        dp[0] = 1;
//        for (i = 1; i <= n; ++i) {
//            for (j = 0; j < (i - 1) / 2; ++j) {
//                dp[i] += dp[j] * dp[i - j - 1] * 2;
//            }
//            dp[i] += dp[j] * dp[i - j - 1] * (i % 2 == 0 ? 2 : 1);
//        }
        for (i = 1; i <= n; ++i) {
            for (j = 0; j < i; j++){
                dp[i] += dp[j] * dp[i - j - 1];
            }
        }

        return dp[n];
    }
};

void P163(){
    Solution s;

    cout << s.numTrees(5);
}