#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> heights(n);
    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }

    int result = 0;
    for(int i = 0; i < n; i++){
        int count = 1;
        int last = heights[i];
        for(int j = i + 1; j < n; j++){
            if(heights[j] > last){
                count++;
                last = heights[j];
            }
        }
        result = max(result, count);
    }
    cout << result << endl;
}