#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    float r0 = 0,r1 = 1;
    while(r0!=r1) {r0 = r1; r1 = (r1+n/r1)/2;}
    cout<<r0;
    return 0;
}