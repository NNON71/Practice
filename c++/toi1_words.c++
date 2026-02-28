#include<bits/stdc++.h>
using namespace std;

int main(){
    int r, n;
    cin >> r >> n; 
    vector<string> words(n);
    for(int i = 0; i < n; i++){
        cin >> words[i];
    }
    
    for(int i = 1; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < r; j++){
            if(words[i][j] != words[i - 1][j]){
                cnt++;
                if(cnt > 2){
                    cout << words[i - 1] << "\n";
                    return 0;
                }
            }
        }
    }
    cout << words[n - 1] << "\n";
    return 0;
}