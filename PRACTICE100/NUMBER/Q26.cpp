#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int org=n;
    while(n>0){
        int d=n%10;
        sum+=d;
        n/=10;
    }
    if(org%sum==0){
        cout<<"harsa"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}