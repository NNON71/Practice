#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int I = 0, V = 0, X = 0, L = 0, C = 0;
    for(int i = 1; i <= n; i++){
        int num = i;
        while(num >= 100){
            C++;
            num -= 100;
        }

        while(num >= 90){
            X++;
            C++;
            num -= 90;
        }

        while(num >= 50){
            L++;
            num -= 50;
        }

        while(num >= 40){
            X++;
            L++;
            num -= 40;
        }

        while(num >= 10){
            X++;
            num -= 10;
        }

        while(num >= 9){
            I++;
            X++;
            num -= 9;
        }

        while(num >= 5){
            V++;
            num -= 5;
        }

        while(num >= 4){
            I++;
            V++;
            num -= 4;
        }
        
        while(num >= 1){
            I++;
            num -= 1;
        }
    }
    printf("%d %d %d %d %d", I, V, X, L, C);
}