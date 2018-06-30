//
// Created by enheng on 18-6-30.
//

#include "P180.h"

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <bitset>

using namespace std;

class Solution {
public:
    /**
     * 二进制表示
     * @param n: Given a decimal number that is passed in as a string
     * @return: A string
     */
    string binaryRepresentation2(string &&n) {
        // write your code here
        string tmps(n.begin() + n.find_first_of('.') + 1, n.end());
        long long tmp, f = stoll(tmps);
        int j = 0, l = tmps.length(), lastl;
        ostringstream str;

        while(j < 32) {
            f = f * 2;
            lastl = l;
            l = to_string(f).length();
            if(lastl == l) str << '0';
            else{
                str << '1';
                f -= pow(10, l);
            }
            j++;
        }
//        if(d != 0.0) return "ERROR";
//
//        cout << i << "." << str.str();

        return "";
    }

    string binaryRepresentation(string &&n) {
        // write your code here
        auto d = stold(n);
        int i = stoi(n);
        int j = 0;
        ostringstream str;

        d -= i;
        while(j < 32) {
            d = d * 2;
            if(d >= 1.0){
                str << '1';
                d -= 1.0;
            }else str << '0';

            if(d == 0.0) {
                break;
            }
            j++;
        }
        if(d != 0.0) return "ERROR";

        auto decimal = str.str();
        str.str("");
        while(i){
            str << i % 2;
            i /= 2;
        }

        string integer = str.str();
        return  (integer.empty() ? "0" : string(integer.rbegin(), integer.rend())) + (decimal == "0" ? "" : "." + decimal);
    }
};

void P180(){
    Solution s;

    cout << s.binaryRepresentation("1.128121212121");
}