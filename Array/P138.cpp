//
// Created by enheng on 18-6-13.
//

#include "P138.h"
#include "../main.h"

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

template <class T>
ostream &operator<<(ostream &out, vector<T> v){
    for(auto x:v){
        out << x << ' ';
    }

    return out;
}

class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number and the index of the last number
     */
    vector<int> subarraySum(vector<int> &nums) {
        // write your code here
        vector<int> ans(2);
        int size = nums.size();
        vector<vector<int>> dp(size, vector<int>(size));

        for(int i = 0; i < size; i++){
            for (int j = i; j < size; ++j) {
                if(i == j){
                    dp[i][j] = nums[i];
                }else{
                    dp[i][j] = dp[i][j - 1] + nums[j];
                }
                if(dp[i][j] == 0){
                    ans[0] = i;
                    ans[1] = j;
                    return ans;
                }
            }
        }
    }

    vector<int> subarraySum2(vector<int> &nums) {
        // write your code here
        vector<int> ans(2);
        unordered_map<int, int> m;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(sum == 0){
                ans[1] = i;
                break;
            }
            if(m[sum] == 0){
                m[sum] = i + 1;
            }else{
                ans[0] = m[sum];
                ans[1] = i;
                break;
            }
        }

        return ans;
    }
};

void P138(){
    Solution s;
    vector<int> v({-4, 1, 2, -3, 4});

    print(v);
    cout << s.subarraySum2(v);
}