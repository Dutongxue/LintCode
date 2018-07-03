//
// Created by enheng on 18-7-1.
//

#include "P187.h"

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * 加油站
     * @param gas: An array of integers
     * @param cost: An array of integers
     * @return: An integer
     */
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        // write your code here
        int ans = -1, cnt = 0;
        for (int i = 0; i < gas.size(); ++i) {
            if(cnt <= 0){
                if(cnt + gas[i] - cost[i] > cnt){
                    if(ans == -1) ans = i;
                } else{
                    ans = -1;
                }
            }
            cnt += gas[i] - cost[i];
//            cout << cnt << endl;
        }

        return ans;
    }
};

void P187(){
    Solution s;
    vector<int> gas({1,2,3,3}), cost({2,1,5,1});

    cout << s.canCompleteCircuit(gas, cost);
}