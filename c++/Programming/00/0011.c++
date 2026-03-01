#include<iostream>
using namespace std;

int main(){
    int num[42] = {},x,r=0;
    for(int i=0;i<10;i++){
        cin>>x;
        num[x%42] = 1;
    }
    for(int i=0;i<42;i++){
        if(num[i]==1){
            r++;
        }
    }
    cout<<r;
    return 0;
}