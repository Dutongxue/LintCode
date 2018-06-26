//
// Created by enheng on 18-6-25.
//

#include "P75.h"

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /*
     * 寻找峰值
     * @param A: An integers array.
     * @return: return any of peek positions.
     */
    int findPeak(vector<int>& A) {
        // write your code here
        int l = A.size(), f = 0, mid = 0, b = l - 1;

        while(f <= b){
            mid = f + (b - f) / 2;
            if(A[mid] > A[mid - 1] && A[mid] < A[mid + 1]){
                f = mid + 1;
            }else if(A[mid] > A[mid - 1] && A[mid] > A[mid + 1]){
                return mid;
            }else{
                b = mid - 1;
            }
        }

        return mid;
    }
};

void P75(){
    Solution s;
    vector<int> v({1, 8, 2, 3, 4, 5, 6, 5});

    cout << s.findPeak(v);
}