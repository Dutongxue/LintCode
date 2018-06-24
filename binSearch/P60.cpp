//
// Created by enheng on 18-6-24.
//

#include "P60.h"

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param A: an integer sorted array
     * @param target: an integer to be inserted
     * @return: An integer
     */
    int searchInsert(vector<int> &A, int target) {
        // write your code here
        int f = 0, mid, b = A.size() - 1;

        while(f <= b){
            mid = f + (b - f) / 2;
            if(A[mid] > target){
                b = mid - 1;
            }else if(A[mid] == target){
                return mid;
            }else{
                f = mid + 1;
            }
        }

        return f;
    }
};

void P60(){
    Solution s;
    vector<int> v({});

    cout << s.searchInsert(v, 5);
}