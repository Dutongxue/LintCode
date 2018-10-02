//
// Created by 91241 on 2018-09-14.
//

#include <iostream>
#include "mergeSort.h"

using namespace std;

int tmp[100];

void merge(int *source, int len){
    int llen = len / 2, rlen = len - len / 2;
    int lIndex = 0, rIndex = llen + 0, tIndex = 0;
    while(lIndex < llen && rIndex < llen + rlen){
        if(source[lIndex] < source[rIndex]){
            tmp[tIndex++] = source[lIndex++];
        }else{
            tmp[tIndex++] = source[rIndex++];
        }
    }
    while(lIndex != llen){
        tmp[tIndex++] = source[lIndex++];
    }
    while(rIndex != llen + rlen){
        tmp[tIndex++] = source[rIndex++];
    }

    for(int i = 0; i < len; ++i){
        source[i] = tmp[i];
    }
}

void mergeSort(int data[], int len){
    if(len < 2){
        return;
    }
    mergeSort(data, len / 2);
    mergeSort(data + len / 2, len - len / 2);
    merge(data, len);
}
