/*
 * 选择排序
 */

void selectionSort(int *arr, int len){
    int min;
    for(int i = 0; i < len - 1; i++){
        min = i;
        for(int j = i + 1; j < len; j++){
            if(arr[min] > arr[j]) min = j;
        }
        if(min != i){
            int tmp = arr[min];
            arr[min] = arr[i];
            arr[i] = tmp;
        }
    }
}

