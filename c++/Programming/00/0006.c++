#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
    int r;
    double d1,d2;
    cin>>r;
    d1 = M_PI*pow(r,2);
    d2 = 2*pow(r,2);
    cout<<fixed<<setprecision(6);
    cout<<d1<<'\n';
    cout<<d2;
    return 0;
}