#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<string> num = {
        " _ | ||_|",
        "     |  |",
        " _  _||_ ",
        " _  _| _|",
        "   |_|  |",
        " _ |_  _|",
        " _ |_ |_|",
        " _   |  |",
        " _ |_||_|",
        " _ |_| _|"
    };

    long long num1 = 0, num2 = 0;
    
    vector<string> lines1(3);
    cin.ignore(); 
    for(int i = 0; i < 3; i++){
        getline(cin, lines1[i]);
    }
    
    for(int i = 0; i < a; i++){
        string s;
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                s += lines1[j][i * 4 + k];
            }
        }
        int temp = -1;
        for(int j = 0; j < 10; j++){
            if(s == num[j]){
                temp = j;
                break;
            }
        }
        num1 = num1 * 10 + temp;
    }

    vector<string> lines2(3);
    for(int i = 0; i < 3; i++){
        getline(cin, lines2[i]);
    }
    
    for(int i = 0; i < b; i++){
        string s;
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                s += lines2[j][i * 4 + k];  
            }
        }
        int temp = -1;
        for(int j = 0; j < 10; j++){
            if(s == num[j]){
                temp = j;
                break;
            }
        }
        num2 = num2 * 10 + temp;
    }

    cout << num1 + num2 << endl;
}


/*
4 3
         _   _ 
  | |_|  _|  _|
  |   | |_   _|
 _       _ 
  |   | |_ 
  |   | |_|


OUTPUT
2139
*/