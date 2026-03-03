#include<bits/stdc++.h>
using namespace std;

float area(vector<int> &a, vector<int> &b, vector<int> &c){
    return (abs(a[0] * (b[1] - c[1]) + b[0] * (c[1] - a[1]) + c[0] * (a[1] - b[1]))) / 2.0;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
    }

    float maxArea = 0;
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                maxArea = max(maxArea, area(a[i], a[j], a[k]));
            }
        }
    }
    cout << fixed << setprecision(3) << maxArea;
}

/*
5
1 2
2 1
0 0
3 4
-1 -2
*/