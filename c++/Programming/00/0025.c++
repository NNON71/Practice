#include<iostream>
using namespace std;

int main(){
    string a, ops, b;
    cin >> a >> ops >> b;
    if(a.length() > b.length()) swap(a, b);
    if(ops == "*"){
        cout << "1";
        for(int i = 0; i < a.length() + b.length() - 2; i++){
            cout << "0";
        }
    } else {
        if(a.length() == b.length()){
            cout << "2";
            for(int i = 0; i < a.length() - 1; i++){
                cout << "0";
            }
        } else {
            cout << "1";
            for(int i = 0; i < b.length() - a.length() - 1; i++){
                cout << "0";
            }
            for(int i = 0; i < a.length(); i++){
                cout << a[i];
            }
        }
    }
}