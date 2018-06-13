//
// Created by enheng on 18-6-12.
//

#include "P79.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: the length of the longest common substring.
     */
    int longestCommonSubstring(string &A, string &B) {
        // write your code here
        vector<vector<int>> dp(A.length() + 1, vector<int>(B.length() + 1, 0));
        int ans = 0;

        for (int i = 1; i <= A.length(); ++i) {
            for (int j = 1; j <= B.length(); ++j) {
                if (A[i - 1] == B[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;    //当搜索到A【i】,B[j]时最大连续子串长度
                    if (ans < dp[i][j]) ans = dp[i][j];
                }
            }
        }

        return ans;
    }
};

void P79() {
    Solution s;
    string A("www.lintcode.com code"), B("www.ninechapter.com code");

    cout << s.longestCommonSubstring(A, B);
}