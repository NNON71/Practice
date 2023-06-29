#include<iostream>
#include<queue>
using namespace std;

int main(){
    long long int n,k;cin>>n>>k;
    queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    int index = 1;
    while(!q.empty()){
        if(index%k==0){
            cout<<q.front()<<' ';
            q.pop();
        }
        else{
            q.push(q.front());
            q.pop();
        }
        index++;
    }
    return 0;
}