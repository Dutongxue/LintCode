//
// Created by enheng on 18-4-17.
//

#include "P13.h"

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    /*
     * @param source: source string to be scanned.
     * @param target: target string containing the sequence of characters to match
     * @return: a index to the first occurrence of target in source, or -1  if target is not part of source.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        if(source == NULL || target == NULL) return -1;

        string s(source);
        string t(target);

        if(s == "" && t == "") return 0;
        auto it = search(s.begin(), s.end(), t.begin(), t.end());
        if(it == s.end()) return -1;
        return (int)(it-s.begin());
    }
};

void P13(){
    Solution s;

    cout << s.strStr("", "");
}
