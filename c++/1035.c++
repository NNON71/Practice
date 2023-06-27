#include<iostream>
using namespace std;

bool ispalindrome(int n){
    int temp=n,rev=0;
    while(temp != 0)
    {
        rev = (rev*10)+temp%10;
        temp /= 10;
    }
    return (n==rev);
}

bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;cin>>n;
    while(1){
        if(ispalindrome(n)&&isprime(n)){
            break;
        }
        n++;
    }
    cout<<n;
    return 0;
}