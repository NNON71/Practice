#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str;
    bool upper = false;
    bool lower = false;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(isupper(str[i])) upper = true;
        if(islower(str[i])) lower = true;
    }
    if(upper&&lower) cout<<"Mix";
    else if(upper) cout<<"All Capital Letter";
    else cout<<"All Small Letter";
    return 0;
}