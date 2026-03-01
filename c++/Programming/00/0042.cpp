#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i=0;i<n;i++) {
        cin >> num[i];
    }
    for (int i=0;i<n;i++) {
        cout << fixed << setprecision(0) << pow((long double)2,num[i]) << "\n";
    }
    return 0;
}