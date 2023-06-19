#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    char text[4];
    int d[3];
    for(int i=0;i<3;i++){
        cin>>d[i];
    }
    cin>>text;
    sort(d,d+3);
    for(int i=0;i<3;i++){
        cout<<d[text[i]-'A']<<' ';
    }
    return 0;
}