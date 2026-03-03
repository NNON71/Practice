#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int cnt = 0;
    while(A > 1){
        A >>= 1;
        cnt++;
    }
    while(B > 1){
        B >>= 1;
        cnt++;
    }
    while(C > 1){
        C >>= 1;
        cnt++;
    }
    cout << cnt;
}


// int main(){
//     int A, B, C;
//     cin >> A >> B >> C;
//     int cnt = 0;
//     while (A * B * C != 1){
//         int maxN = max({A, B, C});
//         if (maxN == A){
//             A = A % 2 == 0 ? A / 2 : (A - 1) / 2;
//         }
//         else if (maxN == B){
//             B = B % 2 == 0 ? B / 2 : (B - 1) / 2;
//         }
//         else{
//             C = C % 2 == 0 ? C / 2 : (C - 1) / 2;
//         }
//         cnt++;
//     }
//     cout << cnt;
// }