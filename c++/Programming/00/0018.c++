#include<bits/stdc++.h>
using namespace std;
int n, k;
bool removed[1001] = {false};
int cnt = 0;

int main(){
    cin >> n >> k;
    for(int i = 2; i <= n; i++){
        if(!removed[i]){
            for(int j = i; j <= n; j += i){
                if(!removed[j]){
                    removed[j] = true;
                    cnt++;
                    if(cnt == k){
                        cout << j << endl;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}