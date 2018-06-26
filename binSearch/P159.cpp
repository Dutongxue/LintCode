//
// Created by enheng on 18-6-26.
//

#include "P159.h"

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param nums: a rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> &nums) {
        // write your code here
        int l = nums.size(), f = 0, mid = 0, b = l - 1;

        while(f < b){
            mid = f + (b - f) / 2;
//            if(nums[mid] < nums[mid - 1] && nums[mid] < nums[mid + 1]){
//                return nums[mid];
//            }else
            if(nums[mid] > nums[b]){
                f = mid + 1;
            }else{
                b = mid;
            }
        }

        return nums[b];
    }
};

void P159(){
    Solution s;
    vector<int> v({4,5,6,7,0,1,2,3});

    cout << s.findMin(v);
}