#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    if(sum >= 80){
        cout << "A" << endl;
    }
    else if(sum >= 75 && sum < 80){
        cout << "B+" << endl;
    }
    else if(sum >= 70 && sum < 75){
        cout << "B" << endl;
    }
    else if(sum >= 65 && sum < 70){
        cout << "C+" << endl;
    }
    else if(sum >= 60 && sum < 65){
        cout << "C" << endl;
    }
    else if(sum >= 55 && sum < 60){
        cout << "D+" << endl;
    }
    else if(sum >= 50 && sum < 55){
        cout << "D" << endl;
    }
    else{
        cout << "F" << endl;
    }
}