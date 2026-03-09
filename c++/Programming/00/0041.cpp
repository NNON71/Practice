#include<bits/stdc++.h>
using namespace std;

int main(){
    double n; cin >> n;
    cout << fixed << setprecision(6);
    if(n == 1){
        cout << 2.0;
    }
    else if(n == 3){
        cout << 2.0 + sqrt(3.0);
    }
    else if(((int)n) % 2 == 0){
        cout << n;
    }
    else{
        cout << (n - 3.0) + 2.0 * sqrt(3.0);
    }
}
