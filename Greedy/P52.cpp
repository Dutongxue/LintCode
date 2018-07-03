//
// Created by enheng on 18-7-2.
//

#include "P52.h"
#include "../main.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers
     */
    vector<int> nextPermutation(vector<int> &nums) {
        // write your code here
        next_permutation(nums.begin(), nums.end());
        print(nums);
        next_permutation(nums.begin(), nums.end());
        print(nums);
        next_permutation(nums.begin(), nums.end());
        print(nums);
        next_permutation(nums.begin(), nums.end());
        print(nums);
        next_permutation(nums.begin(), nums.end());
        print(nums);

        return nums;
    }
};

void P52(){
    Solution s;
    vector<int> v({1,3,2,3});

    print(s.nextPermutation(v));
}