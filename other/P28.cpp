//
// Created by enheng on 18-6-10.
//

#include "P28.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * @param matrix: matrix, a list of lists of integers
     * @param target: An integer
     * @return: a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        // write your code here
        int f = 0, m, b;

        b = matrix.size() - 1;
        if(b == -1) return false;
        if(target < matrix[0][0] || target > matrix[b][matrix[b].size() - 1])
            return false;
        if(target == matrix[b][0]) return true;
        else if(target > matrix[b][0]) return binary_search(matrix[b].begin(), matrix[b].end(), target);
        while(f != b){
            m = (b + f) / 2;
            if(target > matrix[m][0]){
                f = m + 1;
            }else if(target == matrix[m][0]){
                return true;
            }else{
                b = m - 1;
            }
        }

        if(target < matrix[b][0])
            return binary_search(matrix[b - 1].begin(), matrix[b - 1].end(), target);
        else
            return binary_search(matrix[b].begin(), matrix[b].end(), target);
    }
};

void P28(){

}