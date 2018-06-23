//
// Created by enheng on 18-6-23.
//

#include "P31.h"

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    /**
     * @param nums: The integer array you should partition
     * @param k: An integer
     * @return: The index after partition
     */
    int partitionArray(vector<int> &nums, int k) {
        // write your code here
        int i = 0, j = nums.size() - 1;
        if(j < 0) return 0;
        while(i <= j){
            while(i <= j && nums[i] < k) i++;
            while(i <= j && nums[j] >= k) j--;
            if(i <= j){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }

        return i;
    }
};

void P31(){
    Solution s;
    vector<int> v({6,6,8,6,7,9,8,7,9,6,8,6,8,9,8,7,8,6,7,6,6,8,6,6});

    cout << s.partitionArray(v, 5);
}