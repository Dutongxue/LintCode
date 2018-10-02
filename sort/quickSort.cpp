//
// Created by 91241 on 2018-09-24.
//

#include "quickSort.h"
#include <utility>

using namespace std;

//void quickSort(int *data, int len){
//    int i = 1, j =len - 1;
//
//    if(len < 2) return;
//
//    while(i != j){
//        if(data[j] < data[0]){
//            while(data[i] <= data[0] && i < j){  // 从1开始找第一个大于pivot的
//                i++;
//            }
//            if(i < j){
//                swap(data[i++], data[j--]);
//            }
//        }else{
//            j--;
//        }
//    }
//    if(data[0] > data[i]){
//        swap(data[0], data[i]);
//    }else{
//        swap(data[0], data[i - 1]);
//    }
//    quickSort(data, i - 1);
//    quickSort(data + i, len - i);
//}

void quickSort(int *data, int len){
    int i = 1, j = 1;

    if(len < 2) return;

    for(; i < len; i++){
        if(data[i] < data[0]){
            if(i != j) swap(data[i], data[j]);
            j++;
        }
    }
    swap(data[0], data[j - 1]);
    quickSort(data, j - 1);
    quickSort(data + j, len - j);
}