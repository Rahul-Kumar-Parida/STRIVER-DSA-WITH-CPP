#include<iostream>
using namespace std;
int main(){
    int d;
    cin>>d;
    string bin="";

    while(d>0){
        int dig=d%2;
        bin=to_string(dig)+bin;
        d/=2;
    }
    cout<<bin<<endl;
    return 0;
}