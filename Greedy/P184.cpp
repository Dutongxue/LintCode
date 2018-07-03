//
// Created by enheng on 18-7-2.
//

#include "P184.h"
#include "../main.h"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

class Solution {
public:
    /**
     * @param nums: A list of non negative integers
     * @return: A string
     */

    static bool cmp(const string &a, const string &b){
        return a + b > b + a;
    }

    string largestNumber(vector<int> &nums) {
        // write your code here
        if(nums.size() == 0) return "0";
        vector<string> s(nums.size());
        string ans;

        for(int i = 0; i < nums.size(); ++i){
            s[i] = to_string(nums[i]);
        }
        sort(s.begin(), s.end(), cmp);
//        print(s);
        for(auto &x:s){
            ans += x;
        }

        return ans[0] == '0' ? "0" : ans;
    }
};


void P184(){
    Solution s;
    vector<int> v({41,23,87,55,50,53,18,9,39,63,35,33,54,25,26,49,74,61,32,81,97,99,38,96,22,95,35,57,80,80,16,22,17,13,89,11,75,98,57,81,69,8,10,85,13,49,66,94,80,25,13,85,55,12,87,50,28,96,80,43,10,24,88,52,16,92,61,28,26,78,28,28,16,1,56,31,47,85,27,30,85,2,30,51,84,50,3,14,97,9,91,90,63,90,92,89,76,76,67,55});
//    vector<int> v({1,20,23,4,8});
    cout << s.largestNumber(v);
}