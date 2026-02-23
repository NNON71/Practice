#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> dices(n, {1, 2, 3, 5, 4, 6});
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == 'F'){
                int temp = dices[i][0];
                dices[i][0] = dices[i][3];
                dices[i][3] = dices[i][5];
                dices[i][5] = dices[i][1];
                dices[i][1] = temp;

            }
            else if(s[j] == 'B'){
                int temp = dices[i][0];
                dices[i][0] = dices[i][1];
                dices[i][1] = dices[i][5];
                dices[i][5] = dices[i][3];
                dices[i][3] = temp;
            }
            else if(s[j] == 'L'){
                int temp = dices[i][0];
                dices[i][0] = dices[i][4];
                dices[i][4] = dices[i][5];
                dices[i][5] = dices[i][2];
                dices[i][2] = temp;
            }
            else if(s[j] == 'R'){
                int temp = dices[i][0];
                dices[i][0] = dices[i][2];
                dices[i][2] = dices[i][5];
                dices[i][5] = dices[i][4];
                dices[i][4] = temp;
            }
            else if(s[j] == 'C'){
                int temp = dices[i][1];
                dices[i][1] = dices[i][4];
                dices[i][4] = dices[i][3];
                dices[i][3] = dices[i][2];
                dices[i][2] = temp;
            }
            else if(s[j] == 'D'){
                int temp = dices[i][1];
                dices[i][1] = dices[i][2];
                dices[i][2] = dices[i][3];
                dices[i][3] = dices[i][4];
                dices[i][4] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << dices[i][1] << ' ';
    }
    return 0;
}


/*
3
D
FFBB
BBFFR

OUTPUT
3 2 2
*/