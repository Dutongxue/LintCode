//
// Created by enheng on 18-6-29.
//

#include "P61.h"
#include "../main.h"

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param A: an integer sorted array
     * @param target: an integer to be inserted
     * @return: a list of length 2, [index1, index2]
     */
    vector<int> searchRange(vector<int> &A, int target) {
        // write your code here
        int f = 0, mid = 0, b = A.size() - 1;
        vector<int> ans(2, -1);

        while(f <= b){
            mid = f + (b - f) / 2;
            if(A[mid] > target){
                b = mid - 1;
            }else if(A[mid] == target){
                int tmpf = f, tmpmid;
                int tmpb = mid;
                while(tmpf < tmpb){
                    tmpmid = tmpf + (tmpb - tmpf) / 2;
                    if(A[tmpmid] == target){
                        tmpb = tmpmid;
                    }else{
                        tmpf = tmpmid + 1;
                    }
                }
                ans[0] = tmpb;
                tmpf = mid;
                tmpb = b;
                while(tmpf != tmpb){
                    tmpmid = tmpf + (tmpb - tmpf) / 2;
                    if(A[tmpmid] == target){
                        tmpf = tmpmid + 1;
                    }else{
                        tmpb = tmpmid;
                    }
                }
                ans[1] = A[tmpf] != target ? tmpf - 1 : tmpf;
                return ans;
            }else{
                f = mid + 1;
            }
        }

        return ans;
    }
};

void P61(){
    Solution s;
    vector<int> v({1,3,5,6,8,9});

    print(s.searchRange(v, 7));
}