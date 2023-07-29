#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char x;
    vector<vector<char>> board(n, vector<char>(m));
    vector<vector<bool>> check(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x;
            if (x == 'O')
                check[i][j] = true;
            board[i][j] = x;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(check[i][j]){
                
            }
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << check[i][j];
        }
        cout << endl;
    }
}

/*
8 5
.....
.....
.OO..
.....
.O...
...O.
.....
.....
1 1 3 2 0
*/