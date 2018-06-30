//
// Created by enheng on 18-6-30.
//

#include "P179.h"

#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

class Solution {
public:
    /**
     * @param n: An integer
     * @param m: An integer
     * @param i: A bit position
     * @param j: A bit position
     * @return: An integer
     */
    int updateBits(int n, int m, int i, int j) {
        // write your code here

//        bitset<32> tmpn(n);
//        bitset<32> tmpm(m);
//        cout << tmpn << endl;
//        cout << tmpm << endl;

        unsigned int tmp = ~0;

        tmp <<= 31 - j + i;
        tmp >>= 31 - j;
//        bitset<32> tmpb(tmp);
//        cout << tmpb << endl;
        n &= ~tmp;
        m <<= i;
        m &= tmp;
//        bitset<32> tmpn1(n);
//        bitset<32> tmpm1(m);
//        cout << tmpn1 << endl;
//        cout << tmpm1 << endl;
        n += m;

        return n;
    }
};

void P179(){
    Solution s;

    cout << s.updateBits(1024, 21, 2, 6);
}