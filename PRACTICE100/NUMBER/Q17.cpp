#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        return 0;
    }else if(n==1){
        cout<<0<<" "<<1;
        return 0;
    }
    int a =0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    return 0;
}