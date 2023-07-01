#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,input;
    cin>>n;
    vector<int> a;
    for(int i=1;i<=n;i++){
        cin>>input;
        a.emplace_back(input);
    }
    cout<<*max_element(a.begin(),a.end())<<endl;
    cout<<*min_element(a.begin(),a.end());
    return 0;
}
