//
// Created by 91241 on 2018-06-16.
//

#include "P56.h"
#include "../main.h"

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    /**
     * @param numbers: An array of Integer
     * @param target: target = numbers[index1] + numbers[index2]
     * @return: [index1, index2] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &numbers, int target) {
        // write your code here
        unordered_map<int, int> m;
        vector<int> ans(2, -1);

        if(numbers.size() == 0) return ans;
        m[numbers[0]] = 1;
        for(int i = 1; i < numbers.size(); i++){
            if(m[target - numbers[i]] != 0){
                ans[0] = m[target - numbers[i]] - 1;
                ans[1] = i;
                break;
            }else m[numbers[i]] = i + 1;
        }

        return ans;
    }
};

void P56(){
    Solution s;
    vector<int> v({1, 0, -1});

    print(s.twoSum(v, 0));
}