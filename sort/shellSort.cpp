//
// Created by 91241 on 2018-09-13.
//

#include "shellSort.h"
#include <utility>

using namespace std;

void shellSort(int *data, int len){
    int gap = len / 2;

    for(; gap > 0; gap /= 2){
        for(int i = gap; i < len; i++){
            for(int j = i; j >= gap; j -= gap){
                if(data[j] < data[j - gap]){
                    swap(data[j], data[j - gap]);
                }else{
                    break;
                }
            }
        }
    }

}