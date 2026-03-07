#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M, L, K, C;
    cin >> N >> M >> L >> K >> C;
    int cost = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int x;
            cin >> x;
            cost += x;
        }
    }
    cost += L * K * C;
    cout << (cost + C - 1) / C;
}   