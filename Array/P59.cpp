//
// Created by enheng on 18-6-20.
//

#include "P59.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    /**
     * @param numbers: Give an array numbers of n integer
     * @param target: An integer
     * @return: return the sum of the three integers, the sum closest target.
     */
    int threeSumClosest(vector<int> &numbers, int target) {
        // write your code here
        int tmp, ans, min, start, end;
        int len = numbers.size();

        if(len <= 3) return accumulate(numbers.begin(), numbers.end(), 0);
        else{
            sort(numbers.begin(), numbers.end());
            ans = tmp = numbers[0] + numbers[1] + numbers[2];
            min = abs(tmp - target);
        }
        for (int i = 0; i < len - 2; ++i) {
            start = i + 1;
            end = len - 1;
            while(start < end){
                tmp = numbers[i] + numbers[start] + numbers[end];
                if(abs(tmp - target) <= min){
                    start++;
                    min = abs(tmp - target);
                    ans = tmp;
                }else{
                    end--;
                }
            }
        }
        return ans;
    }
};

void P59(){
    Solution s;
    vector<int> v({0,0,-1012,0,0,0,-3002,0,0,0,-10,-19,0,0,90,0,92,0,1,1,1,9,9,9,10,11,1001,2001,-404,201,203,201,999,345,1,1,1,1,1,1,1,-2,1,1,1,1,1,-1,1,1,-2,1,1,1,1,3,1,1,1,1,1,-1200,1,1,1,1,1,2,1202,2,2,-4,2,2,2,2,4,5,6,1,1,-11,1,1,1,1,1,1,1,1,101,1,1,1,1,1,-1,1,-6});

    cout << s.threeSumClosest(v, 192);
}
