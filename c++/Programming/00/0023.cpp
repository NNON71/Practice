#include<bits/stdc++.h>
using namespace std;

int main(){
    int D, M;
    cin >> D >> M;
    string week[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ans = 0;
    for(int i = 1; i < M; i++){
        ans += month[i];
    }
    ans += D - 1;
    cout << week[ans % 7];
}