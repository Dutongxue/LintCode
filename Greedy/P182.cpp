//
// Created by enheng on 18-7-2.
//

#include "P182.h"
#include "../main.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

class Solution {
public:
    /**
     * 删除数字
     * @param A: A positive integer which has N digits, A is a string
     * @param k: Remove k digits
     * @return: A string
     */
    string DeleteDigits(string &&A, int k) {
        // write your code here
        int i, j;

        for (i = 0; i < k; ++i) {
//            if(A[0] == '0') A.erase(0, 1);
            int l = A.size();
            for (j = 1; j < l; ++j) {
                if(A[j] < A[j - 1]){
                    A.erase(j - 1, 1);
                    break;
                }
                if(j == l - 1) A.erase(l - 1, 1);
            }
        }
        i = 0;
        while (i < A.length() - 1 && A[i] == '0') {
            i++;
        }
        return A.substr(i, A.length() - i);
    }
};


void P182(){
    Solution s;

    cout << s.DeleteDigits("90249", 1) << endl;
    cout << s.DeleteDigits("90249", 2) << endl;
    cout << s.DeleteDigits("12345678", 3) << endl;
}