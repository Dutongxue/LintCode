//
// Created by enheng on 18-7-1.
//

#include "P46.h"

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: find a  majority number
     */
    int majorityNumber(vector<int> &nums) {
        // write your code here
        int cnt = 0, cnum;
        for(auto x : nums){
            if(cnt == 0){
                cnum = x;
            }
            if(cnum == x){
                cnt++;
            }else{
                cnt--;
            }
        }

        return cnum;
    }
};


void P46(){
    Solution s;
    vector<int> v({0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3});

    cout << s.majorityNumber(v);
}