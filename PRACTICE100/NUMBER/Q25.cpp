#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(a>0&&b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    int lcm=(a*b)/gcd(a,b);
    cout<<lcm<<endl;
    return 0;
}