#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int a, b, c, d;
    for(int i = 1; i <= A; i++){
        if(A%i != 0) continue;
        a = i;
        c = A / i;
        
        for(int j = -abs(C); j <= abs(C); j++){
            if(j == 0 || C % j != 0) continue;
            b = j;
            d = C / j; 
            
            if(a * d + b * c == B){
                cout << a << ' ' << b << ' ' << c << ' ' << d;
                return 0;
            }
        }
    }
    cout << "No Solution" << endl;
    return 0;
}