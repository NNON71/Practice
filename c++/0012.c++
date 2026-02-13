#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    cout<<'.';
    for(int i=0;i<s.length();i++){
        if(i%3==2) cout<<".*..";
        else cout<<".#..";
    }
    cout<<endl;
    cout<<'.';
    for(int i=0;i<s.length();i++){
        if(i%3==2) cout<<"*.*.";
        else cout<<"#.#.";
    }
    cout<<endl;
    cout<<'#';
    for(int i=0;i<s.length();i++){
        if(i%3==2 or (i%3==1 && i!=s.length()-1)) cout<<"."<<s[i]<<".*";
        else cout<<"."<<s[i]<<".#";
    }
    cout<<endl;
    cout<<'.';
    for(int i=0;i<s.length();i++){
        if(i%3==2) cout<<"*.*.";
        else cout<<"#.#.";
    }
    cout<<endl;
    cout<<'.';
    for(int i=0;i<s.length();i++){
        if(i%3==2) cout<<".*..";
        else cout<<".#..";
    }
    cout<<endl;

    return 0;
}