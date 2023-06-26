#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x,y,n;
    cin>>x>>y;
    if(y%x) n=y/x+1;
    else n=y/x; 
    if(x>y) cout<<2;
    else cout<<n;
    return 0;
}   