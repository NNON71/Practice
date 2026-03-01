#include<bits/stdc++.h>
using namespace std;

int main(){
    int maxSum = 0;
    int maxIdx = 0;

    for(int i = 1; i <= 5; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            int x;
            cin >> x;
            sum += x;
        }
        if(sum > maxSum){
            maxSum = sum;
            maxIdx = i;
        }
    }
    cout << maxIdx << " " << maxSum;
    return 0;
}
