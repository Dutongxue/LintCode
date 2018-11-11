#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char line[1000001];
    char *tmp;
    int data[10001], n, count;
    
    // 循环读入多行数据
    while (cin.getline(line, 1000000)) {
        // 处理并输出结果，务必输出换行符
        int i = 0, count = 0, ans = 0;
        tmp = strtok(line, " ");
        while(tmp != NULL){
            data[i++] = atoi(tmp);
            tmp = strtok(NULL, " ");
        }
        n = i;

        sort(data, data + n);
        for(i = 0; i < n; ){
            if(data[i] > count){
                int c = data[i] - count;
                ans += c / 2 + (c % 2 == 0 ? 0 : 1);
                count += c + (c % 2 == 0 ? 0 : 1);
            }
            // count += 2;
            // printf("%d %d %d\n", data[i], count, ans);
            while(data[i] <= count){
                while(data[++i] <= count);
                count += 2;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}