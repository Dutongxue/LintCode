//
// Created by enheng on 18-6-24.
//

#include "P141.h"

#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        // write your code here
        int f = 0, mid = 0, b = 46341;
        while (f != b - 1) {
            mid = f + (b - f) / 2;
            int tmp = mid * mid;
            if(tmp > x){
                b = mid;
            }else if(tmp == x){
                return mid;
            }else{
                f = mid;
            }
        }

        return f;
    }
};

void P141(){
    Solution s;

    cout << s.sqrt(122);
}