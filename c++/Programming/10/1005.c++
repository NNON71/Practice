#include<bits/stdc++.h>
using namespace std;

int a[3500];

int main(){
    int n,maxSum=0,maxCur=0;cin>>n;
    vector<int> u,v;    
    for(int i=0;i<n;i++){
        cin>>a[i];  
        maxCur = max(a[i],a[i]+maxCur);
        v.emplace_back(a[i]);
        if(maxCur>maxSum){
            maxSum = maxCur;
            u=v;
        }
        if(maxCur<0){
            v.clear();
            maxCur = 0;
        }
    }
    if(u.empty()) cout<<"Empty sequence";
    else {for(auto i:u) {cout<<i<<' ';} cout<<endl<<maxSum;}
    return 0;
}

/*
8
4 -6 3 -2 6 -4 -6 6

3 -2 6
7
*/