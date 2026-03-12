#include<bits/stdc++.h>
using namespace std;
int dd[8][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

bool search(string s, int r, int c, int d, vector<string> &w){
    int ss = s.size();
    for(int i = 0; i < ss; i++){
        int nr = r + dd[d][0] * i;
        int nc = c + dd[d][1] * i;
        if(nr < 0 || nr >= w.size() || nc < 0 || nc >= w[0].size() || tolower(w[nr][nc]) != tolower(s[i])) return false;
    }
    return true;
}

int main(){
    int m, n, q;
    cin >> m >> n;
    vector<string> v(m);
    for(int i = 0; i < m; i++) cin >> v[i];
    cin >> q;
    vector<string> query(q);
    for(int i = 0; i < q; i++) cin >> query[i];

    for(int idx = 0; idx < q; idx++){
        string s = query[idx];
        int r, c;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < 8; k++){
                    if(search(s, i, j, k, v)){
                        cout << i << " " << j << endl;
                        goto next;
                    }
                }
            }
        }
        next:;
    }
}

/*
8 11
ascDEFGhigg
hTqkComPutk
FayUcompuTm
FcsierMqsrc
bkoArUePeyv
Klcbqwekumk
sreTNIophtb
yUiqlxcnBje
4
Compute
Queue
stack
Pointer

*/