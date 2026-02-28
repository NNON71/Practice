#include<bits/stdc++.h>
using namespace std;

int main(){
    int W, H, N;
    cin >> W >> H >> N;
    vector<int> window(W, 0);
    for(int i = 0; i < N; i++){
        int x, a;
        cin >> x >> a;
        for(int j = 0; j < a && x + j < W; j++){
            window[x + j]++;
        }
    }
    
}