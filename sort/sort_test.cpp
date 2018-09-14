#include <iostream>
#include "selectionSort.h"
#include "insertionSort.h"
#include "shellSort.h"

using namespace std;

void sort_test(){
    int arr[15] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};

//    selectionSort(arr, 15);
//    insertionSort(arr, 15);
    shellSort(arr, 15);

    for(auto x : arr){
        cout << x << ' ';
    }
}