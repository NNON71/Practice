#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<bool> pos(n + 1, false);
    for(int i = 0; i <= n; i++){
        if (i == 0 || pos[i]){
            if(i + 6 <= n) pos[i + 6] = true;
            if(i + 9 <= n) pos[i + 9] = true;
            if(i + 20 <= n) pos[i + 20] = true; 
        }
    }
    bool found = false;
    for(int i = 1; i <= n; i++){
        if(pos[i]){
            cout << i << '\n';
            found = true;
        }
    }
    if(!found) cout << "no" << '\n';

    return 0;
}