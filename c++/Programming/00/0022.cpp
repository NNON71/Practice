#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int string_len = n % 2 == 0 ? n - 1 : n;
    vector<string> arr(n);
    int mid = (string_len - 1) / 2;
    for(int i = 0; i <= mid; i++){
        for(int j = 0; j < string_len; j++){
            if(j == mid - i || j == mid + i){
                arr[i] += '*';
            } else {
                arr[i] += '-';
            }
        }
    }

    for(int i = mid + 1; i < n; i++){
        arr[i] = arr[n - 1 - i];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << '\n';
    }
}


/*
4

-*-
*-*
*-*
-*-

5
--*--
-*-*-
*---*
-*-*-
--*--
*/