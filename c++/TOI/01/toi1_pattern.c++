#include<bits/stdc++.h>
using namespace std;
static bool matrix[50001][100] = {false};

int main(){
    int n, max_p = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int p, q, r;
        cin >> p >> q >> r;
        if(p > max_p) max_p = p;
        for(int j = 0; j < r; j++){
            matrix[p - 1][q + j - 1] = true;
        }
    }

    for(int i = 0; i < max_p; i++){
        for(int j = 0; j < 70; j++){
            if(matrix[i][j]){
                cout << 'x';
            } else {
                cout << 'o';
            }
        }
        cout << '\n';
    }
    return 0;
}