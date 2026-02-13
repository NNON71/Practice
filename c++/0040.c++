#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if((s[s.length() - 1] - '0') % 2 != 0 || s == "2"){
            cout << "T" << endl;
        }
        else{
            cout << "F" << endl;
        }

    }
}