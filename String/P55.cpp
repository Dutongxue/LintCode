//
// Created by enheng on 18-4-17.
//

#include "P55.h"

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>

using namespace std;

class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: if string A contains all of the characters in B return true else return false
     */
    bool compareStrings(string &&A, string &&B) {
        // write your code here
        map<char, int> mA;
        map<char, int> mB;

        for(auto x:A){
            mA[x]++;
        }

        for(auto x:B){
            mB[x]++;
        }

        for(auto x:mB){
            if(mA[x.first] < mB[x.first]) return false;
        }

        return true;
    }
};

void P55(){
    Solution s;

    cout << boolalpha << s.compareStrings(string("ABSDFABAB"), string("ADB"));
}