//
// Created by enheng on 18-6-18.
//

#include "P189.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * @param A: An array of integers
     * @return: An integer
     */
    int firstMissingPositive(vector<int> &A) {
        // write your code here
        int i = 0, n = A.size(), ans = 0;

        if(n == 0) return ans + 1;
        sort(A.begin(), A.end());
        while(A[i++] <= 0);
        for(i--; i < n; i++){
            if(A[i] == ans) continue;
            if(A[i] == ans + 1){
                ans++;
            }else{
                break;
            }
        }

        return ans + 1;
    }
};

void P189(){
    Solution s;
    vector<int> v({2,2,4,0,1,3,3,3,4,3});

    cout << s.firstMissingPositive(v);
}