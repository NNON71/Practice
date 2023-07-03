#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    string input;cin>>input;
    for(char i:input){
        if(i==')'&&st.size()&&st.top()=='(') {st.pop();}
        else st.push(i);
    }
    cout<<st.size();
    return 0;
}

//(()()))()) 2