#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long int n,gcd=0,ans=0;cin>>n;
    long long int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        gcd = __gcd(x[i],gcd);
    }
    for(int i=0;i<n;i++){
        ans += x[i]/gcd;
    }
    cout<<ans;
    return 0;
}