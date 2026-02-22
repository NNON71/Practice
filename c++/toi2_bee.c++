#include<bits/stdc++.h>
using namespace std;

int main(){
    int dp[50][50];
    dp[0][0] = 1;
    dp[0][1] = 0;
    for(int i = 1; i < 50; i++){
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1] + 1;
        dp[i][1] = dp[i - 1][0];
    }

    int n;
    while(cin >> n and n != -1){
        cout << dp[n][0] << ' ' << dp[n][0] + dp[n][1] + 1 << endl;
    }
}