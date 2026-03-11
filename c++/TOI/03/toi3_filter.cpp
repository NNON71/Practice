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

    int p1 = 0, p2 = 0;
    for(int i = 0; i < W; i++){
        if(window[i] == 1) p1++;
        else if(window[i] == 0) p2++;
    }
    cout << H *p2 << " " << H * p1;
}


/*
7 3 3
1 2
5 3
2 2

6 12
*/