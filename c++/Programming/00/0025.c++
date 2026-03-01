#include<iostream>
using namespace std;

int main(){
    int A=0,B=0;
    string a,o,b;
    cin>>a>>o>>b;
    for(auto i:a){
        A = A*10+(i-'0');
    }
    for(auto i:b){
        B = B*10+(i-'0');
    }  
    if(o[0] == '+') cout<<A+B;
    else cout<<A*10;
    return 0;
}