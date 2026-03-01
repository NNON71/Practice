#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;cin>>n;
    long long int a,lcm=1;
    for(int i=0;i<n;i++){
        cin>>a;
        lcm = lcm * a / __gcd(lcm,a);
    }
    cout<<lcm;
    return 0;
}

/*
5
3
9
12
24
18

*/