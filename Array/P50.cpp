//
// Created by enheng on 18-6-17.
//

#include "P50.h"
#include "../main.h"

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /*
     * @param nums: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        // write your code here
        vector<long long> ans;
        int len = nums.size();
        long long f[len + 1];
        f[len] = 1;
        for (int i = len - 1; i > 0; --i) {
            f[i] = f[i + 1] * nums[i];
        }
        long long front = 1;
        for (int i = 0; i < len; ++i) {
            ans.push_back(front * f[i + 1]);
            front *= nums[i];
        }

        return ans;
    }
};


void P50(){
    Solution s;
    vector<int> v({1, 2, 3});

//    auto ans = s.productExcludeItself(v);
    print(s.productExcludeItself(v));
}
