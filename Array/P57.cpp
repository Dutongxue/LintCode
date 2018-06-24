//
// Created by enheng on 18-6-24.
//

#include "P57.h"
#include "../main.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
    /**
     * 三数之和
     * @param numbers: Give an array numbers of n integer
     * @return: Find all unique triplets in the array which gives the sum of zero.
     */
    vector<vector<int>> threeSum(vector<int> &numbers) {
        // write your code here
        vector<vector<int>> ans;
        int len = numbers.size();
        if(len < 3) return ans;

        int start, end;

        sort(numbers.begin(), numbers.end());
        for (int i = 0; i < len - 2; ++i) {
            if (i > 0 && numbers[i] == numbers[i - 1]) {
                continue;
            }
            start = i + 1;
            end = len - 1;
            while(start < end) {
                int tmp = numbers[i] + numbers[start] + numbers[end];
                if(tmp < 0)
                    start++;
                else if(tmp > 0)
                    end--;
                else{
                    ans.push_back({numbers[i], numbers[start], numbers[end]});
                    while(numbers[++start] == numbers[start - 1]);
                }
            }
        }

        return ans;
    }
};


void P57(){
    Solution s;
    vector<int> v({-1, 0, 1, 2, -1, -4});

    for(auto &x:s.threeSum(v)){
        print(x);
    }
}