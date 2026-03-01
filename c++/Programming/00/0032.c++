#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int cnt = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 0) cnt++;
    }
    sort(a.begin(), a.end());
    swap(a[0], a[cnt]);

    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    return 0;
}