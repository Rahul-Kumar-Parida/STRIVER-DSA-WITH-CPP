#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int r;
    cin>>r;
    double area=3.14*r*r;
    cout<<fixed<<setprecision(1)<<area<<endl;
    return 0;
}