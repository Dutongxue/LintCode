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
        for (int i = nums.size() - 1; i > 0; --i) {
            if(nums[i] > nums[i - 1]){
                for(int j = nums.size() - 1; j >= i; --j){
                    if(nums[j] > nums[i - 1]){
                        swap(nums[j], nums[i - 1]);
                        break;
                    }
                }
//                sort(nums.begin() + nums.size() - (it - nums.rbegin()) - 1, nums.end());
                for (int j = 0; j < (nums.size() - i) / 2; ++j) {
                    swap(nums[i + j], nums[nums.size() - j - 1]);
                }
                return nums;
            }
        }

        for (int j = 0; j < nums.size() / 2; ++j) {
            swap(nums[j], nums[nums.size() - j - 1]);
        }

        return nums;
    }
};

void P52(){
    Solution s;
    vector<int> v({1,2,3,4,5,6,7,8,9,10,11,11,11,23,4,5,6,7,100,99,98,97,96,95,94,93,92,91,5});
//    vector<int> v({7,6,4,1});


    v = s.nextPermutation(v);
    print(v);
    v = s.nextPermutation(v);
    print(v);
    v = s.nextPermutation(v);
    print(v);
    v = s.nextPermutation(v);
    print(v);
    v = s.nextPermutation(v);
    print(v);


//    print(v);
//    next_permutation(v.begin(), v.end());
//    print(v);
//    next_permutation(v.begin(), v.end());
//    print(v);
//    next_permutation(v.begin(), v.end());
//    print(v);
//    next_permutation(v.begin(), v.end());
//    print(v);
//    next_permutation(v.begin(), v.end());
//    print(v);
//    next_permutation(v.begin(), v.end());
//    print(v);

}