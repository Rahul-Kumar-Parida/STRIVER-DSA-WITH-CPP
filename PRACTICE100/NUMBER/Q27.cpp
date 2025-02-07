#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==0){
                sum+=i;
            }else{
                sum+=i;
                sum+=n/i;
            }
        }
    }
    sum=sum-n;
    if(sum>n){
        cout<<"abd"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}