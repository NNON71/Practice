#include<iostream>
using namespace std;

int main(){
    int n,max_val,min_val;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    max_val = a[0],min_val = a[0];
    for(int i=1;i<n;i++){
        if(max_val<a[i]) {max_val = a[i];}
        if(min_val>a[i]) {min_val = a[i];}
    }
    cout<<min_val<<'\n'<<max_val;
    return 0;
}
