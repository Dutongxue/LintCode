#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int atoi(char *p){
    if(p == NULL) return 0;
    int ans = 0, i = 0;
    
    for(; p[i] != '\0'; i++){
        ans = ans * 10 + p[i] - '0';
    }

    return ans;
}

// 任意两个交换
// int main()
// {
//     char line[1000001];
//     char *tmp;
//     int data[1001], n;
    
//     // 循环读入多行数据
//     while (cin.getline(line, 1000000)) {
//         // 处理并输出结果，务必输出换行符
//         int i = 0, ans = 0;
//         tmp = strtok(line, ",");
//         data[i++] = atoi(tmp);
//         while(tmp != NULL){
//             tmp = strtok(NULL, ",");
//             data[i++] = atoi(tmp);
//         }
//         n = i - 1;
//         for(i = 0; i < n - 1; i++){
//             int minIndex = min_element(data + i + 1, data + n) - data;
//             if(data[i] > data[minIndex]){
//                 swap(data[i], data[minIndex]);
//                 ans++;
//             }
//         }

//         cout << ans << endl;
//     }
    
//     return 0;
// }


// 只能交换相邻的，逆序数
int main()
{
    char line[1000001];
    char *tmp;
    int data[1001], n;
    
    // 循环读入多行数据
    while (cin.getline(line, 1000000)) {
        // 处理并输出结果，务必输出换行符
        int i = 0, ans = 0;
        tmp = strtok(line, ",");
        data[i++] = atoi(tmp);
        while(tmp != NULL){
            tmp = strtok(NULL, ",");
            data[i++] = atoi(tmp);
        }
        n = i - 1;

        for(i = 1; i < n; i++){
            int count = 0;
            for(int j = 0; j < i; j++){
                if(data[j] > data[i]){
                    count++;
                }
            }
            ans += count;
        }

        cout << ans << endl;
    }
    
    return 0;
}