#include<bits/stdc++.h>
using namespace std;

int main(){
    int L, N;
    cin >> L >> N;
    vector<string> words(N);
    cin >> words[0];
    for(int i = 1; i < N; i++){
        cin >> words[i];
    }

    for(int i = 1; i < N; i++){
        int cnt = 0;
        for(int j = 0; j < L; j++){
            if(words[i][j] != words[i - 1][j]){
                cnt++;
            }
            if(cnt > 2){
                cout << words[i - 1];
                return 0;
            }
        }
    }
    cout << words[N - 1];
    return 0;
}

/*
4
12
HEAD
HEAP
LEAP
TEAR
REAR
BAER
BAET
BEEP
JEEP
JOIP
JEIP
AEIO
*/