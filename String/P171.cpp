//
// Created by enheng on 18-4-18.
//

#include "P171.h"

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    /**
     * @param strs: A list of strings
     * @return: A list of strings
     */
    vector<string> anagrams(vector<string> &strs) {
        // write your code here
        vector<string> res;
        map<string, int> m;

        if (strs.size() <= 1) return res;
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            if (m.find(s) != m.end()) {
                if (m[s] >= 0) {
                    res.push_back(strs[m[s]]);
                    m[s] = -1;
                }
                res.push_back(strs[i]);
            } else {
                m.insert({s, i});
            }
        }

        return res;
    }
};

void P171() {
    Solution s;
    vector<string> strs{"lint", "intl", "inlt", "code"};

    for (auto x:s.anagrams(strs)) {
        cout << x << ' ';
    }
}

