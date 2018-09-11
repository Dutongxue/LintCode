#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, r, k, arr[100005] = {0}, index;

    cin >> n >> m >> r;
    getchar();
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    // cout << n << m << r << endl;
    // for(int i = 1; i <= n; i++){
    //     cout << arr[i];
    // }
    getchar();
    for(int i = 1; i <= m; i++){
        cin >> index;
        // cout << index << ' ' << max(index - r, 1) << ' ' << min(index + r, n) << ' ';
        cout << *(max_element(arr + max(index - r, 1), arr + min(index + r, n) + 1)) << ' ';
    }

    return 0;
}