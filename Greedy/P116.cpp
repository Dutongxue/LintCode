//
// Created by enheng on 18-7-2.
//

#include "P116.h"

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param A: A list of integers
     * @return: A boolean
     */
    bool canJump(vector<int> &A) {
        // write your code here
        int m = 0;
        for (int i = 0; i < A.size(); ++i) {
            if(i <= m)
                m = max(m, i + A[i]);
            else
                return false;
        }

        return true;
    }
};


void P116(){
    Solution s;
    vector<int> v({3,2,1,0,4});

    cout << s.canJump(v);
}