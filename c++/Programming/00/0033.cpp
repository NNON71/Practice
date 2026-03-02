#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> arr(10001, 0);
    while(n--){
        int x;
        cin >> x;
        arr[x]++;
        if(arr[x] > cnt){
            cnt = arr[x];
        }
    }

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == cnt) cout << i << ' ';
    }
    
    return 0;
}