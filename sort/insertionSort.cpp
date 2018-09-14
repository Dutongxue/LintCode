//
// Created by 91241 on 2018-09-12.
//

#include "insertionSort.h"
#include <utility>

using namespace std;

//void binarySearch(int *data, int beginIndex, int endIndex, int targe){
//    int midIndex = beginIndex + (endIndex - beginIndex) / 2;
//
//    while(beginIndex <= endIndex){
//        if(data[midIndex] > )
//    }
//}

void insertionSort(int *data, int len){
    for(int i = 1; i < len; i++){
        for(int j = i; j > 0; j--){
            if(data[j] < data[j - 1]){
                swap(data[j], data[j - 1]);
            }else{
                break;
            }
        }
    }
}