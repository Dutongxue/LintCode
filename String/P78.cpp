//
// Created by enheng on 18-6-12.
//

#include "P78.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * LCP 最长公共前缀
     * @param strs: A list of strings
     * @return: The longest common prefix
     */
    string longestCommonPrefix(vector<string> &strs) {
        // write your code here
        int i;
        if(strs.empty()) return "";
        for (i = 0; i < strs[0].length(); ++i) {
            for (auto it = strs.begin() + 1; it != strs.end(); ++it) {
                if ((*it)[i] != strs[0][i]) goto loop;
            }
        }
        loop:
        return strs[0].substr(0, i);
    }
};

void P78() {
    Solution s;
    vector<string> v({""});

    cout << s.longestCommonPrefix(v);
}