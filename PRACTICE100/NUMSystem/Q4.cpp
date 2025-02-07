#include<iostream>
using namespace std;
int main(){
    int d;
    cin>>d;
    int tp=1;
    int oct=0;
    while(d>0){
        int dd=d%8;
        oct=(dd*tp)+oct;
        tp*=10;
        d/=8;
    }
    cout<<oct<<endl;
    return 0;
}