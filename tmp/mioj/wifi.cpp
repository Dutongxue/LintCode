#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getnum(){
    int ans = 0, tmp = 0;
	char ch;

    while(cin.get(ch)) {
		if(ch != ' ' && ch != ';' && ch != '\n' && ch != EOF){
			tmp = tmp * 10 + (ch - '0');
		}else{
			return tmp;
		}
    }
}

int main()
{
    int a, b, k, n = 0, ans = 0, tmp = 0;
    char ch;
    int arr[2005] = {0};
    
    a = getnum();
    b = getnum();
    while(cin.get(ch)) {
		if(ch != ' ' && ch != ';' && ch != '\n' && ch != EOF){
			tmp = tmp * 10 + (ch - '0');
		}else if(ch == EOF || ch == '\n'){
            arr[n++] = tmp;
            tmp = 0;
            break;
        }else{
			arr[n++] = tmp;
            tmp = 0;
		}
    }

    k = a / b;
    
    sort(arr, arr + n);

    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << ' ';
    // }

    for(int i = 1; i <n; i++){
        tmp = arr[i] - arr[i - 1];
        if(tmp <= 2 * k){
            ans += a + tmp * b;
        }else{
            ans += a;
        }
    }

    return 0;
}