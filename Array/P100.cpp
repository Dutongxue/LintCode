//
// Created by enheng on 18-6-16.
//

#include "P100.h"

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /*
     * @param nums: An ineger array
     * @return: An integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        int ans = 0;
        if(nums.size() == 0) return ans;
        for (int i = 1; i < nums.size(); ++i) {
            if(nums[i] != nums[ans]){
                ans++;
                if(ans != i){
                    nums[ans] = nums[i];
                }
            }
        }

        return ans + 1;
    }
};