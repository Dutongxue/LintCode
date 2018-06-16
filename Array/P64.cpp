//
// Created by enheng on 18-6-16.
//

#include "P64.h"

#include <iostream>

using namespace std;

class Solution {
public:
    /*
     * @param A: sorted integer array A which has m elements, but size of A is m+n
     * @param m: An integer
     * @param B: sorted integer array B which has n elements
     * @param n: An integer
     * @return: nothing
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        int *tmp = new int[m + n];
        int i = 0, j = 0, k = 0;
        while(i < m && j < n){
            if(A[i] < B[j]){
                tmp[k++] = A[i++];
            }else if(A[i] == B[j]){
                tmp[k++] = A[i++];
                tmp[k++] = B[j++];
            }else{
                tmp[k++] = B[j++];
            }
        }
        copy(A + i, A + m, tmp + k);
        copy(B + j, B + n, tmp + k);
        copy(tmp, tmp + m + n, A);
        delete tmp;
    }
};