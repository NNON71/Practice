#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int total_cake = 0;
    int mul[5] = {8, 6, 4, 2, 1};
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            int count;
            cin >> count;
            total_cake += count * mul[j];
        }
    }
    cout << (total_cake + 7) / 8 << endl;
}

/*
1 3/4 1/2 1/4 1/8
8 6 4 2 1

8 + 4 + 1
6 + 2
6 

27/8 = 4

4 + 1 + 4 + 6 = 15
*/