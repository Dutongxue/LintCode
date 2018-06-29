//
// Created by enheng on 18-6-29.
//

#include "P183.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <initializer_list>

using namespace std;

class Solution {
public:
    /**
     * @param L: Given n pieces of wood with length L[i]
     * @param k: An integer
     * @return: The maximum length of the small pieces
     */
    int woodCut(vector<int> &L, int k) {
        // write your code here
        if(L.size() == 0) return 0;
        int max = *max_element(L.begin(), L.end());
        int f = 0, mid = 0, b = max, count, ans;
        while(f <= b){
            mid = f + (b - f) / 2;
            if(mid == 0) return 0;
            count = 0;
            for(auto &x : L){
                count += x / mid;
            }
            if(count >= k){
                f = mid + 1;
                ans = mid;
            }else{
                b = mid - 1;
            }
        }

        return ans;
    }
};

void P183(){
    Solution s;
    vector<int> v({232,124,456});
//    vector<int> v({});

    cout << s.woodCut(v, 7);
}
