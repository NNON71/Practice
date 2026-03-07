#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N; 
    set<string> words;  
    for(int i = 0; i < N; i++){
        string word;
        cin >> word;
        words.insert(word);  
    }

    for(string w : words){
        cout << w << endl;
    }
}