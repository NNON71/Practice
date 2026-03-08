#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> res;

void permute(vector<int> &arr, int l, int r){
    if(l == r){
        res.push_back(arr);
        return;
    }
    for(int i = l; i <= r; i++){
        swap(arr[l], arr[i]);
        permute(arr, l + 1, r);
        swap(arr[l], arr[i]);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> arr(n), ban(m);
    for(int i = 0; i < m; i++){
        cin >> ban[i];
    }
    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }  
    permute(arr, 0, n - 1);
    sort(res.begin(), res.end());
    for(vector<int> &v : res){
        bool valid = true;
        for(int x : ban){
            if(v[0] == x) valid = false;
        }
        if(valid){
            for(int x : v){
                cout << x << ' ';
            }
            cout << endl;
        }
    }
}