#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    int d[3] = {1,0,0};
    char text[51];
    cin>>text;
    for(int i=0;i<strlen(text);i++){
        if(text[i]=='A') swap(d[0],d[1]);
        else if(text[i]=='B') swap(d[1],d[2]);
        else swap(d[0],d[2]);
    }
    for(int i=0;i<3;i++){
        if(d[i]==1) cout<<i+1;
    }
    return 0;
}