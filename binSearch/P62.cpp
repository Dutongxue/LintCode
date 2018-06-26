//
// Created by enheng on 18-6-26.
//

#include "P62.h"

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param nums: a rotated sorted array
     * @return: the minimum number in the array
     */
    int search(vector<int> &A, int target) {
        // write your code here
        int f = 0, mid = 0, b = A.size() - 1;

        while(f <= b){
            mid = f + (b - f) / 2;
            if(A[mid] == target){
                return mid;
            }else if(A[mid] > target){
                if(A[mid] < A[b])
                    b = mid - 1;
                else
                    if(target >= A[f]) b = mid - 1;
                    else f = mid;
            }else{
                if(A[mid] < A[b])
                    if(target > A[b]) b = mid;
                    else f = mid + 1;
                else
                    f = mid + 1;
            }
        }

        return -1;
    }
};

void P62(){
    Solution s;
    vector<int> v({0,1,2,3,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1});

    cout << s.search(v, 6);
}