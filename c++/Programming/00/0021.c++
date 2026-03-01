#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'&&str[i+1]=='p'){
            str.erase(i,2);
        }
    }
    cout<<str;
}