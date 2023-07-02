#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int sum = n*(n*n+1)/2;
    for(int i=0;i<n;i++){
        int sumrow=0,sumcol=0;
        for(int j=0;j<n;j++){
            sumrow += a[i][j];
            sumcol += a[j][i];
        }
        if(sumcol != sum || sumcol != sum){
            cout<<"No";
            return 0;
        }
    }
    int sumdi1=0,sumdi2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sumdi1 += a[i][i];
            sumdi2 += a[i][n-i-1];
        }
    }
    if(sumdi1 != sum || sumdi2 != sum){
        cout<<"No";
        return 0;
    }
    cout<<"Yes";
    return 0;
}

/*
4
16 2 3 13
5 11 10 8
9 7 6 12
4 14 15 1

*/