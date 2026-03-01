#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long int a,b;
    cin>>a>>b;
    cout<<a*b/__gcd(a,b);
    return 0;
}