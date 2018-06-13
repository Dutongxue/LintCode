//
// Created by enheng on 18-6-13.
//

#include "P172.h"

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /*
     * @param A: A list of integers
     * @param elem: An integer
     * @return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        // write your code here
        int ans = A.size();
        auto it = A.begin();
        auto itend = A.end() - 1;
        if(ans == 0) return 0;
        while( it <= itend){
            if(*it == elem){
                ans--;
                *it = *itend;
                itend--;
            }else{
                it++;
            }
        }

        return ans;
    }
};

void P172(){
    Solution s;
    vector<int> v;

    cout << s.removeElement(v, 4) << endl;
    for(auto x : v){
        cout << x << " ";
    }
}