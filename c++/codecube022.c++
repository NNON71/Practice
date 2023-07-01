#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k=0;cin>>n;
    bool a[1001][1001] = {false,false};
    for(int i=0;i<n;i++)
    {
        int x,y;cin>>x>>y;
        if(!a[x][y]){
            a[x][y] = true;
            k++;
        }
    }
    cout<<k;
    return 0;
}