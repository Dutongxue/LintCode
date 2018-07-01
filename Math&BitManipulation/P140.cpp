//
// Created by enheng on 18-6-30.
//

#include "P140.h"

#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * 快速幂: https://blog.csdn.net/vanturman/article/details/79428853
     * @param a: A 32bit integer
     * @param b: A 32bit integer
     * @param n: A 32bit integer
     * @return: An integer
     */
    int fastPower2(int a, int b, int n) {
        // write your code here
        if(n == 0) return b == 1 ? 0 : 1;
        unsigned long long rule[100] = {1, 0}, pro = 1, tmp = 1;
        for (int i = 1; i <= n; ++i) {
//            pro *= a;
            tmp = (tmp * a) % b;
            if(tmp == 0)  return 0;
            if(find(rule + 1, rule + i, tmp) != rule + i){
                rule[0] = rule[i - 1];
                return rule[n % (i - 1)];
            }else{
                rule[i] = tmp;
            }
        }

        return rule[n];
    }

    int fastPower(int a, int b, int n) {
        // write your code here
        // a^19 = a^16 * a^2 * a^1；
        // (a * b) % c = (a % c * b % c) % b
        if(n == 0) return 1 % b;
        int ans = 1;
        long long tmp = a;
        while(n > 0){
            if(n & 0x01) ans = (ans * tmp) % b; //
            tmp = (tmp * tmp) % b;              // 求 a^i % b
            n >>= 1;
        }

        return ans;
    }
};

void P140(){
    Solution s;

    cout << s.fastPower(109, 10000007, 1000001);
}