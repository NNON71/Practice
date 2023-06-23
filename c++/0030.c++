#include<iostream>
using namespace std;

int main(){
    string n;
    int a=0,b=0;
    cin>>n;
    for(int i=0;i<n.length();i++){
        if(i%2==0) a+=n[i]-'0';
        else b+=n[i]-'0';
    }
    cout<<(a+b)%3<<' '<<(n.length()%2!=0  ? (b-a)%11:(a-b)%11);
    return 0;
}