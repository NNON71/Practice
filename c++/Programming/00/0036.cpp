#include<bits/stdc++.h>
using namespace std;

long long fac(int i){
    if(i<=1) return 1;
    return i*fac(i-1);
}

int main(){
    int n;
    cin >> n;

    int m = n / 2;

    long long ans = 1;
    for(int i = n; i > m; i--){
        ans *= i;
    }
    if(n % 2 == 0){
        ans /= fac(m);
    }
    else{
        ans = (ans / fac(m + 1)) * 2;
    }
    cout << ans;
}