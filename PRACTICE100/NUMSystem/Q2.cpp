#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int tmp=1;
    int deci=0;
    while(n>0){
        int d=n%10;
        deci+=d*tmp;
        tmp*=2;
        n/=10;
    }
    int oct=0;
    int t=1;
    while(deci>0){
        int dd=deci%8;
        oct=dd*t+oct;
        t*=10;
        deci/=8;
    }

    cout<<oct<<endl;
    return 0;

}