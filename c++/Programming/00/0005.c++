#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b;
    c =sqrt(pow(a,2)+pow(b,2));
    cout<<fixed<<setprecision(6);
    cout<<c;
    return 0;
}