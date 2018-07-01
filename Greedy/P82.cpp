//
// Created by enheng on 18-7-1.
//

#include "P82.h"

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param A: An integer array
     * @return: An integer
     */
    int singleNumber(vector<int> &A) {
        // write your code here
        int ans = A[0];
        for (int i = 1; i < A.size(); ++i) {
            ans ^= A[i];
        }

        return ans;
    }
};


void P82(){
    Solution s;
    vector<int> v({1,1,2,2,3,4,4});

    cout << s.singleNumber(v);
}