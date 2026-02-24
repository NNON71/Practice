#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> seq(n);
    for(int i = 0; i < n; i++){
        cin >> seq[i];
    }
    int max_sum = seq[0];
    int current_sum = seq[0];
    int start = 0, end = 0, temp_start = 0;
    
    for(int i = 1; i < n; i++){
        if(current_sum + seq[i] < seq[i]){
            current_sum = seq[i];
            temp_start = i;
        } else {
            current_sum += seq[i];
        }
        
        if(current_sum > max_sum){
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }
    }
    
    if(max_sum <= 0){
        cout << "Empty sequence" << endl;
        return 0;
    }

    for(int i = start; i <= end; i++){
        cout << seq[i] << ' ';
    }
    cout << endl;
    cout << max_sum << endl;
}


/*
#include<bits/stdc++.h>
using namespace std;

    int n;
    cin >> n;
    vector<int> seq(n);
    for(int i =0; i < n; i++){
        cin >> seq[i];
    }

    vector<int> dp1(n), dp2(n);
    dp1[0] = seq[0];
    for(int i = 1; i < n; i++){
        dp1[i] = dp1[i - 1] + seq[i];
    }
    dp2[n - 1] = seq[n - 1];
    for(int i = n - 2; i >= 0; i--){
        dp2[i] = dp2[i + 1] + seq[i];
    } 
    
    int _max1 = INT_MIN;
    int _max1_idx = -1;
    for(int i = 0; i < n; i++){
        if(dp1[i] > _max1){
            _max1 = dp1[i];
            _max1_idx = i;
        }
    }
    int _max2 = INT_MIN;
    int _max2_idx = -1;
    for(int i = _max1_idx - 1; i >= 0; i--){
        if(dp2[i] > _max2){
            _max2 = dp2[i];
            _max2_idx = i;
        }
    }

    if(_max2_idx == -1){
        cout << "Empty sequence" << endl;
        return 0;
    }
    int _sum = 0;
    for(int i = _max2_idx; i <= _max1_idx; i++){
        _sum += seq[i];
        cout << seq[i] << ' ';
    }
    cout << endl;
    cout << _sum << endl;

/*
8
4 -6 3 -2 6 -4 -6 6
[4, -2, 1, -1, 5, 1, -5, 1]
[1, -3, 3, 0, 2, -4, 0, 6]

[5, -5, 4, -1, 7, -3, -5, 7]

8
4 -6 3 -2 6 -4 -6 6
[4, -2, 1, -1, 5, 1, -5, 1]
[1, -3, 3, 0, 2, -4, 0, 6]

[5, -5, 4, -1, 7, -3, -5, 7]
*/