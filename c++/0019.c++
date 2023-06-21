#include<iostream>
using namespace std;

int best = 1000000000;
int s[10],b[10];
int n;

int diff(int a,int b){
    return abs(a-b);
}

int recus(int i,int sourness,int bitter){
    if(i==n){
        if(diff(sourness,bitter) < best && bitter>0){
            best = diff(sourness,bitter);
        }
        
    }
        else{
            recus(i+1,sourness,bitter);
            recus(i+1,sourness*s[i],bitter+b[i]);
        }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i]>>b[i];
    }
    recus(0,1,0);
    cout<<best;
    return 0;
}